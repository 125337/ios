// FUN_000bb3c0 @0xbb3c0


void FUN_000bb3c0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  bool bVar1;

  int iVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar11;

  long lVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined8 local_1a0;

  long lStack_198;

  long *local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  long local_140;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  long local_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  lVar4 = _objc_loadWeakRetained(param_5 + 0x28);

  if (lVar4 == 0) goto LAB_000bb65c;

  FUN_002a6520(lVar4);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar5 == 0) goto LAB_000bb65c;

  _objc_getAssociatedObject(lVar4,PTR_LOOP_003e65f0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_002a5a20();

  lVar11 = *(long *)(param_5 + 0x30);

  _objc_release(uVar6);

  if ((lVar5 != lVar11) ||

     (iVar2 = FUN_000b4368(lVar4,*(undefined8 *)(param_5 + 0x20),*(undefined4 *)(param_5 + 0x40)),

     iVar2 == 0)) goto LAB_000bb65c;

  FUN_000839f4(lVar4);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if (lVar5 != 0) {

    _objc_setAssociatedObject

              (lVar5,PTR_LOOP_003e64a8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

  }

  uVar6 = FUN_000b11cc(lVar4);

  if ((((lVar5 == 0) || (iVar2 = FUN_00004f4c(lVar5), iVar2 == 0)) ||

      (uVar7 = FUN_00192180(lVar5), (uVar7 & 1) != 0)) ||

     (uVar7 = FUN_00192218(uVar6), (uVar7 & 1) != 0)) {

    iVar2 = 0;

  }

  else {

    iVar2 = FUN_000bbadc(lVar4);

  }

  FUN_00084b98(lVar4);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (((lVar11 == 0) || (dVar15 = 0.17, *(double *)(param_5 + 0x38) < 0.17)) ||

     ((uVar7 = FUN_00297780(lVar11), (uVar7 & 1) != 0 ||

      ((uVar7 = FUN_00297b40(lVar11), (uVar7 & 1) != 0 ||

       (uVar7 = FUN_002976e0(lVar11), (uVar7 & 1) != 0)))))) {

    _objc_retain(lVar4);

LAB_000bb538:

    bVar1 = false;

    lVar10 = lVar4;

  }

  else {

    dVar13 = (double)FUN_002935a0(lVar11);

    FUN_00293600(lVar11);

    FUN_002925a0(lVar11);

    dVar16 = param_4;

    FUN_002935a0(lVar11);

    dVar15 = (dVar15 - param_4) + param_3;

    dVar14 = -dVar13;

    if (-dVar13 <= dVar15) {

      dVar14 = dVar15;

    }

    uVar7 = FUN_000af718(lVar11);

    if ((uVar7 & 1) == 0) {

      FUN_002935e0(lVar11);

      dVar14 = dVar14 - dVar15;

      dVar15 = 120.0;

      bVar1 = dVar14 <= 120.0;

    }

    else {

      bVar1 = true;

    }

    iVar3 = FUN_000b448c(lVar4);

    if (iVar3 == 0) {

      local_160 = PTR___NSConcreteStackBlock_003886f0;

      local_158 = 0xc2000000;

      local_150 = FUN_000bc24c;

      puStack_148 = &DAT_00388e60;

      _objc_retain(lVar11);

      local_140 = lVar11;

      FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_01,&local_160);

      _objc_release(local_140);

    }

    else {

      FUN_00297ee0(lVar11);

      if (iVar2 != 0) {

        local_138 = PTR___NSConcreteStackBlock_003886f0;

        local_130 = 0xc2000000;

        local_128 = FUN_000bc21c;

        puStack_120 = &DAT_00388e60;

        _objc_retain(lVar11);

        local_118 = lVar11;

        FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_00,&local_138);

        _objc_release(local_118);

      }

    }

    if ((((bVar1) && (uVar7 = FUN_00297780(lVar11), (uVar7 & 1) == 0)) &&

        (uVar7 = FUN_00297b40(lVar11), (uVar7 & 1) == 0)) &&

       (uVar7 = FUN_002976e0(lVar11), (uVar7 & 1) == 0)) {

      dVar14 = (double)FUN_002935a0(lVar11);

      FUN_00293600(lVar11);

      FUN_002925a0(lVar11);

      FUN_002935a0(lVar11);

      uVar6 = FUN_002935e0(lVar11);

      param_3 = (dVar15 - dVar16) + param_3;

      dVar15 = -dVar14;

      if (-dVar14 <= param_3) {

        dVar15 = param_3;

      }

      FUN_0029d6e0(uVar6,dVar15,lVar11);

    }

    _objc_retain(lVar4);

    if (iVar3 == 0) goto LAB_000bb538;

    uStack_178 = 0;

    local_180 = 0;

    uStack_168 = 0;

    uStack_170 = 0;

    lStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    local_190 = (long *)0x0;

    FUN_002a62e0(lVar11);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar17._0_8_;

    lVar8 = FUN_00293880(uVar6,auVar17._8_8_,&local_1a0,auStack_110,0x10);

    if (lVar8 != 0) {

      lVar9 = *local_190;

      do {

        lVar12 = 0;

        do {

          if (*local_190 != lVar9) {

            _objc_enumerationMutation(uVar6);

          }

          FUN_00084c40(*(undefined8 *)(lStack_198 + lVar12 * 8));

          lVar10 = _objc_retainAutoreleasedReturnValue();

          if ((lVar10 != 0) &&

             (uVar7 = FUN_000b4368(lVar10,*(undefined8 *)(param_5 + 0x20),

                                   *(undefined4 *)(param_5 + 0x40)), (uVar7 & 1) != 0)) {

            _objc_release(lVar4);

            _objc_release(uVar6);

            bVar1 = true;

            if (lVar10 != lVar4) goto LAB_000bb5e0;

            goto LAB_000bb540;

          }

          _objc_release(lVar10);

          lVar12 = lVar12 + 1;

        } while (lVar8 != lVar12);

        lVar8 = FUN_00293880(uVar6,extraout_x1_02,&local_1a0,auStack_110,0x10);

      } while (lVar8 != 0);

    }

    _objc_release(uVar6);

    bVar1 = true;

    lVar10 = lVar4;

  }

LAB_000bb540:

  uVar7 = _objc_opt_respondsToSelector(*(undefined8 *)(param_5 + 0x20),"cellView");

  if ((uVar7 & 1) != 0) {

    _objc_msgSend(*(undefined8 *)(param_5 + 0x20),"cellView");

    lVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar7 = _objc_opt_isKindOfClass(lVar8,uVar6);

    if ((uVar7 & 1) != 0) {

      FUN_002a6520(lVar8);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      if (lVar9 != 0) {

        iVar2 = FUN_000b4368(lVar8,*(undefined8 *)(param_5 + 0x20),*(undefined4 *)(param_5 + 0x40));

        _objc_release(lVar9);

        if (iVar2 != 0) {

          _objc_retain(lVar8);

          _objc_release(lVar10);

          lVar10 = lVar8;

        }

      }

    }

    _objc_release(lVar8);

  }

LAB_000bb5e0:

  FUN_000b6e80(lVar10);

  if (bVar1) {

    FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,*(long *)(param_5 + 0x30) + 1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(lVar4,PTR_LOOP_003e65f0,uVar6,1);

    if (lVar10 != lVar4) {

      _objc_setAssociatedObject(lVar10,PTR_LOOP_003e65f0,uVar6,1);

    }

    _objc_release(uVar6);

  }

  _objc_release(lVar10);

  _objc_release(lVar11);

  _objc_release(lVar5);

LAB_000bb65c:

  _objc_release(lVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_90) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




