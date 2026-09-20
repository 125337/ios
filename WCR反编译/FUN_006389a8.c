// FUN_006389a8 @ 006389a8

void FUN_006389a8(undefined8 param_1)

{
  ulong uVar1;
  uint local_44;
  ulong local_40;
  undefined4 local_38;
  byte local_31;
  ulong local_30;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  local_44 = 1;
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)uVar1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_44 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x65);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_38 = 1;
    }
    else {
      FUN_0063fb70();
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bringSubviewToFront__026ca550,local_40)
        ;
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

