// FUN_0155b90c @ 0155b90c

void FUN_0155b90c(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  if (DAT_028e39a8 == *(long *)(param_1 + 0x28)) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_20 = param_1;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    FUN_0155a69c(puVar1,*(undefined8 *)(param_1 + 0x20));
    _objc_storeStrong(&DAT_028e38b8);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

