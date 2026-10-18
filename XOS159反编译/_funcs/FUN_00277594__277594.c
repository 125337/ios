// FUN_00277594 @0x277594


void FUN_00277594(undefined1 param_1 [16],double param_2,double param_3,undefined8 param_4,

                 undefined8 param_5,uint param_6)



{

  bool bVar1;

  long lVar2;

  int iVar3;

  int iVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  ulong uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

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

  undefined8 uVar13;

  undefined8 uVar14;

  long lVar15;

  long lVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  double dVar21;

  double dVar22;

  double dVar23;

  double dVar24;

  double dVar25;

  double dVar26;

  double dVar27;

  undefined1 auVar28 [16];

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  undefined1 auVar31 [16];

  undefined1 auVar32 [16];

  long local_3a0;

  long local_310;

  undefined8 local_308;

  undefined8 local_300;

  long lStack_2f8;

  long *local_2f0;

  undefined8 uStack_2e8;

  undefined8 local_2e0;

  undefined8 uStack_2d8;

  undefined8 uStack_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined1 auStack_240 [128];

  undefined1 auStack_1c0 [128];

  undefined8 local_140;

  undefined8 local_138;

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  lStack_2b8 = 0;

  local_2c0 = 0;

  uStack_2a8 = 0;

  local_2b0 = (long *)0x0;

  uStack_298 = 0;

  local_2a0 = 0;

  uStack_288 = 0;

  uStack_290 = 0;

  local_3a0 = FUN_00293880(param_5,extraout_x1,&local_2c0,auStack_1c0,0x10);

  if (local_3a0 != 0) {

    lVar15 = *local_2b0;

    uVar13 = *(undefined8 *)PTR__kCAAnimationDiscrete_003885c8;

    uVar14 = *(undefined8 *)PTR__kCAAnimationLinear_003885d0;

    do {

      lVar16 = 0;

      do {

        dVar23 = param_2;

        dVar24 = param_3;

        uVar11 = param_4;

        if (*local_2b0 != lVar15) {

          _objc_enumerationMutation(param_5);

          dVar23 = param_2;

          dVar24 = param_3;

          uVar11 = param_4;

        }

        uVar18 = *(undefined8 *)(lStack_2b8 + lVar16 * 8);

        _objc_retain(uVar18);

        FUN_002a6320(uVar18);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        param_2 = dVar23;

        param_3 = dVar24;

        param_4 = uVar11;

        if (lVar5 != 0) {

          FUN_00297e40(uVar18);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          uVar8 = auVar28._0_8_;

          FUN_002a44a0(&cf_xzy_liquid_motion_,auVar28._8_8_,&cf_rim);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b260(uVar8,auVar28._8_8_,auVar28._0_8_);

          _objc_release(auVar28._0_8_);

          FUN_002a62c0(uVar18);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar28._0_8_,auVar28._8_8_,&cf_bounds);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          uVar19 = FUN_00290aa0();

          dVar25 = dVar23;

          dVar26 = dVar24;

          uVar17 = uVar11;

          _objc_release(uVar6);

          _objc_release(auVar28._0_8_);

          uVar20 = FUN_002925a0(uVar8);

          param_2 = dVar25;

          dVar21 = dVar26;

          param_4 = uVar17;

          FUN_002a6320(uVar18);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar28._0_8_,auVar28._8_8_,&cf_contentsCenter);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00290aa0();

          param_3 = dVar21;

          _objc_release(uVar6);

          _objc_release(auVar28._0_8_);

          if ((param_6 != 0) && (lVar5 = FUN_00299d60(uVar18), lVar5 == 1)) {

            FUN_002a6320(uVar18);

            auVar28 = _objc_retainAutoreleasedReturnValue();

            local_308 = auVar28._0_8_;

            FUN_00299540(local_308,auVar28._8_8_,&cf_contents);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_002992c0(&_OBJC_CLASS___NSNull);

            lVar7 = _objc_retainAutoreleasedReturnValue();

            if ((lVar5 == lVar7) || (1.0 <= dVar21)) {

LAB_0027789c:

              uVar17 = param_4;

              dVar26 = param_3;

              dVar25 = param_2;

              _objc_release(lVar7);

            }

            else {

              dVar21 = (double)_CGRectGetWidth(uVar19,dVar23,dVar24,uVar11);

              param_3 = dVar26;

              param_4 = uVar17;

              dVar22 = (double)_CGRectGetWidth(uVar20,dVar25);

              param_2 = 0.5;

              if (dVar21 <= dVar22 + 0.5) goto LAB_0027789c;

              dVar23 = (double)_CGRectGetHeight(uVar19,dVar23,dVar24,uVar11);

              param_2 = dVar25;

              param_3 = dVar26;

              param_4 = uVar17;

              dVar24 = (double)_CGRectGetHeight(uVar20);

              if (0.01 < ABS(dVar23 - dVar24)) goto LAB_0027789c;

              dVar23 = (double)_CGRectGetWidth(uVar20,dVar25,dVar26,uVar17);

              dVar24 = (double)_CGRectGetHeight(uVar20);

              _objc_release(lVar7);

              _objc_release(lVar5);

              _objc_release(local_308);

              param_2 = dVar25;

              param_3 = dVar26;

              param_4 = uVar17;

              if (0.01 < ABS(dVar23 - dVar24)) goto LAB_002778b8;

              FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_16,3);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              local_308 = auVar28._0_8_;

              lStack_278 = 0;

              local_280 = 0;

              uStack_268 = 0;

              local_270 = (long *)0x0;

              uStack_258 = 0;

              local_260 = 0;

              uStack_248 = 0;

              uStack_250 = 0;

              auVar28 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf1d8,auVar28._8_8_,

                                     &local_280,auStack_130,0x10);

              if (auVar28._0_8_ != 0) {

                lVar5 = *local_270;

                do {

                  uVar11 = auVar28._8_8_;

                  lVar7 = 0;

                  do {

                    if (*local_270 != lVar5) {

                      _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bf1d8);

                      uVar11 = extraout_x1_17;

                    }

                    uVar19 = *(undefined8 *)(lStack_278 + lVar7 * 8);

                    FUN_002918e0(&_OBJC_CLASS___CAKeyframeAnimation,uVar11,uVar19);

                    uVar11 = _objc_retainAutoreleasedReturnValue();

                    FUN_002a6320(uVar18);

                    auVar29 = _objc_retainAutoreleasedReturnValue();

                    FUN_00299540(auVar29._0_8_,auVar29._8_8_,uVar19);

                    uVar6 = _objc_retainAutoreleasedReturnValue();

                    local_140 = uVar6;

                    FUN_002a6320(uVar18);

                    auVar30 = _objc_retainAutoreleasedReturnValue();

                    FUN_00299540(auVar30._0_8_,auVar30._8_8_,uVar19);

                    auVar31 = _objc_retainAutoreleasedReturnValue();

                    local_138 = auVar31._0_8_;

                    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar31._8_8_,&local_140,2);

                    auVar32 = _objc_retainAutoreleasedReturnValue();

                    FUN_002a24c0(uVar11,auVar32._8_8_,auVar32._0_8_);

                    _objc_release(auVar32._0_8_);

                    _objc_release(auVar31._0_8_);

                    _objc_release(auVar30._0_8_);

                    _objc_release(uVar6);

                    _objc_release(auVar29._0_8_);

                    FUN_0029d1a0(uVar11,extraout_x1_18,uVar13);

                    FUN_0029de80(0x3fd5c28f5c28f5c3,uVar11);

                    FUN_00291240(local_308,extraout_x1_19,uVar11);

                    _objc_release(uVar11);

                    lVar7 = lVar7 + 1;

                    uVar11 = extraout_x1_20;

                  } while (auVar28._0_8_ != lVar7);

                  auVar28 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf1d8,extraout_x1_20,

                                         &local_280,auStack_130,0x10);

                } while (auVar28._0_8_ != 0);

              }

              FUN_00291840(&_OBJC_CLASS___CAAnimationGroup);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar5 = auVar28._0_8_;

              FUN_0029cc80(lVar5,auVar28._8_8_,local_308);

              FUN_0029de80(0x3fd5c28f5c28f5c3,lVar5);

              FUN_00284e5c(0,uVar8,lVar5,&cf_rim);

            }

            _objc_release(lVar5);

            _objc_release(local_308);

            param_2 = dVar25;

            param_3 = dVar26;

            param_4 = uVar17;

          }

LAB_002778b8:

          _objc_release(uVar8);

        }

        _objc_release(uVar18);

        lStack_2f8 = 0;

        local_300 = 0;

        uStack_2e8 = 0;

        local_2f0 = (long *)0x0;

        uStack_2d8 = 0;

        local_2e0 = 0;

        uStack_2c8 = 0;

        uStack_2d0 = 0;

        local_310 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf1c0,extraout_x1_00,

                                 &local_300,auStack_240,0x10);

        if (local_310 != 0) {

          lVar5 = *local_2f0;

          do {

            lVar7 = 0;

            do {

              uVar11 = 0x3fbeb851eb851eb8;

              if (*local_2f0 != lVar5) {

                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bf1c0);

              }

              uVar17 = *(undefined8 *)(lStack_2f8 + lVar7 * 8);

              iVar3 = FUN_0029a5c0(uVar18);

              if (iVar3 == 0) {

LAB_00277944:

                FUN_00297e40(uVar18);

                auVar28 = _objc_retainAutoreleasedReturnValue();

                FUN_002a6080(auVar28._0_8_,auVar28._8_8_,uVar17);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                _objc_release(auVar28._0_8_);

                iVar3 = FUN_002a5640(uVar18);

                if (iVar3 == 0) {

                  iVar3 = 0;

                }

                else {

                  iVar3 = FUN_00297820(uVar17,extraout_x1_02,&cf_position);

                }

                lVar9 = FUN_00299d60(uVar18);

                if (lVar9 == 0) {

                  uVar10 = 1;

                }

                else {

                  FUN_002a62c0(uVar18);

                  auVar28 = _objc_retainAutoreleasedReturnValue();

                  FUN_00299540(auVar28._0_8_,auVar28._8_8_,uVar17);

                  auVar29 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_002977c0(auVar29._0_8_,auVar29._8_8_,uVar8);

                  _objc_release(auVar29._0_8_);

                  _objc_release(auVar28._0_8_);

                }

                FUN_00298e60(uVar18);

                auVar28 = _objc_retainAutoreleasedReturnValue();

                FUN_00299540(auVar28._0_8_,auVar28._8_8_,uVar17);

                auVar29 = _objc_retainAutoreleasedReturnValue();

                iVar4 = FUN_002977c0(auVar29._0_8_,auVar29._8_8_,uVar8);

                _objc_release(auVar29._0_8_);

                _objc_release(auVar28._0_8_);

                if (((iVar4 == 0) || (iVar3 == 1)) || ((uVar10 & 1) == 0)) {

                  if ((param_6 & 1) == 0) {

LAB_00277c00:

                    FUN_00297e40(uVar18);

                    auVar28 = _objc_retainAutoreleasedReturnValue();

                    uVar6 = auVar28._0_8_;

                    FUN_002a44a0(&cf_xzy_liquid_motion_,auVar28._8_8_,uVar17);

                    auVar28 = _objc_retainAutoreleasedReturnValue();

                    uVar19 = auVar28._0_8_;

                    FUN_0029b260(uVar6,auVar28._8_8_,uVar19);

                  }

                  else {

                    iVar4 = FUN_00297820(uVar17,extraout_x1_03,&cf_opacity);

                    if (iVar4 == 0) {

                      bVar1 = false;

                      uVar6 = extraout_x1_04;

                    }

                    else {

                      dVar23 = (double)FUN_00294860(uVar8);

                      FUN_00298e60(uVar18);

                      auVar28 = _objc_retainAutoreleasedReturnValue();

                      FUN_00299540(auVar28._0_8_,auVar28._8_8_,uVar17);

                      uVar6 = _objc_retainAutoreleasedReturnValue();

                      dVar24 = (double)FUN_00294860();

                      bVar1 = dVar24 < dVar23;

                      _objc_release(uVar6);

                      _objc_release(auVar28._0_8_);

                      uVar6 = extraout_x1_05;

                    }

                    iVar4 = FUN_00297820(uVar17,uVar6,&cf_opacity);

                    if (iVar4 == 0) {

                      iVar4 = FUN_00297820(uVar17,extraout_x1_06,&cf_bounds);

                      if (iVar4 != 0) {

                        FUN_00297e40(uVar18);

                        uVar11 = _objc_retainAutoreleasedReturnValue();

                        FUN_00294320();

                        uVar6 = _objc_retainAutoreleasedReturnValue();

                        uVar19 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                        uVar10 = _objc_opt_isKindOfClass(uVar6,uVar19);

                        _objc_release(uVar6);

                        _objc_release(uVar11);

                        if ((uVar10 & 1) != 0) goto LAB_00277c00;

                      }

                      FUN_002a62c0(uVar18);

                      auVar28 = _objc_retainAutoreleasedReturnValue();

                      FUN_00299540(auVar28._0_8_,auVar28._8_8_,uVar17);

                      uVar6 = _objc_retainAutoreleasedReturnValue();

                      _objc_release(auVar28._0_8_);

                      iVar4 = FUN_00297820(uVar17,extraout_x1_07,&cf_position);

                      if (iVar4 != 0) {

                        FUN_00297e40(uVar18);

                        uVar11 = _objc_retainAutoreleasedReturnValue();

                        FUN_00294320();

                        uVar19 = _objc_retainAutoreleasedReturnValue();

                        uVar20 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                        uVar10 = _objc_opt_isKindOfClass(uVar19,uVar20);

                        _objc_release(uVar19);

                        _objc_release(uVar11);

                        if ((uVar10 & 1) != 0) {

                          FUN_00297e40(uVar18);

                          uVar11 = _objc_retainAutoreleasedReturnValue();

                          FUN_00294320();

                          uVar19 = _objc_retainAutoreleasedReturnValue();

                          _objc_release(uVar11);

                          lVar9 = FUN_002a5040(uVar19);

                          uVar11 = uVar6;

                          dVar23 = param_3;

                          if (lVar9 != 1) {

                            dVar25 = (double)FUN_00290a80(uVar6);

                            FUN_00297e40(uVar18);

                            uVar11 = _objc_retainAutoreleasedReturnValue();

                            FUN_002925a0();

                            dVar24 = param_3;

                            FUN_002a62c0(uVar18);

                            auVar28 = _objc_retainAutoreleasedReturnValue();

                            FUN_00299540(auVar28._0_8_,auVar28._8_8_,&cf_bounds);

                            uVar20 = _objc_retainAutoreleasedReturnValue();

                            FUN_00290aa0();

                            dVar23 = dVar24;

                            _objc_release(uVar20);

                            _objc_release(auVar28._0_8_);

                            _objc_release(uVar11);

                            lVar9 = FUN_002a5040(uVar19);

                            dVar26 = 1.0;

                            if (lVar9 != 2) {

                              lVar9 = FUN_002a5040(uVar19);

                              dVar26 = 0.0;

                              if (lVar9 == 4) {

                                lVar9 = FUN_00294b20(uVar19);

                                dVar26 = 1.0;

                                if (lVar9 != 1) {

                                  dVar26 = 0.0;

                                }

                              }

                            }

                            FUN_00297e40(uVar18);

                            uVar11 = _objc_retainAutoreleasedReturnValue();

                            dVar21 = (double)FUN_002916e0();

                            _objc_release(uVar11);

                            FUN_002a60e0(dVar25 + (dVar21 - dVar26) * (param_3 - dVar24),

                                         &_OBJC_CLASS___NSValue);

                            uVar11 = _objc_retainAutoreleasedReturnValue();

                            _objc_release(uVar6);

                          }

                          _objc_release(uVar19);

                          uVar6 = uVar11;

                          param_3 = dVar23;

                        }

                      }

                      FUN_00297e40(uVar18);

                      uVar19 = _objc_retainAutoreleasedReturnValue();

                      if (iVar3 == 0) {

                        uVar11 = FUN_00299d60(uVar18);

                        FUN_002851c0(uVar19,uVar17,uVar6,uVar8,uVar11);

                      }

                      else {

                        dVar25 = (double)FUN_00290a80(uVar6);

                        dVar23 = param_2;

                        dVar26 = (double)FUN_00290a80(uVar8);

                        dVar24 = dVar23;

                        dVar21 = (double)FUN_00292b00(uVar18);

                        _objc_retain(uVar19);

                        if ((0.0001 <= ABS((dVar26 - dVar25) - dVar21)) ||

                           (param_3 = ABS((dVar23 - param_2) - dVar24), 0.0001 <= param_3)) {

                          FUN_00295660(0x3e8f5c29,0,0x3ea3d70a,0x3f800000,

                                       &_OBJC_CLASS___CAMediaTimingFunction);

                          uVar11 = _objc_retainAutoreleasedReturnValue();

                          FUN_00295660(0x3e8f5c29,0x3fd55555,0x3ee147ae,0x3f2aaaab,

                                       &_OBJC_CLASS___CAMediaTimingFunction);

                          uVar17 = _objc_retainAutoreleasedReturnValue();

                          param_4 = 0x3f800000;

                          FUN_00295660(0x3ee147ae,0,0x3f3d70a4,&_OBJC_CLASS___CAMediaTimingFunction)

                          ;

                          auVar28 = _objc_retainAutoreleasedReturnValue();

                          FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar28._8_8_,0x61);

                          uVar20 = _objc_retainAutoreleasedReturnValue();

                          uVar10 = 0;

                          do {

                            dVar27 = ((double)uVar10 * 0.7050000000000001) / 96.0;

                            dVar22 = (double)FUN_00285480(dVar27 / 0.34,uVar11);

                            FUN_00285480((dVar27 + -0.025) / 0.68,auVar28._0_8_);

                            dVar27 = (double)FUN_00285480(uVar17);

                            param_3 = dVar25 + dVar22 * dVar21 +

                                      dVar27 * ((dVar26 - dVar25) - dVar21);

                            FUN_002a60e0(param_3,param_2 + dVar22 * dVar24 +

                                                 dVar27 * ((dVar23 - param_2) - dVar24),

                                         &_OBJC_CLASS___NSValue);

                            auVar29 = _objc_retainAutoreleasedReturnValue();

                            FUN_00291240(uVar20,auVar29._8_8_,auVar29._0_8_);

                            _objc_release(auVar29._0_8_);

                            uVar10 = uVar10 + 1;

                          } while (uVar10 != 0x61);

                          FUN_002a60e0(dVar25,param_2,&_OBJC_CLASS___NSValue);

                          auVar29 = _objc_retainAutoreleasedReturnValue();

                          FUN_002a0040(uVar20,auVar29._8_8_,auVar29._0_8_,0);

                          _objc_release(auVar29._0_8_);

                          FUN_002a60e0(dVar26,&_OBJC_CLASS___NSValue);

                          auVar29 = _objc_retainAutoreleasedReturnValue();

                          FUN_002a0040(uVar20,auVar29._8_8_,auVar29._0_8_,0x60);

                          _objc_release(auVar29._0_8_);

                          FUN_002918e0(&_OBJC_CLASS___CAKeyframeAnimation,extraout_x1_08,

                                       &cf_position);

                          auVar29 = _objc_retainAutoreleasedReturnValue();

                          uVar12 = auVar29._0_8_;

                          FUN_002a24c0(uVar12,auVar29._8_8_,uVar20);

                          FUN_0029d1a0(uVar12,extraout_x1_09,uVar14);

                          FUN_0029de80(0x3fe68f5c28f5c290,uVar12);

                          FUN_00284e5c(0,uVar19,uVar12,&cf_position);

                          _objc_release(uVar12);

                          _objc_release(uVar20);

                          _objc_release(auVar28._0_8_);

                        }

                        else {

                          FUN_002a60e0(dVar25,param_2,&_OBJC_CLASS___NSValue);

                          uVar11 = _objc_retainAutoreleasedReturnValue();

                          FUN_002a60e0(dVar26,&_OBJC_CLASS___NSValue);

                          uVar17 = _objc_retainAutoreleasedReturnValue();

                          FUN_002851c0(uVar19,&cf_position,uVar11,uVar17,1);

                        }

                        _objc_release(uVar17);

                        _objc_release(uVar11);

                        _objc_release(uVar19);

                        param_2 = dVar23;

                      }

                    }

                    else {

                      lVar9 = FUN_00299d60(uVar18);

                      if (lVar9 == 0) {

LAB_00277e40:

                        param_2 = 0.0;

                        if (bVar1) {

                          dVar23 = (double)FUN_0029b9e0(uVar18);

                          lVar9 = FUN_00299d60(uVar18);

                          param_2 = dVar23 + 0.06;

                          if (lVar9 != 2) {

                            param_2 = dVar23;

                          }

                          lVar2 = 8;

                          if (lVar9 != 2) {

                            lVar2 = 0;

                          }

                          uVar11 = *(undefined8 *)((long)&DAT_0030ed80 + lVar2);

                        }

                        FUN_00297e40(uVar18);

                        uVar6 = _objc_retainAutoreleasedReturnValue();

                        FUN_002a62c0(uVar18);

                        auVar28 = _objc_retainAutoreleasedReturnValue();

                        uVar19 = auVar28._0_8_;

                        FUN_00299540(uVar19,auVar28._8_8_,uVar17);

                        uVar20 = _objc_retainAutoreleasedReturnValue();

                        FUN_0026fc38(uVar11,uVar6,uVar20,uVar8);

                      }

                      else {

                        FUN_00297e40(uVar18);

                        uVar6 = _objc_retainAutoreleasedReturnValue();

                        FUN_00299040();

                        auVar28 = _objc_retainAutoreleasedReturnValue();

                        iVar3 = FUN_00297820(auVar28._0_8_,auVar28._8_8_,&cf_XZYDockOpticalSpecular)

                        ;

                        _objc_release(auVar28._0_8_);

                        _objc_release(uVar6);

                        if (iVar3 == 0) goto LAB_00277e40;

                        FUN_00297e40(uVar18);

                        uVar6 = _objc_retainAutoreleasedReturnValue();

                        FUN_002a62c0(uVar18);

                        auVar28 = _objc_retainAutoreleasedReturnValue();

                        uVar19 = auVar28._0_8_;

                        FUN_00299540(uVar19,auVar28._8_8_,uVar17);

                        uVar20 = _objc_retainAutoreleasedReturnValue();

                        uVar11 = FUN_00299d60(uVar18);

                        FUN_002851c0(uVar6,uVar17,uVar20,uVar8,uVar11);

                      }

                      _objc_release(uVar20);

                    }

                  }

                  _objc_release(uVar19);

                  _objc_release(uVar6);

                }

                _objc_release(uVar8);

                uVar8 = extraout_x1_10;

              }

              else {

                auVar28 = FUN_00297820(uVar17,extraout_x1_01,&cf_transform);

                uVar8 = auVar28._8_8_;

                if ((auVar28._0_8_ & 1) == 0) goto LAB_00277944;

              }

              lVar7 = lVar7 + 1;

            } while (lVar7 != local_310);

            local_310 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf1c0,uVar8,&local_300,

                                     auStack_240,0x10);

          } while (local_310 != 0);

        }

        FUN_00297e40(uVar18);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        uVar17 = _objc_opt_class(&_OBJC_CLASS___CAShapeLayer);

        uVar10 = _objc_opt_isKindOfClass(uVar11,uVar17);

        _objc_release(uVar11);

        uVar11 = extraout_x1_11;

        if ((uVar10 & 1) != 0) {

          FUN_00297e40(uVar18);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          lVar5 = FUN_00299b00();

          _objc_release(uVar11);

          uVar11 = extraout_x1_12;

          if (lVar5 != 0) {

            FUN_00298e80(uVar18);

            lVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar11 = extraout_x1_13;

            if (lVar7 != 0) {

              lVar7 = FUN_00299d60(uVar18);

              if (lVar7 == 0) {

                uVar10 = 1;

              }

              else {

                FUN_002a6300(uVar18);

                lVar7 = _objc_retainAutoreleasedReturnValue();

                if (lVar7 == 0) {

                  uVar10 = 1;

                }

                else {

                  FUN_002a6300(uVar18);

                  uVar11 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = _CGPathEqualToPath(uVar11,lVar5);

                  _objc_release(uVar11);

                }

                _objc_release(lVar7);

              }

              FUN_00298e80(uVar18);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              iVar3 = _CGPathEqualToPath(uVar11,lVar5);

              _objc_release(uVar11);

              if ((iVar3 == 0) || (uVar11 = extraout_x1_14, (uVar10 & 1) == 0)) {

                if (param_6 == 0) {

LAB_0027842c:

                  FUN_00297e40(uVar18);

                  auVar28 = _objc_retainAutoreleasedReturnValue();

                  uVar11 = auVar28._0_8_;

                  FUN_002a44a0(&cf_xzy_liquid_motion_,auVar28._8_8_,&cf_path);

                  auVar28 = _objc_retainAutoreleasedReturnValue();

                  uVar17 = auVar28._0_8_;

                  FUN_0029b260(uVar11,auVar28._8_8_,uVar17);

                }

                else {

                  FUN_002a6300(uVar18);

                  lVar7 = _objc_retainAutoreleasedReturnValue();

                  _objc_release();

                  if (lVar7 == 0) goto LAB_0027842c;

                  FUN_00297e40(uVar18);

                  uVar11 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a6300(uVar18);

                  uVar17 = _objc_retainAutoreleasedReturnValue();

                  uVar18 = FUN_00299d60(uVar18);

                  FUN_002851c0(uVar11,&cf_path,uVar17,lVar5,uVar18);

                }

                _objc_release(uVar17);

                _objc_release(uVar11);

                uVar11 = extraout_x1_15;

              }

            }

          }

        }

        lVar16 = lVar16 + 1;

      } while (lVar16 != local_3a0);

      local_3a0 = FUN_00293880(param_5,uVar11,&local_2c0,auStack_1c0,0x10);

    } while (local_3a0 != 0);

  }

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




