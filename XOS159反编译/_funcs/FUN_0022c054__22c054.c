// FUN_0022c054 @0x22c054


void FUN_0022c054(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  undefined *puVar1;

  bool bVar2;

  bool bVar3;

  uint uVar4;

  uint uVar5;

  int iVar6;

  int iVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  ulong uVar16;

  ulong uVar17;

  long lVar18;

  long lVar19;

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

  undefined8 extraout_x1_28;

  undefined8 extraout_x1_29;

  undefined8 extraout_x1_30;

  undefined8 extraout_x1_31;

  undefined8 extraout_x1_32;

  undefined8 extraout_x1_33;

  long *plVar20;

  long *plVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  double dVar24;

  double dVar25;

  double dVar26;

  double dVar27;

  undefined1 auVar28 [16];

  undefined1 auVar29 [16];

  long local_1c0;

  long local_1b0;

  long local_190;

  undefined1 auStack_188 [8];

  double local_180;

  undefined1 auStack_178 [8];

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

  if (param_5 == 0) goto LAB_0022d5a4;

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e71a8);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 == 0) {

    if ((DAT_003eaf98 & 1) != 0) goto LAB_0022c238;

  }

  else {

    FUN_002974a0();

    if ((DAT_003eaf98 & 1) == 0) {

      lVar9 = FUN_002974a0(lVar8);

      if (lVar9 != 0) {

        _objc_retain(param_5);

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e71c8);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar9 != 0) {

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71d0);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71d8);

          lVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71e0);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71e8);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71b8);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

          if (lVar9 != 0) {

            uVar23 = FUN_00294860(lVar9);

            FUN_00297e40(param_5);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(uVar23);

            _objc_release(uVar14);

          }

          if (lVar10 != 0) {

            uVar23 = FUN_00294860(lVar10);

            FUN_00297e40(param_5);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(uVar23);

            _objc_release(uVar14);

          }

          if (lVar11 == 0) {

            uVar14 = 0;

          }

          else {

            _objc_retainAutorelease(lVar11);

            uVar14 = FUN_00290a20();

          }

          FUN_00297e40(param_5);

          auVar29 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar29._0_8_,auVar29._8_8_,uVar14);

          _objc_release(auVar29._0_8_);

          if (lVar12 != 0) {

            uVar14 = FUN_002924e0(lVar12);

            FUN_00297e40(param_5);

            auVar29 = _objc_retainAutoreleasedReturnValue();

            FUN_0029f960(auVar29._0_8_,auVar29._8_8_,uVar14);

            _objc_release(auVar29._0_8_);

          }

          if (lVar13 != 0) {

            FUN_002992c0(&_OBJC_CLASS___NSNull);

            auVar29 = _objc_retainAutoreleasedReturnValue();

            lVar18 = 0;

            if (lVar13 != auVar29._0_8_) {

              lVar18 = lVar13;

            }

            FUN_0029cf60(param_5,auVar29._8_8_,lVar18);

            _objc_release(auVar29._0_8_);

          }

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

          FUN_0022db44(param_5,0,0);

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71b0);

          lVar18 = _objc_retainAutoreleasedReturnValue();

          if (lVar18 != 0) {

            FUN_002a4880(lVar18);

            lVar19 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar19 == param_5) {

              FUN_0029b340(lVar18);

            }

          }

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e71b0,0,1);

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e71c0);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          iVar7 = FUN_002924e0();

          _objc_release(uVar14);

          if (iVar7 != 0) {

            FUN_0022df78(param_5);

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e71c0,0,1);

          }

          _objc_release(lVar18);

          _objc_release(lVar13);

          _objc_release(lVar12);

          _objc_release(lVar11);

          _objc_release(lVar10);

          _objc_release(lVar9);

        }

        _objc_release(param_5);

        _objc_setAssociatedObject

                  (param_5,PTR_LOOP_003e71a8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0028,1);

      }

    }

    else {

LAB_0022c238:

      _objc_retain(param_5);

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e71c8);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar9 == 0) {

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e71c8,PTR____kCFBooleanTrue_00388320,1);

        puVar1 = PTR_LOOP_003e71d0;

        FUN_00297e40(param_5);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00293820();

        FUN_002993a0(&_OBJC_CLASS___NSNumber);

        uVar23 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar1,uVar23,1);

        _objc_release(uVar23);

        _objc_release(uVar14);

        puVar1 = PTR_LOOP_003e71d8;

        FUN_00297e40(param_5);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00292520();

        FUN_002993a0(&_OBJC_CLASS___NSNumber);

        uVar23 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar1,uVar23,1);

        _objc_release(uVar23);

        _objc_release(uVar14);

        FUN_00297e40(param_5);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        lVar9 = FUN_00292500();

        _objc_release(uVar14);

        if (lVar9 == 0) {

          lVar9 = 0;

        }

        else {

          FUN_00292fe0(&_OBJC_CLASS___UIColor,extraout_x1_00,lVar9);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          if (lVar9 != 0) {

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e71e0,lVar9,1);

          }

        }

        puVar1 = PTR_LOOP_003e71e8;

        FUN_00297e40(param_5);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        auVar29 = FUN_00298a60();

        FUN_00299380(&_OBJC_CLASS___NSNumber,auVar29._8_8_,auVar29._0_8_);

        uVar23 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar1,uVar23,1);

        _objc_release(uVar23);

        _objc_release(uVar14);

        FUN_00292080(param_5);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        if (lVar10 == 0) {

          FUN_002992c0(&_OBJC_CLASS___NSNull);

          lVar11 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(lVar10);

          lVar11 = lVar10;

        }

        _objc_release(lVar10);

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e71b8,lVar11,1);

        _objc_release(lVar11);

        _objc_release(lVar9);

      }

      _objc_release(param_5);

      iVar7 = FUN_001331c4();

      dVar26 = DAT_003e7178;

      if (DAT_003eafc8 <= 0.0) {

        local_1b0 = 0;

        uVar14 = 0;

        dVar27 = 0.0;

      }

      else {

        plVar20 = &DAT_003eaf60;

        if (iVar7 == 0) {

          plVar20 = &DAT_003eaf58;

        }

        local_1b0 = *plVar20;

        _objc_retain(local_1b0);

        if (local_1b0 == 0) {

          if (iVar7 == 0) {

            param_2 = 1.0;

            FUN_00293060(0x3fe8f5c28f5c28f6,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

            local_1b0 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            param_2 = 1.0;

            FUN_00293060(0x3fcd70a3d70a3d71,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

            local_1b0 = _objc_retainAutoreleasedReturnValue();

          }

          _objc_retain();

          _objc_release(local_1b0);

        }

        dVar27 = DAT_003eafc8;

        _objc_retainAutorelease(local_1b0);

        uVar14 = FUN_00290a20();

      }

      FUN_00297e40(param_5);

      uVar23 = _objc_retainAutoreleasedReturnValue();

      dVar24 = (double)FUN_00293820();

      uVar4 = FUN_00298a60(uVar23);

      dVar25 = (double)FUN_00292520(uVar23);

      uVar15 = FUN_00292500(uVar23);

      uVar5 = _CGColorEqualToColor(uVar15,uVar14);

      uVar4 = 0.0 < dVar26 ^ uVar4;

      if (((0.01 < ABS(dVar24 - dVar26) || (uVar4 & 1) != 0) || (0.01 < ABS(dVar25 - dVar27))) ||

         (uVar5 != 1)) {

        FUN_00292180(&_OBJC_CLASS___CATransaction);

        FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

        uVar15 = extraout_x1_02;

        if (0.01 < ABS(dVar24 - dVar26)) {

          FUN_0029d820(dVar26,uVar23);

          uVar15 = extraout_x1_03;

        }

        if (uVar4 != 0) {

          FUN_0029f960(uVar23,uVar15,0.0 < dVar26);

          uVar15 = extraout_x1_04;

        }

        if (0.01 < ABS(dVar25 - dVar27)) {

          FUN_0029d0e0(dVar27,uVar23);

          uVar15 = extraout_x1_05;

        }

        if ((uVar5 & 1) == 0) {

          FUN_0029d0a0(uVar23,uVar15,uVar14);

        }

        FUN_002930a0(&_OBJC_CLASS___CATransaction);

      }

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e71b0);

      local_190 = _objc_retainAutoreleasedReturnValue();

      if ((DAT_003eafd0 == '\x01') &&

         ((lVar9 = FUN_00297fa0(DAT_003eaf28), lVar9 != 0 ||

          (lVar9 = FUN_00297fa0(DAT_003eaf30), lVar9 != 0)))) {

        plVar20 = &DAT_003eaf70;

        if (iVar7 == 0) {

          plVar20 = &DAT_003eaf68;

        }

        lVar9 = *plVar20;

        _objc_retain(lVar9);

        if (lVar9 == 0) {

          plVar20 = &DAT_003eaf68;

          if (iVar7 == 0) {

            plVar20 = &DAT_003eaf70;

          }

          lVar9 = *plVar20;

          _objc_retain(lVar9);

          if (lVar9 != 0) goto LAB_0022c6d4;

          FUN_00292dc0(&_OBJC_CLASS___UIColor);

          lVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_retain();

          _objc_release(lVar10);

          _objc_retain(lVar10);

          lVar9 = 0;

          uVar14 = extraout_x1_19;

          if (lVar10 != 0) goto LAB_0022c6e8;

          bVar2 = true;

          local_1c0 = 0;

          lVar10 = lVar9;

        }

        else {

LAB_0022c6d4:

          _objc_retain(lVar9);

          _objc_retain(lVar9);

          uVar14 = extraout_x1_06;

          lVar10 = lVar9;

LAB_0022c6e8:

          iVar6 = FUN_00295ac0(lVar10,uVar14,auStack_130,&local_170,auStack_178,&local_180);

          if (iVar6 == 0) {

            iVar6 = FUN_00295bc0(lVar10,extraout_x1_07,auStack_188,&local_180);

            param_2 = 1.0;

            if (iVar6 == 0) {

              local_180 = 1.0;

            }

          }

          bVar2 = local_180 < 0.01;

          _objc_release(lVar10);

          local_1c0 = lVar9;

        }

        FUN_00292080(param_5);

        auVar29 = _objc_retainAutoreleasedReturnValue();

        uVar16 = FUN_002977c0(auVar29._0_8_,auVar29._8_8_,lVar10);

        _objc_release(auVar29._0_8_);

        if ((uVar16 & 1) == 0) {

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_08,1);

          FUN_0029cf60(param_5,extraout_x1_09,lVar10);

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

        }

        if (local_190 == 0) {

          auVar29 = _objc_alloc_init(&_OBJC_CLASS___UIView);

          local_190 = auVar29._0_8_;

          FUN_002a23c0(local_190,auVar29._8_8_,0);

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e71b0,local_190,1);

        }

        _objc_retain(param_5);

        FUN_002a4840(param_5);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        lVar9 = FUN_00293860();

        if (lVar9 == 0) {

          lVar9 = 0;

          dVar26 = param_3;

        }

        else {

          FUN_002925a0(param_5);

          dVar26 = param_3;

          FUN_002925a0(param_5);

          lVar9 = 0;

          if ((1.0 <= param_3) && (1.0 <= param_4)) {

            dVar27 = param_4;

            _objc_getAssociatedObject(param_5,PTR_LOOP_003e71b0);

            lVar11 = _objc_retainAutoreleasedReturnValue();

            uStack_148 = 0;

            local_150 = 0;

            uStack_138 = 0;

            uStack_140 = 0;

            lStack_168 = 0;

            local_170 = 0;

            uStack_158 = 0;

            local_160 = (long *)0x0;

            _objc_retain(uVar14);

            auVar29 = FUN_00293880(uVar14,extraout_x1_10,&local_170,auStack_130,0x10);

            lVar9 = 0;

            if (auVar29._0_8_ != 0) {

              lVar12 = *local_160;

              dVar24 = 0.0;

              do {

                uVar15 = auVar29._8_8_;

                lVar13 = 0;

                do {

                  if (*local_160 != lVar12) {

                    _objc_enumerationMutation(uVar14);

                    uVar15 = extraout_x1_11;

                  }

                  lVar18 = *(long *)(lStack_168 + lVar13 * 8);

                  if (lVar18 != lVar11) {

                    uVar15 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                    auVar28 = _objc_opt_isKindOfClass(lVar18,uVar15);

                    uVar15 = auVar28._8_8_;

                    if ((auVar28._0_8_ & 1) == 0) {

                      FUN_00295600(lVar18);

                      bVar3 = true;

                      if ((param_3 * 0.7 <= dVar26) &&

                         (bVar3 = false, !NAN(dVar27) && !NAN(param_4 * 0.7))) {

                        bVar3 = dVar27 < param_4 * 0.7;

                      }

                      uVar15 = extraout_x1_12;

                      if (!bVar3) {

                        dVar25 = 1.0;

                        if (dVar26 / param_3 <= 1.0) {

                          dVar25 = dVar26 / param_3;

                        }

                        param_2 = 1.0;

                        if (dVar27 / param_4 <= 1.0) {

                          param_2 = dVar27 / param_4;

                        }

                        dVar25 = dVar25 * param_2;

                        if (dVar24 < dVar25) {

                          _objc_retain(lVar18);

                          _objc_release(lVar9);

                          uVar15 = extraout_x1_13;

                          lVar9 = lVar18;

                          dVar24 = dVar25;

                        }

                      }

                    }

                  }

                  lVar13 = lVar13 + 1;

                } while (auVar29._0_8_ != lVar13);

                auVar29 = FUN_00293880(uVar14,uVar15,&local_170,auStack_130,0x10);

              } while (auVar29._0_8_ != 0);

            }

            _objc_release(uVar14);

            _objc_release(lVar11);

            param_4 = dVar27;

          }

        }

        _objc_release(uVar14);

        _objc_release(param_5);

        FUN_0022db44(param_5,lVar9,bVar2);

        if (lVar9 == 0) {

          FUN_002a4880(local_190);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar11 == param_5) {

            FUN_002a4840(param_5);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_00295440();

            lVar11 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            _objc_release(uVar14);

            if (lVar11 != local_190) {

              FUN_0029c600(param_5,extraout_x1_20,local_190);

            }

          }

          else {

            FUN_00297100(param_5,extraout_x1_16,local_190,0);

          }

        }

        else {

          FUN_002a4840(param_5);

          auVar29 = _objc_retainAutoreleasedReturnValue();

          uVar16 = FUN_00296700(auVar29._0_8_,auVar29._8_8_,local_190);

          _objc_release(auVar29._0_8_);

          FUN_002a4840(param_5);

          auVar29 = _objc_retainAutoreleasedReturnValue();

          uVar17 = FUN_00296700(auVar29._0_8_,auVar29._8_8_,lVar9);

          _objc_release(auVar29._0_8_);

          FUN_002a4880(local_190);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if ((lVar11 != param_5 || uVar16 == 0x7fffffffffffffff) || uVar16 <= uVar17) {

            FUN_002a4880(local_190);

            lVar11 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar14 = extraout_x1_14;

            if (lVar11 != 0) {

              FUN_0029b340(local_190);

              uVar14 = extraout_x1_15;

            }

            FUN_002970e0(param_5,uVar14,local_190,lVar9);

          }

        }

        FUN_00292080(local_190);

        auVar29 = _objc_retainAutoreleasedReturnValue();

        uVar16 = FUN_002977c0(auVar29._0_8_,auVar29._8_8_,lVar10);

        _objc_release(auVar29._0_8_);

        if ((uVar16 & 1) == 0) {

          FUN_0029cf60(local_190,extraout_x1_21,lVar10);

        }

        uVar14 = FUN_002925a0(param_5);

        FUN_00295600(local_190);

        uVar16 = _CGRectEqualToRect();

        if ((uVar16 & 1) == 0) {

          FUN_0029e5e0(uVar14,param_2,dVar26,param_4,local_190);

        }

        dVar27 = DAT_003eafc8;

        dVar26 = DAT_003e7178;

        FUN_00297e40(local_190);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        dVar24 = (double)FUN_00293820();

        dVar26 = dVar26 - dVar27;

        if (0.01 < ABS(dVar24 - dVar26)) {

          FUN_0029d820(uVar14);

        }

        uVar4 = FUN_00298a60(uVar14);

        if (0.0 < dVar26 != uVar4) {

          FUN_0029f960(uVar14,extraout_x1_22,0.0 < dVar26);

        }

        _objc_release(uVar14);

        _objc_release(lVar9);

        _objc_release(lVar10);

        _objc_release(local_1c0);

      }

      else {

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e71b8);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        if (lVar9 != 0) {

          FUN_002992c0(&_OBJC_CLASS___NSNull);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          lVar10 = 0;

          if (lVar9 != lVar11) {

            lVar10 = lVar9;

          }

          _objc_retain(lVar10);

          _objc_release(lVar11);

          if (lVar9 == lVar11) {

            FUN_00292080(param_5);

            lVar11 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar11 != 0) goto LAB_0022cb28;

          }

          else {

            FUN_00292080(param_5);

            auVar29 = _objc_retainAutoreleasedReturnValue();

            uVar16 = FUN_002977c0(auVar29._0_8_,auVar29._8_8_,lVar9);

            _objc_release(auVar29._0_8_);

            if ((uVar16 & 1) == 0) {

LAB_0022cb28:

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_17,1);

              FUN_0029cf60(param_5,extraout_x1_18,lVar10);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

            }

          }

          _objc_release(lVar10);

        }

        if (local_190 != 0) {

          FUN_0029b340(local_190);

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e71b0,0,1);

        }

        FUN_0022db44(param_5,0,0);

        _objc_release(lVar9);

      }

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e71c0);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002924e0();

      _objc_release(uVar14);

      uVar14 = extraout_x1_23;

      if (DAT_003eafd1 == '\x01') {

        _objc_retain(param_5);

        FUN_002a4880(param_5);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        while (lVar9 != 0) {

          uVar16 = _objc_opt_respondsToSelector(lVar9,"viewModel");

          if ((uVar16 & 1) != 0) {

            _objc_getAssociatedObject(lVar9,PTR_LOOP_003e6320);

            lVar10 = _objc_retainAutoreleasedReturnValue();

            if (lVar10 != 0) {

              uVar16 = FUN_002924e0(lVar10);

              _objc_release(lVar10);

              _objc_release(lVar9);

              _objc_release(param_5);

              if ((uVar16 & 1) == 0) goto LAB_0022d120;

LAB_0022d0e4:

              plVar20 = &DAT_003eaf78;

              plVar21 = &DAT_003eaf80;

              goto LAB_0022d130;

            }

            FUN_002a6280(lVar9);

            lVar10 = _objc_retainAutoreleasedReturnValue();

            if (lVar10 != 0) {

              uVar16 = _objc_opt_respondsToSelector(lVar10,"parentModel");

              if ((uVar16 & 1) != 0) {

                FUN_00299aa0(lVar10);

                lVar11 = _objc_retainAutoreleasedReturnValue();

                if (lVar11 != 0) {

                  _objc_retain(lVar11);

                  _objc_release(lVar10);

                  lVar10 = lVar11;

                }

                _objc_release(lVar11);

              }

              uVar16 = _objc_opt_respondsToSelector(lVar10,"isSender");

              if ((uVar16 & 1) != 0) {

                auVar29 = FUN_00297a80(lVar10);

                puVar1 = PTR_LOOP_003e6320;

                FUN_00299380(&_OBJC_CLASS___NSNumber,auVar29._8_8_,auVar29._0_8_);

                uVar14 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar9,puVar1,uVar14,1);

                _objc_release(uVar14);

                _objc_release(lVar10);

                _objc_release(lVar9);

                _objc_release(param_5);

                if ((auVar29._0_8_ & 1) != 0) goto LAB_0022d0e4;

                goto LAB_0022d120;

              }

            }

            _objc_release(lVar10);

          }

          FUN_002a4880(lVar9);

          lVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar9);

          lVar9 = lVar10;

        }

        _objc_release(param_5);

LAB_0022d120:

        plVar20 = &DAT_003eaf88;

        plVar21 = &DAT_003eaf90;

LAB_0022d130:

        if (iVar7 == 0) {

          plVar21 = plVar20;

        }

        lVar9 = *plVar21;

        _objc_retain(lVar9);

        uVar14 = extraout_x1_24;

        if (lVar9 == 0) goto LAB_0022d1e4;

        _objc_retain(param_5);

        _objc_retain(lVar9);

        uVar16 = _objc_opt_respondsToSelector(param_5,"setReferTextBlurColor:");

        if ((uVar16 & 1) != 0) {

          _objc_retain(param_5);

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e7208);

          lVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar10 == 0) {

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e7208,PTR____kCFBooleanTrue_00388320,1);

            FUN_0029ae60(param_5);

            lVar11 = _objc_retainAutoreleasedReturnValue();

            puVar1 = PTR_LOOP_003e7210;

            bVar2 = lVar11 == 0;

            lVar10 = lVar11;

            if (bVar2) {

              FUN_002992c0(&_OBJC_CLASS___NSNull);

              lVar10 = _objc_retainAutoreleasedReturnValue();

              lVar11 = 0;

            }

            _objc_setAssociatedObject(param_5,puVar1,lVar10,1);

            if (bVar2) {

              _objc_release(lVar10);

            }

            _objc_release(lVar11);

          }

          FUN_0029ae60(param_5);

          auVar29 = _objc_retainAutoreleasedReturnValue();

          auVar28 = FUN_002977c0(auVar29._0_8_,auVar29._8_8_,lVar9);

          if ((auVar28._0_8_ & 1) == 0) {

            FUN_002a0c20(param_5,auVar28._8_8_,lVar9);

            uVar16 = _objc_opt_respondsToSelector(param_5,"richTextView");

            if ((uVar16 & 1) == 0) {

              lVar10 = 0;

            }

            else {

              FUN_0029ba60(param_5);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar10 = auVar28._0_8_;

              if (lVar10 != 0) {

                FUN_002a24a0(lVar10,auVar28._8_8_,lVar9,&cf__oTextColor);

                FUN_002a24a0(lVar10,extraout_x1_26,lVar9,&cf__oTextHLColor);

                FUN_002a6080(lVar10,extraout_x1_27,&cf__arrStyles);

                uVar14 = _objc_retainAutoreleasedReturnValue();

                uVar15 = _objc_opt_class(&_OBJC_CLASS___NSArray);

                uVar16 = _objc_opt_isKindOfClass(uVar14,uVar15);

                if ((uVar16 & 1) != 0) {

                  uStack_148 = 0;

                  local_150 = 0;

                  uStack_138 = 0;

                  uStack_140 = 0;

                  lStack_168 = 0;

                  local_170 = 0;

                  uStack_158 = 0;

                  local_160 = (long *)0x0;

                  _objc_retain(uVar14);

                  auVar28 = FUN_00293880(uVar14,extraout_x1_28,&local_170,auStack_130,0x10);

                  if (auVar28._0_8_ != 0) {

                    lVar11 = *local_160;

                    do {

                      uVar15 = auVar28._8_8_;

                      lVar12 = 0;

                      do {

                        if (*local_160 != lVar11) {

                          _objc_enumerationMutation(uVar14);

                          uVar15 = extraout_x1_29;

                        }

                        uVar22 = *(undefined8 *)(lStack_168 + lVar12 * 8);

                        FUN_002a24a0(uVar22,uVar15,lVar9,&cf_oTextColor);

                        FUN_002a24a0(uVar22,extraout_x1_30,lVar9,&cf_oDrawColor);

                        lVar12 = lVar12 + 1;

                        uVar15 = extraout_x1_31;

                      } while (auVar28._0_8_ != lVar12);

                      auVar28 = FUN_00293880(uVar14,extraout_x1_31,&local_170,auStack_130,0x10);

                    } while (auVar28._0_8_ != 0);

                  }

                  _objc_release(uVar14);

                }

                FUN_0029ff20(lVar10);

                _objc_release(uVar14);

              }

            }

            FUN_0029ff40(param_5);

            _objc_release(lVar10);

          }

          _objc_release(auVar29._0_8_);

          _objc_release(param_5);

        }

        _objc_release(lVar9);

        _objc_release(param_5);

        uVar14 = extraout_x1_32;

        if ((uVar4 & 1) == 0) {

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e71c0,PTR____kCFBooleanTrue_00388320,1);

          uVar14 = extraout_x1_33;

        }

      }

      else {

LAB_0022d1e4:

        if (uVar4 == 0) {

          lVar9 = 0;

        }

        else {

          FUN_0022df78(param_5);

          lVar9 = 0;

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e71c0,0,1);

          uVar14 = extraout_x1_25;

        }

      }

      puVar1 = PTR_LOOP_003e71a8;

      FUN_00299400(&_OBJC_CLASS___NSNumber,uVar14,DAT_003eb040);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar1,uVar14,1);

      _objc_release(uVar14);

      _objc_release(lVar9);

      _objc_release(local_190);

      _objc_release(uVar23);

      _objc_release(local_1b0);

    }

  }

  _objc_release(lVar8);

LAB_0022d5a4:

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_b0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




