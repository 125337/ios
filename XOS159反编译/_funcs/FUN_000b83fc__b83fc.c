// FUN_000b83fc @0xb83fc


uint FUN_000b83fc(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  int iVar6;

  int iVar7;

  uint uVar8;

  undefined8 uVar9;

  ulong uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  uint uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  undefined1 auVar22 [16];

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 local_90;

  undefined8 uStack_88;

  

  _objc_retain();

  if (param_5 != 0) {

    uVar9 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar10 = _objc_opt_isKindOfClass(param_5,uVar9);

    if ((uVar10 & 1) != 0) {

      _objc_retain(param_5);

      if (DAT_003e7b88 != -1) {

        FUN_0028f064();

      }

      if ((DAT_003e74dc & 1) == 0) {

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        iVar6 = FUN_002924c0(auVar22._0_8_,auVar22._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

        _objc_release(auVar22._0_8_);

        if (iVar6 == 0) {

          bVar2 = false;

        }

        else {

          bVar2 = true;

          DAT_003e74dc = 1;

        }

      }

      else {

        bVar2 = true;

      }

      FUN_000822c8(param_5);

      lVar11 = _objc_retainAutoreleasedReturnValue();

      if ((lVar11 == 0) || (uVar10 = FUN_002978a0(lVar11), (uVar10 & 1) != 0)) {

LAB_000b86fc:

        uVar8 = 0;

      }

      else {

        FUN_002a4880(lVar11);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar12 == 0) goto LAB_000b86fc;

        FUN_002a4880(lVar11);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00295600(lVar11);

        uVar15 = FUN_00293720(uVar9,extraout_x1,param_5);

        dVar19 = param_2;

        dVar20 = param_3;

        dVar21 = param_4;

        _objc_release(uVar9);

        uVar8 = 0;

        if ((0.0 < param_3) && (0.0 < param_4)) {

          bVar1 = false;

          if (DAT_003e7b80 != 0) {

            bVar1 = bVar2;

          }

          if (bVar1) {

            FUN_00083564(param_5);

            lVar12 = _objc_retainAutoreleasedReturnValue();

            if ((lVar12 == 0) || (uVar10 = FUN_002978a0(lVar12), (uVar10 & 1) != 0))

            goto LAB_000b8748;

            FUN_002a4880(lVar12);

            lVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar13 == 0) goto LAB_000b8748;

            FUN_002a4880(lVar12);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar12);

            uVar16 = FUN_00293720(uVar9,extraout_x1_00,param_5);

            _objc_release(uVar9);

            uVar8 = 0;

            if ((dVar20 <= 0.0) || (dVar21 <= 0.0)) goto LAB_000b88dc;

            FUN_000839f4(param_5);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            iVar6 = FUN_000b11cc(param_5);

            iVar7 = FUN_000b1410(uVar9);

            dVar17 = 1.0;

            if (iVar6 == 0) {

              dVar17 = 3.0;

            }

            if (iVar7 == 0) {

              dVar17 = 0.0;

            }

            uVar10 = FUN_002249d4(param_5);

            if ((uVar10 & 1) != 0) {

LAB_000b8698:

              if (dVar19 < param_2 + -0.5) goto LAB_000b88d4;

              dVar19 = (double)_CGRectGetMaxY(uVar16,dVar19,dVar20,dVar21);

              dVar20 = (double)_CGRectGetMaxY(uVar15,param_2,param_3,param_4);

              if (dVar20 + 0.5 < dVar17 + dVar19 + 8.0) goto LAB_000b88d4;

              _objc_release(uVar9);

              goto LAB_000b876c;

            }

            dVar18 = (double)_CGRectGetMaxY(uVar15,param_2,param_3,param_4);

            dVar18 = ((dVar18 + -8.0) - dVar17) - dVar21;

            if (dVar18 <= param_2) {

              dVar18 = param_2;

            }

            if (ABS(dVar19 - dVar18) <= 0.75) goto LAB_000b8698;

            goto LAB_000b88d4;

          }

          lVar12 = 0;

LAB_000b8748:

          if (bVar2) {

            uVar10 = FUN_0008336c(param_5);

            uVar14 = 0;

            uVar8 = 0;

            if ((uVar10 & 1) == 0) goto LAB_000b8770;

          }

          else {

LAB_000b876c:

            uVar14 = 1;

LAB_000b8770:

            uVar8 = FUN_000b77ac(param_5);

            if (uVar8 == 0) {

LAB_000b88bc:

              uVar8 = uVar14 | uVar8;

            }

            else {

              FUN_000839f4(param_5);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              uStack_98 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

              local_a0 = *(undefined8 *)PTR__CGRectZero_00388bf0;

              uStack_88 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

              local_90 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

              uVar10 = FUN_000b182c(param_5,uVar9,&local_a0,0);

              uVar5 = uStack_88;

              uVar4 = local_90;

              uVar3 = uStack_98;

              uVar16 = local_a0;

              if ((uVar10 & 1) == 0) {

                uVar10 = FUN_000b2c98(uVar9);

                if ((uVar10 & 1) != 0) {

LAB_000b88b4:

                  _objc_release(uVar9);

                  goto LAB_000b88bc;

                }

              }

              else {

                dVar19 = (double)_CGRectGetMinX(local_a0,uStack_98,local_90,uStack_88);

                dVar20 = (double)_CGRectGetMinX(uVar15,param_2,param_3,param_4);

                if (dVar20 + -1.0 <= dVar19) {

                  dVar19 = (double)_CGRectGetMinY(uVar16,uVar3,uVar4,uVar5);

                  dVar20 = (double)_CGRectGetMinY(uVar15,param_2,param_3,param_4);

                  if (dVar20 + -1.0 <= dVar19) {

                    dVar19 = (double)_CGRectGetMaxX(uVar16,uVar3,uVar4,uVar5);

                    dVar20 = (double)_CGRectGetMaxX(uVar15,param_2,param_3,param_4);

                    if (dVar19 <= dVar20 + 1.0) {

                      dVar19 = (double)_CGRectGetMaxY(uVar16,uVar3,uVar4,uVar5);

                      dVar20 = (double)_CGRectGetMaxY(uVar15,param_2,param_3,param_4);

                      if (dVar19 <= dVar20 + 1.0) goto LAB_000b88b4;

                    }

                  }

                }

              }

LAB_000b88d4:

              _objc_release(uVar9);

              uVar8 = 0;

            }

          }

LAB_000b88dc:

          _objc_release(lVar12);

        }

      }

      _objc_release(lVar11);

      _objc_release(param_5);

      goto LAB_000b8710;

    }

  }

  uVar8 = 0;

LAB_000b8710:

  _objc_release(param_5);

  return uVar8;

}




