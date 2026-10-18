// FUN_00108768 @0x108768


void FUN_00108768(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  double *pdVar1;

  undefined8 *puVar2;

  undefined *puVar3;

  undefined8 uVar4;

  bool bVar5;

  uint uVar6;

  uint uVar8;

  uint uVar9;

  int iVar10;

  uint uVar7;

  long lVar11;

  ulong uVar12;

  long lVar13;

  undefined8 uVar14;

  long lVar15;

  undefined8 uVar16;

  long lVar17;

  long lVar18;

  ulong uVar19;

  long lVar20;

  long lVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  long lVar24;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  long extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  long lVar25;

  undefined8 extraout_x1_26;

  long extraout_x1_27;

  long extraout_x1_28;

  undefined8 extraout_x1_29;

  undefined8 extraout_x1_30;

  undefined8 extraout_x1_31;

  undefined8 extraout_x1_32;

  undefined8 extraout_x1_33;

  undefined8 extraout_x1_34;

  undefined8 extraout_x1_35;

  undefined8 extraout_x1_36;

  undefined8 extraout_x1_37;

  undefined8 extraout_x1_38;

  undefined8 extraout_x1_39;

  undefined8 extraout_x1_40;

  undefined8 extraout_x1_41;

  undefined8 extraout_x1_42;

  undefined8 extraout_x1_43;

  undefined8 extraout_x1_44;

  undefined8 extraout_x1_45;

  undefined8 extraout_x1_46;

  undefined8 extraout_x1_47;

  undefined8 extraout_x1_48;

  undefined8 extraout_x1_49;

  undefined8 extraout_x1_50;

  undefined8 extraout_x1_51;

  undefined8 extraout_x1_52;

  undefined8 extraout_x1_53;

  undefined8 extraout_x1_54;

  undefined8 extraout_x1_55;

  undefined8 extraout_x1_56;

  undefined8 extraout_x1_57;

  undefined8 extraout_x1_58;

  undefined8 extraout_x1_59;

  undefined8 extraout_x1_60;

  undefined8 extraout_x1_61;

  undefined8 extraout_x1_62;

  ulong uVar26;

  undefined8 uVar27;

  byte bVar28;

  undefined1 uVar29;

  undefined8 uVar30;

  long lVar31;

  float fVar32;

  float fVar33;

  float fVar34;

  float fVar35;

  double dVar36;

  double dVar37;

  double dVar38;

  double dVar39;

  double dVar40;

  double dVar41;

  double dVar42;

  double dVar43;

  undefined1 auVar44 [16];

  undefined1 auVar45 [16];

  long local_298;

  double local_280;

  long lStack_278;

  double local_270;

  double dStack_268;

  undefined8 local_260;

  long lStack_258;

  long *local_250;

  undefined8 uStack_248;

  undefined8 local_240;

  undefined8 uStack_238;

  undefined8 uStack_230;

  undefined8 uStack_228;

  undefined8 local_220;

  long lStack_218;

  long *local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined1 auStack_1b0 [128];

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e8190)();

  FUN_001079e0();

  if (DAT_003e8119 != '\x01' || DAT_003e8128 == 4) goto LAB_0010a7e4;

  FUN_002a6280(param_5);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (lVar11 != 0) {

    if (DAT_003e81d8 == 0) {

      DAT_003e81d8 = _objc_getClass("TextMessageViewModel");

    }

    if (DAT_003e81e0 == 0) {

      DAT_003e81e0 = _objc_getClass("TextMessageSubViewModel");

    }

    uVar12 = _objc_opt_isKindOfClass(lVar11,DAT_003e81d8);

    if ((uVar12 & 1) == 0) {

      uVar9 = _objc_opt_isKindOfClass(lVar11,DAT_003e81e0);

      if (DAT_003e8128 == 0 && (uVar9 & 1) == 0) {

        FUN_000822c8(param_5);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        puVar3 = PTR_LOOP_003e68f8;

        uVar14 = _objc_opt_class(&_OBJC_CLASS___UILabel);

        FUN_0010bf34(param_5,uVar16,puVar3,0x15b31,uVar14);

        lVar13 = _objc_retainAutoreleasedReturnValue();

        puVar3 = PTR_LOOP_003e6900;

        uVar14 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

        FUN_0010bf34(param_5,uVar16,puVar3,0x15b32,uVar14);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar14 = auVar44._8_8_;

        lVar17 = auVar44._0_8_;

        if (lVar13 != 0) {

          FUN_0029e8a0(lVar13,uVar14,1);

          uVar14 = extraout_x1;

        }

        if (lVar17 != 0) {

          FUN_0029e8a0(lVar17,uVar14,1);

        }

        _objc_release(lVar17);

        _objc_release(lVar13);

        _objc_release(uVar16);

        goto LAB_0010a7dc;

      }

    }

    else {

      uVar9 = 1;

    }

    if (DAT_003e81e8 == 0) {

      DAT_003e81e8 = _objc_getClass("ImageMessageCellView");

    }

    if (DAT_003e81f0 == 0) {

      DAT_003e81f0 = _objc_getClass("WCPayBaseMessageCellView");

      if (DAT_003e81e8 == 0) goto LAB_001088f0;

LAB_001088ac:

      uVar6 = _objc_opt_isKindOfClass(param_5,DAT_003e81e8);

      uVar7 = uVar6;

      if (DAT_003e81f0 != 0) goto LAB_001088c4;

LAB_001088f8:

      uVar6 = uVar7;

      uVar7 = 0;

    }

    else {

      if (DAT_003e81e8 != 0) goto LAB_001088ac;

LAB_001088f0:

      uVar6 = 0;

      uVar7 = 0;

      if (DAT_003e81f0 == 0) goto LAB_001088f8;

LAB_001088c4:

      uVar7 = _objc_opt_isKindOfClass(param_5);

    }

    if ((0 < (long)DAT_003e8128 && ((uVar9 | uVar6) & 1) == 0) && ((uVar7 & 1) == 0)) {

      FUN_000822c8(param_5);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      if ((lVar13 != 0) && (FUN_00295600(lVar13), param_3 <= 0.0)) {

        _objc_release(lVar13);

        lVar13 = 0;

      }

      if (DAT_003e8200 != -1) {

        FUN_0028f234();

      }

      uVar14 = _object_getClass(param_5);

      _CFDictionaryGetValue(DAT_003e81f8,uVar14);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      lVar17 = auVar44._0_8_;

      if ((lVar13 == 0) && (lVar17 != 0)) {

        FUN_002a6080(param_5,auVar44._8_8_,lVar17);

        lVar15 = _objc_retainAutoreleasedReturnValue();

        uVar16 = _objc_opt_class(&_OBJC_CLASS___UIView);

        uVar12 = _objc_opt_isKindOfClass(lVar15,uVar16);

        if (((uVar12 & 1) == 0) || (FUN_00295600(lVar15), param_3 <= 0.0)) {

          lVar13 = 0;

        }

        else {

          _objc_retain(lVar15);

          lVar13 = lVar15;

        }

        _objc_release(lVar15);

      }

      if (lVar13 == 0) {

        if (DAT_003e8210 != -1) {

          FUN_0028f248();

        }

        uVar16 = DAT_003e8208;

        uStack_1f8 = 0;

        local_200 = 0;

        uStack_1e8 = 0;

        uStack_1f0 = 0;

        lStack_218 = 0;

        local_220 = 0;

        uStack_208 = 0;

        local_210 = (long *)0x0;

        _objc_retain(DAT_003e8208);

        auVar44 = FUN_00293880(uVar16,extraout_x1_00,&local_220,auStack_130,0x10);

        if (auVar44._0_8_ == 0) {

          _objc_release(uVar16);

          lVar13 = 0;

        }

        else {

          lVar13 = 0;

          lVar15 = *local_210;

          do {

            uVar22 = auVar44._8_8_;

            lVar18 = 0;

            do {

              if (*local_210 != lVar15) {

                _objc_enumerationMutation(uVar16);

                uVar22 = extraout_x1_01;

              }

              uVar27 = *(undefined8 *)(lStack_218 + lVar18 * 8);

              FUN_002a6080(param_5,uVar22,uVar27);

              lVar24 = _objc_retainAutoreleasedReturnValue();

              uVar22 = _objc_opt_class(&_OBJC_CLASS___UIView);

              uVar12 = _objc_opt_isKindOfClass(lVar24,uVar22);

              if (((uVar12 & 1) != 0) && (FUN_00295600(lVar24), 0.0 < param_3)) {

                _objc_retain(lVar24);

                _objc_release(0);

                _CFDictionarySetValue(DAT_003e81f8,uVar14,uVar27);

                _objc_release(lVar24);

                lVar13 = lVar24;

                goto LAB_00108cbc;

              }

              _objc_release(lVar24);

              lVar18 = lVar18 + 1;

              uVar22 = extraout_x1_02;

            } while (auVar44._0_8_ != lVar18);

            auVar44 = FUN_00293880(uVar16,extraout_x1_02,&local_220,auStack_130,0x10);

          } while (auVar44._0_8_ != 0);

LAB_00108cbc:

          _objc_release(uVar16);

          if (lVar13 != 0) goto LAB_00108ac4;

        }

LAB_00108cd8:

        uStack_238 = 0;

        local_240 = 0;

        uStack_228 = 0;

        uStack_230 = 0;

        lStack_258 = 0;

        local_260 = 0;

        uStack_248 = 0;

        local_250 = (long *)0x0;

        FUN_002a4840(param_5);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar14 = auVar44._0_8_;

        lVar15 = FUN_00293880(uVar14,auVar44._8_8_,&local_260,auStack_1b0,0x10);

        if (lVar15 == 0) {

          _objc_release(uVar14);

        }

        else {

          lVar18 = 0;

          lVar24 = *local_250;

          dVar36 = 0.0;

          do {

            lVar31 = 0;

            do {

              dVar38 = param_3;

              if (*local_250 != lVar24) {

                _objc_enumerationMutation(uVar14);

                dVar38 = param_3;

              }

              lVar21 = *(long *)(lStack_258 + lVar31 * 8);

              FUN_00295600(lVar21);

              uVar16 = extraout_x1_03;

              param_3 = dVar38;

              if ((20.0 < dVar38) &&

                 (FUN_00295600(lVar21), uVar16 = extraout_x1_04, param_3 = dVar38, 20.0 < param_4))

              {

                FUN_00295600(lVar21);

                param_3 = dVar38;

                FUN_00295600(lVar21);

                dVar38 = dVar38 * param_4;

                uVar16 = extraout_x1_05;

                if (dVar36 < dVar38) {

                  _objc_retain(lVar21);

                  _objc_release(lVar18);

                  uVar16 = extraout_x1_06;

                  lVar18 = lVar21;

                  dVar36 = dVar38;

                }

              }

              lVar31 = lVar31 + 1;

            } while (lVar15 != lVar31);

            lVar15 = FUN_00293880(uVar14,uVar16,&local_260,auStack_1b0,0x10);

          } while (lVar15 != 0);

          _objc_release(uVar14);

          if (lVar18 != 0) {

            _objc_retain(lVar18);

            _objc_release(lVar13);

            _objc_release(lVar18);

            lVar13 = lVar18;

            goto LAB_00108e00;

          }

        }

        if (lVar13 != 0) goto LAB_00108e00;

      }

      else {

LAB_00108ac4:

        FUN_00295600(lVar13);

        if (param_3 <= 0.0) goto LAB_00108cd8;

LAB_00108e00:

        FUN_00295600(lVar13);

        if (0.0 < param_3) {

          FUN_0010c338(param_5,lVar13);

          _objc_release(lVar17);

          _objc_release(lVar13);

          goto LAB_0010a7dc;

        }

      }

      _objc_release(lVar17);

      _objc_release(lVar13);

    }

    if (((uVar9 & 1) != 0) || (((uVar6 | uVar7) & 1) == 0)) {

      FUN_000822c8(param_5);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      if ((lVar13 != 0) && (FUN_00295600(lVar13), 0.0 < param_3)) {

        FUN_0029d4a0(lVar13,extraout_x1_07,0);

        FUN_002923a0(lVar11);

        lVar17 = _objc_retainAutoreleasedReturnValue();

        if (lVar17 == 0) {

          lVar15 = 0;

        }

        else {

          lVar15 = FUN_0029a100(lVar17);

        }

        _objc_release(lVar17);

        if (DAT_003e8168 == '\x01') {

          FUN_002a6080(lVar11,extraout_x1_08,&cf_messageWrap);

          lVar18 = _objc_retainAutoreleasedReturnValue();

          if (lVar18 == 0) {

LAB_00108f1c:

            _objc_getAssociatedObject(lVar11,PTR_LOOP_003e6860);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            lVar17 = FUN_002a5a40();

            _objc_release(uVar14);

          }

          else {

            _objc_getAssociatedObject(lVar18,PTR_LOOP_003e6860);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            lVar17 = FUN_002a5a40();

            _objc_release(uVar14);

            if (lVar17 == 0) goto LAB_00108f1c;

          }

          _objc_release(lVar18);

          uVar14 = extraout_x1_09;

        }

        else {

          lVar17 = 0;

          uVar14 = extraout_x1_08;

        }

        uVar7 = (uint)(lVar17 == 0 || lVar17 == 3);

        if ((((DAT_003e8153 & 1) == 0) && (lVar17 == 0 || lVar17 == 3)) && ((DAT_003e8169 & 1) != 0)

           ) {

          _objc_getAssociatedObject(lVar11,PTR_LOOP_003e5cc0);

          lVar17 = _objc_retainAutoreleasedReturnValue();

          if (lVar17 == 0) {

            uVar7 = 1;

          }

          else {

            uVar7 = FUN_002924e0(lVar17);

          }

          _objc_release(lVar17);

          uVar14 = extraout_x1_10;

        }

        FUN_002a62a0(lVar13,uVar14,0x15b31);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        lVar17 = auVar44._0_8_;

        FUN_002a62a0(lVar13,auVar44._8_8_,0x15b32);

        local_298 = _objc_retainAutoreleasedReturnValue();

        uVar14 = FUN_00297a80(lVar11);

        FUN_0010da24(uVar14);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        if (lVar17 == 0) {

          auVar44 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

          lVar17 = auVar44._0_8_;

          FUN_002a1c80(lVar17,auVar44._8_8_,0x15b31);

          FUN_002a1d80(lVar17,extraout_x1_11,2);

          FUN_00291380(lVar13,extraout_x1_12,lVar17);

        }

        FUN_002a4aa0(DAT_003e68f0,&_OBJC_CLASS___UIFont);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e520(lVar17,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        FUN_002a1da0(lVar17,extraout_x1_13,uVar16);

        uVar22 = extraout_x1_14;

        if (local_298 == 0) {

          auVar44 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

          local_298 = auVar44._0_8_;

          FUN_002a1c80(local_298,auVar44._8_8_,0x15b32);

          FUN_0029d6c0(local_298,extraout_x1_15,1);

          FUN_00291380(lVar13,extraout_x1_16,local_298);

          uVar22 = extraout_x1_17;

        }

        FUN_002a1f40(local_298,uVar22,uVar16);

        uVar6 = (uint)uVar14;

        if (DAT_003e8128 == 4) {

          FUN_0010b9c4(param_5);

          lVar15 = _objc_retainAutoreleasedReturnValue();

          bVar5 = lVar15 != 0;

          _objc_release();

          uVar22 = extraout_x1_19;

          if (DAT_003e8128 != 4) {

LAB_001091d0:

            uVar7 = DAT_003e8153 | uVar7;

            if (!bVar5) goto LAB_001091e8;

            bVar28 = 1;

            goto LAB_0010920c;

          }

          if (lVar15 == 0) goto LAB_001091e4;

          bVar28 = 1;

        }

        else {

          uVar22 = extraout_x1_18;

          if ((DAT_003e8153 == 1) || (uVar7 != 0)) {

            bVar5 = lVar15 == 0 || lVar15 == 3;

            goto LAB_001091d0;

          }

LAB_001091e4:

          uVar7 = 0;

LAB_001091e8:

          FUN_0029e8a0(lVar17,uVar22,1);

          FUN_0029e8a0(local_298,extraout_x1_20,1);

          bVar28 = 0;

          uVar22 = extraout_x1_21;

LAB_0010920c:

          if (DAT_003e8128 == 0) {

            if (DAT_003e8150 == '\x01') {

              FUN_002a4aa0(DAT_003e68f0,&_OBJC_CLASS___UIFont);

              uVar22 = _objc_retainAutoreleasedReturnValue();

              FUN_0010ea8c();

              auVar44 = _objc_retainAutoreleasedReturnValue();

              local_1c0 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

              uStack_1b8 = uVar22;

              FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar44._8_8_,&uStack_1b8,&local_1c0,1);

              auVar45 = _objc_retainAutoreleasedReturnValue();

              dVar40 = (double)FUN_002a3e20(auVar44._0_8_,auVar45._8_8_,auVar45._0_8_);

              _objc_release(auVar45._0_8_);

              puVar2 = &DAT_003e80d8;

              if (uVar6 == 0) {

                puVar2 = &DAT_003e80e0;

              }

              uVar27 = *puVar2;

              _objc_retain(uVar27);

              dVar41 = 0.0;

              if (DAT_003e811a == '\x01') {

                lVar15 = FUN_00297fa0(uVar27);

                dVar37 = 0.0;

                if (lVar15 != 0) {

                  dVar37 = (DAT_003e68f0 * 12.0) / 9.0;

                  dVar41 = 3.0;

                }

              }

              else {

                dVar37 = 0.0;

              }

              pdVar1 = (double *)&DAT_003e8140;

              if (uVar6 == 0) {

                pdVar1 = (double *)&DAT_003e8148;

              }

              dVar38 = *pdVar1;

              _objc_release(uVar27);

              _objc_release(auVar44._0_8_);

              _objc_release(uVar22);

              dVar36 = 8.0;

              dVar38 = dVar41 + dVar40 + dVar37 + 8.0 + dVar38;

            }

            else {

              pdVar1 = (double *)&DAT_003e8140;

              if (uVar6 == 0) {

                pdVar1 = (double *)&DAT_003e8148;

              }

              dVar36 = 55.0;

              dVar38 = *pdVar1 + 55.0;

            }

            uVar12 = _objc_opt_isKindOfClass(lVar11,DAT_003e81e0);

            uVar8 = 1;

            if (((uVar9 & uVar7 & 1) != 0) && ((uVar6 & DAT_003e8152 & 1) == 0)) {

              if ((uVar12 & 1) == 0) {

                _objc_retain(lVar11);

                FUN_00293620(lVar11);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                dVar40 = (double)FUN_00297c60(lVar11);

                lVar15 = lVar11;

LAB_00109474:

                _objc_release(lVar15);

              }

              else {

                auVar44 = _objc_opt_respondsToSelector(lVar11,"contentText");

                if ((auVar44._0_8_ & 1) == 0) {

                  uVar22 = 0;

                }

                else {

                  FUN_002a6080(lVar11,auVar44._8_8_,&cf_contentText);

                  uVar22 = _objc_retainAutoreleasedReturnValue();

                }

                auVar44 = _objc_opt_respondsToSelector(lVar11,"labelWidth");

                dVar40 = 0.0;

                if ((auVar44._0_8_ & 1) != 0) {

                  FUN_002a6080(lVar11,auVar44._8_8_,&cf_labelWidth);

                  lVar15 = _objc_retainAutoreleasedReturnValue();

                  dVar40 = (double)FUN_00294860();

                  goto LAB_00109474;

                }

              }

              lVar15 = FUN_00297fa0(uVar22);

              uVar8 = 1;

              if ((lVar15 != 0) && (0.0 < dVar40)) {

                uVar12 = FUN_00295fe0(uVar22);

                _objc_getAssociatedObject(lVar11,PTR_LOOP_003e6938);

                lVar15 = _objc_retainAutoreleasedReturnValue();

                uVar12 = (long)(dVar38 * 100.0) ^ (long)(dVar40 * 100.0) << 0x10 ^ uVar12;

                if (lVar15 == 0) {

                  lVar18 = 0;

LAB_00109554:

                  FUN_0010ebf8(uVar22);

                  uVar27 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a4aa0(0x4031000000000000,&_OBJC_CLASS___UIFont);

                  auVar44 = _objc_retainAutoreleasedReturnValue();

                  uVar23 = auVar44._0_8_;

                  uVar30 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

                  local_1d0 = uVar30;

                  uStack_1c8 = uVar23;

                  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar44._8_8_,&uStack_1c8,&local_1d0,1);

                  auVar44 = _objc_retainAutoreleasedReturnValue();

                  dVar41 = (double)FUN_002a3e20(uVar27,auVar44._8_8_,auVar44._0_8_);

                  _objc_release(auVar44._0_8_);

                  dVar37 = (double)FUN_0010ece4(uVar27);

                  dVar36 = dVar40 * 1.12;

                  lVar24 = extraout_x1_22;

                  if (dVar41 + dVar37 <= dVar36) {

LAB_001097d8:

                    uVar8 = 1;

                  }

                  else {

                    if (DAT_003e8230 != -1) {

                      FUN_0028f28c();

                    }

                    FUN_00292220(DAT_003e8218);

                    uVar4 = DAT_003e8218;

                    auVar44 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

                    local_1e0 = uVar30;

                    uStack_1d8 = uVar23;

                    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar44._8_8_,&uStack_1d8,&local_1e0,1)

                    ;

                    auVar45 = _objc_retainAutoreleasedReturnValue();

                    auVar44 = FUN_00296e80(auVar44._0_8_,auVar45._8_8_,uVar27,auVar45._0_8_);

                    FUN_0029cd40(uVar4,auVar44._8_8_,auVar44._0_8_);

                    _objc_release(auVar44._0_8_);

                    _objc_release(auVar45._0_8_);

                    FUN_00294c00(DAT_003e8218);

                    dVar36 = 1.7976931348623157e+308;

                    FUN_002a15e0(dVar40,0x7fefffffffffffff,DAT_003e8228);

                    FUN_00294cc0(DAT_003e8220,extraout_x1_23,DAT_003e8228);

                    auVar44 = FUN_00295ce0(DAT_003e8220,extraout_x1_24,DAT_003e8228);

                    lVar24 = auVar44._8_8_;

                    if (lVar24 == 0) goto LAB_001097d8;

                    dVar36 = 18.0;

                    uVar19 = auVar44._0_8_ + lVar24;

                    if (uVar19 == 0) {

                      dVar40 = 0.0;

                      dVar41 = 0.0;

                    }

                    else {

                      uVar26 = 0;

                      lVar31 = 0;

                      dVar37 = 0.0;

                      do {

                        FUN_00298020(DAT_003e8220,lVar24,uVar26,&local_280);

                        dVar42 = param_3;

                        auVar44 = FUN_00292c20(DAT_003e8220,extraout_x1_25,local_280,lStack_278,0);

                        lVar25 = auVar44._8_8_;

                        lVar20 = auVar44._0_8_;

                        dVar41 = 0.0;

                        lVar24 = 0;

                        lVar21 = lVar31;

                        if (lVar25 != 0) {

                          auVar44 = FUN_00297fa0(uVar27);

                          lVar24 = auVar44._8_8_;

                          if ((ulong)(lVar20 + lVar25) <= auVar44._0_8_) {

                            FUN_002a4800(uVar27,lVar24,lVar20,lVar25);

                            uVar30 = _objc_retainAutoreleasedReturnValue();

                            dVar41 = (double)FUN_0010ece4();

                            _objc_release(uVar30);

                            FUN_002a4800(uVar22,extraout_x1_26,lVar20,lVar25);

                            lVar21 = _objc_retainAutoreleasedReturnValue();

                            _objc_release(lVar31);

                            lVar24 = extraout_x1_27;

                          }

                        }

                        dVar41 = param_3 + dVar41;

                        dVar40 = dVar41;

                        if (dVar41 <= dVar37) {

                          dVar40 = dVar37;

                        }

                        uVar26 = lStack_278 + (long)local_280;

                        lVar31 = lVar21;

                        param_3 = dVar42;

                        dVar37 = dVar40;

                      } while (uVar26 < uVar19);

                      if (lVar21 != 0) {

                        lVar24 = FUN_0010ef40(lVar21);

                        _objc_release(lVar21);

                        dVar36 = (double)(ulong)(lVar24 * 6) + 18.0;

                        lVar24 = extraout_x1_28;

                      }

                    }

                    dVar36 = dVar38 + dVar41 * 0.05 + dVar36;

                    uVar8 = (uint)(dVar40 - dVar41 < dVar36);

                    param_3 = dVar38;

                  }

                  puVar3 = PTR_LOOP_003e6938;

                  FUN_00299480(&_OBJC_CLASS___NSNumber,lVar24,uVar12);

                  uVar30 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(lVar11,puVar3,uVar30,1);

                  _objc_release(uVar30);

                  puVar3 = PTR_LOOP_003e6940;

                  FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_29,uVar8);

                  uVar30 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(lVar11,puVar3,uVar30,1);

                  _objc_release(uVar30);

                  _objc_release(uVar23);

                  _objc_release(uVar27);

                }

                else {

                  dVar36 = dVar38;

                  _objc_getAssociatedObject(lVar11,PTR_LOOP_003e6940);

                  lVar18 = _objc_retainAutoreleasedReturnValue();

                  _objc_retain();

                  _objc_release(lVar18);

                  if ((lVar18 == 0) || (uVar19 = FUN_002a5a20(lVar15), uVar19 != uVar12))

                  goto LAB_00109554;

                  uVar8 = FUN_002924e0(lVar18);

                }

                _objc_release(lVar18);

                _objc_release(lVar15);

              }

              _objc_release(uVar22);

            }

            FUN_002a4880(lVar13);

            lVar15 = _objc_retainAutoreleasedReturnValue();

            if (lVar15 != 0) {

              _objc_getAssociatedObject(lVar15,PTR_LOOP_003e6918);

              lVar18 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              puVar3 = PTR_LOOP_003e6918;

              dVar40 = param_4;

              if (lVar18 == 0) {

                FUN_00295600(lVar15);

                FUN_002993a0(&_OBJC_CLASS___NSNumber);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar15,puVar3,uVar22,1);

                _objc_release(uVar22);

                puVar3 = PTR_LOOP_003e6920;

                FUN_00295600(lVar15);

                FUN_002993a0(param_3,&_OBJC_CLASS___NSNumber);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar15,puVar3,uVar22,1);

                _objc_release(uVar22);

                puVar3 = PTR_LOOP_003e6928;

                FUN_00295600(lVar13);

                FUN_002993a0(param_3,&_OBJC_CLASS___NSNumber);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar15,puVar3,uVar22,1);

                _objc_release(uVar22);

                puVar3 = PTR_LOOP_003e6930;

                FUN_00295600(lVar13);

                FUN_002993a0(&_OBJC_CLASS___NSNumber);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar15,puVar3,uVar22,1);

                _objc_release(uVar22);

                dVar40 = param_4;

              }

              _objc_getAssociatedObject(lVar15,PTR_LOOP_003e6918);

              uVar22 = _objc_retainAutoreleasedReturnValue();

              fVar32 = (float)FUN_00295480();

              _objc_release(uVar22);

              _objc_getAssociatedObject(lVar15,PTR_LOOP_003e6920);

              uVar22 = _objc_retainAutoreleasedReturnValue();

              fVar33 = (float)FUN_00295480();

              _objc_release(uVar22);

              _objc_getAssociatedObject(lVar15,PTR_LOOP_003e6928);

              uVar22 = _objc_retainAutoreleasedReturnValue();

              fVar34 = (float)FUN_00295480();

              _objc_release(uVar22);

              _objc_getAssociatedObject(lVar15,PTR_LOOP_003e6930);

              uVar22 = _objc_retainAutoreleasedReturnValue();

              fVar35 = (float)FUN_00295480();

              _objc_release(uVar22);

              dVar37 = (double)FUN_00295600(lVar15);

              dVar41 = dVar36;

              param_4 = dVar40;

              FUN_00295600(lVar13);

              dVar42 = (double)fVar32;

              dVar43 = (double)fVar33;

              param_3 = (double)fVar34;

              dVar39 = (double)fVar35;

              if ((uVar7 & uVar8 & 1) != 0) {

                if ((uVar6 & DAT_003e8152) == 1) {

                  FUN_0029d4a0(lVar15,extraout_x1_30,0);

                  dVar39 = dVar39 - dVar38;

                  dVar37 = dVar42;

                }

                else {

                  dVar43 = dVar38 + dVar43;

                  if (uVar6 != 0) {

                    dVar37 = dVar42 - dVar38;

                  }

                }

                param_3 = dVar38 + param_3;

                dVar42 = dVar37;

              }

              FUN_0029e5e0(dVar42,dVar36,dVar43,dVar40,lVar15);

              FUN_0029e5e0(dVar39,dVar41,param_3,param_4,lVar13);

            }

            _objc_release(lVar15);

            uVar22 = extraout_x1_31;

          }

        }

        FUN_002a6080(lVar11,uVar22,&cf_messageWrap);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        lVar15 = auVar44._0_8_;

        bVar5 = (bool)(bVar28 ^ 1);

        if (lVar15 == 0) {

          bVar5 = true;

        }

        if (bVar5) {

          FUN_0029e8a0(lVar17,auVar44._8_8_,1);

          FUN_0029e8a0(local_298,extraout_x1_34,1);

        }

        else {

          uVar9 = FUN_00298720(lVar15);

          if (uVar9 == 0) {

            FUN_0029e8a0(lVar17,extraout_x1_32,1);

            FUN_0029e8a0(local_298,extraout_x1_35,1);

          }

          else {

            FUN_00294180((double)uVar9,&_OBJC_CLASS___NSDate);

            uVar22 = _objc_retainAutoreleasedReturnValue();

            FUN_0010dce4();

            auVar44 = _objc_retainAutoreleasedReturnValue();

            uVar27 = auVar44._0_8_;

            if (DAT_003e8151 == '\x01') {

              puVar2 = &DAT_003e80e8;

              if (uVar6 == 0) {

                puVar2 = &DAT_003e80f0;

              }

              uVar30 = *puVar2;

              _objc_retain(uVar30);

              auVar44 = FUN_00297fa0(uVar30);

              uVar23 = uVar27;

              if (auVar44._0_8_ != 0) {

                FUN_002a44a0(uVar27,auVar44._8_8_,uVar30);

                uVar23 = _objc_retainAutoreleasedReturnValue();

                _objc_release(uVar27);

              }

              _objc_release(uVar30);

              auVar44._8_8_ = extraout_x1_33;

              auVar44._0_8_ = uVar23;

            }

            FUN_002a1d60(lVar17,auVar44._8_8_,auVar44._0_8_);

            FUN_002a3de0(lVar17);

            dVar36 = DAT_003e68f0;

            if (DAT_003e8128 == 4) {

              lStack_278 = *(long *)(PTR__CGRectZero_00388bf0 + 8);

              local_280 = *(double *)PTR__CGRectZero_00388bf0;

              dStack_268 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

              local_270 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

              dVar38 = 0.0;

LAB_00109d2c:

              FUN_002925a0(lVar13);

              dVar40 = 0.0;

              dVar41 = param_3;

            }

            else {

              dVar38 = (double)FUN_0010dd64(param_5,lVar13);

              lStack_278 = *(long *)(PTR__CGRectZero_00388bf0 + 8);

              local_280 = *(double *)PTR__CGRectZero_00388bf0;

              dStack_268 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

              local_270 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

              if ((DAT_003e8128 == 4) ||

                 (iVar10 = FUN_0010deb4(param_5,lVar13,&local_280), dVar40 = local_280, iVar10 == 0)

                 ) goto LAB_00109d2c;

              param_3 = local_270;

              param_4 = dStack_268;

              dVar41 = (double)_CGRectGetMaxX(local_280,lStack_278,local_270,dStack_268);

            }

            dVar37 = (dVar36 * 12.0) / 9.0;

            if (DAT_003e8128 == 1) {

              FUN_002925a0(lVar13);

              dVar42 = param_4;

              FUN_002925a0(lVar17);

              dVar38 = dVar38 + (((param_4 - dVar42) + -8.0) - DAT_003e8138);

              if (uVar6 == 0) {

                if (DAT_003e811a != '\0') {

                  auVar45 = FUN_00297fa0(DAT_003e80e0);

                  if (auVar45._0_8_ != 0) {

                    FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar45._8_8_,DAT_003e80e0);

                    auVar45 = _objc_retainAutoreleasedReturnValue();

                    lVar18 = auVar45._0_8_;

                    if (lVar18 != 0) {

                      FUN_00296620(lVar18,auVar45._8_8_,2);

                      auVar45 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029ec00(local_298,auVar45._8_8_,auVar45._0_8_);

                      _objc_release(auVar45._0_8_);

                      _objc_release(lVar18);

                      dVar40 = DAT_003e8130;

                      FUN_002925a0(lVar17);

                      FUN_002925a0(lVar17);

                      FUN_0029e5e0(dVar41 + 5.0 + dVar40,dVar38,param_3,lVar17);

                      FUN_002925a0(lVar17);

                      dVar40 = (double)FUN_00295600(lVar17);

                      FUN_002925a0(lVar17);

                      FUN_0029e5e0(dVar40 + param_3 + 3.0,dVar38 + (dVar42 - dVar36) * 0.5,dVar37,

                                   dVar36,local_298);

                      FUN_0029e8a0(local_298,extraout_x1_41,0);

                      uVar14 = extraout_x1_42;

                      goto LAB_0010a74c;

                    }

                  }

                }

                dVar36 = DAT_003e8130;

                FUN_002925a0(lVar17);

                FUN_002925a0(lVar17);

                FUN_0029e5e0(dVar41 + 5.0 + dVar36,dVar38,param_3,lVar17);

                FUN_0029e8a0(local_298,extraout_x1_46,1);

                uVar14 = extraout_x1_47;

              }

              else {

                if (DAT_003e811a != '\0') {

                  auVar45 = FUN_00297fa0(DAT_003e80d8);

                  if (auVar45._0_8_ != 0) {

                    FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar45._8_8_,DAT_003e80d8);

                    auVar45 = _objc_retainAutoreleasedReturnValue();

                    lVar18 = auVar45._0_8_;

                    if (lVar18 != 0) {

                      FUN_00296620(lVar18,auVar45._8_8_,2);

                      auVar45 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029ec00(local_298,auVar45._8_8_,auVar45._0_8_);

                      _objc_release(auVar45._0_8_);

                      _objc_release(lVar18);

                      dVar41 = DAT_003e8130;

                      FUN_002925a0(lVar17);

                      dVar39 = param_3;

                      FUN_002925a0(lVar17);

                      FUN_002925a0(lVar17);

                      FUN_0029e5e0((((dVar40 + -5.0 + dVar41) - param_3) - dVar37) + -3.0,dVar38,

                                   dVar39,lVar17);

                      FUN_002925a0(lVar17);

                      dVar40 = (double)FUN_00295600(lVar17);

                      FUN_002925a0(lVar17);

                      FUN_0029e5e0(dVar40 + dVar39 + 3.0,dVar38 + (dVar42 - dVar36) * 0.5,dVar37,

                                   dVar36,local_298);

                      FUN_0029e8a0(local_298,extraout_x1_38,0);

                      uVar14 = extraout_x1_39;

                      goto LAB_0010a74c;

                    }

                  }

                }

                dVar36 = DAT_003e8130;

                FUN_002925a0(lVar17);

                dVar41 = param_3;

                FUN_002925a0(lVar17);

                FUN_002925a0(lVar17);

                FUN_0029e5e0((dVar40 + -5.0 + dVar36) - param_3,dVar38,dVar41,lVar17);

                FUN_0029e8a0(local_298,extraout_x1_44,1);

                uVar14 = extraout_x1_45;

              }

            }

            else if (DAT_003e8128 == 4) {

              auVar45 = FUN_0010e024(dVar37,dVar36,param_5,lVar17,local_298,uVar14);

              uVar14 = auVar45._8_8_;

              if ((auVar45._0_8_ & 1) == 0) {

                FUN_0029e8a0(lVar17,uVar14,1);

                FUN_0029e8a0(local_298,extraout_x1_36,1);

                uVar14 = extraout_x1_37;

              }

            }

            else if ((DAT_003e8128 & 0xfffffffffffffffe) == 2) {

              FUN_002925a0(lVar13);

              dVar38 = dVar38 + ((param_4 + 5.0) - DAT_003e8138) + -5.0;

              if (uVar6 == 0) {

                if (DAT_003e811a == '\0') {

LAB_0010a4a8:

                  bVar5 = false;

                }

                else {

                  auVar45 = FUN_00297fa0(DAT_003e80e0);

                  if (auVar45._0_8_ == 0) goto LAB_0010a4a8;

                  FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar45._8_8_,DAT_003e80e0);

                  auVar45 = _objc_retainAutoreleasedReturnValue();

                  lVar18 = auVar45._0_8_;

                  bVar5 = lVar18 != 0;

                  if (lVar18 != 0) {

                    FUN_00296620(lVar18,auVar45._8_8_,2);

                    auVar45 = _objc_retainAutoreleasedReturnValue();

                    FUN_0029ec00(local_298,auVar45._8_8_,auVar45._0_8_);

                    _objc_release(auVar45._0_8_);

                  }

                  _objc_release(lVar18);

                }

                FUN_002925a0(lVar17);

                dVar42 = dVar38 + (param_4 - dVar36) * 0.5;

                if (DAT_003e8128 == 2) {

                  dVar40 = dVar40 + 5.0 + DAT_003e8130;

                  if (bVar5) {

                    FUN_002925a0(lVar17);

                    FUN_002925a0(lVar17);

                    FUN_0029e5e0(dVar40,dVar38,param_3,lVar17);

                    dVar38 = (double)FUN_00295600(lVar17);

                    FUN_002925a0(lVar17);

                    FUN_0029e5e0(dVar38 + param_3 + 3.0,dVar42,dVar37,dVar36,local_298);

                    uVar14 = extraout_x1_51;

                    goto LAB_0010a640;

                  }

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0(dVar40,dVar38,param_3,lVar17);

                  uVar14 = extraout_x1_55;

LAB_0010a740:

                  uVar27 = 1;

                }

                else {

                  if (!bVar5) {

                    FUN_002925a0(lVar17);

                    dVar36 = DAT_003e8130;

                    dVar40 = param_3;

                    FUN_002925a0(lVar17);

                    FUN_002925a0(lVar17);

                    FUN_0029e5e0((dVar41 - param_3) + -5.0 + dVar36,dVar38,dVar40,lVar17);

                    uVar14 = extraout_x1_58;

                    goto LAB_0010a740;

                  }

                  FUN_0029e5e0((dVar41 - dVar37) + -5.0 + DAT_003e8130,dVar42,dVar37,dVar36,

                               local_298);

                  dVar40 = (double)FUN_00295600(local_298);

                  FUN_002925a0(lVar17);

                  dVar36 = dVar37;

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0((dVar40 - dVar37) + -3.0,dVar38,dVar36,lVar17);

                  uVar14 = extraout_x1_53;

LAB_0010a640:

                  uVar27 = 0;

                }

                FUN_0029e8a0(local_298,uVar14,uVar27);

                uVar14 = extraout_x1_59;

                goto LAB_0010a74c;

              }

              if (DAT_003e811a == '\0') {

LAB_0010a400:

                bVar5 = false;

              }

              else {

                auVar45 = FUN_00297fa0(DAT_003e80d8);

                if (auVar45._0_8_ == 0) goto LAB_0010a400;

                FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar45._8_8_,DAT_003e80d8);

                auVar45 = _objc_retainAutoreleasedReturnValue();

                lVar18 = auVar45._0_8_;

                bVar5 = lVar18 != 0;

                if (lVar18 != 0) {

                  FUN_00296620(lVar18,auVar45._8_8_,2);

                  auVar45 = _objc_retainAutoreleasedReturnValue();

                  FUN_0029ec00(local_298,auVar45._8_8_,auVar45._0_8_);

                  _objc_release(auVar45._0_8_);

                }

                _objc_release(lVar18);

              }

              FUN_002925a0(lVar17);

              dVar42 = dVar38 + (param_4 - dVar36) * 0.5;

              if (DAT_003e8128 == 2) {

                if (bVar5) {

                  FUN_0029e5e0((dVar41 - dVar37) + -5.0 + DAT_003e8130,dVar42,dVar37,dVar36,

                               local_298);

                  dVar40 = (double)FUN_00295600(local_298);

                  FUN_002925a0(lVar17);

                  dVar36 = dVar37;

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0((dVar40 - dVar37) + -3.0,dVar38,dVar36,lVar17);

                  uVar14 = extraout_x1_50;

                  goto LAB_0010a5c0;

                }

                FUN_002925a0(lVar17);

                dVar36 = DAT_003e8130;

                dVar40 = param_3;

                FUN_002925a0(lVar17);

                FUN_002925a0(lVar17);

                FUN_0029e5e0((dVar41 - param_3) + -5.0 + dVar36,dVar38,dVar40,lVar17);

                uVar14 = extraout_x1_54;

LAB_0010a6e8:

                uVar27 = 1;

              }

              else {

                dVar40 = dVar40 + 5.0 + DAT_003e8130;

                if (!bVar5) {

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0(dVar40,dVar38,param_3,lVar17);

                  uVar14 = extraout_x1_56;

                  goto LAB_0010a6e8;

                }

                FUN_002925a0(lVar17);

                FUN_002925a0(lVar17);

                FUN_0029e5e0(dVar40,dVar38,param_3,lVar17);

                dVar38 = (double)FUN_00295600(lVar17);

                FUN_002925a0(lVar17);

                FUN_0029e5e0(dVar38 + param_3 + 3.0,dVar42,dVar37,dVar36,local_298);

                uVar14 = extraout_x1_52;

LAB_0010a5c0:

                uVar27 = 0;

              }

              FUN_0029e8a0(local_298,uVar14,uVar27);

              uVar14 = extraout_x1_57;

            }

            else {

              dVar38 = 0.0;

              if (uVar6 == 0) {

                dVar38 = -5.0;

              }

              dVar40 = 15.0;

              dVar38 = dVar38 + DAT_003e8130 + 15.0;

              dVar41 = DAT_003e8138 + 10.0;

              uVar9 = (uint)DAT_003e8152;

              puVar2 = &DAT_003e80d8;

              if (uVar6 == 0) {

                puVar2 = &DAT_003e80e0;

              }

              uVar14 = *puVar2;

              _objc_retain();

              if (DAT_003e811a == '\x01') {

                auVar45 = FUN_00297fa0(uVar14);

                if (auVar45._0_8_ == 0) goto LAB_0010a220;

                FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar45._8_8_,uVar14);

                auVar45 = _objc_retainAutoreleasedReturnValue();

                lVar18 = auVar45._0_8_;

                if (lVar18 == 0) goto LAB_0010a220;

                FUN_00296620(lVar18,auVar45._8_8_,2);

                auVar45 = _objc_retainAutoreleasedReturnValue();

                FUN_0029ec00(local_298,auVar45._8_8_,auVar45._0_8_);

                _objc_release(auVar45._0_8_);

                _objc_release(lVar18);

                FUN_002925a0(lVar13);

                dVar39 = param_4;

                FUN_002925a0(lVar17);

                dVar43 = dVar39;

                FUN_002925a0(lVar17);

                dVar42 = DAT_003e8130;

                dVar41 = (param_4 - dVar39) - dVar41;

                dVar39 = dVar41 + (dVar43 - dVar36) * 0.5;

                if ((uVar6 & uVar9) == 0) {

                  FUN_002925a0(lVar13);

                  FUN_0029e5e0((dVar40 - dVar37) - dVar38,dVar39,dVar37,dVar36,local_298);

                  dVar38 = (double)FUN_00295600(local_298);

                  FUN_002925a0(lVar17);

                  dVar36 = dVar37;

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0((dVar38 - dVar37) + -3.0,dVar41,dVar36,lVar17);

                  uVar27 = extraout_x1_62;

                }

                else {

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0(dVar42 + 10.0,dVar41,dVar40,lVar17);

                  dVar38 = (double)FUN_00295600(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0(dVar38 + dVar40 + 3.0,dVar39,dVar37,dVar36,local_298);

                  uVar27 = extraout_x1_40;

                }

                FUN_0029e8a0(local_298,uVar27,0);

              }

              else {

LAB_0010a220:

                dVar36 = DAT_003e8130;

                if ((uVar6 & uVar9) == 0) {

                  FUN_002925a0(lVar13);

                  dVar36 = dVar40;

                  FUN_002925a0(lVar17);

                  dVar37 = dVar36;

                  FUN_002925a0(lVar13);

                  dVar42 = param_4;

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0((dVar40 - dVar36) - dVar38,(param_4 - dVar42) - dVar41,dVar37,lVar17)

                  ;

                  uVar27 = extraout_x1_48;

                }

                else {

                  FUN_002925a0(lVar13);

                  dVar38 = param_4;

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_002925a0(lVar17);

                  FUN_0029e5e0(dVar36 + 10.0,(param_4 - dVar38) - dVar41,dVar40,lVar17);

                  uVar27 = extraout_x1_43;

                }

                FUN_0029e8a0(local_298,uVar27,1);

              }

              _objc_release(uVar14);

              uVar14 = extraout_x1_49;

            }

LAB_0010a74c:

            lVar18 = lVar17;

            if (DAT_003e8128 == 4) {

              FUN_0010b9c4(param_5);

              lVar24 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              uVar29 = 0;

              uVar14 = extraout_x1_60;

              if (lVar24 == 0) {

                uVar29 = 1;

                FUN_0029e8a0(lVar17,extraout_x1_60,1);

                lVar18 = local_298;

                uVar14 = extraout_x1_61;

              }

            }

            else {

              uVar29 = 0;

            }

            FUN_0029e8a0(lVar18,uVar14,uVar29);

            _objc_release(auVar44._0_8_);

            _objc_release(uVar22);

          }

        }

        _objc_release(lVar15);

        _objc_release(uVar16);

        _objc_release(local_298);

        _objc_release(lVar17);

      }

      _objc_release(lVar13);

    }

  }

LAB_0010a7dc:

  _objc_release(lVar11);

LAB_0010a7e4:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




