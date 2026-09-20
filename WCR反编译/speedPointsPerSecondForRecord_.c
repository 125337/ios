// speedPointsPerSecondForRecord: @ 00ff61f0

/* Function Stack Size: 0x18 bytes */

double WCRefineKeywordAlertDanmakuPresenter::speedPointsPerSecondForRecord_
                 (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *local_50;
  undefined1 *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isMessageDanmakuRecord__026ad6c8,local_30);
  local_50 = local_38;
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keywordAlertDanmakuSpeed_026ad798);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageDanmakuSpeed_026ad790);
  }
  if (local_50 == (undefined1 *)0x0) {
    local_18 = 55.0;
  }
  else if ((local_50 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) ||
          (local_50 != (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
    local_18 = 75.0;
  }
  else {
    local_18 = 95.0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

