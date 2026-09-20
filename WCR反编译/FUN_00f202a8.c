// FUN_00f202a8 @ 00f202a8

undefined8 FUN_00f202a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  puVar3 = PTR_s_range_0269ef50;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar4 = PTR_s_range_0269ef50;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (puVar3 == puVar4) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (uVar1 == uVar2) {
      local_28 = 0;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_28 = 1;
      if (uVar1 < uVar2) {
        local_28 = 0xffffffffffffffff;
      }
    }
  }
  else {
    puVar3 = PTR_s_range_0269ef50;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR_s_range_0269ef50;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = 0xffffffffffffffff;
    if (puVar3 < puVar4) {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

