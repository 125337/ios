// FUN_0156ca78 @ 0156ca78

void FUN_0156ca78(long param_1)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_015321f0(uVar1,0);
  if ((uVar1 & 1) == 0) {
    dVar2 = _dispatch_time(0,180000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_0156cb80;
    local_30 = &DAT_0257a800;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    _dispatch_after(dVar2,puVar3,&local_48);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

