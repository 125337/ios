// _WCRefinePreapplyWalletBalanceNumbersInView @ 00f13790

void _WCRefinePreapplyWalletBalanceNumbersInView(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined4 local_1c;
  long local_18;
  
  plVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar1,param_1);
  if ((((local_18 == 0) || ((DAT_028e2b9f & 1) == 0)) ||
      (((DAT_028e2bb0 & 1) == 0 && ((DAT_028e2bb1 & 1) == 0)))) ||
     (_WCRefineCustomAmountFeatureAllowed(), ((ulong)plVar1 & 1) == 0)) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    FUN_00f13868(local_18,puVar2);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

