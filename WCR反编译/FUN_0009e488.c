// FUN_0009e488 @ 0009e488

void FUN_0009e488(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  uint local_5c;
  ulong local_48;
  byte local_39;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_18 == 0) || (FUN_0009d25c(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_5c = 1;
    local_30 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_5c = (uint)uVar3 ^ 1;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_5c & 1) == 0) {
      uVar4 = local_30;
      FUN_0009e9fc();
      uVar3 = local_30;
      if ((uVar4 & 1) == 0) {
        local_28 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar3;
        FUN_0009cb18(uVar3);
        FUN_0009cf30(local_30);
        FUN_0009d13c(local_48);
        _objc_storeStrong(&local_48,0);
        local_28 = 0;
      }
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

