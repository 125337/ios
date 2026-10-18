// savePersonalCoverImageData:extension: @0x9cfc


/* Function Stack Size: 0x20 bytes */



void PersonalOBF_CoversSettingViewController::savePersonalCoverImageData_extension_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002940e0(&_OBJC_CLASS___NSDate);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a51c0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_00299ba0(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_________);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_00295a40(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar7._0_8_,auVar7._8_8_,uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002a6580(param_3,auVar8._8_8_,auVar8._0_8_,1);

  if (iVar1 != 0) {

    FUN_00295920(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      iVar1 = FUN_001331c4();

      if (iVar1 == 0) {

        FUN_00299be0(param_1,extraout_x1_00,lVar4);

        uVar5 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_00299b80(param_1,extraout_x1_00,lVar4);

        uVar5 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(auVar9._0_8_,auVar9._8_8_,uVar2,uVar5);

      _objc_release(auVar9._0_8_);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4a40();

      _objc_release(uVar6);

      FUN_00007f9c();

      _objc_release(uVar5);

    }

    FUN_00295760(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    auVar9 = FUN_00299020();

    FUN_002a0660(param_1,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar5);

    FUN_002a4dc0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar5);

    FUN_00299c00(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&::cf__);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar10._8_8_,&cf_mRbR,auVar10._0_8_,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar10._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_zT_T,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_zsS_T,2,

                 &PTR___NSConcreteGlobalBlock_00388da0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_03,uVar5,1,0);

    _objc_release(uVar5);

    _objc_release(lVar4);

  }

  _objc_release(auVar8._0_8_);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




