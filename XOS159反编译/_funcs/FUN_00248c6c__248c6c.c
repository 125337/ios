// FUN_00248c6c @0x248c6c


void FUN_00248c6c(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  long lVar7;

  long lVar8;

  double dVar9;

  double dVar10;

  undefined1 auVar11 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  FUN_002a62a0(param_1,extraout_x1,&DAT_00002457);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

  uVar2 = uVar1;

  if ((uVar3 & 1) == 0) {

    auVar11 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

    uVar2 = FUN_00296b00(auVar11._0_8_,auVar11._8_8_,0);

    _objc_release(uVar1);

    FUN_002a1c80(uVar2,extraout_x1_00,&DAT_00002457);

    FUN_002a23c0(uVar2,extraout_x1_01,0);

    FUN_0029ce00(uVar2,extraout_x1_02,0x12);

    FUN_00297100(param_1,extraout_x1_03,uVar2,0);

  }

  FUN_0024906c(uVar2);

  FUN_002925a0(param_1);

  FUN_0029e5e0(uVar2);

  FUN_002925a0(param_1);

  dVar9 = (double)_CGRectGetWidth();

  FUN_002925a0(param_1);

  dVar10 = (double)_CGRectGetHeight();

  FUN_00297e40(uVar2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  if (dVar10 <= dVar9) {

    dVar9 = dVar10;

  }

  FUN_0029d820(dVar9 * 0.5);

  _objc_release(uVar1);

  FUN_00297e40(uVar2);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f960(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_00293060(0x3ff0000000000000,0x3fb47ae147ae147b,&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00293060(0x3fb47ae147ae147b,0x3fb999999999999a,&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00231604(uVar1,uVar4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00293640(uVar2);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar11._0_8_,auVar11._8_8_,uVar5);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar1);

  FUN_0029c600(param_1,extraout_x1_04,uVar2);

  uVar1 = _objc_opt_class(&_OBJC_CLASS___UIButton);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar1);

  if ((uVar3 & 1) != 0) {

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    FUN_002a4840(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_002937a0();

    _objc_release(uVar1);

    lVar6 = FUN_00293880(uVar4,extraout_x1_05,&local_140,auStack_f8,0x10);

    if (lVar6 != 0) {

      lVar7 = *local_130;

      do {

        lVar8 = 0;

        do {

          if (*local_130 != lVar7) {

            _objc_enumerationMutation(uVar4);

          }

          uVar5 = *(undefined8 *)(lStack_138 + lVar8 * 8);

          uVar1 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

          auVar11 = _objc_opt_isKindOfClass(uVar5,uVar1);

          uVar1 = auVar11._8_8_;

          if ((auVar11._0_8_ & 1) == 0) {

            uVar1 = _objc_opt_class(&_OBJC_CLASS___UILabel);

            auVar11 = _objc_opt_isKindOfClass(uVar5,uVar1);

            uVar1 = auVar11._8_8_;

            if ((auVar11._0_8_ & 1) != 0) goto LAB_00248f3c;

          }

          else {

LAB_00248f3c:

            FUN_002925e0(param_1,uVar1,uVar5);

            uVar1 = extraout_x1_06;

          }

          lVar8 = lVar8 + 1;

        } while (lVar6 != lVar8);

        lVar6 = FUN_00293880(uVar4,uVar1,&local_140,auStack_f8,0x10);

      } while (lVar6 != 0);

    }

    _objc_release(uVar4);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    _objc_autoreleaseReturnValue(uVar2);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




