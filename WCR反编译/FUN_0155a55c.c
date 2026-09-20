// FUN_0155a55c @ 0155a55c

void FUN_0155a55c(long param_1)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  if (DAT_028e39a8 == *(long *)(param_1 + 0x30)) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    local_20 = param_1;
    local_18 = param_1;
    FUN_0155a69c(uVar1,*(undefined8 *)(param_1 + 0x28));
    if ((uVar1 & 1) == 0) {
      dVar2 = _dispatch_time(0,180000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_0155b90c;
      local_38 = &DAT_0257cc98;
      local_28 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = uVar4;
      _dispatch_after(dVar2,puVar3,&local_50);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_30,0);
    }
    else {
      _objc_storeStrong(&DAT_028e38b8,0);
    }
  }
  return;
}

