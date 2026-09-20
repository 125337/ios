// FUN_015ac5bc @ 015ac5bc

void FUN_015ac5bc(long param_1,byte param_2)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,&cf_S1Y_);
  }
  else {
    dVar1 = _dispatch_time(0,250000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_015ac718;
    local_40 = &DAT_02584a60;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_38 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar4;
    _dispatch_after(dVar1,puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

