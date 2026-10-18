// FUN_0022e74c @0x22e74c


undefined8

FUN_0022e74c(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5,

            long param_6)



{

  int iVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar7;

  float fVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  

  _objc_retain();

  _objc_retain(param_6);

  uVar7 = 0;

  if ((((param_5 == 0) || (param_6 == 0)) || (uVar7 = 0, DAT_003eaf98 != '\x01')) ||

     ((DAT_003eafb0 & 1) == 0)) goto LAB_0022ea50;

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e7168);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 == 0) || (fVar8 = (float)FUN_00295480(lVar2), fVar8 <= 0.5)) {

LAB_0022e834:

    uVar7 = 0;

  }

  else {

    _objc_retain(param_5);

    if (DAT_003eb0a0 != -1) {

      FUN_0028fbbc();

    }

    if (DAT_003eb098 == 0) {

      _objc_release(param_5);

      uVar7 = extraout_x1_00;

    }

    else {

      FUN_00083134(param_5);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(param_5);

      uVar7 = extraout_x1;

      if (lVar3 == 0) goto LAB_0022e834;

    }

    FUN_00298440(param_6,uVar7,param_5);

    _objc_retain(param_5);

    lVar3 = 0;

    do {

      FUN_0022a9c4(param_5,*(undefined8 *)((long)&PTR_s_m_playingImageView_0038f850 + lVar3));

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) {

        auVar14 = FUN_002978a0(lVar4);

        if (((auVar14._0_8_ & 1) == 0) &&

           (uVar5 = FUN_00297700(lVar4,auVar14._8_8_,param_5), (uVar5 & 1) != 0)) {

          FUN_002925a0(lVar4);

          FUN_00293720(lVar4,extraout_x1_01,param_5);

          if ((0.0 < param_3) && (0.0 < param_4)) {

            _CGRectInset();

            uVar5 = _CGRectContainsPoint();

            if ((uVar5 & 1) != 0) {

              uVar7 = 1;

              goto LAB_0022ea38;

            }

          }

        }

      }

      _objc_release(lVar4);

      lVar3 = lVar3 + 8;

    } while (lVar3 != 0x18);

    FUN_000822c8(param_5);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

LAB_0022ea34:

      uVar7 = 0;

    }

    else {

      auVar14 = FUN_002978a0(lVar4);

      if (((auVar14._0_8_ & 1) != 0) ||

         (iVar1 = FUN_00297700(lVar4,auVar14._8_8_,param_5), iVar1 == 0)) goto LAB_0022ea34;

      FUN_002a4880(lVar4);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00295600(lVar4);

      uVar9 = FUN_00293720(uVar7,extraout_x1_02,param_5);

      dVar11 = param_2;

      dVar12 = param_3;

      dVar13 = param_4;

      _objc_release(uVar7);

      uVar7 = 0;

      if ((0.0 < param_3) && (0.0 < param_4)) {

        if (DAT_003eb0b0 != -1) {

          FUN_0028fbd0();

        }

        if (DAT_003eb0a8 == 0) {

          lVar3 = 0;

LAB_0022ea98:

          dVar11 = param_4;

          if ((double)fVar8 + 4.0 <= param_4) {

            dVar11 = (double)fVar8 + 4.0;

          }

          param_2 = param_2 + dVar11;

          param_4 = param_4 - dVar11;

        }

        else {

          FUN_00083134(param_5);

          lVar3 = _objc_retainAutoreleasedReturnValue();

          if (lVar3 == 0) goto LAB_0022ea98;

          FUN_002a4880(lVar3);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar6 == 0) goto LAB_0022ea98;

          FUN_002a4880(lVar3);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          FUN_00295600(lVar3);

          uVar10 = FUN_00293720(uVar7,extraout_x1_03,param_5);

          _objc_release(uVar7);

          dVar11 = (double)_CGRectGetMaxY(uVar10,dVar11,dVar12,dVar13);

          if (param_2 < dVar11 + -0.5) goto LAB_0022ea98;

        }

        _CGRectInset(uVar9,param_2,param_3,param_4,0xc020000000000000,0xc020000000000000);

        uVar7 = 0;

        if ((0.0 < param_3) && (0.0 < param_4)) {

          uVar7 = _CGRectContainsPoint();

        }

        _objc_release(lVar3);

      }

    }

LAB_0022ea38:

    _objc_release(lVar4);

    _objc_release(param_5);

  }

  _objc_release(lVar2);

LAB_0022ea50:

  _objc_release(param_6);

  _objc_release(param_5);

  return uVar7;

}




