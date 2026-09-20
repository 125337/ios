// WCRefine_onMiniProgramEntryTapped @ 004c4df8

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameMenuSearchItem::WCRefine_onMiniProgramEntryTapped(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = &cf_showTableHeaderTopViewByPullDown_;
  local_20 = param_2;
  local_18 = param_1;
  _NSSelectorFromString();
  IVar3 = local_18;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
  IVar1 = local_18;
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_OHr_gelSb);
  }
  else {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_004c4ef0;
    local_40 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar1;
    local_30 = local_28;
    _WCRefinePerformAllowedHomePullDownMiniProgram(&local_58);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

