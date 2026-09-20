// FUN_003c3ef4 @ 003c3ef4

void FUN_003c3ef4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x28) == DAT_028ca1e8) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    FUN_00373d3c();
    puVar1 = PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0;
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),puVar1,&cf_firstGroupedRetry);
      }
    }
  }
  return;
}

