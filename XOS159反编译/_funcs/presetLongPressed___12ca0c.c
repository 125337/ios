// presetLongPressed: @0x12ca0c


/* Function Stack Size: 0x18 bytes */



void XZYColorPickerViewController::presetLongPressed_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar7;

  undefined8 uVar8;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  ID local_f8;

  long lStack_f0;

  undefined *local_e8;

  undefined8 local_e0;

  code *local_d8;

  undefined *puStack_d0;

  ID local_c8;

  long lStack_c0;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  ID local_98;

  long lStack_90;

  

  _objc_retain(param_3);

  lVar2 = FUN_002a4240(param_3);

  if (lVar2 == 1) {

    FUN_002a6220(param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_002a4e60();

    lVar2 = lVar4 + -500;

    if (499 < lVar4) {

      lVar7 = (long)_favoriteColors;

      auVar9 = FUN_00293860(*(undefined8 *)(param_1 + lVar7));

      if (lVar2 < auVar9._0_8_) {

        FUN_00299500(*(undefined8 *)(param_1 + lVar7),auVar9._8_8_,lVar2);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&cf____);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar10._8_8_,auVar10._0_8_,0,0);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar10._0_8_);

        puVar1 = PTR___NSConcreteStackBlock_003886f0;

        if (lVar4 != 500) {

          local_b8 = PTR___NSConcreteStackBlock_003886f0;

          local_b0 = 0xc2000000;

          local_a8 = FUN_0012cd68;

          puStack_a0 = &DAT_0038ccf0;

          local_98 = param_1;

          lStack_90 = lVar2;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_T_yR,0,&local_b8);

          auVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar5,auVar10._8_8_,auVar10._0_8_);

          _objc_release(auVar10._0_8_);

        }

        auVar10 = FUN_00293860(*(undefined8 *)(param_1 + lVar7));

        uVar6 = auVar10._8_8_;

        if (lVar4 + -499 < auVar10._0_8_) {

          local_e8 = puVar1;

          local_e0 = 0xc2000000;

          local_d8 = FUN_0012cda8;

          puStack_d0 = &DAT_0038ccf0;

          local_c8 = param_1;

          lStack_c0 = lVar2;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar6,&cf_TSyR,0,&local_e8);

          auVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar5,auVar10._8_8_,auVar10._0_8_);

          _objc_release(auVar10._0_8_);

          uVar6 = extraout_x1_00;

        }

        local_118 = puVar1;

        local_110 = 0xc2000000;

        local_108 = FUN_0012cde8;

        puStack_100 = &DAT_0038ccf0;

        local_f8 = param_1;

        lStack_f0 = lVar2;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar6,&cf_Rd,2,&local_118);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar5,auVar10._8_8_,auVar10._0_8_);

        _objc_release(auVar10._0_8_);

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar5,auVar10._8_8_,auVar10._0_8_);

        _objc_release(auVar10._0_8_);

        FUN_0029a0a0(uVar5);

        lVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        uVar6 = extraout_x1_02;

        if (lVar2 != 0) {

          FUN_0029a0a0(uVar5);

          auVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1740(auVar10._0_8_,auVar10._8_8_,uVar3);

          _objc_release(auVar10._0_8_);

          uVar8 = FUN_002925a0(uVar3);

          FUN_0029a0a0(uVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1700(uVar8,in_d1,in_d2,in_d3);

          _objc_release(uVar6);

          uVar6 = extraout_x1_03;

        }

        FUN_0029a500(param_1,uVar6,uVar5,1,0);

        _objc_release(uVar5);

        _objc_release(auVar9._0_8_);

      }

    }

    _objc_release(uVar3);

  }

  _objc_release(param_3);

  return;

}




