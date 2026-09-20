// FUN_021df2c0 @ 021df2c0

void FUN_021df2c0(double param_1,undefined *param_2,long param_3)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  double dVar7;
  undefined8 uVar8;
  undefined *local_3d8;
  undefined *local_3b8;
  undefined *local_360;
  double local_330;
  undefined *local_2f0;
  undefined *local_298;
  undefined *local_248;
  undefined *local_1f8;
  undefined *local_1d8;
  undefined8 local_160;
  undefined1 auStack_140 [24];
  undefined8 local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined1 auStack_98 [24];
  double local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  double local_48;
  byte local_40;
  
  local_40 = 0;
  local_48 = 0.0;
  local_50 = (undefined *)0x0;
  local_58 = (undefined *)0x0;
  local_60 = (undefined *)0x0;
  local_80 = 0.0;
  local_a0 = 0.0;
  local_c0 = 0;
  local_f8 = 0.0;
  puVar2 = param_2;
  FUN_021d03f8();
  local_40 = (byte)puVar2 & 1;
  puVar3 = puVar2;
  FUN_021e3048();
  local_48 = param_1;
  FUN_021d05e0();
  puVar4 = puVar3;
  local_50 = puVar3;
  FUN_021e2a0c();
  puVar5 = param_2;
  local_58 = puVar4;
  FUN_021e34b8();
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = puVar5;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222d60(param_2,local_160);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  FUN_02222e60(param_2,local_160,1);
  if (param_3 == 1) {
    pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
    _swift_beginAccess(pdVar1,auStack_140,0x20,0);
    dVar7 = *pdVar1;
    _swift_endAccess(auStack_140);
    dVar7 = dVar7 * DAT_02323e88;
    puVar6 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = puVar5;
    FUN_02222960(puVar5,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      local_1d8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(puVar3);
      local_1d8 = puVar3;
    }
    FUN_02222d60(puVar5,local_160);
    (*(code *)PTR__objc_release_02578630)(local_1d8);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222da0(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 <= 0.0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = puVar6;
      FUN_02221d00();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      local_1f8 = puVar4;
      FUN_02221d00(puVar4,local_160);
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_02222d80(puVar2,local_160);
    (*(code *)PTR__objc_release_02578630)(local_1f8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else if (param_3 == 2) {
    pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
    _swift_beginAccess(pdVar1,auStack_f0,0x20,0);
    dVar7 = *pdVar1;
    _swift_endAccess(auStack_f0);
    dVar7 = dVar7 * 0.5;
    puVar6 = param_2;
    local_f8 = dVar7;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = puVar5;
    FUN_02222960(puVar5,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      local_248 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = puVar3;
      FUN_02221d00(puVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      _CGColorGetAlpha();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_128 = DAT_02323c98;
      local_120 = dVar7;
      FUN_021c8058();
      __ss3minyxx_xtSLRzlF
                (&local_118,&local_120,&local_128,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2);
      local_248 = puVar3;
      FUN_02222120(local_118,puVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_02222d60(puVar5,local_160);
    (*(code *)PTR__objc_release_02578630)(local_248);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    local_110 = 0x3fe0000000000000;
    puVar6 = puVar2;
    local_108 = param_1;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (&local_100,&local_108,&local_110,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar6);
    FUN_02222da0(local_100,puVar2,local_160);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 <= 0.0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_02223ae0();
      _objc_retainAutoreleasedReturnValue();
      local_298 = puVar6;
      FUN_02222120(0x3fd6666666666666);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(puVar4);
      local_298 = puVar4;
    }
    puVar6 = local_298;
    FUN_02221d00(local_298,local_160);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_298);
    FUN_02222d80(puVar2,local_160,puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else if (param_3 == 3) {
    pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
    _swift_beginAccess(pdVar1,auStack_98,0x20,0);
    dVar7 = *pdVar1;
    _swift_endAccess(auStack_98);
    dVar7 = dVar7 * 0.5;
    puVar6 = param_2;
    local_a0 = dVar7;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = puVar5;
    FUN_02222960(puVar5,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_02222020();
      _objc_retainAutoreleasedReturnValue();
      local_2f0 = puVar2;
      FUN_02222120(DAT_02323c70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      local_d0 = DAT_02323ec8;
      puVar2 = puVar3;
      uVar8 = DAT_02323ec8;
      FUN_02221d00(puVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      _CGColorGetAlpha();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_d8 = uVar8;
      FUN_021c8058();
      __ss3minyxx_xtSLRzlF
                (&local_c8,&local_d0,&local_d8,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2);
      local_2f0 = puVar3;
      FUN_02222120(local_c8,puVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_02222d60(puVar5,local_160);
    (*(code *)PTR__objc_release_02578630)(local_2f0);
    local_330 = param_1;
    if (param_1 <= 0.0) {
      local_330 = 1.2;
    }
    local_b0 = local_330;
    local_b8 = 0x3ff0000000000000;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (&local_a8,&local_b0,&local_b8,PTR___s12CoreGraphics7CGFloatVN_02578ba0,local_2f0);
    local_c0 = local_a8;
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222da0(local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 <= 0.0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_02223ae0();
      _objc_retainAutoreleasedReturnValue();
      local_360 = puVar6;
      FUN_02222120(0x3feb333333333333);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(puVar4);
      local_360 = puVar4;
    }
    puVar6 = local_360;
    FUN_02221d00(local_360,local_160);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(local_360);
    FUN_02222d80(puVar2,local_160,puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
    _swift_beginAccess(pdVar1,auStack_78,0x20,0);
    dVar7 = *pdVar1;
    _swift_endAccess(auStack_78);
    dVar7 = dVar7 * 0.5;
    puVar6 = param_2;
    local_80 = dVar7;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = puVar5;
    FUN_02222960(puVar5,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222f40(dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      local_3b8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(puVar3);
      local_3b8 = puVar3;
    }
    FUN_02222d60(puVar5,local_160);
    (*(code *)PTR__objc_release_02578630)(local_3b8);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    FUN_02222da0(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = param_2;
    FUN_02222960(param_2,local_160);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 <= 0.0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
      local_3d8 = puVar6;
      FUN_02221d00();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      local_3d8 = puVar4;
      FUN_02221d00(puVar4,local_160);
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_02222d80(puVar2,local_160);
    (*(code *)PTR__objc_release_02578630)(local_3d8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  FUN_021e3654(param_2);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return;
}

