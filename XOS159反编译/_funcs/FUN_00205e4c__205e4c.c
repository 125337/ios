// FUN_00205e4c @0x205e4c


void FUN_00205e4c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)



{

  int iVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar13 [16];

  long local_108;

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  long local_d8;

  undefined8 uStack_d0;

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  long local_a8;

  undefined8 uStack_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  long local_78;

  undefined8 uStack_70;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  if (DAT_003eaa30 != 1 || DAT_003ead50 != 0) {

    (*DAT_003eac38)(param_1,param_2,param_3,param_4);

    goto LAB_00206160;

  }

  FUN_00292aa0(param_3,extraout_x1,param_4);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

LAB_00205fe4:

    FUN_0020e91c(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_retain(param_4);

    lVar6 = param_4;

    if (((param_4 != 0) && ((DAT_003eaa30 & 1) != 0)) && (lVar3 != 0)) {

      lVar9 = FUN_0029c020(param_4);

      lVar7 = FUN_002974a0(lVar3);

      if (lVar9 == lVar7) {

        FUN_0020e940(param_1,lVar3,(DAT_003ead50 & DAT_003ead51 ^ 0xff) & 1);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        if ((lVar9 != 0) && (iVar1 = FUN_00297aa0(lVar9), iVar1 != 0)) {

          lVar7 = FUN_0029bae0(param_4);

          FUN_00294d00(lVar9);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          lVar10 = FUN_00293860();

          _objc_release(uVar4);

          if (lVar7 < lVar10) {

            FUN_00294d00(lVar9);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            auVar13 = FUN_0029bae0(param_4);

            FUN_00299500(uVar4,auVar13._8_8_,auVar13._0_8_);

            lVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar4);

            _objc_release(lVar9);

            if (lVar7 != 0) {

              iVar1 = FUN_00297760(lVar7);

              if (iVar1 == 0) {

                uVar4 = FUN_00299940(lVar7);

                auVar13 = FUN_00299980(lVar7);

                FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar13._8_8_,uVar4,auVar13._0_8_);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                DAT_003ead8c = DAT_003ead8c + 1;

                (*DAT_003eac38)(param_1,param_2,param_3,uVar4);

                DAT_003ead8c = DAT_003ead8c + -1;

                goto LAB_0020642c;

              }

              FUN_00294460(param_3,extraout_x1_01,param_4,0);

              goto LAB_00206140;

            }

            goto LAB_0020611c;

          }

        }

        _objc_release(lVar9);

      }

    }

LAB_0020611c:

    lVar7 = 0;

    (*DAT_003eac38)(param_1,param_2,param_3,param_4);

LAB_00206140:

    _objc_release(lVar7);

    _objc_release(lVar6);

  }

  else {

    FUN_0029b9c0(lVar2);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00297820(auVar13._0_8_,auVar13._8_8_,&cf_XZYCLGDividerCell);

    _objc_release(auVar13._0_8_);

    if (iVar1 == 0) goto LAB_00205fe4;

    FUN_00294460(param_3,extraout_x1_00,param_4,0);

    _objc_getAssociatedObject(lVar2,&DAT_003eaab0);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 != 0) && (iVar1 = FUN_00297760(lVar3), iVar1 != 0)) {

      if (DAT_003eaac8 == 6) {

        FUN_00295de0(lVar3);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_001d393c(param_1,uVar4);

        _objc_release(uVar4);

      }

      uVar4 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

      uVar5 = _objc_opt_isKindOfClass(lVar2,uVar4);

      if ((uVar5 & 1) != 0) {

        FUN_0029a200(lVar2);

      }

      FUN_00295de0(lVar3);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0020e91c(param_1);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == 0) {

        uVar8 = FUN_0029c020(param_4);

      }

      else {

        uVar8 = FUN_002974a0(lVar7);

      }

      FUN_002101cc(param_1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar13._0_8_;

      FUN_00299400(&_OBJC_CLASS___NSNumber,auVar13._8_8_,uVar8);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(uVar4,auVar13._8_8_,auVar13._0_8_);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar13._0_8_);

      if (lVar9 == 0) {

LAB_00206244:

        FUN_001cbd20(lVar6);

        FUN_0020b454(param_1);

        local_98 = PTR___NSConcreteStackBlock_003886f0;

        local_90 = 0xc2000000;

        local_88 = FUN_0021c2f4;

        puStack_80 = &DAT_0038abb0;

        _objc_retain(param_3);

        local_78 = param_3;

        uStack_70 = param_1;

        FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_02,&local_98);

        FUN_0020b734(param_1,1);

        lVar10 = local_78;

      }

      else {

        FUN_00294d00(lVar9);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        if (lVar10 == 0) goto LAB_00206244;

        FUN_001cbd20(lVar6);

        uVar11 = FUN_0020eb40(param_1,uVar8);

        if (DAT_003eaac8 == 6) {

          FUN_0020ebc8(lVar9);

          local_108 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_0020ec88(param_1,uVar8,uVar11);

          local_108 = _objc_retainAutoreleasedReturnValue();

        }

        if (local_108 == 0) {

LAB_002063a4:

          FUN_0020b454(param_1);

          local_c8 = PTR___NSConcreteStackBlock_003886f0;

          local_c0 = 0xc2000000;

          local_b8 = FUN_0021c320;

          puStack_b0 = &DAT_0038abb0;

          _objc_retain(param_3);

          local_a8 = param_3;

          uStack_a0 = param_1;

          FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_04,&local_c8);

          FUN_0020b734(param_1,1);

          lVar12 = local_a8;

        }

        else {

          auVar13 = FUN_00297aa0(local_108);

          if ((auVar13._0_8_ & 1) == 0) goto LAB_002063a4;

          FUN_00299400(&_OBJC_CLASS___NSNumber,auVar13._8_8_,uVar8);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a00a0(uVar4,auVar13._8_8_,local_108,auVar13._0_8_);

          _objc_release(auVar13._0_8_);

          FUN_0021027c(param_1,local_108);

          FUN_00209f2c(param_1);

          local_f8 = PTR___NSConcreteStackBlock_003886f0;

          local_f0 = 0xc2000000;

          local_e8 = FUN_0021c34c;

          puStack_e0 = &DAT_0038abb0;

          _objc_retain(param_3);

          local_d8 = param_3;

          uStack_d0 = param_1;

          FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_03,&local_f8);

          FUN_0011afe4(param_3);

          FUN_0020b734(param_1,1);

          lVar12 = local_d8;

        }

        _objc_release(lVar12);

        _objc_release(local_108);

      }

      _objc_release(lVar10);

      _objc_release(lVar9);

LAB_0020642c:

      _objc_release(uVar4);

      goto LAB_00206140;

    }

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

LAB_00206160:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




