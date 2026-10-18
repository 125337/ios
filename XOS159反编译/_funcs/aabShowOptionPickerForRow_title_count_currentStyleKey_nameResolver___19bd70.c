// aabShowOptionPickerForRow:title:count:currentStyleKey:nameResolver: @0x19bd70


/* Function Stack Size: 0x38 bytes */



void XZYAvatarAboveBubbleSettingsViewController::

     aabShowOptionPickerForRow_title_count_currentStyleKey_nameResolver_

               (ID param_1,SEL param_2,long_long param_3,ID param_4,long_long param_5,ID param_6,

               ID param_7,undefined4 param_8)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  ulong uVar7;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  ID local_b8;

  ID local_b0;

  undefined1 auStack_a8 [8];

  ulong local_a0;

  long_long local_98;

  undefined1 auStack_90 [16];

  

  _objc_retain(param_4);

  _objc_retain(param_6);

  _objc_retain(param_7);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  auVar9 = FUN_00297480(auVar8._0_8_,auVar8._8_8_,param_6);

  uVar1 = auVar9._0_8_;

  if ((long)param_5 <= (long)uVar1 || 0x7fffffffffffffff < uVar1) {

    uVar1 = 0;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,param_4,0,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_90,param_1);

  uVar3 = extraout_x1;

  if (0 < (long)param_5) {

    uVar7 = 0;

    do {

      if (uVar1 == uVar7) {

        (**(code **)(param_7 + 0x10))(param_7,uVar1);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&::cf__);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar9._0_8_);

      }

      else {

        (**(code **)(param_7 + 0x10))(param_7,uVar7);

        uVar3 = _objc_retainAutoreleasedReturnValue();

      }

      local_d8 = PTR___NSConcreteStackBlock_003886f0;

      local_d0 = 0xc2000000;

      local_c8 = FUN_0019c274;

      puStack_c0 = &DAT_0038e180;

      local_a0 = uVar7;

      _objc_retain(param_6);

      local_b8 = param_6;

      _objc_copyWeak(auStack_a8,auStack_90);

      local_98 = param_3;

      _objc_retain(param_7);

      local_b0 = param_7;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,uVar3,0,&local_d8);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar2,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      _objc_release(local_b0);

      _objc_destroyWeak(auStack_a8);

      _objc_release(local_b8);

      _objc_release(uVar3);

      uVar7 = uVar7 + 1;

      uVar3 = extraout_x1_01;

    } while (param_5 != uVar7);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar3,&cf_Sm,1,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_0029a0a0(uVar2);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_02;

  if (lVar4 != 0) {

    FUN_002a4dc0(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar9._8_8_,param_3,3);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar9._0_8_,auVar10._8_8_,auVar10._0_8_);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar10._0_8_);

    _objc_release(auVar9._0_8_);

    lVar4 = lVar5;

    if (lVar5 == 0) {

      FUN_002a6220(param_1);

      lVar4 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar9._0_8_,auVar9._8_8_,lVar4);

    _objc_release(auVar9._0_8_);

    if (lVar5 == 0) {

      _objc_release(lVar4);

      FUN_002a6220(param_1);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002925a0();

    }

    else {

      uVar3 = FUN_002925a0(lVar5);

    }

    FUN_0029a0a0(uVar2);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar3,in_d1,in_d2,in_d3);

    _objc_release(uVar6);

    if (lVar5 == 0) {

      _objc_release(lVar4);

    }

    _objc_release(lVar5);

    uVar3 = extraout_x1_03;

  }

  FUN_0029a500(param_1,uVar3,uVar2,1,0);

  _objc_destroyWeak(auStack_90);

  _objc_release(uVar2);

  _objc_release(auVar8._0_8_);

  _objc_release(param_7);

  _objc_release(param_6);

  _objc_release(param_4);

  return;

}




