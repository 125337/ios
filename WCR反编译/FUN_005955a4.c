// FUN_005955a4 @ 005955a4

byte FUN_005955a4(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (((local_20 == 0) || (local_28 == 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeIntervalSinceNow_0269cd28),
     param_1 < 30.0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_WCRefineHasDraftContent_026a4cd8);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineHasDraftContent_026a4cd8),
       (uVar1 & 1) != 0)) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,
                 PTR_s_WCRefineGetCurrentDraftModel_026a4d20);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                   &cf_S_MR_OHr_gfN_ec_eS);
        local_11 = 0;
        local_38 = 1;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineGetCurrentDraftModel_026a4d20);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar1;
        if (uVar1 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX__eNR1Y_);
          local_11 = 0;
        }
        else {
          FUN_005843a0(uVar1,local_28);
          local_11 = (byte)uVar1 & 1;
        }
        local_38 = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQkXQgSWQ_);
      local_11 = 0;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

