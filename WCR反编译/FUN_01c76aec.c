// FUN_01c76aec @ 01c76aec

uint FUN_01c76aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isNoneItem__026c1b20,local_20);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return (uint)uVar1 ^ 1;
}

