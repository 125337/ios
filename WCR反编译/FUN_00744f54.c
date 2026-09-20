// FUN_00744f54 @ 00744f54

void FUN_00744f54(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong local_90;
  char *local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  char *local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00745330();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCRefineSmallSignalSettingsViewController";
  local_20 = uVar1;
  _objc_getClass();
  local_38 = pcVar2;
  if ((local_20 == 0) || (pcVar2 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OSX__ub_gR_e_TQ);
    local_3c = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_90 = uVar1;
    if (uVar1 == 0) {
      local_90 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_90;
    }
    local_51 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_90;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_38);
    if ((uVar1 & 1) == 0) {
      pcVar2 = local_38;
      _objc_alloc_init();
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      pcVar3 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_pushViewController_animated__0269d590,local_60,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar3,local_60,1);
      }
      _objc_storeStrong(&local_60,0);
      local_3c = 0;
    }
    else {
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

