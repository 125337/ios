// FUN_007ef21c @ 007ef21c

void FUN_007ef21c(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR___dispatch_main_q_02578680;
  local_30 = param_1;
  if ((local_19 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_007ef394;
    local_50 = &DAT_02578f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_48 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    local_40 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    _dispatch_async(puVar1,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

