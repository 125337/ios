// FUN_0019156c @0x19156c


undefined1  [16]

FUN_0019156c(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,long param_5,

            long param_6,int param_7,undefined8 param_8)



{

  bool bVar1;

  char cVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  float fVar8;

  double dVar9;

  undefined8 uVar10;

  double dVar11;

  double dVar12;

  undefined8 uVar13;

  undefined1 auVar14 [16];

  

  _objc_retain();

  _objc_retain(param_6);

  _objc_retain(param_8);

  if ((param_7 == 0) || (uVar3 = FUN_0019efe8(param_8), (uVar3 & 1) == 0)) {

    FUN_0019f0a4();

  }

  else {

    _objc_retain(param_5);

    _objc_retain(param_6);

    if ((param_5 == 0) || (param_6 == 0)) {

LAB_00191764:

      _objc_release(param_6);

      _objc_release(param_5);

    }

    else {

      FUN_002a4880(param_6);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar4 == 0) goto LAB_00191764;

      FUN_000822c8(param_5);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if ((lVar4 == 0) || (lVar4 == param_6)) goto LAB_0019175c;

      FUN_002a4880(lVar4);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if ((lVar5 != 0) && (uVar3 = FUN_002978a0(lVar4), (uVar3 & 1) == 0)) {

        dVar9 = (double)FUN_002916a0(lVar4);

        _objc_release(lVar5);

        if (0.01 <= dVar9) {

          FUN_002a4880(lVar4);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00295600(lVar4);

          uVar10 = FUN_00293720(uVar6,extraout_x1,param_5);

          uVar13 = param_2;

          dVar9 = param_3;

          dVar12 = param_4;

          _objc_release(uVar6);

          if ((1.0 < param_3) && (1.0 < param_4)) {

            FUN_002a4880(param_6);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(param_6);

            dVar11 = (double)FUN_00293720(uVar6,extraout_x1_00,param_5);

            _objc_release(uVar6);

            if ((1.0 < dVar9) && (1.0 < dVar12)) {

              _objc_getAssociatedObject(param_6,PTR_LOOP_003e6ec8);

              lVar5 = _objc_retainAutoreleasedReturnValue();

              if (lVar5 != 0) {

                fVar8 = (float)FUN_00295480(lVar5);

                dVar11 = dVar11 + ((double)fVar8 - dVar11);

              }

              dVar9 = (double)_CGRectGetMaxX(dVar11,uVar13,dVar9,dVar12);

              dVar12 = (double)_CGRectGetMaxX(uVar10,param_2,param_3,param_4);

              _objc_getAssociatedObject(param_5,PTR_LOOP_003e62f8);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              dVar11 = dVar9 - dVar12;

              uVar13 = 0;

              if (lVar7 == 0) {

joined_r0x0019196c:

                uVar6 = uVar13;

                bVar1 = false;

                uVar13 = 0;

                dVar12 = 46.0;

                if (20.0 <= dVar11) {

                  bVar1 = false;

                  dVar9 = dVar11;

                  dVar12 = 46.0;

                  uVar13 = 0;

                  if (dVar11 <= 100.0) goto LAB_00191984;

                }

              }

              else {

                fVar8 = (float)FUN_00295480(lVar7);

                dVar9 = dVar9 - (dVar12 - (double)fVar8);

                uVar6 = 0;

                if ((dVar9 < 20.0) || (100.0 < dVar9)) goto joined_r0x0019196c;

LAB_00191984:

                bVar1 = true;

                dVar12 = dVar9;

                uVar13 = uVar6;

              }

              _objc_release(lVar7);

              goto LAB_0019164c;

            }

          }

        }

LAB_0019175c:

        _objc_release(lVar4);

        goto LAB_00191764;

      }

      bVar1 = false;

      dVar12 = 46.0;

      uVar13 = 0;

LAB_0019164c:

      _objc_release(lVar5);

      _objc_release(lVar4);

      _objc_release(param_6);

      _objc_release(param_5);

      if (bVar1) {

        _objc_retain(param_5);

        if ((20.0 <= dVar12) && (dVar12 <= 100.0)) {

          FUN_0019f0a4();

          cVar2 = DAT_003e9658;

          DAT_003e9658 = '\x01';

          if ((cVar2 != '\x01') ||

             (dVar9 = DAT_003e9660 - dVar12, DAT_003e9660 = dVar12, 0.25 < ABS(dVar9))) {

            DAT_003e9660 = dVar12;

            FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_0029e500((float)dVar12,auVar14._0_8_,auVar14._8_8_,&cf_aabTextBaselineGapSelf);

            _objc_release(auVar14._0_8_);

            FUN_0019f170(param_5);

            lVar4 = _objc_retainAutoreleasedReturnValue();

            if (lVar4 != 0) {

              FUN_0019f1fc(lVar4);

            }

            _objc_release(lVar4);

          }

        }

        _objc_release(param_5);

        goto LAB_00191798;

      }

    }

    FUN_0019f0a4();

  }

  uVar13 = 0;

  dVar12 = DAT_003e9660;

  if (DAT_003e9658 == '\0') {

    dVar12 = 46.0;

    uVar13 = 0;

  }

LAB_00191798:

  _objc_release(param_8);

  _objc_release(param_6);

  _objc_release(param_5);

  auVar14._8_8_ = uVar13;

  auVar14._0_8_ = dVar12;

  return auVar14;

}




