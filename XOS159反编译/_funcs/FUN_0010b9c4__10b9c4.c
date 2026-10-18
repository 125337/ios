// FUN_0010b9c4 @0x10b9c4


void FUN_0010b9c4(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 uVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  double dVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  long local_158;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_5 == 0) {

    lVar4 = 0;

    goto LAB_0010be1c;

  }

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6908);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  auVar14 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

  uVar5 = auVar14._8_8_;

  if ((auVar14._0_8_ & 1) == 0) {

LAB_0010bb08:

    local_158 = 0;

LAB_0010bb0c:

    if (lVar2 != 0) {

      FUN_002a4880(lVar2);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if ((((lVar4 == 0) || (uVar3 = FUN_002978a0(lVar2), (uVar3 & 1) != 0)) ||

          (dVar13 = (double)FUN_002916a0(lVar2), dVar13 <= 0.01)) ||

         ((FUN_002925a0(lVar2), param_3 <= 0.5 || (FUN_002925a0(lVar2), param_4 <= 0.5)))) {

        _objc_release(lVar4);

      }

      else {

        iVar1 = FUN_00297700(lVar2,extraout_x1_01,param_5);

        _objc_release(lVar4);

        lVar4 = lVar2;

        if (iVar1 != 0) goto LAB_0010bb98;

      }

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6908,0,1);

      uVar5 = extraout_x1_02;

    }

    FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,uVar5,param_5);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    while (lVar4 = FUN_00293860(uVar5), lVar4 != 0) {

      FUN_00297d80(uVar5);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b3e0(uVar5);

      uStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      uStack_110 = 0;

      lStack_138 = 0;

      local_140 = 0;

      uStack_128 = 0;

      local_130 = (long *)0x0;

      FUN_002a4840(uVar6);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      uVar7 = auVar14._0_8_;

      auVar14 = FUN_00293880(uVar7,auVar14._8_8_,&local_140,auStack_100,0x10);

      if (auVar14._0_8_ != 0) {

        lVar11 = *local_130;

        do {

          uVar9 = auVar14._8_8_;

          lVar12 = 0;

          do {

            if (*local_130 != lVar11) {

              _objc_enumerationMutation(uVar7);

              uVar9 = extraout_x1_03;

            }

            lVar4 = *(long *)(lStack_138 + lVar12 * 8);

            if (lVar4 != 0) {

              auVar15 = FUN_002978a0(lVar4);

              uVar9 = auVar15._8_8_;

              if (((auVar15._0_8_ & 1) == 0) &&

                 (dVar13 = (double)FUN_002916a0(lVar4), uVar9 = extraout_x1_04, 0.01 < dVar13)) {

                FUN_002a4880(lVar4);

                lVar8 = _objc_retainAutoreleasedReturnValue();

                lVar10 = lVar8;

                if (lVar8 != 0 && lVar8 != param_5) {

                  do {

                    uVar3 = FUN_002978a0(lVar10);

                    if (((uVar3 & 1) != 0) ||

                       (dVar13 = (double)FUN_002916a0(lVar10), dVar13 <= 0.01)) goto LAB_0010bd38;

                    FUN_002a4880(lVar10);

                    lVar8 = _objc_retainAutoreleasedReturnValue();

                    _objc_release(lVar10);

                  } while ((lVar8 != 0) && (lVar10 = lVar8, lVar8 != param_5));

                }

                _objc_release(lVar8);

                _objc_opt_class(lVar4);

                _NSStringFromClass();

                auVar15 = _objc_retainAutoreleasedReturnValue();

                lVar10 = auVar15._0_8_;

                auVar15 = FUN_00293580(lVar10,auVar15._8_8_,&cf_HeadImage);

                if (((((auVar15._0_8_ & 1) != 0) ||

                     (iVar1 = FUN_00293580(lVar10,auVar15._8_8_,&cf_Avatar), iVar1 != 0)) &&

                    (FUN_002925a0(lVar4), 0.5 < param_3)) && (FUN_002925a0(lVar4), 0.5 < param_4)) {

                  _objc_setAssociatedObject(param_5,PTR_LOOP_003e6908,lVar4,1);

                  _objc_retain(lVar4);

                  _objc_release(lVar10);

                  _objc_release(uVar7);

                  _objc_release(uVar6);

                  goto LAB_0010be04;

                }

                auVar15 = FUN_00293860(uVar5);

                if (auVar15._0_8_ < 0x40) {

                  FUN_00291240(uVar5,auVar15._8_8_,lVar4);

                }

LAB_0010bd38:

                _objc_release(lVar10);

                uVar9 = extraout_x1_05;

              }

            }

            lVar12 = lVar12 + 1;

          } while (lVar12 != auVar14._0_8_);

          auVar14 = FUN_00293880(uVar7,uVar9,&local_140,auStack_100,0x10);

        } while (auVar14._0_8_ != 0);

      }

      _objc_release(uVar7);

      _objc_release(uVar6);

    }

    lVar4 = 0;

LAB_0010be04:

    _objc_release(uVar5);

  }

  else {

    FUN_00299c80(param_5,uVar5,"getHeadImageView");

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar14._8_8_;

    local_158 = auVar14._0_8_;

    if (local_158 == 0) goto LAB_0010bb08;

    uVar3 = FUN_002978a0();

    if (((uVar3 & 1) != 0) || (dVar13 = (double)FUN_002916a0(local_158), dVar13 <= 0.01)) {

LAB_0010bae0:

      lVar4 = 0;

    }

    else {

      FUN_002a4880(local_158);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar4 == 0) goto LAB_0010bae0;

      FUN_002925a0(local_158);

      uVar5 = extraout_x1;

      if ((param_3 <= 0.5) || (FUN_002925a0(local_158), uVar5 = extraout_x1_00, param_4 <= 0.5))

      goto LAB_0010bb0c;

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6908,local_158,1);

      lVar4 = local_158;

LAB_0010bb98:

      _objc_retain(lVar4);

    }

  }

  _objc_release(lVar2);

  _objc_release(local_158);

LAB_0010be1c:

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    _objc_autoreleaseReturnValue(lVar4);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




