// installPrivateBackdrop @0x285fc0


/* Function Stack Size: 0x10 bytes */



bool XZYDockOpticalLiquidGlassView::installPrivateBackdrop(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  ulong uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

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

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  undefined8 extraout_x1_26;

  undefined8 extraout_x1_27;

  undefined8 uVar17;

  undefined8 uVar18;

  long lVar19;

  bool bVar20;

  long lVar21;

  undefined4 uVar22;

  undefined4 uVar23;

  undefined4 uVar24;

  undefined4 uVar25;

  undefined1 auVar26 [16];

  undefined1 auVar27 [16];

  long local_240;

  long local_238;

  undefined8 local_230;

  long lStack_228;

  long *local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined4 local_1e8;

  undefined8 local_1e4;

  undefined8 local_1dc;

  undefined4 local_1d4;

  undefined4 local_1d0;

  undefined8 local_1cc;

  undefined8 local_1c4;

  undefined4 local_1bc;

  undefined4 local_1b8;

  undefined8 local_1b4;

  undefined8 local_1ac;

  undefined4 local_1a4;

  undefined8 local_1a0;

  undefined1 auStack_198 [128];

  cfstringStruct *local_118;

  cfstringStruct *local_110;

  cfstringStruct *local_108;

  undefined8 local_100;

  undefined8 local_f8;

  undefined8 local_f0;

  cfstringStruct *local_e8;

  cfstringStruct *local_e0;

  cfstringStruct *local_d8;

  cfstringStruct *local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  long local_a8;

  long local_a0;

  

  local_a0 = *(long *)PTR____stack_chk_guard_00388738;

  auVar26 = FUN_00292040();

  FUN_0029cf20(param_1,auVar26._8_8_,auVar26._0_8_ + 1);

  FUN_00292040(param_1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_XZYDockOpticalGlass__p__lu);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_1f0 = 0;

  FUN_00286aa0(uVar3,&local_1f0);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = local_1f0;

  _objc_retain();

  _objc_release(uVar3);

  FUN_00286d88(&cf_CAPortalLayer);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if ((lVar4 == 0 || lVar5 == 0) || (iVar2 = FUN_00286e44(lVar5), iVar2 == 0)) {

    bVar20 = 0;

  }

  else {

    FUN_0029fe60(lVar5,extraout_x1_00,&cf_XZYDockOpticalIdentityPortal);

    FUN_00297e40(&_OBJC_CLASS___CALayer);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar26._0_8_;

    FUN_0029fe60(uVar3,auVar26._8_8_,&cf_XZYDockOpticalIdentityCarrier);

    FUN_0029f960(uVar3,extraout_x1_01,1);

    FUN_00286f8c(uVar3);

    FUN_00291360(uVar3,extraout_x1_02,lVar5);

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_03,3);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar26._0_8_;

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar26._8_8_,3);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar26._0_8_;

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar26._8_8_,3);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    lVar21 = 0;

    uVar18 = *(undefined8 *)PTR__kCALineJoinRound_00388648;

    uVar17 = *(undefined8 *)PTR__kCALineCapRound_00388638;

    uVar22 = 0x3f800000;

    do {

      FUN_00286d88(&cf_CAPortalLayer);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0028c200(&cf_colorMatrix);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      if (lVar10 == 0) {

        local_238 = 0;

      }

      else {

        uVar24 = uVar22;

        if (lVar21 != 0) {

          uVar24 = 0;

        }

        uVar25 = uVar22;

        if (lVar21 != 1) {

          uVar25 = 0;

        }

        uVar23 = uVar22;

        if (lVar21 != 2) {

          uVar23 = 0;

        }

        uVar11 = _NSSelectorFromString(&cf_valueWithCAColorMatrix_);

        uVar12 = _objc_opt_class(&_OBJC_CLASS___NSValue);

        uVar13 = _objc_opt_respondsToSelector(uVar12,uVar11);

        if ((uVar13 & 1) == 0) {

          local_238 = 0;

          lVar19 = 0;

        }

        else {

          uVar12 = _objc_opt_class(&_OBJC_CLASS___NSValue);

          local_1dc = 0;

          local_1e4 = 0;

          local_1d4 = 0;

          local_1c4 = 0;

          local_1cc = 0;

          local_1bc = 0;

          local_1ac = 0;

          local_1b4 = 0;

          local_1a4 = 0;

          local_1a0 = 0x3f800000;

          local_1e8 = uVar24;

          local_1d0 = uVar25;

          local_1b8 = uVar23;

          _objc_msgSend(uVar12,uVar11,&local_1e8);

          auVar26 = _objc_retainAutoreleasedReturnValue();

          lVar19 = auVar26._0_8_;

          if (lVar19 == 0) {

            local_238 = 0;

          }

          else {

            FUN_002a4680(&_OBJC_CLASS___NSString,auVar26._8_8_,&cf_xzyDockOpticalChannel_lu);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00287004(lVar10,uVar11,&cf_name);

            if ((iVar2 == 0) ||

               (iVar2 = FUN_00287004(lVar10,lVar19,&cf_inputColorMatrix), iVar2 == 0)) {

              local_238 = 0;

            }

            else {

              iVar2 = FUN_00287004(lVar10,PTR____kCFBooleanTrue_00388320,&cf_enabled);

              local_238 = lVar10;

              if (iVar2 == 0) {

                local_238 = 0;

              }

            }

            _objc_release(uVar11);

          }

        }

        _objc_retain();

        _objc_release(lVar19);

      }

      _objc_release(lVar10);

      if (lVar21 == 0) {

LAB_00286388:

        local_240 = 0;

      }

      else {

        lVar10 = _NSClassFromString(&cf_CAFilter);

        uVar11 = _NSSelectorFromString(&cf_filterWithType_);

        if ((lVar10 == 0) ||

           (uVar13 = _objc_opt_respondsToSelector(lVar10,uVar11), (uVar13 & 1) == 0))

        goto LAB_00286388;

        _objc_msgSend(lVar10,uVar11,&cf_plusL);

        local_240 = _objc_retainAutoreleasedReturnValue();

      }

      if ((lVar9 == 0) || (local_238 == 0)) {

LAB_002869f8:

        bVar20 = 0;

        goto LAB_002869fc;

      }

      if ((lVar21 != 0) && (local_240 == 0)) {

        local_240 = 0;

        goto LAB_002869f8;

      }

      iVar2 = FUN_00286e44(lVar9,lVar4);

      if (iVar2 == 0) goto LAB_002869f8;

      FUN_00297e40(&_OBJC_CLASS___CALayer);

      auVar26 = _objc_retainAutoreleasedReturnValue();

      uVar11 = auVar26._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar26._8_8_,&cf_XZYDockOpticalChannel_luCarrier);

      auVar26 = _objc_retainAutoreleasedReturnValue();

      FUN_0029fe60(uVar11,auVar26._8_8_,auVar26._0_8_);

      _objc_release(auVar26._0_8_);

      FUN_0029f960(uVar11,extraout_x1_04,1);

      FUN_0029e8a0(uVar11,extraout_x1_05,1);

      FUN_002a1520(uVar11,extraout_x1_06,1);

      FUN_002987e0(&_OBJC_CLASS___UIScreen);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_0029bda0();

      FUN_002a0bc0(uVar11);

      _objc_release(uVar12);

      FUN_00286f8c(uVar11);

      local_a8 = local_238;

      FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_07,&local_a8,1);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      iVar2 = FUN_00287004(uVar11,uVar12,&cf_filters);

      _objc_release(uVar12);

      if ((iVar2 == 0) ||

         ((local_240 != 0 &&

          (iVar2 = FUN_00287004(uVar11,local_240,&cf_compositingFilter), iVar2 == 0)))) {

        _objc_release(uVar11);

        goto LAB_002869f8;

      }

      FUN_00297e40(&_OBJC_CLASS___CAShapeLayer);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar26 = FUN_00290a20(uVar14);

      FUN_0029e3a0(uVar12,auVar26._8_8_,auVar26._0_8_);

      _objc_release(uVar14);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar26 = FUN_00290a20(uVar14);

      FUN_002a1aa0(uVar12,auVar26._8_8_,auVar26._0_8_);

      _objc_release(uVar14);

      FUN_0029f500(uVar12,extraout_x1_08,uVar18);

      FUN_0029f480(uVar12,extraout_x1_09,uVar17);

      local_e8 = &cf_bounds;

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      local_e0 = &cf_position;

      local_c8 = uVar14;

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      local_d8 = &cf_path;

      local_c0 = uVar15;

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      local_d0 = &cf_lineWidth;

      local_b8 = uVar16;

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      auVar26 = _objc_retainAutoreleasedReturnValue();

      local_b0 = auVar26._0_8_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar26._8_8_,&local_c8,&local_e8,4);

      auVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c880(uVar12,auVar27._8_8_,auVar27._0_8_);

      _objc_release(auVar27._0_8_);

      _objc_release(auVar26._0_8_);

      _objc_release(uVar16);

      _objc_release(uVar15);

      _objc_release(uVar14);

      FUN_0029f920(uVar11,extraout_x1_10,uVar12);

      FUN_00291360(uVar11,extraout_x1_11,lVar9);

      FUN_00291240(uVar6,extraout_x1_12,uVar11);

      FUN_00291240(uVar7,extraout_x1_13,lVar9);

      FUN_00291240(uVar8,extraout_x1_14,uVar12);

      _objc_release(uVar12);

      _objc_release(uVar11);

      _objc_release(local_240);

      _objc_release(local_238);

      _objc_release(lVar9);

      lVar21 = lVar21 + 1;

    } while (lVar21 != 3);

    FUN_00297e40(&_OBJC_CLASS___CALayer);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    lVar9 = auVar26._0_8_;

    FUN_0029fe60(lVar9,auVar26._8_8_,&cf_XZYDockOpticalPortalComposite);

    FUN_0029f960(lVar9,extraout_x1_15,0);

    FUN_00286f8c(lVar9);

    FUN_00297e40(&_OBJC_CLASS___CAShapeLayer);

    local_238 = _objc_retainAutoreleasedReturnValue();

    FUN_002a64a0(&_OBJC_CLASS___UIColor);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    auVar26 = FUN_00290a20(uVar17);

    FUN_0029e3a0(local_238,auVar26._8_8_,auVar26._0_8_);

    _objc_release(uVar17);

    local_118 = &cf_bounds;

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    local_110 = &cf_position;

    local_100 = uVar17;

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    local_108 = &cf_path;

    local_f8 = uVar18;

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    local_f0 = auVar26._0_8_;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar26._8_8_,&local_100,&local_118,3);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_0029c880(local_238,auVar27._8_8_,auVar27._0_8_);

    _objc_release(auVar27._0_8_);

    _objc_release(auVar26._0_8_);

    _objc_release(uVar18);

    _objc_release(uVar17);

    FUN_0029f920(lVar9,extraout_x1_16,local_238);

    FUN_00291360(lVar9,extraout_x1_17,lVar4);

    FUN_00291360(lVar9,extraout_x1_18,uVar3);

    uStack_208 = 0;

    local_210 = 0;

    uStack_1f8 = 0;

    uStack_200 = 0;

    lStack_228 = 0;

    local_230 = 0;

    uStack_218 = 0;

    local_220 = (long *)0x0;

    _objc_retain(uVar6);

    auVar26 = FUN_00293880(uVar6,extraout_x1_19,&local_230,auStack_198,0x10);

    if (auVar26._0_8_ != 0) {

      lVar21 = *local_220;

      do {

        uVar17 = auVar26._8_8_;

        lVar10 = 0;

        do {

          if (*local_220 != lVar21) {

            _objc_enumerationMutation(uVar6);

            uVar17 = extraout_x1_20;

          }

          FUN_00291360(lVar9,uVar17,*(undefined8 *)(lStack_228 + lVar10 * 8));

          lVar10 = lVar10 + 1;

          uVar17 = extraout_x1_21;

        } while (auVar26._0_8_ != lVar10);

        auVar26 = FUN_00293880(uVar6,extraout_x1_21,&local_230,auStack_198,0x10);

      } while (auVar26._0_8_ != 0);

    }

    _objc_release(uVar6);

    FUN_00297e40(param_1);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4940(param_1);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_002970c0(uVar17,auVar26._8_8_,lVar9,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    _objc_release(uVar18);

    _objc_release(uVar17);

    FUN_0029cf40(param_1,extraout_x1_22,lVar4);

    FUN_0029cee0(param_1,extraout_x1_23,uVar1);

    FUN_002a07a0(param_1,extraout_x1_24,lVar9);

    FUN_002a07c0(param_1,extraout_x1_25,local_238);

    FUN_0029eb80(param_1,extraout_x1_26,uVar3);

    FUN_0029eba0(param_1,extraout_x1_27,lVar5);

    auVar26 = FUN_002937a0(uVar6);

    FUN_0029d380(param_1,auVar26._8_8_,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    auVar26 = FUN_002937a0(uVar7);

    FUN_0029d3c0(param_1,auVar26._8_8_,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    auVar26 = FUN_002937a0(uVar8);

    local_240 = auVar26._0_8_;

    FUN_0029d3a0(param_1,auVar26._8_8_,local_240);

    bVar20 = 1;

LAB_002869fc:

    _objc_release(local_240);

    _objc_release(local_238);

    _objc_release(lVar9);

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar3);

  }

  _objc_release(lVar5);

  _objc_release(lVar4);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a0) {

    return bVar20;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




