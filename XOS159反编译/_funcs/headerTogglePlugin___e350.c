// headerTogglePlugin: @0xe350


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::headerTogglePlugin_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  uint uVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  ID local_60;

  undefined8 local_58;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar9._0_8_;

  auVar9 = FUN_002924c0(uVar2,auVar9._8_8_,&cf_coversEnabled);

  uVar4 = auVar9._8_8_;

  uVar3 = auVar9._0_8_;

  if ((uVar3 & 1) == 0) {

    if (DAT_003e76f8 == '\x01') {

      FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar4,&cf_R_y_u,&cf__v_S_ybk_O_udkR,1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar9._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,&cf_nx_,0,0);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      FUN_0029a500(param_1,extraout_x1,uVar4,1,0);

      goto LAB_0000e5b8;

    }

    auVar10 = FUN_00297880(&objc::class_t::_0x2f19de29);

    uVar4 = auVar10._8_8_;

    if ((auVar10._0_8_ & 1) != 0) goto LAB_0000e39c;

    FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar4,&::cf___,&cf__O_uX,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_80 = PTR___NSConcreteStackBlock_003886f0;

    local_78 = 0xc2000000;

    local_70 = FUN_0000e7bc;

    puStack_68 = &DAT_00388d20;

    local_60 = param_1;

    _objc_retain(uVar2);

    local_58 = uVar2;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_SsQl,0,&local_80);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_04,uVar4,1,0);

    uVar5 = local_58;

  }

  else {

LAB_0000e39c:

    uVar8 = auVar9._0_4_;

    FUN_0029d080(uVar2,uVar4,uVar8 ^ 1,&cf_coversEnabled);

    DAT_003e7a2c = 0;

    FUN_002a4a40(uVar2);

    DAT_003e74b9 = (undefined1)(uVar8 ^ 1);

    FUN_0000e850();

    if ((uVar3 & 1) == 0) {

      FUN_00007f9c();

    }

    else {

      FUN_0000b684();

    }

    FUN_00296020(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,

                 "System/Library/Frameworks/AudioToolbox.framework/AudioToolbox");

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    FUN_00296020(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,

                 "ystem/Library/Frameworks/AudioToolbox.framework/AudioToolbox");

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    FUN_00296020(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,

                 "stem/Library/Frameworks/AudioToolbox.framework/AudioToolbox");

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    if ((uVar3 & 1) == 0) {

      FUN_002a4b80(&_OBJC_CLASS___UIColor);

      auVar9 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4b60();

      auVar9 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029cf60(uVar4,auVar9._8_8_,auVar9._0_8_);

    pcVar1 = &cf__sQ;

    if (uVar8 == 0) {

      pcVar1 = &cf___T_u;

    }

    _objc_release(auVar9._0_8_);

    FUN_002a1d60(uVar5,extraout_x1_00,pcVar1);

    pcVar1 = &::cf___;

    if (uVar8 == 0) {

      pcVar1 = &cf_sQ;

    }

    FUN_002a1f80(uVar6,extraout_x1_01,pcVar1,0);

    FUN_002a4dc0(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar7);

    _objc_release(uVar6);

  }

  _objc_release(uVar5);

LAB_0000e5b8:

  _objc_release(uVar4);

  _objc_release(uVar2);

  return;

}




