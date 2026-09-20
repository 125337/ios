// FUN_008a7590 @ 008a7590

void FUN_008a7590(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 != 0) && (FUN_008a6b70(), uVar1 == *(ulong *)(param_1 + 0x28))) {
    uVar1 = local_28;
    FUN_008a47c0(local_28,PTR_s_isViewApprear_026a98b0,0);
    if ((uVar1 & 1) == 0) {
      _objc_setAssociatedObject(local_28,&DAT_028cddd9,0,1);
      FUN_008a6d2c(*(undefined8 *)(param_1 + 0x30),local_28,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      uVar1 = local_28;
      FUN_008a739c();
      if ((uVar1 & 1) == 0) {
        _objc_setAssociatedObject(local_28,&DAT_028cddd9,0,1);
        FUN_008a6d2c(*(undefined8 *)(param_1 + 0x30),local_28,*(undefined8 *)(param_1 + 0x28));
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onClickLivePhotoButton_026a98b8);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

