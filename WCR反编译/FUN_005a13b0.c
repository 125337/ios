// FUN_005a13b0 @ 005a13b0

void FUN_005a13b0(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  undefined **local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  ppuVar3 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_005a15ac;
  local_58 = &DAT_0257e178;
  local_38 = param_2 & 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_40 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_50 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    (*(code *)local_30[2])();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  return;
}

