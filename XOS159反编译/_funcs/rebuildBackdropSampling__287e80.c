// rebuildBackdropSampling @0x287e80


/* Function Stack Size: 0x10 bytes */



void XZYDockOpticalLiquidGlassView::rebuildBackdropSampling(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined8 local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a6520();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 == 0) || (uVar3 = FUN_002a6020(param_1), (uVar3 & 1) == 0)) {

    if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

      _objc_release(lVar2);

      return;

    }

  }

  else {

    FUN_0029a0c0(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(lVar2);

    if (lVar4 != 0) {

      FUN_00292060(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_0029a0c0(param_1);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_00292040(param_1);

      auVar11 = FUN_00292040(param_1);

      FUN_0029cf20(param_1,auVar11._8_8_,auVar11._0_8_ + 1);

      FUN_00292040(param_1);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_XZYDockOpticalGlass__p__lu);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      local_f8 = 0;

      FUN_00286aa0(uVar6,&local_f8);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      uVar1 = local_f8;

      _objc_retain(local_f8);

      _objc_release(uVar6);

      if (lVar7 == 0) {

        FUN_0029cf20(param_1,extraout_x1_00,uVar5);

        FUN_0029ac40(param_1);

      }

      else {

        if (lVar2 == 0) {

          FUN_002925a0(param_1);

        }

        else {

          FUN_00295600(lVar2);

        }

        FUN_0029e5e0(lVar7);

        FUN_00292180(&_OBJC_CLASS___CATransaction);

        FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

        FUN_002a4860(lVar2);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar8 == lVar4) {

          FUN_0029b600(lVar4,extraout_x1_02,lVar2,lVar7);

          uVar5 = extraout_x1_04;

        }

        else {

          FUN_002970a0(lVar4,extraout_x1_02,lVar7,0);

          uVar5 = extraout_x1_03;

        }

        FUN_0029cf40(param_1,uVar5,lVar7);

        FUN_0029cee0(param_1,extraout_x1_05,uVar1);

        FUN_0029b320(lVar4);

        FUN_00297e40(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4940(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002970c0(uVar5,auVar11._8_8_,lVar4,auVar11._0_8_);

        _objc_release(auVar11._0_8_);

        _objc_release(uVar6);

        _objc_release(uVar5);

        FUN_00287004(lVar7,PTR____kCFBooleanFalse_00388318,&cf_enabled);

        FUN_00287004(lVar7,PTR____kCFBooleanTrue_00388320,&cf_enabled);

        FUN_00296420(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00286e44(uVar5,lVar7);

        _objc_release(uVar5);

        uStack_118 = 0;

        local_120 = 0;

        uStack_108 = 0;

        uStack_110 = 0;

        lStack_138 = 0;

        local_140 = 0;

        uStack_128 = 0;

        local_130 = (long *)0x0;

        FUN_00292bc0(param_1);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar11._0_8_;

        lVar8 = FUN_00293880(uVar5,auVar11._8_8_,&local_140,auStack_f0,0x10);

        if (lVar8 != 0) {

          lVar9 = *local_130;

          do {

            lVar10 = 0;

            do {

              if (*local_130 != lVar9) {

                _objc_enumerationMutation(uVar5);

              }

              FUN_00286e44(*(undefined8 *)(lStack_138 + lVar10 * 8),lVar7);

              lVar10 = lVar10 + 1;

            } while (lVar8 != lVar10);

            lVar8 = FUN_00293880(uVar5,extraout_x1_06,&local_140,auStack_f0,0x10);

          } while (lVar8 != 0);

        }

        _objc_release(uVar5);

        FUN_002930a0(&_OBJC_CLASS___CATransaction);

        FUN_0029ff40(param_1);

        FUN_00297ee0(param_1);

      }

      _objc_release(lVar7);

      _objc_release(uVar1);

      _objc_release(lVar4);

      _objc_release(lVar2);

    }

    if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

      return;

    }

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




