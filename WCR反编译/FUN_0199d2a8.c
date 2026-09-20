// FUN_0199d2a8 @ 0199d2a8

void FUN_0199d2a8(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long local_28;
  
  bVar3 = false;
  bVar4 = true;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
    bVar4 = true;
    if ((uVar5 & 1) == 0) {
      local_28 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeOperationToken_026ba618);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      bVar4 = local_28 != *(long *)(param_1 + 0x28);
    }
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if (!bVar4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setActiveOperationToken__026ba5e0,0);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_setMigrationSource__026ba2e8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setupNavBar_026ba288);
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_reload_026af6c8);
    pcVar1 = &cf_y_b;
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      pcVar1 = &cf_y1Y_;
    }
    pcVar2 = &cf_eN9Y_yR0RvhvU_0;
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      pcVar2 = &cf__g_byhgvhvU_beNCgP0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,pcVar1,
               pcVar2,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}

