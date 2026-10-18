// FUN_0010afe4 @0x10afe4


void FUN_0010afe4(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  undefined8 uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  double dVar9;

  double dVar10;

  undefined1 auVar11 [16];

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

  (*DAT_003e8198)();

  FUN_001079e0();

  if (DAT_003e8119 == '\x01' && (DAT_003e8128 & 0xfffffffffffffffb) != 0) {

    uStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    uStack_120 = 0;

    lStack_148 = 0;

    local_150 = 0;

    uStack_138 = 0;

    local_140 = (long *)0x0;

    FUN_002a4840(param_5);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar11._0_8_;

    lVar2 = FUN_00293880(uVar1,auVar11._8_8_,&local_150,auStack_110,0x10);

    if (lVar2 == 0) {

      _objc_release(uVar1);

      lVar5 = 0;

    }

    else {

      lVar5 = 0;

      lVar7 = *local_140;

      dVar10 = 0.0;

      do {

        lVar8 = 0;

        do {

          dVar9 = param_3;

          if (*local_140 != lVar7) {

            _objc_enumerationMutation(uVar1);

            dVar9 = param_3;

          }

          lVar6 = *(long *)(lStack_148 + lVar8 * 8);

          _objc_opt_class(lVar6);

          _NSStringFromClass();

          auVar11 = _objc_retainAutoreleasedReturnValue();

          uVar3 = FUN_00293580(auVar11._0_8_,auVar11._8_8_,&cf_HeadImage);

          _objc_release(auVar11._0_8_);

          uVar4 = extraout_x1;

          param_3 = dVar9;

          if ((((uVar3 & 1) == 0) &&

              (FUN_00295600(lVar6), uVar4 = extraout_x1_00, param_3 = dVar9, 20.0 < dVar9)) &&

             (FUN_00295600(lVar6), uVar4 = extraout_x1_01, param_3 = dVar9, 20.0 < param_4)) {

            FUN_00295600(lVar6);

            param_3 = dVar9;

            FUN_00295600(lVar6);

            dVar9 = dVar9 * param_4;

            uVar4 = extraout_x1_02;

            if (dVar10 < dVar9) {

              _objc_retain(lVar6);

              _objc_release(lVar5);

              uVar4 = extraout_x1_03;

              lVar5 = lVar6;

              dVar10 = dVar9;

            }

          }

          lVar8 = lVar8 + 1;

        } while (lVar2 != lVar8);

        lVar2 = FUN_00293880(uVar1,uVar4,&local_150,auStack_110,0x10);

      } while (lVar2 != 0);

      _objc_release(uVar1);

      if ((lVar5 != 0) && (FUN_00295600(lVar5), 0.0 < param_3)) {

        FUN_0010c338(param_5,lVar5);

      }

    }

    _objc_release(lVar5);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




