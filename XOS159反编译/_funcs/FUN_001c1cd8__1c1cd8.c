// FUN_001c1cd8 @0x1c1cd8


void FUN_001c1cd8(void)



{

  long lVar1;

  uint uVar2;

  uint uVar3;

  uint uVar4;

  uint uVar5;

  uint uVar6;

  uint uVar7;

  uint uVar8;

  bool bVar9;

  bool bVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  ulong uVar13;

  ulong uVar14;

  long lVar15;

  ulong uVar16;

  long lVar17;

  ulong uVar18;

  long lVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  float fVar23;

  float fVar24;

  float fVar25;

  float fVar26;

  float fVar27;

  double dVar28;

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  double local_20b0;

  int local_20a8;

  uint local_20a4;

  uint local_2098;

  uint local_2094;

  uint local_2090;

  float afStack_2088 [1024];

  float local_1088 [1024];

  long local_88;

  

  auVar29 = (*(code *)PTR____chkstk_darwin_00388700)();

  lVar17 = auVar29._8_8_;

  lVar19 = auVar29._0_8_;

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  if ((((lVar19 != 0) && (lVar17 != 0)) && (*(long *)(lVar17 + 8) != 0)) &&

     (*(int *)(lVar17 + 0x10) != 0)) {

    if ((DAT_003e97c3 & 1) == 0) {

      FUN_001bfa24();

    }

    if ((DAT_003e97c2 == '\x01') &&

       ((dVar20 = (double)_CACurrentMediaTime(), auVar30._8_8_ = DAT_003e9850,

        auVar30._0_8_ = DAT_003e9848, auVar29 != auVar30 || (0.015 <= dVar20 - DAT_003e9858)))) {

      DAT_003e9848 = lVar19;

      DAT_003e9850 = lVar17;

      DAT_003e9858 = dVar20;

      FUN_001c1c50();

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_sync_enter();

      FUN_001c1c50();

      auVar29 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6180(&_OBJC_CLASS___NSValue,auVar29._8_8_,lVar19);

      auVar30 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(auVar29._0_8_,auVar30._8_8_,auVar30._0_8_);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar30._0_8_);

      _objc_release(auVar29._0_8_);

      _objc_sync_exit(uVar11);

      _objc_release(uVar11);

      auVar29 = FUN_00297fa0(uVar12);

      if (auVar29._0_8_ == 0x28) {

        FUN_00295800(uVar12,auVar29._8_8_,&local_20b0,0x28);

        lVar19 = *(long *)(lVar17 + 8);

        uVar5 = *(uint *)(lVar17 + 0x10);

        if ((DAT_003e97c3 & 1) == 0) {

          FUN_001bfa24();

        }

        if ((((DAT_003e97c2 == '\x01') && ((DAT_003e97c1 & 1) == 0)) &&

            ((lVar19 != 0 && (((0xff < uVar5 && (local_20a8 == 0x6c70636d)) && (local_2098 != 0)))))

            ) && ((((byte)local_20a4 >> 5 & 1) == 0 &&

                  (dVar20 = (double)_CACurrentMediaTime(),

                  0.03333333333333333 <= dVar20 - DAT_003e9860)))) {

          DAT_003e9860 = dVar20;

          FUN_001bffdc(0x3ff8000000000000);

          uVar8 = 0;

          if (local_2098 != 0) {

            uVar8 = uVar5 / local_2098;

          }

          if (0x3f < uVar8) {

            _bzero(local_1088,0x1000);

            _bzero(afStack_2088,0x1000);

            if (DAT_003ea868 != -1) {

              FUN_0028f878();

            }

            uVar2 = uVar8;

            if (uVar8 < 0x401) {

              uVar2 = 0x400;

            }

            if ((local_2098 != 0) && (local_2094 != 0)) {

              lVar17 = 0;

              uVar7 = local_20a4 >> 2 & 1;

              uVar3 = 0;

              if (local_2090 == 0x10) {

                uVar3 = uVar7;

              }

              bVar9 = local_2090 == 0x20;

              uVar4 = 0;

              if (bVar9) {

                uVar4 = uVar7;

              }

              bVar10 = local_2090 != 8;

              if (local_2090 < 9) {

                local_2090 = 8;

              }

              if (bVar10) {

                uVar7 = 1;

              }

              do {

                uVar6 = (uVar2 >> 10) * (int)lVar17;

                if (uVar8 - 1 <= uVar6) {

                  uVar6 = uVar8 - 1;

                }

                uVar14 = (ulong)(local_2090 >> 3) + (ulong)local_2098 * (ulong)uVar6;

                if (uVar5 < uVar14) goto LAB_001c1e74;

                uVar13 = 0;

                lVar1 = lVar19 + (ulong)local_2098 * (ulong)uVar6;

                fVar23 = 0.0;

                do {

                  lVar15 = uVar13 * (local_2090 >> 3);

                  uVar16 = uVar13;

                  if ((ulong)uVar5 < lVar15 + uVar14) break;

                  if ((bVar9 & local_20a4) == 0) {

                    if (uVar3 == 0) {

                      if (uVar4 == 0) {

                        if (uVar7 != 0) goto LAB_001c1e74;

                        fVar25 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + lVar15));

                        fVar25 = (fVar25 + -128.0) * 0.0078125;

                      }

                      else {

                        fVar25 = (float)*(int *)(lVar1 + lVar15) * 4.656613e-10;

                      }

                    }

                    else {

                      fVar25 = (float)(int)*(short *)(lVar1 + lVar15) / 32768.0;

                    }

                  }

                  else {

                    fVar25 = *(float *)(lVar1 + lVar15);

                  }

                  fVar23 = fVar23 + fVar25;

                  uVar13 = uVar13 + 1;

                  uVar16 = (ulong)local_2094;

                } while (local_2094 != uVar13);

                if ((int)uVar16 == 0) goto LAB_001c1e74;

                local_1088[lVar17] =

                     (fVar23 / (float)(uVar16 & 0xffffffff)) * (float)(&DAT_003e9868)[lVar17];

                lVar17 = lVar17 + 1;

              } while (lVar17 != 0x400);

              FUN_001c22e0(local_1088,afStack_2088);

              uVar14 = 0;

              uVar13 = 0;

              uVar16 = 0;

              dVar20 = local_20b0 * 0.0009765625;

              if (local_20b0 <= 1.0) {

                dVar20 = 43.06640625;

              }

              fVar25 = 0.0;

              uVar18 = 1;

              fVar24 = 0.0;

              fVar23 = 0.0;

              do {

                dVar28 = dVar20 * (double)uVar18;

                fVar27 = SQRT(afStack_2088[uVar18] * afStack_2088[uVar18] +

                              local_1088[uVar18] * local_1088[uVar18]) * 0.0009765625;

                if ((dVar28 < 35.0) || (180.0 < dVar28)) {

                  if ((dVar28 <= 180.0) || (1800.0 < dVar28)) {

                    if ((1800.0 < dVar28) && (dVar28 <= 7200.0)) {

                      fVar23 = fVar23 + fVar27;

                      uVar16 = uVar16 + 1;

                    }

                  }

                  else {

                    fVar24 = fVar24 + fVar27;

                    uVar13 = uVar13 + 1;

                  }

                }

                else {

                  fVar25 = fVar25 + fVar27;

                  uVar14 = uVar14 + 1;

                }

                uVar18 = uVar18 + 1;

              } while (uVar18 != 0x200);

              fVar26 = 0.0;

              fVar27 = 0.0;

              if (uVar14 != 0) {

                fVar27 = (fVar25 / (float)uVar14) * 46.0;

              }

              if (uVar13 != 0) {

                fVar26 = (fVar24 / (float)uVar13) * 34.0;

              }

              if (uVar16 == 0) {

                fVar23 = 0.0;

              }

              else {

                fVar23 = (fVar23 / (float)uVar16) * 26.0;

              }

              fVar25 = (float)_log1pf(fVar27);

              dVar20 = 1.0;

              if ((double)fVar25 <= 1.0) {

                dVar20 = (double)fVar25;

              }

              if (dVar20 <= 0.0) {

                dVar20 = 0.0;

              }

              fVar25 = (float)_log1pf(fVar26);

              dVar28 = 1.0;

              if ((double)fVar25 <= 1.0) {

                dVar28 = (double)fVar25;

              }

              if (dVar28 <= 0.0) {

                dVar28 = 0.0;

              }

              fVar23 = (float)_log1pf(fVar23);

              dVar21 = 1.0;

              if ((double)fVar23 <= 1.0) {

                dVar21 = (double)fVar23;

              }

              if (dVar21 <= 0.0) {

                dVar21 = 0.0;

              }

              dVar22 = (double)((float)dVar28 * 0.32 + (float)dVar20 * 0.58 + (float)dVar21 * 0.1);

              dVar21 = 1.0;

              if (dVar22 <= 1.0) {

                dVar21 = dVar22;

              }

              if (dVar21 <= 0.0) {

                dVar21 = 0.0;

              }

              FUN_001bfb40((float)dVar21,(float)dVar20,(float)dVar28);

            }

          }

        }

      }

LAB_001c1e74:

      _objc_release(uVar12);

    }

  }

  if (*(long *)PTR____stack_chk_guard_00388738 != local_88) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




