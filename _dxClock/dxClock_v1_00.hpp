		Fps=0.;
		PreTime=GetNowCount();
		IniTime=PreTime;
		IniLocalTime=hm::time();
		Time=PreTime;
		Cnt=0;

		//�����҂�����(ms)
		WaitTimer(_DrawIntervalTime);

		//Time�֘A����
		Cnt++;
		Time=GetNowCount();
		if(Cnt%10==0){
			Fps=10000./((double)(Time-PreTime));
			PreTime=Time;
		}