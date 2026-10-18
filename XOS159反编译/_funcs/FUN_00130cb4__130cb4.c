// FUN_00130cb4 @0x130cb4


void FUN_00130cb4(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  double in_d3;

  undefined1 auVar14 [16];

  undefined8 local_200;

  long lStack_1f8;

  long *local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  long lStack_1b8;

  long *local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if ((DAT_003e8690 == 0) && (DAT_003e8690 = _objc_getClass("MMCPLabel"), DAT_003e8690 == 0)) {

    lVar2 = 0;

  }

  else {

    if (DAT_003e8698 == 0) {

      DAT_003e8698 = _CFDictionaryCreateMutable(0,0,0,0);

    }

    uVar1 = _object_getClass(param_1);

    lVar2 = _CFDictionaryGetValue(DAT_003e8698,uVar1);

    if (lVar2 == 0) {

      lVar2 = _class_getInstanceVariable(uVar1,"m_chatRoomNameLabel");

      if (lVar2 == 0) {

        lVar2 = 1;

      }

      _CFDictionarySetValue(DAT_003e8698,uVar1,lVar2);

    }

    if (lVar2 != 1) {

      _object_getIvar(param_1,lVar2);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if ((((lVar2 != 0) && (uVar3 = _objc_opt_isKindOfClass(lVar2,DAT_003e8690), (uVar3 & 1) != 0))

          && (uVar3 = FUN_002978a0(lVar2), (uVar3 & 1) == 0)) && (FUN_00295600(lVar2), 0.0 < in_d3))

      goto LAB_00131078;

      _objc_release(lVar2);

    }

    uStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    uStack_190 = 0;

    lStack_1b8 = 0;

    local_1c0 = 0;

    uStack_1a8 = 0;

    local_1b0 = (long *)0x0;

    FUN_002a4840(param_1);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar14._0_8_;

    lVar4 = FUN_00293880(uVar1,auVar14._8_8_,&local_1c0,auStack_100,0x10);

    if (lVar4 != 0) {

      lVar10 = *local_1b0;

      do {

        lVar13 = 0;

        do {

          if (*local_1b0 != lVar10) {

            _objc_enumerationMutation(uVar1);

          }

          lVar2 = *(long *)(lStack_1b8 + lVar13 * 8);

          uVar3 = _objc_opt_isKindOfClass(lVar2,DAT_003e8690);

          if ((uVar3 & 1) != 0) {

            _objc_retain(lVar2);

            uVar3 = FUN_002978a0(lVar2);

            if ((uVar3 & 1) == 0) {

              FUN_00295600(lVar2);

              uVar3 = _CGRectIsEmpty();

              if ((((uVar3 & 1) == 0) && (FUN_00295600(lVar2), 0.0 < in_d3)) &&

                 (FUN_00295600(lVar2), in_d3 <= 20.0)) {

                FUN_002a5020(lVar2);

                uVar5 = _objc_retainAutoreleasedReturnValue();

                lVar6 = FUN_00297fa0();

                if (lVar6 != 0) {

LAB_00131068:

                  _objc_release(uVar5);

                  goto LAB_00131070;

                }

                FUN_00291ee0(lVar2);

                uVar7 = _objc_retainAutoreleasedReturnValue();

                lVar6 = FUN_00297fa0();

                _objc_release(uVar7);

                _objc_release(uVar5);

                if (lVar6 != 0) goto LAB_00131070;

              }

            }

            _objc_release(lVar2);

          }

          uStack_1d8 = 0;

          local_1e0 = 0;

          uStack_1c8 = 0;

          uStack_1d0 = 0;

          lStack_1f8 = 0;

          local_200 = 0;

          uStack_1e8 = 0;

          local_1f0 = (long *)0x0;

          FUN_002a4840(lVar2);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar14._0_8_;

          lVar6 = FUN_00293880(uVar5,auVar14._8_8_,&local_200,auStack_180,0x10);

          if (lVar6 != 0) {

            lVar11 = *local_1f0;

            do {

              lVar12 = 0;

              do {

                if (*local_1f0 != lVar11) {

                  _objc_enumerationMutation(uVar5);

                }

                lVar2 = *(long *)(lStack_1f8 + lVar12 * 8);

                auVar14 = _objc_opt_isKindOfClass(lVar2,DAT_003e8690);

                uVar7 = auVar14._8_8_;

                if ((auVar14._0_8_ & 1) != 0) {

                  _objc_retain(lVar2);

                  uVar3 = FUN_002978a0(lVar2);

                  if ((uVar3 & 1) == 0) {

                    FUN_00295600(lVar2);

                    uVar3 = _CGRectIsEmpty();

                    if ((((uVar3 & 1) == 0) && (FUN_00295600(lVar2), 0.0 < in_d3)) &&

                       (FUN_00295600(lVar2), in_d3 <= 20.0)) {

                      FUN_002a5020(lVar2);

                      uVar7 = _objc_retainAutoreleasedReturnValue();

                      lVar8 = FUN_00297fa0();

                      if (lVar8 != 0) {

                        _objc_release(uVar7);

                        goto LAB_00131068;

                      }

                      FUN_00291ee0(lVar2);

                      uVar9 = _objc_retainAutoreleasedReturnValue();

                      lVar8 = FUN_00297fa0();

                      _objc_release(uVar9);

                      _objc_release(uVar7);

                      if (lVar8 != 0) goto LAB_00131068;

                    }

                  }

                  _objc_release(lVar2);

                  uVar7 = extraout_x1;

                }

                lVar12 = lVar12 + 1;

              } while (lVar6 != lVar12);

              lVar6 = FUN_00293880(uVar5,uVar7,&local_200,auStack_180,0x10);

            } while (lVar6 != 0);

          }

          _objc_release(uVar5);

          lVar13 = lVar13 + 1;

        } while (lVar13 != lVar4);

        lVar4 = FUN_00293880(uVar1,extraout_x1_00,&local_1c0,auStack_100,0x10);

      } while (lVar4 != 0);

    }

    lVar2 = 0;

LAB_00131070:

    _objc_release(uVar1);

  }

LAB_00131078:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    _objc_autoreleaseReturnValue(lVar2);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




