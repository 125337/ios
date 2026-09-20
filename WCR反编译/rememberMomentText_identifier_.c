// rememberMomentText:identifier: @ 009c5984

/* Function Stack Size: 0x20 bytes */

void WCRefineAIContext::rememberMomentText_identifier_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  uint local_54;
  ID local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_28;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_30;
  local_38 = lVar2;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  bVar1 = false;
  local_54 = 1;
  if (lVar2 != 0) {
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_54 = 1;
    if (lVar2 != 0) {
      local_48 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentIDs_026aae60);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_54 = (uint)IVar4;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_54 & 1) == 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentIDs_026aae60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentTexts_026aae68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    while( true ) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentTexts_026aae68);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if (IVar5 < 0x51) break;
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentTexts_026aae68);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentIDs_026aae60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_momentTexts_026aae68);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLatestMomentsText__026aae70);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

