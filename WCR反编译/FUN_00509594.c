// FUN_00509594 @ 00509594

void FUN_00509594(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00509274();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__chatroom),
     (uVar1 & 1) != 0)) {
    local_18 = 0;
    local_38 = 1;
    goto LAB_00509888;
  }
  FUN_005098dc();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_00509a18(uVar1,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  if (uVar1 == 0) {
    uVar1 = local_40;
    FUN_00509bdc();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    if (uVar1 == 0) {
LAB_00509818:
      local_18 = 0;
      local_38 = 1;
    }
    else {
      FUN_00509cd8();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      uVar3 = 0;
      if (uVar1 == 0) {
LAB_005097f4:
        local_38 = 0;
      }
      else {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_28);
        uVar1 = local_50;
        uVar3 = uVar2 & 0xffffffff;
        if ((uVar2 & 1) == 0) goto LAB_005097f4;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        uVar3 = 1;
        local_38 = 1;
      }
      _objc_storeStrong(uVar3,&local_58,0);
      if (local_38 == 0) goto LAB_00509818;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_00509888:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

