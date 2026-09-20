// FUN_0028f980 @ 0028f980

void FUN_0028f980(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar2 = local_28;
  bVar1 = local_28 != 0;
  if (bVar1) {
    local_50 = 0;
    local_40 = 0x20000000;
    local_3c = 0x20;
    local_38 = 0xc;
    local_80 = 0;
    local_70 = 0x32000000;
    local_6c = 0x30;
    local_68 = FUN_0027396c;
    local_60 = FUN_002739a8;
    local_58 = 0;
    ppuVar3 = &local_b8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_002908a8;
    local_a0 = &DAT_0257b638;
    local_90 = &local_50;
    local_88 = &local_80;
    local_78 = &local_80;
    local_48 = &local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar2;
    _objc_retainBlock();
    uVar4 = local_78[5];
    local_78[5] = ppuVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_98,0);
    __Block_object_dispose(&local_80,8);
    _objc_storeStrong(&local_58,0);
    __Block_object_dispose(&local_50,8);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

