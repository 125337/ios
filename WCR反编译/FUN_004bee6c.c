// FUN_004bee6c @ 004bee6c

void FUN_004bee6c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_41;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*DAT_028cabe8)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  FUN_004c10b4();
  uVar1 = local_40;
  local_41 = (undefined1)param_1;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = PTR___dispatch_main_q_02578680;
    local_60 = uVar1;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_60;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_004c12e0;
    local_78 = &DAT_02579ee0;
    local_68 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar1;
    _dispatch_async(puVar2,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_58 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

