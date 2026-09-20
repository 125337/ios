// FUN_003b948c @ 003b948c

void FUN_003b948c(long param_1)

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
               PTR_s_performStandaloneActionWithID_co_0269ea58,
               _WCRefineProfileCardActionIDCustomAvatar,lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__IN4YP_u1Y_);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

