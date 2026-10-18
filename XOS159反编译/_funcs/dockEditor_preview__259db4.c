// dockEditor_preview @0x259db4


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockCustomStyleEditorViewController::dockEditor_preview(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  ulong uVar10;

  cfstringStruct *pcVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 in_d2;

  undefined1 auVar15 [16];

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

  iVar2 = FUN_0029a840();

  if (iVar2 == 0) {

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    FUN_0029a780(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = FUN_002937a0();

    _objc_release(uVar4);

    _objc_release(uVar3);

    lVar6 = FUN_00293880(uVar5,extraout_x1,&local_140,auStack_f8,0x10);

    if (lVar6 != 0) {

      lVar12 = *local_130;

      do {

        lVar13 = 0;

        do {

          if (*local_130 != lVar12) {

            _objc_enumerationMutation(uVar5);

          }

          FUN_0029b340(*(undefined8 *)(lStack_138 + lVar13 * 8));

          lVar13 = lVar13 + 1;

        } while (lVar6 != lVar13);

        lVar6 = FUN_00293880(uVar5,extraout_x1_00,&local_140,auStack_f8,0x10);

      } while (lVar6 != 0);

    }

    _objc_release(uVar5);

    FUN_00292ec0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5020();

    pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    FUN_0024e210(pcVar7);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1ae0(param_1,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_002947e0(param_1);

    FUN_002a6220(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar3);

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar3 = FUN_00296b80(0,0,in_d2,0x4054000000000000);

    FUN_002a4a60(&_OBJC_CLASS___UIColor);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar3,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_0029a780(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar15._0_8_,auVar15._8_8_,uVar3);

    _objc_release(auVar15._0_8_);

    _objc_retain(pcVar7);

    lVar6 = FUN_00294a00(param_1);

    pcVar11 = pcVar7;

    if (-1 < lVar6) {

      lVar6 = FUN_00294a00(param_1);

      FUN_0024da68(lVar6 + 100);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4400(&_OBJC_CLASS___NSMutableString);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar8 = auVar15._0_8_;

      FUN_00299540(uVar5,auVar15._8_8_,&cf_lift);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      auVar15 = _objc_opt_respondsToSelector(uVar9,"doubleValue");

      uVar4 = auVar15._8_8_;

      if ((auVar15._0_8_ & 1) != 0) {

        uVar4 = FUN_00294860(uVar9);

        NEON_fminnm(uVar4,0x4044000000000000);

        FUN_002a4720(param_1);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        iVar2 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,&cf_html);

        if (iVar2 == 0) {

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___xzy_template_lift___1f);

          uVar4 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_<___xzy_template_lift:__1f__>);

          uVar4 = _objc_retainAutoreleasedReturnValue();

        }

        _objc_release(auVar15._0_8_);

        FUN_002919e0(uVar8,extraout_x1_02,uVar4);

        _objc_release(uVar4);

        uVar4 = extraout_x1_03;

      }

      FUN_00299540(uVar5,uVar4,&cf_overflowTop);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4720(param_1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar14 = auVar15._0_8_;

      iVar2 = FUN_00297820(uVar14,auVar15._8_8_,&cf_html);

      if (iVar2 == 0) {

        _objc_release(uVar14);

      }

      else {

        uVar10 = _objc_opt_respondsToSelector(uVar4,"doubleValue");

        _objc_release(uVar14);

        if ((uVar10 & 1) != 0) {

          uVar14 = FUN_00294860(uVar4);

          NEON_fminnm(uVar14,0x405e000000000000);

          FUN_002919a0(uVar8,extraout_x1_04,&cf_<___xzy_template_overflow_top:__1f__>);

        }

      }

      lVar6 = FUN_00297fa0(uVar8);

      if (lVar6 != 0) {

        pcVar1 = &::cf___;

        if (pcVar7 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar7;

        }

        _objc_retain(pcVar1);

        FUN_002a44a0(uVar8,extraout_x1_05,pcVar1);

        pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        _objc_release(pcVar7);

        _objc_release(pcVar1);

      }

      _objc_release(uVar4);

      _objc_release(uVar9);

      _objc_release(uVar8);

      _objc_release(uVar5);

    }

    FUN_002a4720(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00255a3c(pcVar11,uVar4,uVar3);

    _objc_release(uVar4);

    FUN_0029e860(param_1,extraout_x1_06,1);

    FUN_002a4840(uVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_00293860();

    _objc_release(uVar4);

    FUN_0029f2e0(param_1,extraout_x1_07,lVar6 != 0);

    FUN_00292ec0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b860();

    _objc_release(uVar4);

    FUN_002a0aa0(param_1,extraout_x1_08,1);

    FUN_00292ec0(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,1);

    _objc_release(auVar15._0_8_);

    FUN_00291920(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,1);

    _objc_release(auVar15._0_8_);

    FUN_0029a780(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,0);

    _objc_release(auVar15._0_8_);

    FUN_0029a700(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f60(auVar15._0_8_,auVar15._8_8_,&cf_Sm);

    _objc_release(auVar15._0_8_);

    FUN_002a6220(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a780(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002925e0(uVar4,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar4);

    _objc_release(pcVar11);

    _objc_release(uVar3);

    _objc_release(pcVar7);

    if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

      return;

    }

  }

  else if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    FUN_002947c0(param_1);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




