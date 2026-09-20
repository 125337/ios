// FUN_019748f8 @ 019748f8

void FUN_019748f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint local_34;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
  if (lVar1 == 2) {
    local_34 = *(uint *)(param_1 + 0x20);
  }
  else {
    local_34 = *(uint *)(param_1 + 0x24);
  }
  uVar2 = (ulong)local_34;
  FUN_01963e0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

