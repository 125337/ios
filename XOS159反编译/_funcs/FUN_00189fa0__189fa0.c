// FUN_00189fa0 @0x189fa0


void FUN_00189fa0(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  bool bVar1;

  ulong uVar2;

  double dVar3;

  double dVar4;

  bool bVar5;

  bool bVar6;

  undefined *puVar7;

  bool bVar8;

  int iVar9;

  uint uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  ulong uVar15;

  long lVar16;

  long lVar17;

  undefined8 uVar18;

  ulong uVar19;

  long lVar20;

  undefined8 uVar21;

  code *pcVar22;

  long lVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  long lVar26;

  long lVar27;

  long lVar28;

  ulong uVar29;

  long lVar30;

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

  undefined8 uVar31;

  ulong uVar32;

  ulong uVar33;

  ulong uVar34;

  ulong uVar35;

  ulong uVar36;

  float fVar37;

  double dVar38;

  double dVar39;

  double dVar40;

  double dVar41;

  double dVar42;

  double dVar43;

  undefined1 auVar44 [16];

  long local_158;

  ulong local_140;

  ulong local_138;

  long local_130;

  ulong local_d8;

  long local_b0;

  

  _objc_retain();

  if ((DAT_003e8db8 & 1) == 0) {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6e48);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar11 == 0) goto LAB_0018aff4;

  }

  FUN_000822c8(param_5);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (lVar11 == 0) {

    if ((DAT_003e8db8 & 1) == 0) {

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e48,0,1);

    }

  }

  else {

    FUN_002a4880(lVar11);

    lVar12 = _objc_retainAutoreleasedReturnValue();

    if (lVar12 != 0) {

      if ((DAT_003e8db8 & 1) == 0) {

        FUN_00297e40(lVar12);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14a0(0);

        _objc_release(uVar18);

        FUN_00297e40(lVar12);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,0);

        _objc_release(auVar44._0_8_);

        FUN_00297e40(lVar12);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b260(auVar44._0_8_,auVar44._8_8_,&cf_xzyBreath);

        _objc_release(auVar44._0_8_);

        FUN_0018b7e8(lVar12);

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e50,0,1);

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e48,0,1);

        _objc_setAssociatedObject(lVar11,PTR_LOOP_003e6e58,0,1);

      }

      else {

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e48,PTR____kCFBooleanTrue_00388320,1);

        _objc_setAssociatedObject(lVar11,PTR_LOOP_003e6e58,PTR____kCFBooleanTrue_00388320,1);

        auVar44._8_8_ = extraout_x1;

        auVar44._0_8_ = DAT_003e8e10;

        if ((DAT_003e8e10 == 0) &&

           (auVar44 = _objc_getClass("TextMessageSubViewModel"), auVar44._0_8_ == 0)) {

          lVar14 = 0;

          lVar16 = 0;

          DAT_003e8e10 = 0;

        }

        else {

          DAT_003e8e10 = auVar44._0_8_;

          FUN_002a6080(param_5,auVar44._8_8_,&cf_viewModel);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 == 0) {

LAB_0018a248:

            lVar14 = 0;

            lVar16 = 0;

          }

          else {

            auVar44 = _objc_opt_isKindOfClass(lVar13,DAT_003e8e10);

            if ((auVar44._0_8_ & 1) == 0) goto LAB_0018a248;

            FUN_002a6080(lVar13,auVar44._8_8_,&cf_parentModel);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            lVar20 = auVar44._0_8_;

            if (lVar20 == 0) {

LAB_0018a268:

              lVar16 = 0;

LAB_0018a26c:

              lVar14 = 0;

            }

            else {

              FUN_002a6080(lVar20,auVar44._8_8_,&cf_subViewModels);

              lVar14 = _objc_retainAutoreleasedReturnValue();

              if ((lVar14 == 0) || (uVar15 = FUN_00293860(lVar14), uVar15 < 2)) {

                _objc_release(lVar14);

                goto LAB_0018a268;

              }

              FUN_00295440(lVar14);

              lVar16 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              if (lVar13 == lVar16) {

                lVar16 = 1;

              }

              else {

                FUN_00297d80(lVar14);

                lVar17 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                lVar16 = 2;

                if (lVar13 == lVar17) {

                  lVar16 = 3;

                }

              }

              _objc_release(lVar14);

              auVar44 = _objc_opt_respondsToSelector(lVar13,"isSender");

              if (((auVar44._0_8_ & 1) == 0) ||

                 (pcVar22 = (code *)FUN_00298d20(lVar13,auVar44._8_8_,"isSender"),

                 pcVar22 == (code *)0x0)) goto LAB_0018a26c;

              iVar9 = (*pcVar22)(lVar13,"isSender");

              lVar14 = -1;

              if (iVar9 != 0) {

                lVar14 = 1;

              }

            }

            _objc_release(lVar20);

          }

          _objc_release(lVar13);

        }

        uVar15 = FUN_002978a0(lVar11);

        if ((uVar15 & 1) == 0) {

          dVar38 = (double)FUN_002916a0(lVar11);

          param_2 = 0.1;

          if (dVar38 < 0.1) goto LAB_0018a2b8;

          FUN_00295600(lVar11);

          uVar15 = _CGRectIsEmpty();

          if ((uVar15 & 1) != 0) goto LAB_0018a2b8;

          FUN_00295600(lVar11);

          if ((lVar16 == 0) && (param_3 < 30.0)) goto LAB_0018a47c;

        }

        else {

LAB_0018a2b8:

          if (lVar16 == 0) {

LAB_0018a47c:

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0(0);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,0);

            _objc_release(auVar44._0_8_);

            FUN_0018b7e8(lVar12);

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e6e50,0,1);

            goto LAB_0018afe4;

          }

        }

        FUN_00295600(lVar11);

        dVar39 = (double)FUN_00293720(lVar12,extraout_x1_00,param_5);

        uVar15 = 0x10000000;

        dVar38 = param_4;

        if (lVar16 == 0) {

LAB_0018a32c:

          uVar19 = 0;

        }

        else {

          uVar15 = 0x20000000;

          uVar18 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

          uVar19 = _objc_opt_isKindOfClass(lVar11,uVar18);

          if ((uVar19 & 1) == 0) goto LAB_0018a32c;

          FUN_00296480(lVar11);

          uVar19 = _objc_retainAutoreleasedReturnValue();

          uVar19 = uVar19 >> 4;

          _objc_release();

        }

        iVar9 = FUN_001331c4();

        uVar34 = 0x40000000;

        if (iVar9 == 0) {

          uVar34 = 0;

        }

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e6e50);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar18 = auVar44._8_8_;

        lVar13 = auVar44._0_8_;

        uVar34 = uVar15 ^ lVar14 * 0x1000000 + 0x1000000U ^ (long)(param_2 * 100.0) ^

                 (long)(dVar39 * 100.0) ^ (long)(param_3 * 100.0) ^

                 (long)(param_4 * 100.0) << 0x10 ^ uVar19 ^ uVar34;

        if (lVar13 == 0) {

          bVar8 = false;

        }

        else {

          auVar44 = FUN_002a5a20(lVar13);

          uVar18 = auVar44._8_8_;

          bVar8 = auVar44._0_8_ == uVar34;

        }

        puVar7 = PTR_LOOP_003e6e50;

        FUN_00299480(&_OBJC_CLASS___NSNumber,uVar18,uVar34);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,puVar7,uVar18,1);

        _objc_release(uVar18);

        _objc_release(lVar13);

        if (bVar8) {

          if (lVar16 == 0) {

            FUN_00297e40(lVar12);

            local_b0 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            _objc_getAssociatedObject(lVar12,"xzyShadowInner");

            lVar13 = _objc_retainAutoreleasedReturnValue();

            if (lVar13 == 0) {

              local_b0 = 0;

            }

            else {

              FUN_00297e40(lVar13);

              local_b0 = _objc_retainAutoreleasedReturnValue();

              _objc_retain();

              _objc_release(local_b0);

            }

            _objc_release(lVar13);

          }

          if (local_b0 == 0) {

LAB_0018a578:

            _objc_release(local_b0);

            goto LAB_0018a580;

          }

          fVar37 = (float)FUN_002a2e00(local_b0);

          if ((lVar16 == 0) || ((double)fVar37 < DAT_003e6e38 + -0.01)) {

            if ((lVar16 != 0) || ((double)fVar37 < DAT_003e6e38 + -0.01)) goto LAB_0018a578;

          }

          else {

            lVar13 = FUN_002a2e20(local_b0);

            if (lVar13 == 0) goto LAB_0018a578;

          }

          if (DAT_003e8db9 == '\x01') {

            FUN_0018b898(local_b0);

          }

        }

        else {

LAB_0018a580:

          FUN_0018c134();

          lVar13 = DAT_003e8da0;

          local_b0 = DAT_003e8da0;

          _objc_retain();

          if (lVar16 == 0) {

            _objc_getAssociatedObject(lVar12,"xzyShadowContainer");

            lVar16 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar16 != 0) {

              FUN_0018b7e8(lVar12);

            }

            iVar9 = FUN_00292e20(lVar12);

            if (iVar9 != 0) {

              FUN_0029d4a0(lVar12,extraout_x1_08,0);

            }

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            iVar9 = FUN_00298a60();

            _objc_release(uVar18);

            if (iVar9 != 0) {

              FUN_00297e40(lVar12);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

              _objc_release(auVar44._0_8_);

            }

            _objc_retainAutorelease(lVar13);

            uVar18 = FUN_00290a20();

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1460(auVar44._0_8_,auVar44._8_8_,uVar18);

            _objc_release(auVar44._0_8_);

            dVar38 = DAT_003e6e38;

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0((float)dVar38);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1480(0,0);

            _objc_release(uVar18);

            dVar38 = DAT_003e6e30;

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14e0(dVar38);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1520(auVar44._0_8_,auVar44._8_8_,1);

            _objc_release(auVar44._0_8_);

            uVar21 = FUN_0018ba50();

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a0bc0(uVar21);

            _objc_release(uVar18);

            FUN_002a4880(lVar12);

            lVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar13 != 0) {

              FUN_002a4880(lVar12);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00292e20();

              _objc_release(uVar18);

              if (iVar9 != 0) {

                FUN_002a4880(lVar12);

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_0029d4a0(auVar44._0_8_,auVar44._8_8_,0);

                _objc_release(auVar44._0_8_);

              }

              FUN_002a4880(lVar12);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_00297e40();

              uVar21 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00298a60();

              _objc_release(uVar21);

              _objc_release(uVar18);

              if (iVar9 != 0) {

                FUN_002a4880(lVar12);

                uVar18 = _objc_retainAutoreleasedReturnValue();

                FUN_00297e40();

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

                _objc_release(auVar44._0_8_);

                _objc_release(uVar18);

              }

            }

            if (DAT_003e8db9 == '\x01') {

              FUN_00297e40(lVar12);

              lVar20 = _objc_retainAutoreleasedReturnValue();

              FUN_0018b898();

            }

            else {

              FUN_00297e40(lVar12);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              lVar20 = auVar44._0_8_;

              FUN_0029b260(lVar20,auVar44._8_8_,&cf_xzyBreath);

            }

          }

          else {

            FUN_00297e40(lVar12);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0(0);

            _objc_release(uVar18);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,0);

            _objc_release(auVar44._0_8_);

            FUN_00297e40(lVar12);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b260(auVar44._0_8_,auVar44._8_8_,&cf_xzyBreath);

            _objc_release(auVar44._0_8_);

            iVar9 = FUN_00292e20(param_5);

            if (iVar9 != 0) {

              FUN_0029d4a0(param_5,extraout_x1_01,0);

            }

            FUN_00297e40(param_5);

            uVar18 = _objc_retainAutoreleasedReturnValue();

            iVar9 = FUN_00298a60();

            _objc_release(uVar18);

            if (iVar9 != 0) {

              FUN_00297e40(param_5);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

              _objc_release(auVar44._0_8_);

            }

            if (lVar12 != param_5) {

              iVar9 = FUN_00292e20(lVar12);

              if (iVar9 != 0) {

                FUN_0029d4a0(lVar12,extraout_x1_02,0);

              }

              FUN_00297e40(lVar12);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00298a60();

              _objc_release(uVar18);

              if (iVar9 != 0) {

                FUN_00297e40(lVar12);

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

                _objc_release(auVar44._0_8_);

              }

            }

            _objc_getAssociatedObject(lVar12,"xzyShadowContainer");

            lVar20 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(lVar12,"xzyShadowInner");

            uVar21 = _objc_retainAutoreleasedReturnValue();

            uVar18 = uVar21;

            if (lVar20 == 0) {

              auVar44 = _objc_alloc_init(&_OBJC_CLASS___UIView);

              lVar20 = auVar44._0_8_;

              FUN_0029d4a0(lVar20,auVar44._8_8_,1);

              FUN_00292dc0(&_OBJC_CLASS___UIColor);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029cf60(lVar20,auVar44._8_8_,auVar44._0_8_);

              _objc_release(auVar44._0_8_);

              FUN_002a23c0(lVar20,extraout_x1_03,0);

              FUN_002a1c80(lVar20,extraout_x1_04,0x135257a);

              uVar18 = _objc_alloc_init(&_OBJC_CLASS___UIView);

              _objc_release(uVar21);

              FUN_00292dc0(&_OBJC_CLASS___UIColor);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              FUN_0029cf60(uVar18,auVar44._8_8_,auVar44._0_8_);

              _objc_release(auVar44._0_8_);

              FUN_002a23c0(uVar18,extraout_x1_05,0);

              FUN_00291380(lVar20,extraout_x1_06,uVar18);

              _objc_setAssociatedObject(lVar12,"xzyShadowContainer",lVar20,1);

              _objc_setAssociatedObject(lVar12,"xzyShadowInner",uVar18,1);

            }

            FUN_002a4880(lVar20);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar17 != param_5) {

              FUN_0029b340(lVar20);

              FUN_00297100(param_5,extraout_x1_07,lVar20,0);

            }

            _objc_retain(lVar11);

            FUN_00297e40(lVar11);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            dVar39 = (double)FUN_00293820();

            _objc_release(uVar21);

            if (dVar39 <= 0.5) {

              uVar21 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

              uVar15 = _objc_opt_isKindOfClass(lVar11,uVar21);

              if ((uVar15 & 1) != 0) {

                FUN_00296480(lVar11);

                lVar17 = _objc_retainAutoreleasedReturnValue();

                if (lVar17 != 0) {

                  FUN_00292960(lVar17);

                }

                _objc_release(lVar17);

              }

            }

            _objc_release(lVar11);

            dVar40 = (double)FUN_0018ba50();

            dVar39 = 1.0;

            if (1.0 <= dVar40) {

              dVar39 = dVar40;

            }

            dVar42 = 1.0 / dVar39;

            if (1.0 / dVar39 <= DAT_003e6e30 + DAT_003e6e30) {

              dVar42 = DAT_003e6e30 + DAT_003e6e30;

            }

            FUN_00295600(lVar11);

            dVar41 = (double)FUN_00293720(lVar12,extraout_x1_09,param_5);

            dVar43 = -dVar42;

            if (lVar16 == 1) {

              dVar43 = dVar42;

            }

            dVar3 = -dVar42;

            dVar4 = dVar42 * 2.0;

            if (lVar16 != 2) {

              dVar3 = dVar43;

              dVar4 = dVar42;

            }

            dVar38 = dVar38 + dVar4;

            FUN_0029e5e0(dVar41 - dVar42,lVar20);

            FUN_0029e5e0(dVar42,dVar3,uVar18);

            _objc_retainAutorelease(lVar13);

            uVar21 = FUN_00290a20();

            FUN_00297e40(uVar18);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1460(auVar44._0_8_,auVar44._8_8_,uVar21);

            _objc_release(auVar44._0_8_);

            dVar42 = DAT_003e6e38;

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14a0((float)dVar42);

            _objc_release(uVar21);

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            dVar41 = 0.0;

            FUN_002a1480(0);

            _objc_release(uVar21);

            dVar42 = DAT_003e6e30;

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14e0(dVar42);

            _objc_release(uVar21);

            dVar43 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 8);

            dVar42 = *(double *)(PTR__UIEdgeInsetsZero_003883f0 + 0x18);

            uVar21 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

            uVar15 = _objc_opt_isKindOfClass(lVar11,uVar21);

            if ((uVar15 & 1) == 0) {

              lVar13 = 0;

            }

            else {

              FUN_00296480(lVar11);

              lVar13 = _objc_retainAutoreleasedReturnValue();

              if (lVar13 != 0) {

                FUN_00292960(lVar13);

                dVar42 = dVar38;

                dVar43 = dVar41;

              }

            }

            FUN_002925a0(uVar18);

            _objc_retain(lVar13);

            if (lVar13 == 0) {

LAB_0018aea4:

              _objc_release(lVar13);

LAB_0018aeac:

              FUN_0018bacc(lVar13);

              FUN_002925a0(uVar18);

              lVar23 = FUN_0018bee8(lVar14,lVar16);

            }

            else {

              _objc_retainAutorelease(lVar13);

              lVar17 = FUN_00290a40();

              if (((lVar17 == 0) || (dVar39 <= 1.0)) || (dVar38 <= 1.0)) goto LAB_0018aea4;

              if (DAT_003e8e30 != -1) {

                FUN_0028f744();

              }

              dVar41 = (double)FUN_0018ba50();

              if (((long)(dVar39 * dVar41) == 0) || ((long)(dVar38 * dVar41) == 0))

              goto LAB_0018aea4;

              if (lVar14 < 0) {

                bVar8 = false;

                dVar42 = (double)(long)(dVar41 + dVar41);

                bVar1 = true;

              }

              else if (lVar14 == 0) {

                if (ABS(dVar43 - dVar42) <= 1.0) {

                  bVar8 = false;

                  bVar1 = false;

                  dVar42 = (double)(long)(dVar41 * 0.0);

                }

                else {

                  bVar8 = dVar43 < dVar42;

                  bVar1 = dVar42 < dVar43;

                  dVar42 = (double)(long)(dVar41 + dVar41);

                }

              }

              else {

                bVar1 = false;

                dVar42 = (double)(long)(dVar41 + dVar41);

                bVar8 = true;

              }

              uVar15 = (ulong)dVar42;

              FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_10,&cf__p__zu__zu___2f__d__ld);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              uVar21 = auVar44._0_8_;

              FUN_00299520(DAT_003e8e28,auVar44._8_8_,uVar21);

              lVar17 = _objc_retainAutoreleasedReturnValue();

              if (lVar17 == 0) {

                _UIGraphicsBeginImageContextWithOptions(dVar39,dVar38,dVar41);

                FUN_00294900(0,lVar13);

                _UIGraphicsGetImageFromCurrentImageContext();

                uVar24 = _objc_retainAutoreleasedReturnValue();

                _UIGraphicsEndImageContext();

                _objc_retainAutorelease(uVar24);

                lVar23 = FUN_00290a40();

                if (lVar23 == 0) {

LAB_0018b3fc:

                  lVar23 = 0;

                }

                else {

                  _objc_retainAutorelease(uVar24);

                  uVar25 = FUN_00290a40();

                  uVar19 = _CGImageGetWidth();

                  lVar26 = _CGImageGetHeight(uVar25);

                  uVar34 = _CGImageGetBitsPerPixel(uVar25);

                  lVar23 = 0;

                  if (((uVar19 != 0) && (lVar26 != 0)) && ((7 < uVar34 && ((uVar34 & 7) == 0)))) {

                    uVar10 = _CGImageGetAlphaInfo(uVar25);

                    local_d8 = 0;

                    if (((uVar10 & 0x1f) != 2) && ((uVar10 & 0x1f) != 4)) {

                      if ((uVar10 & 0x1d) != 1) goto LAB_0018b3fc;

                      local_d8 = (uVar34 >> 3) - 1;

                    }

                    _CGImageGetDataProvider(uVar25);

                    lVar27 = _CGDataProviderCopyData();

                    lVar23 = 0;

                    if (lVar27 != 0) {

                      lVar28 = _CFDataGetBytePtr(lVar27);

                      uVar29 = _CFDataGetLength(lVar27);

                      lVar30 = _CGImageGetBytesPerRow(uVar25);

                      FUN_002922c0(&_OBJC_CLASS___UIBezierPath);

                      uVar25 = _objc_retainAutoreleasedReturnValue();

                      lVar23 = 0;

                      local_138 = 0;

                      local_130 = 0;

                      local_158 = 0;

                      local_140 = 0;

                      bVar5 = false;

                      bVar6 = false;

                      do {

                        if (uVar29 <= (ulong)(lVar23 * lVar30)) break;

                        uVar32 = 0;

                        uVar36 = 0xffffffffffffffff;

                        uVar35 = 0xffffffffffffffff;

                        uVar33 = local_d8;

                        do {

                          if (uVar29 <= uVar33) break;

                          uVar2 = uVar32;

                          if (-1 < (long)uVar35) {

                            uVar2 = uVar35;

                          }

                          if (8 < *(byte *)(lVar28 + uVar33)) {

                            uVar36 = uVar32;

                            uVar35 = uVar2;

                          }

                          uVar32 = uVar32 + 1;

                          uVar33 = uVar33 + (uVar34 >> 3);

                        } while (uVar19 != uVar32);

                        if (((long)uVar35 < 0) || ((long)uVar36 < (long)uVar35)) {

LAB_0018b310:

                          if (bVar5) {

                            FUN_0018c460(dVar41,uVar25,local_138,local_140,local_158,local_130);

                          }

                          bVar5 = false;

                        }

                        else {

                          uVar32 = uVar36;

                          if (bVar1) {

                            if ((long)uVar35 <= (long)uVar15) {

                              uVar35 = uVar15;

                            }

                          }

                          else {

                            if ((long)(uVar19 + ~uVar15) <= (long)uVar36) {

                              uVar32 = uVar19 + ~uVar15;

                            }

                            if (!bVar8) {

                              uVar32 = uVar36;

                            }

                          }

                          if ((long)uVar32 < (long)uVar35) goto LAB_0018b310;

                          if (((bool)(bVar5 & uVar35 == local_138)) && (uVar32 == local_140)) {

                            local_130 = local_130 + 1;

                            bVar6 = true;

                            bVar5 = true;

                          }

                          else {

                            if (bVar5) {

                              FUN_0018c460(dVar41,uVar25,local_138,local_140,local_158,local_130);

                            }

                            bVar5 = true;

                            bVar6 = true;

                            local_130 = 1;

                            local_158 = lVar23;

                            local_140 = uVar32;

                            local_138 = uVar35;

                          }

                        }

                        lVar23 = lVar23 + 1;

                        local_d8 = local_d8 + lVar30;

                      } while (lVar23 != lVar26);

                      _CFRelease(lVar27);

                      uVar31 = extraout_x1_11;

                      if (bVar5) {

                        FUN_0018c460(dVar41,uVar25,local_138,local_140,local_158,local_130);

                        uVar31 = extraout_x1_12;

                      }

                      if (bVar6) {

                        FUN_002a0060(DAT_003e8e28,uVar31,uVar25,uVar21);

                        _objc_retainAutorelease(uVar25);

                        FUN_00290a60();

                        lVar23 = _CGPathCreateCopy();

                      }

                      else {

                        lVar23 = 0;

                      }

                      _objc_release(uVar25);

                    }

                  }

                }

                _objc_release(uVar24);

              }

              else {

                _objc_retainAutorelease();

                FUN_00290a60();

                lVar23 = _CGPathCreateCopy();

              }

              _objc_release(lVar17);

              _objc_release(uVar21);

              _objc_release(lVar13);

              if (lVar23 == 0) goto LAB_0018aeac;

            }

            FUN_00297e40(uVar18);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a14c0(auVar44._0_8_,auVar44._8_8_,lVar23);

            _objc_release(auVar44._0_8_);

            if (lVar23 != 0) {

              _CGPathRelease(lVar23);

            }

            FUN_00297e40(uVar18);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1520(auVar44._0_8_,auVar44._8_8_,1);

            _objc_release(auVar44._0_8_);

            FUN_00297e40(uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002a0bc0(dVar40);

            _objc_release(uVar21);

            if (DAT_003e8db9 == '\x01') {

              FUN_00297e40(uVar18);

              uVar21 = _objc_retainAutoreleasedReturnValue();

              FUN_0018b898();

            }

            else {

              FUN_00297e40(uVar18);

              auVar44 = _objc_retainAutoreleasedReturnValue();

              uVar21 = auVar44._0_8_;

              FUN_0029b260(uVar21,auVar44._8_8_,&cf_xzyBreath);

            }

            _objc_release(uVar21);

            _objc_release(lVar13);

            _objc_release(uVar18);

          }

          _objc_release(lVar20);

        }

        _objc_release(local_b0);

      }

    }

LAB_0018afe4:

    _objc_release(lVar12);

  }

  _objc_release(lVar11);

LAB_0018aff4:

  _objc_release(param_5);

  return;

}




