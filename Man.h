#pragma once
#include "Stopwatch.h"

ref class Man
{
public:
	Man(Watch^ watch, Stopwatch^ stopwatch) {
		watch->LowPower += gcnew Watch::WatchEventHandler(this, &Man::windWatchSpring);
		stopwatch->RoundMarked += gcnew Watch::TimeChangedHandler(this, &Man::writeRound);
	}

	void windWatchSpring(Watch^ watch) {
		watch->windSpring();
		watch->setTime(DateTime::Now.Hour, DateTime::Now.Minute, DateTime::Now.Second);
	}

	void writeRound(Watch^, long round) {
		int roundMinutes = round / 60000;
		int roundSeconds = (round - roundMinutes * 60000) / 1000;
		int roundMillis = (round % 1000);
		
		String^ fileDir = "C:/Rounds";
		System::IO::StreamWriter^ writer;
		if (!System::IO::Directory::Exists(fileDir)) {
			System::IO::Directory::CreateDirectory(fileDir);
		}

		writer = gcnew System::IO::StreamWriter(fileDir + "/rounds.txt", true);
		writer->Write(String::Format(
			L"Круг: {0}:{1}:{2}\r\n", 
			roundMinutes, 
			roundSeconds, 
			roundMillis));
		writer->Flush();
		writer->Close();
	}
};
