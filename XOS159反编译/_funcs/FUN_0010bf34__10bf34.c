// FUN_0010bf34 @0x10bf34


void FUN_0010bf34(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5,long param_6,long param_7,long param_8,long param_9)



{

  ulong uVar1;

  long lVar2;

  undefined8 uVar3;

  ulong extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined1 auVar11 [16];

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

  _objc_retain();

  _objc_retain(param_6);

  lVar5 = 0;

  if ((param_5 == 0) || (param_7 == 0)) goto LAB_0010c138;

  _objc_getAssociatedObject(param_5,param_7);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar11._0_8_;

  if ((param_9 == 0) || (lVar5 == 0)) {

LAB_0010bff0:

    lVar5 = auVar11._0_8_;

    if ((param_6 != 0) && (lVar5 == 0)) {

      FUN_002a62a0(param_6,auVar11._8_8_,param_8);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if ((lVar2 == param_6) ||

         ((param_9 != 0 && (uVar1 = _objc_opt_isKindOfClass(lVar2,param_9), (uVar1 & 1) == 0)))) {

        lVar5 = 0;

      }

      else {

        _objc_retain(lVar2);

        _objc_setAssociatedObject(param_5,param_7,lVar2,1);

        lVar5 = lVar2;

      }

      _objc_release(lVar2);

    }

    if (lVar5 == 0) {

      uStack_148 = 0;

      local_150 = 0;

      uStack_138 = 0;

      uStack_140 = 0;

      lStack_168 = 0;

      local_170 = 0;

      uStack_158 = 0;

      local_160 = (long *)0x0;

      FUN_002a4840(param_5);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar11._0_8_;

      lVar2 = FUN_00293880(uVar9,auVar11._8_8_,&local_170,auStack_130,0x10);

      if (lVar2 != 0) {

        lVar6 = *local_160;

        do {

          lVar7 = 0;

          do {

            if (*local_160 != lVar6) {

              _objc_enumerationMutation(uVar9);

            }

            lVar5 = *(long *)(lStack_168 + lVar7 * 8);

            auVar11 = FUN_002a4e60(lVar5);

            uVar4 = auVar11._8_8_;

            if (auVar11._0_8_ == param_8) {

              if (param_9 != 0) {

                auVar11 = _objc_opt_isKindOfClass(lVar5,param_9);

                uVar4 = auVar11._8_8_;

                if ((auVar11._0_8_ & 1) == 0) goto LAB_0010c220;

              }

              _objc_retain(lVar5);

              _objc_setAssociatedObject(param_5,param_7,lVar5,1);

              _objc_release(uVar9);

              if (lVar5 == 0) goto LAB_0010c138;

              goto LAB_0010c064;

            }

LAB_0010c220:

            lVar7 = lVar7 + 1;

          } while (lVar2 != lVar7);

          lVar2 = FUN_00293880(uVar9,uVar4,&local_170,auStack_130,0x10);

        } while (lVar2 != 0);

      }

      _objc_release(uVar9);

      lVar5 = 0;

      goto LAB_0010c138;

    }

  }

  else {

    uVar1 = _objc_opt_isKindOfClass(lVar5,param_9);

    if ((uVar1 & 1) == 0) {

      _objc_setAssociatedObject(param_5,param_7,0,1);

      _objc_release(lVar5);

      auVar11._8_8_ = 0;

      auVar11._0_8_ = extraout_x1;

      auVar11 = auVar11 << 0x40;

      goto LAB_0010bff0;

    }

  }

LAB_0010c064:

  FUN_002a4880(lVar5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 != param_5) {

    uVar8 = FUN_00295600(lVar5);

    uVar9 = param_2;

    uVar4 = param_3;

    uVar10 = param_4;

    FUN_002a4880(lVar5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      FUN_002a4880(lVar5);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_00295600(lVar5);

      uVar8 = FUN_00293720(uVar3,extraout_x1_00,param_5);

      _objc_release(uVar3);

      param_2 = uVar9;

      param_3 = uVar4;

      param_4 = uVar10;

    }

    FUN_0029b340(lVar5);

    FUN_0029e5e0(uVar8,param_2,param_3,param_4,lVar5);

    FUN_00291380(param_5,extraout_x1_01,lVar5);

  }

LAB_0010c138:

  _objc_release(param_6);

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_b0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar5);

  return;

}




