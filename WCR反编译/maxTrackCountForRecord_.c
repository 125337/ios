// maxTrackCountForRecord: @ 00ff4040

/* Function Stack Size: 0x18 bytes */

long_long WCRefineKeywordAlertDanmakuPresenter::maxTrackCountForRecord_
                    (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isMessageDanmakuRecord__026ad6c8,local_28);
  local_38 = local_30;
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_keywordAlertDanmakuMaxRows_026ad6d8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageDanmakuMaxRows_026ad6d0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_38;
}

