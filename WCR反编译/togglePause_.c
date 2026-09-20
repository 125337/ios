// togglePause: @ 009061fc

/* Function Stack Size: 0x18 bytes */

void LogFloatingBall::togglePause_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isPaused_026a14d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsPaused__026a1538,(uint)IVar1 ^ 1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isPaused_026a14d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelected__0269fd48,IVar1);
  puVar2 = PTR_WCNavigationMonitor_026cea60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isPaused_026a14d8);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_monitorMode_026a9f18);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setPaused_forNSLog__026aa048,IVar1 & 0xffffffff,IVar3 == 1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

