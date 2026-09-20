// FUN_0009e06c @ 0009e06c

void FUN_0009e06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  uint local_bc;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_5);
  uVar2 = (uint)puVar3;
  if ((local_28 == 0) || (FUN_0009d25c(), (uVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar4 = local_28;
    FUN_0009e728();
    if ((uVar4 & 1) == 0) {
      local_38 = 1;
    }
    else {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 0;
      local_bc = 0;
      local_40 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_48 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_bc = (uint)uVar4;
      }
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      uVar4 = local_28;
      if ((local_bc & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
        local_70 = param_1;
        local_68 = param_2;
        local_60 = param_3;
        local_58 = param_4;
        FUN_0009d2f8(uVar4);
      }
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wxHighlightedImageView_0269e2b0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      local_78 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar4 == local_28;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_78;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        FUN_0009d2f8(param_1,param_2,param_3,param_4,uVar4);
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

