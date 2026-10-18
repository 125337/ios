// FUN_001910c8 @0x1910c8


undefined1  [16] FUN_001910c8(long param_1)



{

  double *pdVar1;

  bool bVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  int iVar8;

  float fVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  undefined8 uVar13;

  undefined1 auVar14 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    dVar12 = 0.0;

    uVar13 = 0;

    goto LAB_00191238;

  }

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6eb0);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    FUN_0018da3c();

    auVar14 = _objc_opt_respondsToSelector(param_1,"viewModel");

    dVar12 = 0.0;

    uVar13 = 0;

    if ((auVar14._0_8_ & 1) != 0) {

      FUN_00299c80(param_1,auVar14._8_8_,"viewModel");

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 != 0) {

        uVar6 = FUN_00191330(lVar5);

        if ((DAT_003e95c8 == '\x01') && (iVar3 = FUN_00191434(lVar5), iVar3 != 0)) {

          auVar14 = _objc_opt_respondsToSelector(param_1,"getHeadImageView");

          if ((auVar14._0_8_ & 1) != 0) {

            FUN_00299c80(param_1,auVar14._8_8_,"getHeadImageView");

            lVar7 = _objc_retainAutoreleasedReturnValue();

            if (lVar7 != 0) {

              iVar3 = FUN_002978a0(lVar7);

              iVar8 = (int)uVar6;

              if (iVar3 == 0) {

                dVar10 = (double)FUN_0019156c(param_1,lVar7,uVar6,lVar5);

                bVar2 = iVar8 == 0;

                pdVar1 = &DAT_003e9638;

                if (bVar2) {

                  pdVar1 = &DAT_003e9630;

                }

                dVar12 = -2.0;

                if (bVar2) {

                  dVar12 = 2.0;

                }

                dVar11 = *pdVar1 - dVar10;

                if (bVar2) {

                  dVar11 = -(*pdVar1 - dVar10);

                }

                dVar12 = dVar12 + dVar11;

                uVar13 = 0;

              }

              else {

                dVar10 = DAT_003e9638;

                if (iVar8 == 0) {

                  dVar10 = DAT_003e9630;

                }

                dVar12 = DAT_003e9638;

                if (iVar8 == 0) {

                  dVar12 = -dVar10;

                }

                uVar13 = 0;

              }

              goto LAB_00191220;

            }

          }

        }

        else {

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e62f8);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          if (lVar7 != 0) {

            fVar9 = (float)FUN_00295480(lVar7);

            dVar12 = (double)fVar9;

            uVar13 = 0;

          }

LAB_00191220:

          _objc_release(lVar7);

        }

        _objc_release(lVar5);

      }

    }

  }

  else {

    fVar9 = (float)FUN_00295480(lVar4);

    dVar12 = (double)fVar9;

    uVar13 = 0;

  }

  _objc_release(lVar4);

LAB_00191238:

  _objc_release(param_1);

  auVar14._8_8_ = uVar13;

  auVar14._0_8_ = dVar12;

  return auVar14;

}




