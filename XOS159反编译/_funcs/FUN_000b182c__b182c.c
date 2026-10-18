// FUN_000b182c @0xb182c


undefined8

FUN_000b182c(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,long param_5,

            undefined8 param_6,undefined8 *param_7,long *param_8)



{

  undefined *puVar1;

  bool bVar2;

  bool bVar3;

  bool bVar4;

  int iVar5;

  uint uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  undefined1 auVar23 [16];

  undefined8 local_110;

  undefined8 uStack_108;

  double local_100;

  double dStack_f8;

  long local_e8;

  long local_e0;

  double local_d8;

  undefined8 local_d0;

  undefined8 uStack_c8;

  double local_c0;

  double dStack_b8;

  

  _objc_retain();

  _objc_retain(param_6);

  _objc_retain(param_5);

  if (param_5 == 0) {

LAB_000b1af0:

    _objc_release(param_5);

  }

  else {

    FUN_000839f4(param_5);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 == 0) {

      _objc_release(uVar7);

      goto LAB_000b1af0;

    }

    iVar5 = FUN_00298760(lVar8);

    _objc_release(lVar8);

    _objc_release(uVar7);

    puVar1 = PTR__CGRectNull_00388bd0;

    if (iVar5 != 0x22) goto LAB_000b1af0;

    lVar8 = 0;

    bVar2 = false;

    uVar7 = *(undefined8 *)PTR__CGRectNull_00388bd0;

    uVar17 = *(undefined8 *)(PTR__CGRectNull_00388bd0 + 8);

    dVar19 = *(double *)(PTR__CGRectNull_00388bd0 + 0x10);

    dVar21 = *(double *)(PTR__CGRectNull_00388bd0 + 0x18);

    do {

      FUN_000b3444(param_5,*(undefined8 *)((long)&PTR_s_m_voiceTransView_0038b078 + lVar8));

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_000b30dc(uVar9,param_5);

      uVar18 = param_2;

      dVar20 = param_3;

      dVar22 = param_4;

      if ((uVar10 & 1) != 0) {

        FUN_002925a0(uVar9);

        uVar15 = FUN_00293720(uVar9,extraout_x1,param_5);

        uVar18 = param_2;

        dVar20 = param_3;

        dVar22 = param_4;

        uVar10 = _CGRectIsNull();

        if ((uVar10 & 1) == 0) {

          uVar18 = param_2;

          dVar20 = param_3;

          dVar22 = param_4;

          uVar6 = _CGRectIsInfinite(uVar15);

          if (param_3 <= 0.5) {

            uVar6 = 1;

          }

          if (((uVar6 & 1) == 0) && (0.5 < param_4)) {

            uVar16 = extraout_x1_00;

            if (bVar2) {

              uVar15 = _CGRectUnion(uVar7);

              uVar16 = extraout_x1_01;

              param_2 = uVar17;

              uVar18 = uVar17;

              param_3 = dVar19;

              dVar20 = dVar19;

              param_4 = dVar21;

              dVar22 = dVar21;

            }

            dVar21 = param_4;

            dVar19 = param_3;

            uVar17 = param_2;

            uVar7 = uVar15;

            if (param_8 != (long *)0x0) {

              auVar23._8_8_ = uVar16;

              auVar23._0_8_ = *param_8;

              if (*param_8 == 0) {

                FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

                _objc_retainAutoreleasedReturnValue();

                auVar23 = _objc_autorelease();

                *param_8 = auVar23._0_8_;

              }

              FUN_00291240(auVar23._0_8_,auVar23._8_8_,uVar9);

            }

            bVar2 = true;

          }

        }

      }

      _objc_release(uVar9);

      lVar8 = lVar8 + 8;

      param_2 = uVar18;

      param_3 = dVar20;

      param_4 = dVar22;

    } while (lVar8 != 0x18);

    if ((bVar2) &&

       (uVar18 = uVar17, dVar20 = dVar19, dVar22 = dVar21, uVar10 = _CGRectIsNull(uVar7),

       (uVar10 & 1) == 0)) {

      uVar18 = uVar17;

      dVar20 = dVar19;

      dVar22 = dVar21;

      uVar6 = _CGRectIsInfinite(uVar7);

      if (dVar19 <= 0.5) {

        uVar6 = 1;

      }

      if (((uVar6 & 1) != 0) || (dVar21 <= 0.5)) goto LAB_000b1a20;

      if (param_7 != (undefined8 *)0x0) {

        *param_7 = uVar7;

        param_7[1] = uVar17;

        param_7[2] = dVar19;

        param_7[3] = dVar21;

      }

      _objc_release(param_5);

LAB_000b1ccc:

      uVar7 = 1;

      _objc_setAssociatedObject(param_6,PTR_LOOP_003e6548,0,1);

      goto LAB_000b1bd4;

    }

LAB_000b1a20:

    _objc_retain(param_5);

    FUN_000839f4(param_5);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 == 0) {

LAB_000b1c18:

      lVar8 = 0;

      bVar2 = false;

    }

    else {

      iVar5 = FUN_00298760(lVar8);

      _objc_release(lVar8);

      if (iVar5 != 0x22) goto LAB_000b1c18;

      _objc_getAssociatedObject(uVar7,PTR_LOOP_003e6540);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_002924e0();

      _objc_release(uVar17);

      if ((uVar10 & 1) == 0) goto LAB_000b1c18;

      FUN_000822c8(param_5);

      lVar11 = _objc_retainAutoreleasedReturnValue();

      if (DAT_003e7b10 != -1) {

        FUN_0028f028();

      }

      if (DAT_003e7b08 == 0) {

        lVar12 = 0;

      }

      else {

        FUN_00083564(param_5);

        lVar12 = _objc_retainAutoreleasedReturnValue();

      }

      uVar10 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

      if ((uVar10 & 1) == 0) {

        local_e8 = 0;

      }

      else {

        FUN_002959c0(param_5);

        local_e8 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_00084dd4(param_5);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      uVar17 = auVar23._8_8_;

      uVar9 = auVar23._0_8_;

      if (lVar11 != 0) {

        FUN_00291240(uVar9,uVar17,lVar11);

        uVar17 = extraout_x1_03;

      }

      if (lVar12 != 0) {

        FUN_00291240(uVar9,uVar17,lVar12);

        uVar17 = extraout_x1_04;

      }

      if (local_e8 != 0) {

        FUN_00291240(uVar9,uVar17,local_e8);

        uVar17 = extraout_x1_05;

      }

      if (lVar13 != 0) {

        FUN_00291240(uVar9,uVar17,lVar13);

      }

      lVar8 = 0;

      do {

        FUN_000b3444(param_5,*(undefined8 *)((long)&PTR_s_m_chatRoomNameLabel_0038b0b0 + lVar8));

        auVar23 = _objc_retainAutoreleasedReturnValue();

        lVar14 = auVar23._0_8_;

        if (lVar14 != 0) {

          FUN_00291240(uVar9,auVar23._8_8_,lVar14);

        }

        _objc_release(lVar14);

        lVar8 = lVar8 + 8;

      } while (lVar8 != 0x68);

      if (lVar11 == 0) {

        uVar15 = *(undefined8 *)puVar1;

        uVar17 = *(undefined8 *)(puVar1 + 8);

        dVar21 = *(double *)(puVar1 + 0x10);

        dVar19 = *(double *)(puVar1 + 0x18);

      }

      else {

        FUN_002925a0(lVar11);

        uVar15 = FUN_00293720(lVar11,extraout_x1_06,param_5);

        dVar19 = dVar22;

        dVar21 = dVar20;

        uVar17 = uVar18;

      }

      if (lVar12 == 0) {

        uVar16 = *(undefined8 *)puVar1;

        uVar18 = *(undefined8 *)(puVar1 + 8);

        dVar20 = *(double *)(puVar1 + 0x10);

        dVar22 = *(double *)(puVar1 + 0x18);

        local_110 = uVar16;

        uStack_108 = uVar18;

        local_100 = dVar20;

        dStack_f8 = dVar22;

      }

      else {

        FUN_002925a0(lVar12);

        uVar16 = FUN_00293720(lVar12,extraout_x1_07,param_5);

        local_110 = *(undefined8 *)puVar1;

        uStack_108 = *(undefined8 *)(puVar1 + 8);

        local_100 = *(double *)(puVar1 + 0x10);

        dStack_f8 = *(double *)(puVar1 + 0x18);

      }

      uVar10 = _CGRectIsNull(uVar15,uVar17,dVar21,dVar19);

      if (((uVar10 & 1) == 0) &&

         (uVar10 = _CGRectIsInfinite(uVar15,uVar17,dVar21,dVar19), (uVar10 & 1) == 0)) {

        bVar2 = false;

        bVar3 = true;

        bVar4 = false;

        if (0.5 < dVar21) {

          bVar2 = false;

          bVar3 = false;

          bVar4 = true;

          if (!NAN(dVar19)) {

            bVar2 = dVar19 < 0.5;

            bVar3 = dVar19 == 0.5;

            bVar4 = false;

          }

        }

        if (!bVar3 && bVar2 == bVar4) {

          local_110 = uVar15;

          uStack_108 = uVar17;

          local_100 = dVar21;

          dStack_f8 = dVar19;

        }

      }

      uVar10 = _CGRectIsNull(uVar16,uVar18,dVar20,dVar22);

      uVar17 = local_110;

      uVar15 = uStack_108;

      dVar19 = local_100;

      dVar21 = dStack_f8;

      if (((((uVar10 & 1) == 0) &&

           (uVar10 = _CGRectIsInfinite(uVar16,uVar18,dVar20,dVar22), (uVar10 & 1) == 0)) &&

          (0.5 < dVar20)) &&

         ((0.5 < dVar22 &&

          (uVar10 = _CGRectIsNull(local_110,uStack_108,local_100,dStack_f8), uVar17 = uVar16,

          uVar15 = uVar18, dVar19 = dVar20, dVar21 = dVar22, (uVar10 & 1) == 0)))) {

        uVar17 = _CGRectUnion(local_110,uStack_108,local_100,dStack_f8,uVar16,uVar18,dVar20,dVar22);

        uVar15 = uStack_108;

        dVar19 = local_100;

        dVar21 = dStack_f8;

      }

      uStack_c8 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

      local_d0 = *(undefined8 *)PTR__CGRectZero_00388bf0;

      dStack_b8 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

      local_c0 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

      local_e0 = 0;

      local_d8 = 0.0;

      FUN_000b3550(uVar17,uVar15,dVar19,dVar21,param_5,param_5,uVar9,lVar11,lVar12,0,&local_d0,

                   &local_d8,&local_e0);

      lVar14 = local_e0;

      _objc_retain(local_e0);

      bVar2 = 0.5 < dStack_b8 && (0.5 < local_c0 && 0.0 < local_d8);

      if (0.5 < dStack_b8 && (0.5 < local_c0 && 0.0 < local_d8)) {

        if (param_7 != (undefined8 *)0x0) {

          param_7[1] = uStack_c8;

          *param_7 = local_d0;

          param_7[3] = dStack_b8;

          param_7[2] = local_c0;

        }

        if (param_8 == (long *)0x0) goto LAB_000b1f74;

        _objc_retainAutorelease(lVar14);

        lVar8 = lVar14;

      }

      else {

LAB_000b1f74:

        lVar8 = 0;

      }

      _objc_release(lVar14);

      _objc_release(uVar9);

      _objc_release(lVar13);

      _objc_release(local_e8);

      _objc_release(lVar12);

      _objc_release(lVar11);

    }

    _objc_release(uVar7);

    _objc_release(param_5);

    if (param_8 == (long *)0x0) {

      lVar8 = 0;

    }

    else {

      _objc_retain(lVar8);

      bVar3 = false;

      if (lVar8 != 0) {

        bVar3 = bVar2;

      }

      if (bVar3) {

        FUN_00291dc0(&_OBJC_CLASS___NSArray,extraout_x1_02,lVar8);

        _objc_retainAutoreleasedReturnValue();

        lVar11 = _objc_autorelease();

        *param_8 = lVar11;

      }

    }

    _objc_release(lVar8);

    _objc_release(param_5);

    if (bVar2) goto LAB_000b1ccc;

  }

  dVar19 = (double)_CACurrentMediaTime();

  _objc_getAssociatedObject(param_6,PTR_LOOP_003e6548);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR_LOOP_003e6548;

  if (lVar8 == 0) {

    FUN_002993a0(dVar19,&_OBJC_CLASS___NSNumber);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_6,puVar1,uVar7,1);

    _objc_release(uVar7);

    dVar21 = dVar19;

  }

  else {

    dVar21 = (double)FUN_00294860(lVar8);

  }

  if (0.15 <= dVar19 - dVar21) {

    _objc_getAssociatedObject(param_6,PTR_LOOP_003e6570);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar10 = FUN_002924e0();

    _objc_release(uVar7);

    if ((uVar10 & 1) == 0) {

      _objc_setAssociatedObject(param_6,PTR_LOOP_003e6570,PTR____kCFBooleanTrue_00388320,1);

    }

  }

  _objc_release(lVar8);

  uVar7 = 0;

LAB_000b1bd4:

  _objc_release(param_6);

  _objc_release(param_5);

  return uVar7;

}




