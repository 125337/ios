// FUN_00449dc8 @ 00449dc8

void FUN_00449dc8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) != 0) && (uVar2 = param_1, FUN_0045867c(), (uVar2 & 1) != 0)) {
    _objc_setAssociatedObject(param_1,DAT_026e0368,0,3);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRLE_reloadLocalChips_026a3bb0);
    FUN_004502e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_00450dc0();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

