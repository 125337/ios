// FUN_015314a0 @ 015314a0

void FUN_015314a0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  uint local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  byte local_58;
  byte local_57;
  undefined **local_50;
  byte local_41;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar4 = DAT_028e3870;
  local_30 = param_1;
  local_28 = param_1;
  if ((DAT_028e3870 == 0) || (DAT_028e3878 == 0)) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      _objc_storeWeak(&DAT_028e38a8);
      DAT_028e3940 = 0;
      _objc_storeWeak(&DAT_028e38b0,0);
    }
    else {
      FUN_01531854();
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = DAT_028e3878;
    local_38 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar5;
    _objc_storeStrong(&DAT_028e3870);
    _objc_storeStrong(&DAT_028e3878,0);
    local_41 = 0;
    if (((*(byte *)(param_1 + 0x20) & 1) != 0) && ((*(byte *)(param_1 + 0x21) & 1) != 0)) {
      FUN_01531854();
      local_41 = 1;
    }
    lVar5 = local_38;
    ppuVar6 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01531a10;
    local_70 = &DAT_02586590;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_40;
    local_68 = lVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar4;
    local_58 = *(byte *)(param_1 + 0x20) & 1;
    local_57 = local_41 & 1;
    _objc_retainBlock();
    lVar4 = local_38;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar2 = PTR___NSConcreteStackBlock_02578660;
    bVar1 = (*(byte *)(param_1 + 0x21) & 1) != 0;
    local_50 = ppuVar6;
    if (bVar1) {
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01531d58;
      local_a8 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar5 = local_40;
      local_a0 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar6 = local_50;
      local_98 = lVar5;
      local_e8 = puVar2;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_01531e24;
      local_d0 = &DAT_0257ca98;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0,puVar3,PTR_s_animateWithDuration_delay_option_026ca4f0,0x10004,
                 &local_c0,&local_e8);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      (*(code *)ppuVar6[2])();
    }
    local_8c = (uint)!bVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

