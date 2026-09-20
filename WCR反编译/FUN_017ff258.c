// FUN_017ff258 @ 017ff258

void FUN_017ff258(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
  puVar1 = PTR___dispatch_main_q_02578680;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) ==
      *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)) {
    _objc_retainAutoreleaseReturnValue(0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

