// FUN_015d6ad0 @ 015d6ad0

ulong FUN_015d6ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isSupportedFileName__026b0fd0,local_20);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return uVar1 & 0xffffffff;
}

