// FUN_0089e704 @ 0089e704

void FUN_0089e704(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined **local_78;
  undefined **local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  if (((DAT_028cdd4b & 1) == 0) && ((DAT_028cdd48 & 1) == 0)) {
    DAT_028cdd4b = 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_38 = uVar2;
    ppuVar3 = &local_68;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0089fbf4;
    local_50 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    _objc_retainBlock();
    ppuVar4 = &local_98;
    local_98 = puVar1;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0089fd50;
    local_80 = &DAT_02579910;
    local_40 = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = ppuVar3;
    _objc_retainBlock();
    puVar5 = PTR___dispatch_main_q_02578680;
    local_70 = ppuVar4;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = local_70;
    local_c8 = puVar1;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_0089fdd0;
    local_b0 = &DAT_02580bd0;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar4 = local_40;
    local_a8 = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = ppuVar4;
    _dispatch_async(puVar5,&local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

