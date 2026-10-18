// animateTransition: @0xa378


/* Function Stack Size: 0x18 bytes */



void XZYPushAnimator::animateTransition_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 uVar7;

  double in_d2;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined *local_1f8;

  undefined8 local_1f0;

  code *local_1e8;

  undefined *puStack_1e0;

  undefined8 local_1d8;

  ID local_1d0;

  undefined *local_1c8;

  undefined8 local_1c0;

  code *local_1b8;

  undefined *puStack_1b0;

  undefined8 local_1a8;

  undefined8 local_1a0;

  undefined8 local_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  undefined8 local_140;

  ID local_138;

  undefined *local_130;

  undefined8 local_128;

  code *local_120;

  undefined *puStack_118;

  undefined8 local_110;

  undefined8 local_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  undefined1 auStack_d0 [48];

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 uStack_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  

  _objc_retain(param_3);

  FUN_00293540(param_3);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar8._0_8_;

  FUN_002a6240(param_3,auVar8._8_8_,

               *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_003884c8);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6240(param_3,auVar8._8_8_,

               *(undefined8 *)PTR__UITransitionContextToViewControllerKey_003884d0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(auVar8._0_8_);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar4);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar9._0_8_;

  uVar7 = FUN_002a56e0(param_1,auVar9._8_8_,param_3);

  iVar2 = FUN_00297a00(param_1);

  if (iVar2 == 0) {

    FUN_00297120(uVar3,extraout_x1,uVar6,uVar5);

    FUN_00295320(param_3,extraout_x1_03,uVar4);

    FUN_0029e5e0(uVar6);

    _CGAffineTransformMakeScale(&local_190,0x3fee147ae147ae14,0x3fee147ae147ae14);

    uStack_98 = uStack_188;

    local_a0 = local_190;

    uStack_88 = uStack_178;

    uStack_90 = uStack_180;

    uStack_78 = uStack_168;

    local_80 = local_170;

    FUN_002a21c0(uVar6,extraout_x1_04,&local_a0);

    FUN_0029cb60(0x3fd999999999999a,uVar6);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    local_1c8 = PTR___NSConcreteStackBlock_003886f0;

    local_1c0 = 0xc2000000;

    local_1b8 = FUN_0000a8e8;

    puStack_1b0 = &DAT_00388e30;

    _objc_retain(uVar5);

    local_1a8 = uVar5;

    _objc_retain(uVar3);

    local_1a0 = uVar3;

    _objc_retain(uVar6);

    local_1f8 = puVar1;

    local_1f0 = 0xc2000000;

    local_1e8 = FUN_0000a9a4;

    puStack_1e0 = &DAT_00388e00;

    local_198 = uVar6;

    _objc_retain(uVar5);

    local_1d8 = uVar5;

    _objc_retain(param_3);

    local_1d0 = param_3;

    FUN_00291800(uVar7,0,0x3fec28f5c28f5c29,0x3fe0000000000000,&_OBJC_CLASS___UIView,extraout_x1_05,

                 0x20000,&local_1c8,&local_1f8);

    _objc_release(local_1d0);

    _objc_release(local_1d8);

    _objc_release(local_198);

    _objc_release(local_1a0);

    uVar7 = local_1a8;

  }

  else {

    FUN_00295320(param_3,extraout_x1,uVar4);

    FUN_0029e5e0(uVar6);

    FUN_00291380(uVar3,extraout_x1_00,uVar6);

    FUN_002925a0(uVar3);

    _CGAffineTransformMakeTranslation(&local_a0,in_d2 * 0.25,0x403e000000000000);

    _CGAffineTransformMakeScale(auStack_d0,0x3fed70a3d70a3d71,0x3fed70a3d70a3d71);

    _CGAffineTransformConcat(&local_100,&local_a0,auStack_d0);

    uStack_98 = uStack_f8;

    local_a0 = local_100;

    uStack_88 = uStack_e8;

    uStack_90 = uStack_f0;

    uStack_78 = uStack_d8;

    local_80 = local_e0;

    FUN_002a21c0(uVar6,extraout_x1_01,&local_a0);

    FUN_0029cb60(0,uVar6);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    local_130 = PTR___NSConcreteStackBlock_003886f0;

    local_128 = 0xc2000000;

    local_120 = FUN_0000a7e8;

    puStack_118 = &DAT_00388d50;

    _objc_retain(uVar6);

    local_110 = uVar6;

    _objc_retain(uVar5);

    local_160 = puVar1;

    local_158 = 0xc2000000;

    local_150 = FUN_0000a87c;

    puStack_148 = &DAT_00388e00;

    local_108 = uVar5;

    _objc_retain(uVar5);

    local_140 = uVar5;

    _objc_retain(param_3);

    local_138 = param_3;

    FUN_00291800(uVar7,0,0x3fec28f5c28f5c29,0x3fe0000000000000,&_OBJC_CLASS___UIView,extraout_x1_02,

                 0x20000,&local_130,&local_160);

    _objc_release(local_138);

    _objc_release(local_140);

    _objc_release(local_108);

    uVar7 = local_110;

  }

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




