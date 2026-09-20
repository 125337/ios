// FUN_0067400c @ 0067400c

void FUN_0067400c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38 [3];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028cbc95,0,1);
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_00673698();
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    FUN_0066d09c(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    dVar3 = _dispatch_time(0,80000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00674198;
    local_40 = &DAT_02578c20;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_38[0] = uVar2;
    _dispatch_after(dVar3,puVar4,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_38,0);
  }
  return;
}

