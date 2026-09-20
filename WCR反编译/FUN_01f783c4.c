// FUN_01f783c4 @ 01f783c4

void FUN_01f783c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_30 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_38 = uVar1;
  if ((uVar1 != 0) &&
     (uVar2 = *(ulong *)(param_1 + 0x30),
     (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_statsGeneration_026c99b0), uVar2 == uVar1)) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pendingFolderStatsPaths_026c99c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pendingFolderStatsPaths_026c99c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewVisible_026c9808);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rebuildListSections_026ba410);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

