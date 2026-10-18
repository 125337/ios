// FUN_0010b520 @0x10b520


void FUN_0010b520(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined8 extraout_x1_02;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

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

  lVar2 = _objc_loadWeakRetained(param_5 + 0x20);

  if (lVar2 != 0) {

    FUN_002a6520(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (((lVar3 == 0) || (FUN_001079e0(), DAT_003e8119 != '\x01')) || (DAT_003e8128 != 4)) {

      _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6910,0,1);

    }

    else {

      _objc_retain(lVar2);

      FUN_000822c8(lVar2);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (((lVar3 == 0) || (uVar4 = FUN_002978a0(lVar3), (uVar4 & 1) != 0)) ||

         ((FUN_00295600(lVar3), param_3 <= 0.5 || (FUN_00295600(lVar3), param_4 <= 0.5)))) {

        uStack_128 = 0;

        local_130 = 0;

        uStack_118 = 0;

        uStack_120 = 0;

        lStack_148 = 0;

        local_150 = 0;

        uStack_138 = 0;

        local_140 = (long *)0x0;

        FUN_002a4840(lVar2);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar15._0_8_;

        auVar15 = FUN_00293880(uVar6,auVar15._8_8_,&local_150,auStack_110,0x10);

        lVar8 = 0;

        if (auVar15._0_8_ != 0) {

          lVar11 = *local_140;

          dVar13 = 0.0;

          do {

            uVar7 = auVar15._8_8_;

            lVar9 = 0;

            do {

              if (*local_140 != lVar11) {

                _objc_enumerationMutation(uVar6);

                uVar7 = extraout_x1;

              }

              lVar10 = *(long *)(lStack_148 + lVar9 * 8);

              if (lVar10 != 0) {

                auVar14 = FUN_002978a0(lVar10);

                uVar7 = auVar14._8_8_;

                if (((auVar14._0_8_ & 1) == 0) &&

                   (dVar12 = (double)FUN_002916a0(lVar10), uVar7 = extraout_x1_00, 0.01 < dVar12)) {

                  _objc_opt_class(lVar10);

                  _NSStringFromClass();

                  auVar14 = _objc_retainAutoreleasedReturnValue();

                  uVar4 = FUN_00293580(auVar14._0_8_,auVar14._8_8_,&cf_HeadImage);

                  if (((uVar4 & 1) == 0) &&

                     ((((lVar5 = FUN_002a4e60(lVar10), lVar5 != 0x15b31 &&

                        (lVar5 = FUN_002a4e60(lVar10), lVar5 != 0x15b32)) &&

                       (FUN_002925a0(lVar10), 20.0 < param_3)) &&

                      ((20.0 < param_4 && (dVar12 = param_3 * param_4, dVar13 < dVar12)))))) {

                    _objc_retain(lVar10);

                    _objc_release(lVar8);

                    lVar8 = lVar10;

                    dVar13 = dVar12;

                  }

                  _objc_release(auVar14._0_8_);

                  uVar7 = extraout_x1_01;

                }

              }

              lVar9 = lVar9 + 1;

            } while (auVar15._0_8_ != lVar9);

            auVar15 = FUN_00293880(uVar6,uVar7,&local_150,auStack_110,0x10);

          } while (auVar15._0_8_ != 0);

        }

        _objc_release(uVar6);

      }

      else {

        _objc_retain(lVar3);

        lVar8 = lVar3;

      }

      _objc_release(lVar3);

      _objc_release(lVar2);

      FUN_0010b9c4(lVar2);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      puVar1 = PTR_LOOP_003e68f8;

      if (lVar3 == 0) {

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UILabel);

        FUN_0010bf34(lVar2,lVar8,puVar1,0x15b31,uVar6);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        puVar1 = PTR_LOOP_003e6900;

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

        FUN_0010bf34(lVar2,lVar8,puVar1,0x15b32,uVar6);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar15._8_8_;

        lVar11 = auVar15._0_8_;

        if (lVar3 != 0) {

          FUN_0029e8a0(lVar3,uVar6,1);

          uVar6 = extraout_x1_02;

        }

        if (lVar11 != 0) {

          FUN_0029e8a0(lVar11,uVar6,1);

        }

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6910,0,1);

        _objc_release(lVar11);

        _objc_release(lVar3);

      }

      else {

        FUN_0010c338(lVar2,lVar8);

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6910,0,1);

      }

      _objc_release(lVar8);

    }

  }

  _objc_release(lVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




