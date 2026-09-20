// FUN_019a9418 @ 019a9418

void FUN_019a9418(long param_1)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar4 = param_1 + 0x40;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar4,PTR_s_untrackOperationPath__026ba610,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_untrackOperationPath__026ba610,*(undefined8 *)(param_1 + 0x28));
  bVar2 = false;
  bVar3 = true;
  if (local_38 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
    bVar3 = true;
    if ((uVar5 & 1) == 0) {
      local_40 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_activeOperationToken_026ba618);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar3 = local_40 != *(long *)(param_1 + 0x30);
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActiveOperationToken__026ba5e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActiveOperationToast__026ba5e8,0);
    pcVar1 = &cf_SbS_b;
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      pcVar1 = &cf_SbS1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,pcVar1,
               *(undefined8 *)(param_1 + 0x38));
    lVar4 = local_38;
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
      local_20 = *(undefined8 *)(param_1 + 0x28);
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_shareItemsAtPaths__026ba778);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

