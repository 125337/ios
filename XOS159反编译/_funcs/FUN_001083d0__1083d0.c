// FUN_001083d0 @0x1083d0


void FUN_001083d0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  double dVar8;

  double dVar9;

  undefined1 auVar10 [16];

  long local_158;

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e8188)();

  FUN_001079e0();

  if (DAT_003e8119 == '\x01' && DAT_003e8128 == 4) {

    if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

      FUN_0010b41c(param_5);

      return;

    }

  }

  else {

    if (DAT_003e8119 != '\0' && DAT_003e8128 != 0) {

      if (DAT_003e81d0 == 0) {

        DAT_003e81d0 = _objc_getClass("WCPayBaseMessageCellView");

      }

      _objc_retain(param_5);

      if ((DAT_003e81d0 != 0) && (uVar1 = _objc_opt_isKindOfClass(param_5), (uVar1 & 1) != 0)) {

        _objc_retain(param_5);

        FUN_001079e0();

        if ((DAT_003e8119 == '\x01') && ((DAT_003e8128 & 0xfffffffffffffffb) != 0)) {

          uStack_128 = 0;

          local_130 = 0;

          uStack_118 = 0;

          uStack_120 = 0;

          lStack_148 = 0;

          local_150 = 0;

          uStack_138 = 0;

          local_140 = (long *)0x0;

          FUN_002a4840(param_5);

          auVar10 = _objc_retainAutoreleasedReturnValue();

          uVar2 = auVar10._0_8_;

          lVar3 = FUN_00293880(uVar2,auVar10._8_8_,&local_150,auStack_110,0x10);

          if (lVar3 == 0) {

            _objc_release(uVar2);

            local_158 = 0;

          }

          else {

            local_158 = 0;

            lVar7 = *local_140;

            dVar9 = 0.0;

            do {

              lVar5 = 0;

              do {

                dVar8 = param_3;

                if (*local_140 != lVar7) {

                  _objc_enumerationMutation(uVar2);

                  dVar8 = param_3;

                }

                lVar6 = *(long *)(lStack_148 + lVar5 * 8);

                _objc_opt_class(lVar6);

                _NSStringFromClass();

                auVar10 = _objc_retainAutoreleasedReturnValue();

                uVar1 = FUN_00293580(auVar10._0_8_,auVar10._8_8_,&cf_HeadImage);

                _objc_release(auVar10._0_8_);

                uVar4 = extraout_x1;

                param_3 = dVar8;

                if ((uVar1 & 1) == 0) {

                  auVar10 = FUN_002a4e60(lVar6);

                  uVar4 = auVar10._8_8_;

                  param_3 = dVar8;

                  if (auVar10._0_8_ != 0x15b31) {

                    auVar10 = FUN_002a4e60(lVar6);

                    uVar4 = auVar10._8_8_;

                    param_3 = dVar8;

                    if (((auVar10._0_8_ != 0x15b32) &&

                        (FUN_00295600(lVar6), uVar4 = extraout_x1_00, param_3 = dVar8, 20.0 < dVar8)

                        ) && (FUN_00295600(lVar6), uVar4 = extraout_x1_01, param_3 = dVar8,

                             20.0 < param_4)) {

                      FUN_00295600(lVar6);

                      param_3 = dVar8;

                      FUN_00295600(lVar6);

                      dVar8 = dVar8 * param_4;

                      uVar4 = extraout_x1_02;

                      if (dVar9 < dVar8) {

                        _objc_retain(lVar6);

                        _objc_release(local_158);

                        uVar4 = extraout_x1_03;

                        dVar9 = dVar8;

                        local_158 = lVar6;

                      }

                    }

                  }

                }

                lVar5 = lVar5 + 1;

              } while (lVar3 != lVar5);

              lVar3 = FUN_00293880(uVar2,uVar4,&local_150,auStack_110,0x10);

            } while (lVar3 != 0);

            _objc_release(uVar2);

            if ((local_158 != 0) && (FUN_00295600(local_158), 0.0 < param_3)) {

              FUN_0010c338(param_5,local_158);

            }

          }

          _objc_release(local_158);

        }

        _objc_release(param_5);

      }

      _objc_release(param_5);

    }

    if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

      return;

    }

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




