// FUN_01ad5ec4 @ 01ad5ec4

ulong FUN_01ad5ec4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  return uVar2 & 0xffffffff;
}

