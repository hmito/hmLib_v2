		Fps=0.;
		PreTime=GetNowCount();
		IniTime=PreTime;
		IniLocalTime=hm::time();
		Time=PreTime;
		Cnt=0;

		//処理待ち時間(ms)
		WaitTimer(_DrawIntervalTime);

		//Time関連処理
		Cnt++;
		Time=GetNowCount();
		if(Cnt%10==0){
			Fps=10000./((double)(Time-PreTime));
			PreTime=Time;
		}