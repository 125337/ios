// FUN_001a37cc @0x1a37cc


void FUN_001a37cc(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,double param_4,

                 long param_5,undefined8 param_6,ulong param_7)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  undefined8 uVar6;

  double dVar7;

  undefined8 uVar8;

  double dVar9;

  undefined1 auVar10 [16];

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_108 [128];

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if ((param_5 == 0) || (7 < param_7)) goto LAB_001a3960;

  _objc_retain(param_5);

  lVar1 = FUN_002a4e60(param_5);

  lVar4 = param_5;

  if (lVar1 == 0x1352577) {

LAB_001a38bc:

    _objc_release(lVar4);

  }

  else {

    FUN_002a4880(param_5);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    while (lVar1 != 0) {

      lVar2 = FUN_002a4e60(lVar1);

      if (lVar2 == 0x135257b) {

        _objc_release(lVar1);

        _objc_release(param_5);

        goto LAB_001a39b8;

      }

      FUN_002a4880(lVar1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar1);

      lVar1 = lVar2;

    }

    if (DAT_003e9640 == 0) goto LAB_001a38bc;

    uVar3 = _objc_opt_isKindOfClass(param_5);

    _objc_release(param_5);

    if ((uVar3 & 1) != 0) {

LAB_001a39b8:

      uVar3 = _objc_opt_respondsToSelector(param_5,"font");

      if (((uVar3 & 1) != 0) &&

         (uVar3 = _objc_opt_respondsToSelector(param_5,"setFont:"), (uVar3 & 1) != 0)) {

        auVar10 = _objc_opt_respondsToSelector(param_5,"text");

        if ((auVar10._0_8_ & 1) != 0) {

          FUN_002a6080(param_5,auVar10._8_8_,&cf_font);

          lVar4 = _objc_retainAutoreleasedReturnValue();

          if (lVar4 != 0) {

            _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f10);

            lVar1 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f18);

            auVar10 = _objc_retainAutoreleasedReturnValue();

            lVar2 = auVar10._0_8_;

            if ((lVar1 == 0) ||

               ((lVar2 != 0 && (uVar3 = FUN_002977c0(lVar4,auVar10._8_8_,lVar2), (uVar3 & 1) == 0)))

               ) {

              _objc_retain(lVar4);

              _objc_release(lVar1);

              _objc_setAssociatedObject(param_5,PTR_LOOP_003e6f10,lVar4,1);

              lVar1 = lVar4;

            }

            if ((int)param_6 == 0) {

              _objc_retain(lVar1);

              auVar10._8_8_ = extraout_x1_00;

              auVar10._0_8_ = lVar1;

              uVar6 = 0;

            }

            else {

              dVar7 = (double)FUN_0029a040(lVar1);

              dVar7 = dVar7 + DAT_003e94f8;

              if (dVar7 <= 1.0) {

                dVar7 = 1.0;

              }

              FUN_002955c0(dVar7,lVar1);

              auVar10 = _objc_retainAutoreleasedReturnValue();

              uVar6 = auVar10._0_8_;

            }

            uVar5 = auVar10._0_8_;

            auVar10 = FUN_002977c0(lVar4,auVar10._8_8_,uVar5);

            if ((auVar10._0_8_ & 1) == 0) {

              FUN_002a24a0(param_5,auVar10._8_8_,uVar5,&cf_font);

            }

            if ((DAT_003e9640 != 0) && (uVar3 = _objc_opt_isKindOfClass(param_5), (uVar3 & 1) != 0))

            {

              dVar7 = (double)FUN_00298040(uVar5);

              uVar8 = FUN_00295600(param_5);

              dVar7 = (double)(long)(dVar7 + 1.0);

              if (dVar7 <= 1.0) {

                dVar7 = 1.0;

              }

              if (0.5 < ABS(param_4 - dVar7)) {

                dVar9 = (double)_CGRectGetMidY(uVar8);

                FUN_0029e5e0(uVar8,dVar9 + dVar7 * -0.5,param_3,dVar7,param_5);

              }

            }

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e6f18,uVar6,1);

            _objc_release(uVar5);

            _objc_release(lVar2);

            _objc_release(lVar1);

            goto LAB_001a38bc;

          }

        }

      }

    }

  }

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

  uVar6 = auVar10._0_8_;

  lVar4 = FUN_00293880(uVar6,auVar10._8_8_,&local_150,auStack_108,0x10);

  if (lVar4 != 0) {

    lVar1 = *local_140;

    do {

      lVar2 = 0;

      do {

        if (*local_140 != lVar1) {

          _objc_enumerationMutation(uVar6);

        }

        FUN_001a37cc(*(undefined8 *)(lStack_148 + lVar2 * 8),param_6,param_7 + 1);

        lVar2 = lVar2 + 1;

      } while (lVar4 != lVar2);

      lVar4 = FUN_00293880(uVar6,extraout_x1,&local_150,auStack_108,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar6);

LAB_001a3960:

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_88) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




