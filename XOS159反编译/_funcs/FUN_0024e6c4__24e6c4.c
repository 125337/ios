// FUN_0024e6c4 @0x24e6c4


/* WARNING: Type propagation algorithm not settling */



undefined1  [16] FUN_0024e6c4(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  long lVar6;

  long extraout_x1_00;

  long extraout_x1_01;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  double local_148 [2];

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

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  uVar2 = 0;

  uVar10 = 0;

  if ((uVar3 & 1) != 0) {

    auVar12 = FUN_00297fa0(param_1);

    uVar9 = auVar12._8_8_;

    if (auVar12._0_8_ != 0) {

      if (DAT_003eb310 == 0) {

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        lVar5 = DAT_003eb310;

        DAT_003eb310 = lVar4;

        _objc_release(lVar5);

        uVar9 = extraout_x1;

      }

      FUN_00299540(DAT_003eb310,uVar9,param_1);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      lVar5 = auVar12._0_8_;

      if (lVar5 == 0) {

        uStack_118 = 0;

        local_120 = 0;

        uStack_108 = 0;

        uStack_110 = 0;

        lStack_138 = 0;

        local_148[1] = 0.0;

        uStack_128 = 0;

        local_130 = (long *)0x0;

        auVar12 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf040,auVar12._8_8_,

                               local_148 + 1,auStack_100,0x10);

        uVar2 = auVar12._8_8_;

        if (auVar12._0_8_ != 0) {

          lVar4 = *local_130;

          do {

            lVar6 = auVar12._8_8_;

            lVar7 = 0;

            do {

              if (*local_130 != lVar4) {

                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bf040);

                lVar6 = extraout_x1_00;

              }

              auVar13 = FUN_0029abc0(param_1,lVar6,*(undefined8 *)(lStack_138 + lVar7 * 8),1);

              lVar6 = auVar13._8_8_;

              if (auVar13._0_8_ != 0x7fffffffffffffff) {

                FUN_002a47c0(param_1,lVar6,auVar13._0_8_ + lVar6);

                auVar13 = _objc_retainAutoreleasedReturnValue();

                uVar2 = auVar13._0_8_;

                FUN_0029be20(&_OBJC_CLASS___NSScanner,auVar13._8_8_,uVar2);

                auVar13 = _objc_retainAutoreleasedReturnValue();

                uVar10 = auVar13._0_8_;

                local_148[0] = 0.0;

                iVar1 = FUN_0029bdc0(uVar10,auVar13._8_8_,local_148);

                if (iVar1 != 0) {

                  uVar9 = NEON_fminnm(local_148[0],0x405e000000000000);

                  if (local_148[0] <= 0.0) {

                    uVar9 = 0;

                  }

                  uVar11 = 0;

                  FUN_002993a0(uVar9,&_OBJC_CLASS___NSNumber);

                  auVar12 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a00a0(DAT_003eb310,auVar12._8_8_,auVar12._0_8_,param_1);

                  _objc_release(auVar12._0_8_);

                  _objc_release(uVar10);

                  _objc_release(uVar2);

                  auVar12._8_8_ = uVar11;

                  auVar12._0_8_ = uVar9;

                  goto LAB_0024e900;

                }

                _objc_release(uVar10);

                _objc_release(uVar2);

                lVar6 = extraout_x1_01;

              }

              lVar7 = lVar7 + 1;

            } while (auVar12._0_8_ != lVar7);

            auVar12 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf040,lVar6,local_148 + 1,

                                   auStack_100,0x10);

            uVar2 = auVar12._8_8_;

          } while (auVar12._0_8_ != 0);

        }

        uVar3 = 0;

        FUN_002a00a0(DAT_003eb310,uVar2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf730,param_1);

        auVar13._8_8_ = 0;

        auVar13._0_8_ = uVar3;

        auVar12 = auVar13 << 0x40;

      }

      else {

        auVar12 = FUN_00294860(lVar5);

      }

LAB_0024e900:

      uVar10 = auVar12._8_8_;

      uVar2 = auVar12._0_8_;

      _objc_release(lVar5);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    auVar8._8_8_ = uVar10;

    auVar8._0_8_ = uVar2;

    return auVar8;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




