// FUN_015ac32c @ 015ac32c

void FUN_015ac32c(long param_1,byte param_2)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,250000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_40 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_19 & 1;
  local_38 = uVar4;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  return;
}

