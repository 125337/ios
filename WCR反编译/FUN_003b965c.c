// FUN_003b965c @ 003b965c

void FUN_003b965c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elST_N);
  }
  else {
    puVar2 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_performStandaloneActionWithID_co_0269ea58,_WCRefineProfileCardActionIDNameplate
               ,lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Lrn_Sb);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

