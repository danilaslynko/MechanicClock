#pragma once
#include "Watch.h"

ref class Stopwatch :
	public Watch
{
private:
	long firstRound;
	long secondRound;
	long thirdRound;
public:
	delegate void StopwatchResetHandler(Stopwatch^);
	event StopwatchResetHandler^ StopwatchReset;
	event TimeChangedHandler^ RoundMarked;

	property long FirstRound {
		long get() {
			return firstRound;
		}
	}
	property long SecondRound {
		long get() {
			return secondRound;
		}
	}
	property long ThirdRound {
		long get() {
			return thirdRound;
		}
	}
	property long NextRound {
		void set(long value) {
			if (firstRound != 0) {
				if (secondRound != 0) {
					if (thirdRound == 0) {
						thirdRound = value;
						RoundMarked(this, value);
					}
				}
				else {
					secondRound = value;
					RoundMarked(this, value);
				}
			}
			else {
				firstRound = value;
				RoundMarked(this, value);
			}
		}
	}

	Stopwatch() : Watch() {
		this->ClockTimer->Interval = 10;
		this->ClockTimer->Enabled = false;
		this->ClockTimer->Tick += gcnew System::EventHandler(this, &Stopwatch::run);
		this->Interval = 10;
		setTime(0, 0, 0);
	}

	void start() {
		ClockTimer->Enabled = true;
	}

	void stop() {
		ClockTimer->Enabled = false;
	}

	virtual void windSpring() override {
		__super::windSpring();
		thirdRound = 0;
		secondRound = 0;
		firstRound = 0;
		Milliseconds = 0;
		StopwatchReset(this);
	}

	void markRound() {
		NextRound = Milliseconds;
		if (thirdRound) {
			stop();
		}
	}
};
