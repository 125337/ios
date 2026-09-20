// FUN_0004e434 @ 0004e434

ulong FUN_0004e434(long param_1)

{
  ulong uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_20);
  _objc_storeStrong(&local_20,0);
  return uVar1 & 0xffffffff;
}

