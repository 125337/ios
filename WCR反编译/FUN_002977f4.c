// FUN_002977f4 @ 002977f4

void FUN_002977f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined **local_a8;
  undefined *local_a0;
  uint local_98;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  ppuVar3 = &local_88;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_00297a94;
  local_70 = &DAT_0257b848;
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(undefined8 *)(param_1 + 0x30);
  local_40 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  _objc_retainBlock();
  bVar1 = local_30 != 0;
  local_48 = ppuVar3;
  if (bVar1) {
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_30);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = local_48;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_00298074;
    local_b0 = &DAT_0257b208;
    local_a0 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = ppuVar3;
    FUN_0029662c(puVar4,&local_c8);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3,0);
  }
  local_98 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_68,0);
  if (local_98 == 0) {
    local_98 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

