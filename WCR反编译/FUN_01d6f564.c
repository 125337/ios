// FUN_01d6f564 @ 01d6f564

ulong FUN_01d6f564(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  return uVar2 & 0xffffffff;
}

