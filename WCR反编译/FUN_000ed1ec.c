// FUN_000ed1ec @ 000ed1ec

byte FUN_000ed1ec(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_BaseMsgContentViewController;
  local_28 = param_2;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_000ed54c;
  }
  uVar2 = local_20;
  FUN_000f3ad4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if (local_28 == 0) goto LAB_000ed520;
  if (local_28 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_performStandaloneActionWithID_co_0269ea58,_WCRefineProfileCardActionIDThemeMode
               ,uVar2);
    local_11 = 1;
  }
  else if (local_28 == 2) {
    uVar2 = local_20;
    FUN_000ebecc(0);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_g_b_u1Y_);
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else if (local_28 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_performStandaloneActionWithID_co_0269ea58,
               _WCRefineProfileCardActionIDAggregateSearch,uVar2);
    local_11 = 1;
  }
  else if (local_28 == 4) {
    if (uVar2 == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                 PTR_s_presentProfileCardForContact__0269e298,uVar2);
      local_11 = 1;
    }
  }
  else if (local_28 == 5) {
LAB_000ed520:
    local_11 = 0;
  }
  else if (local_28 == 6) {
    FUN_000f3c0c(0,local_20);
    local_11 = 1;
  }
  else {
    if (local_28 != 7) goto LAB_000ed520;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSessionStatsViewController_026ce2c0,
               PTR_s_presentFromChatController__0269eaa0,local_20);
    local_11 = 1;
  }
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_000ed54c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

