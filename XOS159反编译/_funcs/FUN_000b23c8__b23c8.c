// FUN_000b23c8 @0xb23c8


/* WARNING: Type propagation algorithm not settling */



void FUN_000b23c8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)



{

  uint uVar1;

  undefined *puVar2;

  long lVar3;

  long lVar4;

  bool bVar5;

  bool bVar6;

  uint uVar7;

  undefined8 uVar8;

  ulong uVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar16;

  long lVar17;

  double dVar18;

  double dVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined1 auVar22 [16];

  long local_188 [3];

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  long local_138;

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  uVar8 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar9 = _objc_opt_isKindOfClass(param_5,uVar8);

  if ((((uVar9 & 1) != 0) && (0.0 < param_3)) && (0.0 < param_4)) {

    local_138 = 0;

    uVar7 = FUN_000b3234(param_5,&local_138);

    lVar4 = local_138;

    _objc_retain(local_138);

    puVar2 = PTR_LOOP_003e6578;

    uVar1 = 0;

    if (lVar4 != 0) {

      uVar1 = uVar7;

    }

    if ((uVar1 & 1) != 0) {

      dVar19 = param_3;

      FUN_002a6100(param_1,param_2,&_OBJC_CLASS___NSValue);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(lVar4,puVar2,uVar8,1);

      _objc_release(uVar8);

      FUN_00084b98(param_5);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      if (lVar10 != 0) {

        uStack_158 = 0;

        local_160 = 0;

        uStack_148 = 0;

        uStack_150 = 0;

        local_188[2] = 0;

        local_188[1] = 0;

        uStack_168 = 0;

        local_170 = (long *)0x0;

        FUN_002a62e0();

        auVar22 = _objc_retainAutoreleasedReturnValue();

        uVar8 = auVar22._0_8_;

        lVar11 = FUN_00293880(uVar8,auVar22._8_8_,local_188 + 1,auStack_130,0x10);

        if (lVar11 != 0) {

          lVar17 = *local_170;

          do {

            lVar16 = 0;

            do {

              if (*local_170 != lVar17) {

                _objc_enumerationMutation(uVar8);

              }

              FUN_00084c40(*(undefined8 *)(local_188[2] + lVar16 * 8));

              lVar12 = _objc_retainAutoreleasedReturnValue();

              if (lVar12 != 0 && lVar12 != param_5) {

                local_188[0] = 0;

                uVar7 = FUN_000b3234(lVar12,local_188);

                lVar3 = local_188[0];

                _objc_retain(local_188[0]);

                uVar1 = 0;

                if (lVar3 == lVar4) {

                  uVar1 = uVar7;

                }

                if ((uVar1 & 1) != 0) {

                  FUN_000822c8(lVar12);

                  lVar13 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar13 != 0) && (uVar9 = FUN_002978a0(lVar13), (uVar9 & 1) == 0)) {

                    FUN_002a4880(lVar13);

                    lVar14 = _objc_retainAutoreleasedReturnValue();

                    _objc_release();

                    if (lVar14 != 0) {

                      FUN_002a4880(lVar13);

                      uVar15 = _objc_retainAutoreleasedReturnValue();

                      FUN_00295600(lVar13);

                      dVar18 = (double)FUN_00293720(uVar15,extraout_x1,lVar12);

                      if ((0.0 < dVar19) && (0.0 < param_4)) {

                        dVar19 = ABS(param_3 - dVar19);

                        bVar5 = false;

                        bVar6 = true;

                        if (ABS(param_1 - dVar18) <= 0.5) {

                          bVar5 = false;

                          bVar6 = true;

                          if (!NAN(dVar19)) {

                            bVar5 = dVar19 == 0.5;

                            bVar6 = 0.5 <= dVar19;

                          }

                        }

                        if (!bVar6 || bVar5) {

                          dVar19 = param_3;

                          FUN_00083a80(param_1,param_2,lVar12);

                        }

                        else {

                          uVar21 = param_2;

                          dVar19 = param_3;

                          dVar18 = param_4;

                          uVar20 = FUN_00293720(param_1,param_2,param_3,param_4,lVar12,

                                                extraout_x1_00,uVar15);

                          FUN_00292180(&_OBJC_CLASS___CATransaction);

                          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

                          FUN_0029e5e0(uVar20,uVar21,dVar19,dVar18,lVar13);

                          FUN_002930a0(&_OBJC_CLASS___CATransaction);

                          dVar19 = param_3;

                          FUN_00083a80(param_1,lVar12);

                        }

                      }

                      _objc_release(uVar15);

                    }

                  }

                  _objc_release(lVar13);

                }

                _objc_release(lVar3);

              }

              _objc_release(lVar12);

              lVar16 = lVar16 + 1;

            } while (lVar11 != lVar16);

            lVar11 = FUN_00293880(uVar8,extraout_x1_02,local_188 + 1,auStack_130,0x10);

          } while (lVar11 != 0);

        }

        _objc_release(uVar8);

      }

      _objc_release(lVar10);

    }

    _objc_release(lVar4);

  }

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




