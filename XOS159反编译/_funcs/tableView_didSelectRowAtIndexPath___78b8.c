// tableView:didSelectRowAtIndexPath: @0x78b8


/* Function Stack Size: 0x20 bytes */



void PersonalOBF_CoversSettingViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  int iVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined *local_158;

  undefined8 local_150;

  code *local_148;

  undefined *puStack_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  ID local_120;

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  undefined8 local_f8;

  undefined8 local_f0;

  ID local_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  ID local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined8 local_78;

  ID local_70;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  FUN_00295920(param_1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 != 0) {

    lVar5 = FUN_0029c020(param_4);

    if (lVar5 == 0) {

      FUN_002a2f80(param_1);

    }

    else {

      lVar5 = FUN_0029c020(param_4);

      if (lVar5 == 1) {

        FUN_00299d20(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        auVar12 = FUN_0029bae0(param_4);

        FUN_00299500(uVar6,auVar12._8_8_,auVar12._0_8_);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar6);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar12._0_8_;

        FUN_00299be0(param_1,auVar12._8_8_,lVar4);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        uVar8 = auVar12._0_8_;

        FUN_00299b80(param_1,auVar12._8_8_,lVar4);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar12._0_8_;

        FUN_002a45e0(uVar6,auVar12._8_8_,uVar8);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002a45e0(uVar6,auVar12._8_8_,uVar9);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        iVar2 = FUN_00297820(uVar7,auVar13._8_8_,auVar12._0_8_);

        iVar3 = FUN_00297820(uVar7,extraout_x1_00,auVar13._0_8_);

        FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_01,uVar7,0,0);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        puVar1 = PTR___NSConcreteStackBlock_003886f0;

        if (iVar2 == 0) {

          local_e0 = PTR___NSConcreteStackBlock_003886f0;

          local_d8 = 0xc2000000;

          local_d0 = FUN_000080e4;

          puStack_c8 = &DAT_00388cc0;

          _objc_retain(uVar6);

          local_c0 = uVar6;

          _objc_retain(uVar7);

          local_b8 = uVar7;

          _objc_retain(uVar8);

          local_b0 = uVar8;

          _objc_retain(param_3);

          local_a8 = param_3;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf__NEmr_j_VGr,0,&local_e0);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar10,auVar14._8_8_,auVar14._0_8_);

          _objc_release(auVar14._0_8_);

          _objc_release(local_a8);

          _objc_release(local_b0);

          _objc_release(local_b8);

          uVar11 = local_c0;

        }

        else {

          local_a0 = PTR___NSConcreteStackBlock_003886f0;

          local_98 = 0xc2000000;

          local_90 = FUN_00007f64;

          puStack_88 = &DAT_00388c90;

          _objc_retain(uVar6);

          local_80 = uVar6;

          _objc_retain(uVar8);

          local_78 = uVar8;

          _objc_retain(param_3);

          local_70 = param_3;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_SmEmr_j_b,0,&local_a0);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar10,auVar14._8_8_,auVar14._0_8_);

          _objc_release(auVar14._0_8_);

          _objc_release(local_70);

          _objc_release(local_78);

          uVar11 = local_80;

        }

        _objc_release(uVar11);

        if (iVar3 == 0) {

          local_158 = puVar1;

          local_150 = 0xc2000000;

          local_148 = FUN_000081c4;

          puStack_140 = &DAT_00388cc0;

          _objc_retain(uVar6);

          local_138 = uVar6;

          _objc_retain(uVar7);

          local_130 = uVar7;

          _objc_retain(uVar9);

          local_128 = uVar9;

          _objc_retain(param_3);

          local_120 = param_3;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf__Nmr_j_VGr,0,&local_158);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar10,auVar14._8_8_,auVar14._0_8_);

          _objc_release(auVar14._0_8_);

          _objc_release(local_120);

          _objc_release(local_128);

          _objc_release(local_130);

          uVar11 = local_138;

        }

        else {

          local_118 = puVar1;

          local_110 = 0xc2000000;

          local_108 = FUN_0000818c;

          puStack_100 = &DAT_00388c90;

          _objc_retain(uVar6);

          local_f8 = uVar6;

          _objc_retain(uVar9);

          local_f0 = uVar9;

          _objc_retain(param_3);

          local_e8 = param_3;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Smmr_j_b,0,&local_118);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar10,auVar14._8_8_,auVar14._0_8_);

          _objc_release(auVar14._0_8_);

          _objc_release(local_e8);

          _objc_release(local_f0);

          uVar11 = local_f8;

        }

        _objc_release(uVar11);

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Sm,1,0);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar10,auVar14._8_8_,auVar14._0_8_);

        _objc_release(auVar14._0_8_);

        FUN_0029a500(param_1,extraout_x1_07,uVar10,1,0);

        _objc_release(uVar10);

        _objc_release(auVar13._0_8_);

        _objc_release(auVar12._0_8_);

        _objc_release(uVar9);

        _objc_release(uVar8);

        _objc_release(uVar6);

        _objc_release(uVar7);

      }

    }

  }

  _objc_release(lVar4);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




