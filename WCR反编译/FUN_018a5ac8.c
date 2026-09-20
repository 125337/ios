// FUN_018a5ac8 @ 018a5ac8

void FUN_018a5ac8(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  byte local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,300000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_48 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar4;
  _objc_copyWeak(auStack_30,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = *(byte *)(param_1 + 0x40) & 1;
  local_38 = uVar3;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  return;
}

