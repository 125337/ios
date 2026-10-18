// mainSwitchChanged: @0x1cfac


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::mainSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  uint uVar1;

  int iVar2;

  uint uVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined1 auVar7 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  ID local_50;

  undefined8 local_48;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar7._0_8_;

  uVar1 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_coversEnabled);

  iVar2 = FUN_002979c0(param_3);

  if ((iVar2 == 0) || (DAT_003e76f8 != '\x01')) {

    uVar3 = FUN_002979c0(param_3);

    if ((((uVar1 | uVar3 ^ 0xffffffff) & 1) != 0) ||

       (auVar7 = FUN_00297880(&objc::class_t::_0x2f19de29), (auVar7._0_8_ & 1) != 0)) {

      auVar7 = FUN_002979c0(param_3);

      FUN_0029d080(uVar4,auVar7._8_8_,auVar7._0_8_,&cf_coversEnabled);

      DAT_003e7a2c = 0;

      FUN_002a4a40(uVar4);

      FUN_0000e850();

      DAT_003e74b9 = FUN_002979c0(param_3);

      uVar5 = FUN_002979c0(param_3);

      if ((uVar5 & 1) == 0) {

        FUN_0000b684();

      }

      else {

        FUN_00007f9c();

      }

      FUN_0029af80(param_1);

      goto LAB_0001d238;

    }

    FUN_002a0120(param_3,auVar7._8_8_,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_02,&::cf___,&cf__O_uX,1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    local_70 = PTR___NSConcreteStackBlock_003886f0;

    local_68 = 0xc2000000;

    local_60 = FUN_0001d2d0;

    puStack_58 = &DAT_00388d20;

    local_50 = param_1;

    _objc_retain(uVar4);

    local_48 = uVar4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_SsQl,0,&local_70);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar6,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Sm,1,0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar6,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_0029a500(param_1,extraout_x1_05,uVar6,1,0);

    _objc_release(local_48);

  }

  else {

    FUN_002a0120(param_3,extraout_x1,0);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf_R_y_u,&cf__v_S_ybk_O_udkR,1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar7._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_nx_,0,0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar6,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_0029a500(param_1,extraout_x1_01,uVar6,1,0);

  }

  _objc_release(uVar6);

LAB_0001d238:

  _objc_release(uVar4);

  _objc_release(param_3);

  return;

}




