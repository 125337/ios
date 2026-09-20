// FUN_019963dc @ 019963dc

void FUN_019963dc(long param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  lVar4 = param_1 + 0x30;
  local_30 = param_1;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = false;
  bVar3 = true;
  local_38 = lVar4;
  if ((lVar4 != 0) && (bVar3 = true, (local_21 & 1) == 0)) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
    bVar3 = true;
    if ((uVar5 & 1) == 0) {
      local_40 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_activeSizeToken_026ba638);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar3 = local_40 != *(long *)(param_1 + 0x20);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActiveSizeToken__026ba628);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActiveSizeToast__026ba630,0);
    puVar2 = PTR_WCRefineHelper_026ce000;
    uVar6 = local_20;
    FUN_0198a97c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,uVar6,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reload_026af6c8);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

