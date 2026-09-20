// FUN_00f204c8 @ 00f204c8

undefined8 FUN_00f204c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = 0xffffffffffffffff;
  if (uVar2 < uVar3) {
    uVar1 = 1;
  }
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return uVar1;
}

