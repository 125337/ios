// openWeChatSports @ 01df1930

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::openWeChatSports(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID local_40;
  undefined4 local_34;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "BraceletRankViewController";
  _objc_getClass();
  local_30 = (char *)0x0;
  local_28 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initForLatestRank_026c5a88);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_28;
      _objc_alloc();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  if (local_30 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_NSsubJ_Yd__Sb);
    local_34 = 1;
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_PushViewController_animated_;
    local_40 = IVar4;
    _NSSelectorFromString();
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar5);
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_pushViewController_animated__0269d590,local_30,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar5,local_30,1);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

