// FUN_001de6c8 @ 001de6c8

void FUN_001de6c8(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_7c;
  ulong local_58;
  ulong local_48;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 != 0) {
    FUN_001da018(local_28);
    _objc_setAssociatedObject(local_28,DAT_026dfa88,0,1);
    _objc_setAssociatedObject(local_28,DAT_026dfa78,0,1);
    _objc_setAssociatedObject(local_28,DAT_026dfa80,0,1);
    _objc_setAssociatedObject(local_28,DAT_026dfa90,0,1);
    bVar2 = false;
    bVar1 = false;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_001dbb90(param_1,0);
    local_7c = 0;
    if ((uVar4 & 1) != 0) {
      local_48 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = 0;
      if (param_1 <= DAT_02323cd0) {
        local_58 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_7c = 0;
        if ((uVar4 & 1) == 0) {
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_clipsToBounds_026ca570);
          local_7c = (uint)uVar4 ^ 1;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_7c & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

