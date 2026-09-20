// FUN_01a1531c @ 01a1531c

void FUN_01a1531c(long param_1)

{
  long lVar1;
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_savePendingRuleWithReplyText_rep_026bb7f8,&cf___,local_40,0,&cf___,0
                );
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bmo_N_);
    }
    local_34 = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

