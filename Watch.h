#pragma once

using namespace System;

ref class Watch
{
private:
	int interval;
	int powerReserve;
	long milliseconds;
	long alarmMillis;
	System::Windows::Forms::Timer^ timer;
public:
	delegate void WatchEventHandler(Watch^);
	delegate void TimeChangedHandler(Watch^, long);
	event TimeChangedHandler^ TimeChanged;
	event WatchEventHandler^ LowPower;
	// возвращает количество миллисекунд, прошедших с начала дня
	property long Milliseconds {
		long get() {
			return milliseconds;
		}
		void set(long value) {
			if (value > 86400000) {
				Milliseconds = value - 86400000;
			}
			else {
				milliseconds = value;
			}
		}
	}

	property System::Windows::Forms::Timer^ ClockTimer {
		System::Windows::Forms::Timer^ get() {
			return timer;
		}
	}

	static property int MaxPower {
		int get() {
			return 2000000;
		}
	}

	property int PowerReserve {
		int get() {
			return powerReserve;
		}
		void set(int value) {
			powerReserve = value <= MaxPower ?
				(value > 0 ? value : 0) : MaxPower;
		}
	}

	property int Interval {
		int get() {
			return interval;
		}
		void set(int value) {
			interval = value;
		}
	}

	Watch() {
		this->PowerReserve = Watch::MaxPower;
		this->Interval = 1000;
		this->timer = gcnew System::Windows::Forms::Timer();
		this->timer->Interval = 1000;
		this->timer->Tick += gcnew System::EventHandler(this, &Watch::run);
		this->timer->Enabled = true;
		setTime(DateTime::Now.Hour, DateTime::Now.Minute, DateTime::Now.Second);
	}

	void run(System::Object^, System::EventArgs^) {
		Milliseconds +=
			Interval * (double)PowerReserve / (double)Watch::MaxPower;
		powerReserve--;
		TimeChanged(this, milliseconds);

		if (PowerReserve < MaxPower / 5 * 4) {
			LowPower(this);
		}
	}

	void setTime(int hours, int minutes, int seconds) {
		Milliseconds =
			(hours * 3600 + minutes * 60 + seconds) * 1000;
	}

	virtual void windSpring() {
		this->PowerReserve = MaxPower;
	}

	~Watch() {
		timer->~Timer();
		timer = nullptr;
	}
};
