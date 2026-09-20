// FUN_006771cc @ 006771cc

byte FUN_006771cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  undefined8 local_58 [3];
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_40;
  FUN_00677760();
  uVar5 = local_30;
  if ((uVar1 & 1) == 0) {
    (*DAT_028cbcc0)(local_30,local_38,local_40);
    local_21 = (byte)uVar5 & 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_40;
    local_58[0] = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_58[0];
    local_60 = uVar1;
    ppuVar2 = &local_98;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_00677928;
    local_80 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_60;
    local_78 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar1;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_68 = ppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar4 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      (*(code *)local_68[2])();
    }
    local_21 = 0;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

