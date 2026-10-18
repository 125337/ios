// FUN_000fdee0 @0xfdee0


void FUN_000fdee0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)



{

  ulong uVar1;

  byte bVar2;

  long lVar3;

  undefined **ppuVar4;

  uint uVar5;

  bool bVar6;

  ulong uVar7;

  int iVar8;

  uint uVar9;

  long lVar10;

  long lVar11;

  ulong uVar12;

  undefined8 uVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  undefined8 uVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  undefined8 uVar22;

  long lVar23;

  long lVar24;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  byte bVar25;

  ulong uVar26;

  cfstringStruct *pcVar27;

  cfstringStruct *pcVar28;

  byte bVar29;

  double dVar30;

  double dVar31;

  undefined1 auVar32 [16];

  undefined8 local_a0;

  long local_90;

  long local_88;

  

  FUN_000ff404();

  FUN_000ff4a8();

  lVar10 = _objc_retainAutoreleasedReturnValue();

  if (lVar10 == 0) goto LAB_000fe72c;

  FUN_002a6280(param_4);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (((lVar11 != 0) &&

      (uVar12 = _objc_opt_respondsToSelector(lVar11,"isSender"), (uVar12 & 1) != 0)) &&

     (((DAT_003e7ed8 & 1) != 0 || (uVar12 = FUN_000ff8f8(lVar11), (uVar12 & 1) == 0)))) {

    uVar13 = FUN_00297a80(lVar11);

    FUN_000822c8(param_4);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if ((lVar14 != 0) && (FUN_00295600(lVar14), 0.0 < param_3)) {

      FUN_000ffc74(lVar11);

      lVar15 = _objc_retainAutoreleasedReturnValue();

      lVar3 = lVar11;

      if (lVar15 != 0) {

        lVar3 = lVar15;

      }

      _objc_retain(lVar3);

      _objc_getAssociatedObject(lVar3,PTR_LOOP_003e68a8);

      lVar16 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(lVar3,PTR_LOOP_003e68b0);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      lVar18 = FUN_002a5a20();

      _objc_release(uVar17);

      _objc_retain(param_4);

      uVar17 = extraout_x1;

      while (param_4 != 0) {

        uVar17 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

        auVar32 = _objc_opt_isKindOfClass(param_4,uVar17);

        if ((auVar32._0_8_ & 1) != 0) {

          FUN_002a6080(param_4,auVar32._8_8_,&cf_m_arrMessageNodeData);

          auVar32 = _objc_retainAutoreleasedReturnValue();

          uVar17 = auVar32._8_8_;

          local_88 = auVar32._0_8_;

          if (local_88 != 0) {

            auVar32 = FUN_00293860(local_88);

            uVar17 = auVar32._8_8_;

            lVar19 = auVar32._0_8_;

            if (lVar19 == 0) {

              bVar25 = 0;

              local_90 = 0;

            }

            else {

              FUN_00295440(local_88);

              lVar23 = _objc_retainAutoreleasedReturnValue();

              FUN_00297d80(local_88);

              lVar24 = _objc_retainAutoreleasedReturnValue();

              dVar30 = (double)_CFAbsoluteTimeGetCurrent();

              if ((DAT_003e7ea8 == 0) || (lVar19 != DAT_003e7ee0)) {

LAB_000fe12c:

                FUN_00100028(local_88);

                local_90 = _objc_retainAutoreleasedReturnValue();

                _objc_retain();

                lVar20 = DAT_003e7ea8;

                DAT_003e7ea8 = local_90;

                _objc_release(lVar20);

                DAT_003e7ee0 = lVar19;

                _objc_storeWeak(&DAT_003e7e98,lVar23);

                _objc_storeWeak(&DAT_003e7ea0,lVar24);

                DAT_003e7ee8 = dVar30;

              }

              else {

                lVar20 = _objc_loadWeakRetained(&DAT_003e7e98);

                if (lVar23 != lVar20) {

LAB_000fe11c:

                  _objc_release(lVar20);

                  goto LAB_000fe12c;

                }

                lVar21 = _objc_loadWeakRetained(&DAT_003e7ea0);

                if (lVar24 != lVar21) {

                  _objc_release();

                  goto LAB_000fe11c;

                }

                dVar31 = dVar30 - DAT_003e7ee8;

                _objc_release();

                _objc_release(lVar20);

                if (0.5 <= dVar31) goto LAB_000fe12c;

                local_90 = DAT_003e7ea8;

                _objc_retain();

              }

              _objc_release(lVar24);

              _objc_release(lVar23);

              bVar25 = 1;

              uVar17 = extraout_x1_01;

            }

            bVar29 = 1;

            goto LAB_000fe250;

          }

          break;

        }

        FUN_00299220(param_4);

        lVar19 = _objc_retainAutoreleasedReturnValue();

        _objc_release(param_4);

        uVar17 = extraout_x1_00;

        param_4 = lVar19;

      }

      lVar19 = 0;

      bVar25 = 0;

      local_90 = 0;

      local_88 = 0;

      bVar29 = 0;

LAB_000fe250:

      if (((lVar16 == 0) || (iVar8 = FUN_00297820(lVar16,uVar17,DAT_003e7e90), iVar8 == 0)) ||

         ((local_90 != 0 && (iVar8 = FUN_00297820(local_90,extraout_x1_02,DAT_003e7e90), iVar8 == 0)

          ))) {

        bVar25 = 1;

      }

      else {

        bVar2 = 0;

        if (lVar18 != 0) {

          bVar2 = bVar25;

        }

        bVar25 = 0;

        if (lVar18 != lVar19) {

          bVar25 = bVar2;

        }

      }

      if (((bool)(bVar29 & bVar25)) && (lVar18 = FUN_00293860(local_88), lVar18 != 0)) {

        FUN_001003e0(local_88,local_90);

      }

      _objc_getAssociatedObject(lVar3,PTR_LOOP_003e6860);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      uVar22 = FUN_002a5a40();

      _objc_release(uVar17);

      uVar12 = _objc_opt_respondsToSelector(lVar11,"bgBubbleInfo");

      if ((uVar12 & 1) == 0) {

        local_a0 = 0;

      }

      else {

        FUN_002923a0(lVar11);

        lVar18 = _objc_retainAutoreleasedReturnValue();

        if (lVar18 == 0) {

          local_a0 = 0;

        }

        else {

          local_a0 = FUN_0029a100(lVar18);

        }

        _objc_release(lVar18);

      }

      if (DAT_003e7f98 == 0) {

        DAT_003e7f98 = _objc_getClass("TextMessageSubViewModel");

      }

      auVar32 = _objc_opt_isKindOfClass(lVar11);

      if ((auVar32._0_8_ & 1) == 0) {

LAB_000fe650:

        uVar26 = 0;

        uVar12 = 0;

LAB_000fe658:

        FUN_00101340(uVar13,uVar22,local_a0);

        lVar18 = _objc_retainAutoreleasedReturnValue();

        bVar6 = false;

        uVar1 = uVar26;

      }

      else {

        FUN_002a6080(lVar11,auVar32._8_8_,&cf_parentModel);

        lVar18 = _objc_retainAutoreleasedReturnValue();

        if (lVar18 == 0) {

LAB_000fe648:

          _objc_release(lVar18);

          goto LAB_000fe650;

        }

        auVar32 = _objc_opt_respondsToSelector(lVar18,"subViewModels");

        if ((auVar32._0_8_ & 1) == 0) goto LAB_000fe648;

        FUN_002a6080(lVar18,auVar32._8_8_,&cf_subViewModels);

        lVar19 = _objc_retainAutoreleasedReturnValue();

        if ((lVar19 == 0) || (uVar12 = FUN_00293860(lVar19), uVar12 < 2)) {

          _objc_release(lVar19);

          goto LAB_000fe648;

        }

        _objc_getAssociatedObject(lVar18,PTR_LOOP_003e6860);

        uVar17 = _objc_retainAutoreleasedReturnValue();

        uVar12 = FUN_002a5a40();

        _objc_release(uVar17);

        if (uVar12 == 0) {

          _objc_getAssociatedObject(lVar11,PTR_LOOP_003e6860);

          uVar17 = _objc_retainAutoreleasedReturnValue();

          uVar12 = FUN_002a5a40();

          _objc_release(uVar17);

        }

        FUN_00295440(lVar19);

        lVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_00297d80(lVar19);

        lVar24 = _objc_retainAutoreleasedReturnValue();

        uVar26 = (ulong)(lVar11 != lVar24);

        uVar1 = 2;

        if (lVar11 == lVar24) {

          uVar1 = 3;

        }

        _objc_release();

        _objc_release(lVar23);

        _objc_release(lVar19);

        _objc_release(lVar18);

        uVar7 = uVar1;

        if ((lVar11 == lVar23) && (uVar1 = 1, uVar7 = uVar26, lVar11 == lVar24)) goto LAB_000fe658;

        uVar26 = DAT_003e6868;

        if (0 < (long)uVar12) {

          uVar26 = uVar12;

        }

        uVar9 = FUN_001017a8();

        uVar26 = uVar26 - 1;

        iVar8 = (int)uVar13;

        if (uVar9 == 0) {

          ppuVar4 = &PTR_cf_right_top_png_0038c6a0;

          if (iVar8 == 0) {

            ppuVar4 = &PTR_cf_left_top_png_0038c6b8;

          }

          pcVar27 = &cf_right_single_png;

          if (iVar8 == 0) {

            pcVar27 = &cf_left_single_png;

          }

        }

        else {

          ppuVar4 = &PTR_cf_right_top_dark_png_0038c670;

          if (iVar8 == 0) {

            ppuVar4 = &PTR_cf_left_top_dark_png_0038c688;

          }

          pcVar27 = &cf_right_single_dark_png;

          if (iVar8 == 0) {

            pcVar27 = &cf_left_single_dark_png;

          }

        }

        if (uVar26 < 3) {

          pcVar27 = (cfstringStruct *)ppuVar4[uVar26];

        }

        FUN_00102708(pcVar27);

        lVar19 = _objc_retainAutoreleasedReturnValue();

        uVar5 = uVar9 ^ 1;

        if (lVar19 != 0) {

          uVar5 = 1;

        }

        if ((uVar5 & 1) == 0) {

          pcVar27 = &cf_right_single_png;

          if (iVar8 == 0) {

            pcVar27 = &cf_left_single_png;

          }

          if (uVar26 < 3) {

            ppuVar4 = &PTR_cf_right_top_png_0038c6a0;

            if (iVar8 == 0) {

              ppuVar4 = &PTR_cf_left_top_png_0038c6b8;

            }

            pcVar27 = (cfstringStruct *)ppuVar4[uVar26];

          }

          FUN_00102708(pcVar27);

          lVar19 = _objc_retainAutoreleasedReturnValue();

        }

        if (lVar19 == 0) {

          pcVar28 = pcVar27;

          if (uVar9 != 0) {

            pcVar27 = &cf_right_top_dark_png;

            if (iVar8 == 0) {

              pcVar27 = &cf_left_top_dark_png;

            }

            _objc_retain(pcVar27);

            FUN_00102708(pcVar27);

            lVar19 = _objc_retainAutoreleasedReturnValue();

            pcVar28 = pcVar27;

            if (lVar19 != 0) goto LAB_000fe610;

          }

          pcVar27 = &cf_right_top_png;

          if (iVar8 == 0) {

            pcVar27 = &cf_left_top_png;

          }

          _objc_retain(pcVar27);

          _objc_release(pcVar28);

          FUN_00102708(pcVar27);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          if (lVar19 != 0) goto LAB_000fe610;

          FUN_00101340(uVar13,uVar12,0);

          lVar18 = _objc_retainAutoreleasedReturnValue();

        }

        else {

LAB_000fe610:

          FUN_00102ba0(lVar19,uVar13,uVar7 - 1);

          lVar23 = _objc_retainAutoreleasedReturnValue();

          if (lVar23 == 0) {

            FUN_00101340(uVar13,uVar12,0);

            lVar18 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            _objc_retain(lVar23);

            lVar18 = lVar23;

          }

          _objc_release(lVar23);

          _objc_release(lVar19);

        }

        _objc_release(pcVar27);

        bVar6 = true;

      }

      if (lVar18 != 0) {

        FUN_00296480(lVar14);

        lVar19 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar19 != lVar18) {

          FUN_0029ec00(lVar14,extraout_x1_03,lVar18);

        }

      }

      if (bVar6) {

        if ((uVar1 != 1) || (1 < uVar12)) {

          if ((uVar12 != 3 || uVar1 != 3) && (uVar1 != 1 || uVar12 != 2)) {

            FUN_00110a48(lVar14);

            goto LAB_000fe6e4;

          }

        }

        FUN_00110b08(lVar14,uVar13,uVar12,0);

      }

      else {

        FUN_00110b08(lVar14,uVar13,uVar22,local_a0);

      }

LAB_000fe6e4:

      _objc_release(lVar18);

      _objc_release(local_90);

      _objc_release(local_88);

      _objc_release(param_4);

      _objc_release(lVar16);

      _objc_release(lVar3);

      _objc_release(lVar15);

    }

    _objc_release(lVar14);

  }

  _objc_release(lVar11);

LAB_000fe72c:

  _objc_release(lVar10);

  return;

}




