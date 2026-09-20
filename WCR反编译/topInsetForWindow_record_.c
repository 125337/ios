// topInsetForWindow:record: @ 00ff8994

/* Function Stack Size: 0x20 bytes */

double WCRefineKeywordAlertDanmakuPresenter::topInsetForWindow_record_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  double local_80;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_safeAreaInsets_026ca828);
  if (local_38 <= 0.0) {
    local_38 = 20.0;
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isMessageDanmakuRecord__026ad6c8,local_30);
  if ((IVar1 & 1) == 0) {
    local_80 = 6.0;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = (double)(long)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_38 + local_80;
}

