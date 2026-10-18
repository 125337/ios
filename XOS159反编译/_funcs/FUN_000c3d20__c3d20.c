// FUN_000c3d20 @0xc3d20


void FUN_000c3d20(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4,

                 long param_5)



{

  byte bVar1;

  byte *pbVar2;

  byte *pbVar3;

  double *pdVar4;

  byte bVar5;

  bool bVar6;

  undefined *puVar7;

  byte bVar8;

  byte bVar9;

  int iVar10;

  uint uVar11;

  uint uVar12;

  ulong uVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  undefined8 uVar20;

  long lVar21;

  undefined8 uVar22;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  bool bVar23;

  bool bVar24;

  long lVar25;

  long lVar26;

  float fVar27;

  float fVar28;

  double dVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  double dVar36;

  double dVar37;

  undefined1 auVar38 [16];

  undefined1 auVar39 [16];

  long local_1a8;

  int local_19c;

  long local_198;

  undefined8 local_170;

  long lStack_168;

  long *local_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 uStack_140;

  undefined8 uStack_138;

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e7be0)();

  uVar13 = FUN_000a8840(param_5);

  if ((uVar13 & 1) != 0) goto LAB_000c4668;

  _objc_retain(param_5);

  if (param_5 == 0) {

LAB_000c3ddc:

    _objc_release(param_5);

LAB_000c3de4:

    FUN_000a98e4(param_5);

    FUN_002254e4(param_5);

    iVar10 = FUN_000a89d8();

    if (iVar10 == 0) {

      bVar6 = false;

      local_198 = 0;

      bVar23 = true;

      bVar24 = true;

    }

    else {

      FUN_000a8b40(param_5);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      if (lVar14 != 0) {

        FUN_000a8cc4(lVar14);

      }

      _objc_release(lVar14);

      bVar6 = false;

LAB_000c3e28:

      FUN_002a6280(param_5);

      local_198 = _objc_retainAutoreleasedReturnValue();

      if (local_198 == 0) {

        bVar24 = false;

        local_198 = 0;

        bVar23 = true;

      }

      else {

        FUN_000abc94(param_5);

        bVar23 = false;

        bVar24 = false;

      }

    }

  }

  else {

    if (DAT_003e7c30 != -1) {

      FUN_0028f0a0();

    }

    if (DAT_003e7c28 == 0) goto LAB_000c3ddc;

    uVar13 = _objc_opt_isKindOfClass(param_5);

    _objc_release(param_5);

    if ((uVar13 & 1) == 0) goto LAB_000c3de4;

    bVar23 = true;

    uVar13 = FUN_000a89d8();

    if ((uVar13 & 1) != 0) {

      bVar6 = true;

      goto LAB_000c3e28;

    }

    local_198 = 0;

    bVar6 = true;

    bVar24 = true;

  }

  FUN_00291a40(param_5);

  FUN_002a2920(param_5);

  if (!bVar23 && !bVar24) {

    uVar13 = _objc_opt_respondsToSelector(local_198,"isSender");

    if ((uVar13 & 1) == 0) {

      local_19c = 0;

    }

    else {

      local_19c = FUN_00297a80(local_198);

    }

    if (DAT_003e7c00 != -1) {

      FUN_0028f0b4();

    }

    iVar10 = 0;

    if (DAT_003e7bf8 != 0) {

      iVar10 = local_19c;

    }

    if ((iVar10 == 1) && (uVar13 = _objc_opt_isKindOfClass(param_5), (uVar13 & 1) != 0)) {

      if (DAT_003e7c10 != -1) {

        FUN_0028f0c8();

      }

      if (DAT_003e7c08 == 0) {

        lVar14 = 0;

      }

      else {

        _object_getIvar(param_5);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 != 0) {

          FUN_002a4880(lVar14);

          lVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar15 != 0) {

            FUN_002a4880(lVar14);

            uVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600();

            dVar29 = param_3;

            FUN_00295600(lVar14);

            if ((0.0 < dVar29) && (dVar29 + 1.0 < param_3)) {

              FUN_00295600(lVar14);

              FUN_0029e5e0(lVar14);

            }

            _objc_release(uVar16);

          }

        }

      }

      _objc_release(lVar14);

    }

    uVar13 = _objc_opt_respondsToSelector(local_198,"messageWrap");

    if ((uVar13 & 1) == 0) {

LAB_000c400c:

      local_1a8 = 0;

      iVar10 = 0;

    }

    else {

      FUN_00298ce0(local_198);

      local_1a8 = _objc_retainAutoreleasedReturnValue();

      if (local_1a8 == 0) goto LAB_000c400c;

      iVar10 = FUN_000a8a64(local_1a8);

    }

    pbVar3 = &DAT_003e7a28;

    if (local_19c == 0) {

      pbVar3 = &DAT_003e7a2a;

    }

    pbVar2 = &DAT_003e7a29;

    if (local_19c == 0) {

      pbVar2 = &DAT_003e7a2b;

    }

    if (iVar10 == 0) {

      pbVar3 = pbVar2;

    }

    bVar5 = *pbVar3;

    uVar11 = FUN_000048dc(local_198);

    uVar12 = FUN_00004f4c(local_198);

    if (((uVar11 | uVar12 ^ 0xffffffff) & 1) == 0) {

      bVar8 = FUN_00192218(local_19c);

      bVar8 = bVar8 ^ 1;

    }

    else {

      bVar8 = 0;

    }

    pdVar4 = (double *)&DAT_003e7b28;

    if (local_19c == 0) {

      pdVar4 = (double *)&DAT_003e7b30;

    }

    bVar5 = bVar8 | bVar5;

    dVar29 = *pdVar4;

    if ((bVar5 & 1) == 0) {

      dVar29 = *pdVar4 + -46.0;

    }

    dVar35 = dVar29;

    if (local_19c == 0) {

      dVar35 = -dVar29;

    }

    dVar29 = ABS(dVar29);

    dVar32 = 0.001;

    dVar33 = 0.0;

    dVar36 = 0.0;

    if ((bVar5 & 1) == 0 && dVar29 > 0.001) {

      dVar36 = dVar35;

    }

    if (0.001 < dVar29) {

      FUN_002959c0(param_5);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      puVar7 = PTR_LOOP_003e62f8;

      FUN_002993a0(dVar35,&_OBJC_CLASS___NSNumber);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar7,uVar16,1);

      _objc_release(uVar16);

      puVar7 = PTR_LOOP_003e6300;

      FUN_002993a0(dVar36,&_OBJC_CLASS___NSNumber);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar7,uVar16,1);

      _objc_release(uVar16);

      FUN_00292180(&_OBJC_CLASS___CATransaction);

      FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

      if (DAT_003e7c20 != -1) {

        FUN_0028f0dc();

      }

      uStack_148 = 0;

      local_150 = 0;

      uStack_138 = 0;

      uStack_140 = 0;

      lStack_168 = 0;

      local_170 = 0;

      uStack_158 = 0;

      local_160 = (long *)0x0;

      FUN_002a4840(param_5);

      auVar38 = _objc_retainAutoreleasedReturnValue();

      uVar16 = auVar38._0_8_;

      auVar38 = FUN_00293880(uVar16,auVar38._8_8_,&local_170,auStack_130,0x10);

      if (auVar38._0_8_ != 0) {

        lVar15 = *local_160;

        do {

          uVar22 = auVar38._8_8_;

          lVar25 = 0;

          do {

            if (*local_160 != lVar15) {

              _objc_enumerationMutation(uVar16);

              uVar22 = extraout_x1_00;

            }

            lVar26 = *(long *)(lStack_168 + lVar25 * 8);

            if ((lVar26 == lVar14 & (bVar5 | dVar29 <= 0.001)) == 0) {

              auVar39 = FUN_002a4e60(lVar26);

              uVar22 = auVar39._8_8_;

              if (auVar39._0_8_ != 0x15b31) {

                auVar39 = FUN_002a4e60(lVar26);

                uVar22 = auVar39._8_8_;

                if (auVar39._0_8_ != 0x15b32) {

                  auVar39 = FUN_002a4e60(lVar26);

                  uVar22 = auVar39._8_8_;

                  if (auVar39._0_8_ != 0x135257a) {

                    auVar39 = FUN_002a4e60(lVar26);

                    uVar22 = auVar39._8_8_;

                    if (2 < auVar39._0_8_ - 0x1352577U) {

                      if (DAT_003e7c18 == 0) {

                        bVar1 = 0;

                        if (lVar26 == lVar14) {

                          bVar1 = bVar8;

                        }

                        uVar22 = 0;

                      }

                      else {

                        bVar9 = _objc_opt_isKindOfClass(lVar26);

                        bVar1 = 0;

                        if (lVar26 == lVar14) {

                          bVar1 = bVar8;

                        }

                        bVar1 = bVar1 | bVar9;

                        uVar22 = extraout_x1_01;

                      }

                      if ((bVar1 & 1) == 0) {

                        _objc_getAssociatedObject(lVar26,PTR_LOOP_003e6460);

                        lVar17 = _objc_retainAutoreleasedReturnValue();

                        _objc_getAssociatedObject(lVar26,PTR_LOOP_003e6468);

                        lVar18 = _objc_retainAutoreleasedReturnValue();

                        _objc_getAssociatedObject(lVar26,PTR_LOOP_003e6470);

                        lVar19 = _objc_retainAutoreleasedReturnValue();

                        dVar30 = (double)FUN_00295600(lVar26);

                        dVar34 = dVar33;

                        uVar22 = param_4;

                        dVar31 = dVar30;

                        if (lVar17 == 0) {

LAB_000c4404:

                          puVar7 = PTR_LOOP_003e6460;

                          FUN_002993a0(dVar31,&_OBJC_CLASS___NSNumber);

                          uVar20 = _objc_retainAutoreleasedReturnValue();

                          _objc_setAssociatedObject(lVar26,puVar7,uVar20,1);

                          _objc_release(uVar20);

                          FUN_002993a0(dVar31,&_OBJC_CLASS___NSNumber);

                          lVar21 = _objc_retainAutoreleasedReturnValue();

LAB_000c445c:

                          _objc_release(lVar17);

                          lVar17 = lVar21;

                        }

                        else {

                          if ((lVar18 != 0) &&

                             (fVar27 = (float)FUN_00295480(lVar18),

                             0.5 < ABS(dVar30 - (double)fVar27))) {

                            iVar10 = 0;

                            if (lVar19 != 0) {

                              iVar10 = local_19c;

                            }

                            if ((iVar10 == 1) &&

                               (fVar27 = (float)FUN_00295480(), 0.5 < ABS(dVar33 - (double)fVar27)))

                            {

                              fVar27 = (float)FUN_00295480(lVar17);

                              fVar28 = (float)FUN_00295480(lVar19);

                              dVar31 = (double)(fVar27 + fVar28) - dVar33;

                              if (ABS(dVar30 - dVar31) <= 0.5) {

                                dVar31 = dVar30;

                              }

                            }

                            goto LAB_000c4404;

                          }

                          iVar10 = 0;

                          if (lVar19 != 0) {

                            iVar10 = local_19c;

                          }

                          if ((iVar10 == 1) &&

                             (fVar27 = (float)FUN_00295480(), 0.5 < ABS(dVar33 - (double)fVar27))) {

                            fVar27 = (float)FUN_00295480(lVar19);

                            fVar28 = (float)FUN_00295480(lVar17);

                            puVar7 = PTR_LOOP_003e6460;

                            dVar31 = (double)fVar28 - (dVar33 - (double)fVar27);

                            FUN_002993a0(dVar31,&_OBJC_CLASS___NSNumber);

                            uVar20 = _objc_retainAutoreleasedReturnValue();

                            _objc_setAssociatedObject(lVar26,puVar7,uVar20,1);

                            _objc_release(uVar20);

                            FUN_002993a0(dVar31,&_OBJC_CLASS___NSNumber);

                            lVar21 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_000c445c;

                          }

                        }

                        fVar27 = (float)FUN_00295480(lVar17);

                        dVar31 = dVar36;

                        if (lVar26 != lVar14) {

                          dVar31 = dVar35;

                        }

                        dVar37 = dVar31 + (double)fVar27;

                        if (0.5 < ABS(dVar30 - dVar37)) {

                          dVar34 = dVar33;

                          FUN_0029e5e0(dVar37,dVar32,dVar33,param_4,lVar26);

                          dVar31 = dVar32;

                          uVar22 = param_4;

                        }

                        param_4 = uVar22;

                        dVar32 = dVar31;

                        puVar7 = PTR_LOOP_003e6468;

                        FUN_002993a0(dVar37,&_OBJC_CLASS___NSNumber);

                        uVar22 = _objc_retainAutoreleasedReturnValue();

                        _objc_setAssociatedObject(lVar26,puVar7,uVar22,1);

                        _objc_release(uVar22);

                        puVar7 = PTR_LOOP_003e6470;

                        FUN_002993a0(dVar33,&_OBJC_CLASS___NSNumber);

                        uVar22 = _objc_retainAutoreleasedReturnValue();

                        _objc_setAssociatedObject(lVar26,puVar7,uVar22,1);

                        _objc_release(uVar22);

                        _objc_release(lVar19);

                        _objc_release(lVar18);

                        _objc_release(lVar17);

                        uVar22 = extraout_x1_02;

                        dVar33 = dVar34;

                      }

                    }

                  }

                }

              }

            }

            lVar25 = lVar25 + 1;

          } while (auVar38._0_8_ != lVar25);

          auVar38 = FUN_00293880(uVar16,uVar22,&local_170,auStack_130,0x10);

        } while (auVar38._0_8_ != 0);

      }

      _objc_release(uVar16);

      FUN_002930a0(&_OBJC_CLASS___CATransaction);

      if ((bVar6) && (iVar10 = FUN_0008336c(param_5), iVar10 != 0)) {

        FUN_000a98e4(param_5);

        FUN_002254e4(param_5);

      }

      _objc_release(lVar14);

    }

    else {

      _objc_setAssociatedObject

                (param_5,PTR_LOOP_003e62f8,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf2c0,1);

      _objc_setAssociatedObject

                (param_5,PTR_LOOP_003e6300,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf2c0,1);

    }

    _objc_release(local_1a8);

  }

  _objc_release(local_198);

LAB_000c4668:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




