// FUN_00123f38 @0x123f38


/* WARNING: Type propagation algorithm not settling */



void FUN_00123f38(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  cfstringStruct *pcVar1;

  double dVar2;

  undefined *puVar3;

  double dVar4;

  bool bVar5;

  bool bVar6;

  uint uVar7;

  uint uVar8;

  int iVar9;

  cfstringStruct *pcVar10;

  ulong uVar11;

  undefined8 uVar12;

  ulong uVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  long lVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  ulong uVar21;

  long lVar22;

  long lVar23;

  long lVar24;

  ulong uVar25;

  cfstringStruct *pcVar26;

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

  uint uVar27;

  undefined8 uVar28;

  float fVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  double dVar36;

  undefined8 uVar37;

  double dVar38;

  undefined1 auVar39 [16];

  double local_1a0;

  double local_180;

  double local_178 [2];

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

  if (DAT_003e8438 != -1) {

    thunk_FUN_00128d5c();

  }

  FUN_0011a5d0();

  if ((DAT_003e8321 & 1) == 0) {

    _objc_getAssociatedObject(param_5,&DAT_003e8481);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (lVar14 != 0) {

      auVar39 = FUN_002978a0(lVar14);

      if ((auVar39._0_8_ & 1) == 0) {

        FUN_0029e8a0(lVar14,auVar39._8_8_,1);

      }

    }

    FUN_00126f38(param_5);

    _objc_release(lVar14);

    goto LAB_00125438;

  }

  FUN_001272a4();

  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_001331c4();

  if ((DAT_003e82f0 == 0) || (DAT_003e8490 != uVar7)) {

LAB_00123ffc:

    auVar39 = FUN_00297fa0(pcVar10);

    if (auVar39._0_8_ == 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar39 = _objc_retainAutoreleasedReturnValue();

      uVar19 = auVar39._0_8_;

      FUN_002a45e0(uVar19,auVar39._8_8_,&cf_xzyNameplateImageNameLight);

      uVar37 = _objc_retainAutoreleasedReturnValue();

      auVar39 = FUN_00297fa0();

      if (auVar39._0_8_ == 0) {

        FUN_002a45e0(uVar19,auVar39._8_8_,&cf_xzyNameplateImageNameDark);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        lVar14 = FUN_00297fa0();

        _objc_release(uVar12);

        _objc_release(uVar37);

        if (lVar14 != 0) goto LAB_001240f8;

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar39 = _objc_retainAutoreleasedReturnValue();

        FUN_00293660(auVar39._0_8_,auVar39._8_8_,DAT_003e8308,0);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar39._0_8_);

        uStack_148 = 0;

        local_150 = 0;

        uStack_138 = 0;

        uStack_140 = 0;

        lStack_168 = 0;

        local_178[1] = 0.0;

        uStack_158 = 0;

        local_160 = (long *)0x0;

        _objc_retain(uVar12);

        lVar14 = FUN_00293880(uVar12,extraout_x1_01,local_178 + 1,auStack_130,0x10);

        uVar37 = 0;

        if (lVar14 != 0) {

          lVar15 = *local_160;

          do {

            lVar16 = 0;

            do {

              if (*local_160 != lVar15) {

                _objc_enumerationMutation(uVar12);

              }

              uVar37 = DAT_003e8310;

              uVar28 = *(undefined8 *)(lStack_168 + lVar16 * 8);

              FUN_00299b20(uVar28);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              FUN_002984e0();

              auVar39 = _objc_retainAutoreleasedReturnValue();

              iVar9 = FUN_00293560(uVar37,auVar39._8_8_,auVar39._0_8_);

              _objc_release(auVar39._0_8_);

              _objc_release(uVar20);

              if (iVar9 != 0) {

                FUN_002a4460(DAT_003e8308,extraout_x1_02,uVar28);

                uVar37 = _objc_retainAutoreleasedReturnValue();

                goto LAB_00124920;

              }

              lVar16 = lVar16 + 1;

            } while (lVar14 != lVar16);

            lVar14 = FUN_00293880(uVar12,extraout_x1_02,local_178 + 1,auStack_130,0x10);

          } while (lVar14 != 0);

          uVar37 = 0;

        }

LAB_00124920:

        _objc_release(uVar12);

        _objc_release(uVar12);

      }

      else {

        _objc_release(uVar37);

LAB_001240f8:

        uVar37 = 0;

      }

      _objc_release(uVar19);

      auVar39._8_8_ = extraout_x1_00;

      auVar39._0_8_ = uVar37;

    }

    else {

      FUN_002a4460(DAT_003e8308,auVar39._8_8_,pcVar10);

      auVar39 = _objc_retainAutoreleasedReturnValue();

    }

    uVar11 = DAT_003e82f0;

    lVar14 = auVar39._0_8_;

    if (lVar14 == 0) {

      DAT_003e82f0 = 0;

    }

    else {

      FUN_002965c0(&_OBJC_CLASS___UIImage,auVar39._8_8_,lVar14);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_retain();

      uVar13 = DAT_003e82f0;

      DAT_003e82f0 = uVar11;

      _objc_release(uVar13);

    }

    _objc_release(uVar11);

    pcVar1 = &cf___;

    if (pcVar10 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar10;

    }

    _objc_retain(pcVar1);

    pcVar26 = DAT_003e82f8;

    DAT_003e82f8 = pcVar1;

    _objc_release(pcVar26);

    DAT_003e8490 = (byte)uVar7;

    _objc_release(lVar14);

  }

  else {

    pcVar1 = &cf___;

    if (pcVar10 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar10;

    }

    uVar11 = FUN_00297820(DAT_003e82f8,extraout_x1,pcVar1);

    if ((uVar11 & 1) == 0) goto LAB_00123ffc;

  }

  uVar11 = DAT_003e82f0;

  _objc_retain(DAT_003e82f0);

  if ((DAT_003e83d1 == '\x01') &&

     (uVar13 = _objc_opt_respondsToSelector(param_5,"viewModel"), (uVar13 & 1) != 0)) {

    FUN_002a6280(param_5);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if ((lVar14 != 0) &&

       (uVar13 = _objc_opt_respondsToSelector(lVar14,"messageWrap"), (uVar13 & 1) != 0)) {

      FUN_00298ce0(lVar14);

      lVar15 = _objc_retainAutoreleasedReturnValue();

      if (lVar15 != 0) {

        FUN_00298640(lVar15);

        lVar16 = _objc_retainAutoreleasedReturnValue();

        if ((lVar16 == 0) || (lVar17 = FUN_00297fa0(lVar16), lVar18 = lVar16, lVar17 == 0)) {

          FUN_002985c0(lVar15);

          lVar18 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar16);

        }

        auVar39 = FUN_00297fa0(lVar18);

        if ((auVar39._0_8_ != 0) &&

           (uVar13 = FUN_00295fa0(lVar18,auVar39._8_8_,&cf__chatroom), (uVar13 & 1) == 0)) {

          FUN_00122470(lVar18);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          if (uVar13 != 0) {

            _objc_retain(uVar13);

            _objc_release(uVar11);

            uVar11 = uVar13;

          }

          _objc_release(uVar13);

        }

        _objc_release(lVar18);

      }

      _objc_release(lVar15);

    }

    _objc_release(lVar14);

  }

  if (uVar11 == 0) {

    _objc_getAssociatedObject(param_5,&DAT_003e8481);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (lVar14 != 0) {

      auVar39 = FUN_002978a0(lVar14);

      if ((auVar39._0_8_ & 1) == 0) {

        FUN_0029e8a0(lVar14,auVar39._8_8_,1);

      }

    }

    FUN_00126f38(param_5);

  }

  else {

    FUN_0011a908(param_5);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (lVar14 == 0) {

      _objc_getAssociatedObject(param_5,&DAT_003e8481);

      lVar15 = _objc_retainAutoreleasedReturnValue();

      if (lVar15 != 0) {

        auVar39 = FUN_002978a0(lVar15);

        if ((auVar39._0_8_ & 1) == 0) {

          FUN_0029e8a0(lVar15,auVar39._8_8_,1);

        }

      }

    }

    else {

      uVar7 = FUN_002978a0(lVar14);

      FUN_00295600(lVar14);

      uVar8 = _CGRectIsEmpty();

      FUN_002a5020(lVar14);

      uVar19 = _objc_retainAutoreleasedReturnValue();

      lVar15 = FUN_00297fa0();

      if (lVar15 == 0) {

        FUN_00291ee0(lVar14);

        uVar37 = _objc_retainAutoreleasedReturnValue();

        lVar15 = FUN_00297fa0();

        uVar27 = (uint)(lVar15 == 0);

        _objc_release(uVar37);

      }

      else {

        uVar27 = 0;

      }

      _objc_release(uVar19);

      uVar7 = uVar7 | uVar27 | uVar8;

      if ((uVar7 & 1) == 0) {

        lVar15 = 0;

LAB_001244c8:

        dVar30 = (double)FUN_00295600(lVar14);

        local_1a0 = param_4;

        if (uVar8 == 0) {

LAB_00124538:

          _objc_retain(param_5);

          local_178[0] = 0.0;

          FUN_002a4880(lVar14);

          auVar39 = _objc_retainAutoreleasedReturnValue();

          dVar31 = param_2;

          dVar38 = param_3;

          dVar34 = local_1a0;

          FUN_00293720(dVar30,auVar39._0_8_,auVar39._8_8_,param_5);

          _objc_release(auVar39._0_8_);

          local_180 = dVar31;

          if ((uVar8 & 1) == 0) {

            iVar9 = FUN_00127530(param_5,&local_180);

            if (iVar9 == 0) {

              iVar9 = FUN_00191fd0(param_5,local_178);

              if (iVar9 == 0) goto LAB_00124774;

              dVar32 = (double)FUN_00127838(local_180,lVar14);

              dVar31 = local_178[0];

              dVar33 = (double)FUN_0018db40(param_5);

              dVar33 = dVar32 + dVar31 + dVar33;

              local_180 = dVar33;

              FUN_002a4880(lVar14);

              uVar19 = _objc_retainAutoreleasedReturnValue();

              param_2 = (double)FUN_00123e80(dVar33,param_5,uVar19);

            }

            else {

              _objc_setAssociatedObject(lVar14,&DAT_003e8485,0,1);

              dVar31 = (double)FUN_0018db40(param_5);

              dVar31 = dVar31 + local_180;

              local_180 = dVar31;

              FUN_002a4880(lVar14);

              uVar19 = _objc_retainAutoreleasedReturnValue();

              param_2 = (double)FUN_00123e80(dVar31,param_5,uVar19);

            }

            _objc_release(uVar19);

          }

LAB_00124774:

          FUN_002925a0(param_5);

          dVar31 = dVar38;

          dVar32 = dVar34;

          dVar33 = (double)FUN_001910c8(param_5);

          FUN_002a5020(lVar14);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          if (lVar16 == 0) {

            uVar13 = 0;

            dVar35 = DAT_003e83d8;

            dVar2 = DAT_003e83e0;

            dVar36 = DAT_003e83e8;

            uVar21 = DAT_003e83f0;

          }

          else {

            FUN_002a5020(lVar14);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            uVar13 = FUN_00295fe0();

            uVar21 = DAT_003e83f0;

            dVar36 = DAT_003e83e8;

            dVar2 = DAT_003e83e0;

            dVar35 = DAT_003e83d8;

            _objc_release(uVar19);

          }

          _objc_release(lVar16);

          _objc_getAssociatedObject(param_5,&DAT_003e8480);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          uVar13 = uVar11 ^ (long)(dVar30 * 10.0) << 3 ^ (long)(param_3 * 10.0) << 0xb ^

                   (long)(param_2 * 10.0) << 7 ^ (long)(dVar38 * 10.0) << 0x11 ^

                   (long)(dVar34 * 10.0) << 0x15 ^ (long)(dVar33 * 10.0) << 0xd ^ uVar13 ^

                   uVar21 << 0x19 ^ (long)(dVar35 * 10.0) << 1 ^ (long)(dVar2 * 10.0) << 5 ^

                   (long)(dVar36 * 10.0) << 9;

          if ((lVar16 == 0) || (dVar38 = dVar33, uVar21 = FUN_002a5a20(lVar16), uVar21 != uVar13)) {

LAB_00124af8:

            dVar38 = DAT_003e83d8;

            if (DAT_003e83d8 <= 0.0) {

              dVar38 = local_1a0;

            }

            dVar34 = local_1a0;

            FUN_002a3d80(uVar11);

            dVar35 = dVar38;

            if (0.0 < dVar34) {

              dVar35 = (double)FUN_002a3d80(uVar11);

              FUN_002a3d80(uVar11);

              dVar35 = dVar38 * (dVar35 / dVar34);

            }

            uVar21 = DAT_003e83f0;

            dVar2 = DAT_003e83e8;

            dVar34 = DAT_003e83e0;

            dVar36 = -2.0;

            if ((DAT_003e83f0 & 0xfffffffffffffffe) != 2) {

              dVar36 = 2.0;

            }

            if ((uVar8 & 1) == 0) {

              dVar30 = (double)FUN_00127a34(dVar30,lVar14);

            }

            if ((uVar7 & 1) == 0) {

              if (uVar21 - 1 < 2) {

                FUN_00295600(lVar14);

                FUN_00295600(lVar14);

                FUN_0029e5e0(dVar33 + dVar35 + dVar36 + dVar30,param_2,dVar31,lVar14);

              }

              else {

                FUN_00295600(lVar14);

                FUN_00295600(lVar14);

                FUN_0029e5e0(dVar33 + dVar30,param_2,dVar31,lVar14);

              }

            }

            _objc_getAssociatedObject(param_5,&DAT_003e8481);

            lVar18 = _objc_retainAutoreleasedReturnValue();

            if (lVar18 == 0) {

              auVar39 = _objc_alloc(&_OBJC_CLASS___UIImageView);

              auVar39 = FUN_00296c40(auVar39._0_8_,auVar39._8_8_,uVar11);

              lVar18 = auVar39._0_8_;

              FUN_0029d6c0(lVar18,auVar39._8_8_,1);

              FUN_0029d4a0(lVar18,extraout_x1_06,1);

              FUN_002a0420(lVar18,extraout_x1_07,0);

              FUN_00292dc0(&_OBJC_CLASS___UIColor);

              auVar39 = _objc_retainAutoreleasedReturnValue();

              FUN_0029cf60(lVar18,auVar39._8_8_,auVar39._0_8_);

              _objc_release(auVar39._0_8_);

              FUN_002a1c80(lVar18,extraout_x1_08,0x1352579);

              FUN_00291380(param_5,extraout_x1_09,lVar18);

              _objc_setAssociatedObject(param_5,&DAT_003e8481,lVar18,1);

            }

            else {

              FUN_002a4880(lVar18);

              lVar17 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              if (lVar17 != param_5) {

                FUN_00291380(param_5,extraout_x1_03,lVar18);

              }

              FUN_00296480(lVar18);

              uVar25 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              uVar19 = extraout_x1_04;

              if (uVar25 != uVar11) {

                FUN_0029ec00(lVar18,extraout_x1_04,uVar11);

                uVar19 = extraout_x1_05;

              }

              FUN_0029e8a0(lVar18,uVar19,0);

            }

            dVar4 = local_180;

            FUN_002a4880(lVar14);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            uVar37 = FUN_00123e80(dVar2 + ((local_1a0 * 0.5 + dVar4) - dVar38 * 0.5),param_5,uVar19)

            ;

            _objc_release(uVar19);

            if (uVar21 - 1 < 2) {

              FUN_002a4880(lVar14);

              auVar39 = _objc_retainAutoreleasedReturnValue();

              uVar19 = FUN_00293720(dVar33 + dVar34 + dVar30,uVar37,dVar35,dVar38,auVar39._0_8_,

                                    auVar39._8_8_,param_5);

              _objc_release(auVar39._0_8_);

              FUN_0029e5e0(uVar19,uVar37,dVar35,dVar38,lVar18);

              uVar19 = extraout_x1_10;

            }

            else {

              FUN_002a5020(lVar14);

              pcVar26 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar1 = &cf___;

              if (pcVar26 != (cfstringStruct *)0x0) {

                pcVar1 = pcVar26;

              }

              _objc_retain(pcVar1);

              _objc_release(pcVar26);

              _objc_getAssociatedObject(lVar14,PTR_LOOP_003e6a28);

              auVar39 = _objc_retainAutoreleasedReturnValue();

              lVar17 = auVar39._0_8_;

              if ((lVar17 == 0) || (iVar9 = FUN_00297820(lVar17,auVar39._8_8_,pcVar1), iVar9 == 0))

              {

                FUN_002925a0(lVar14);

                dVar31 = (double)FUN_002a3dc0(dVar31,dVar32,lVar14);

                puVar3 = PTR_LOOP_003e6a20;

                FUN_002993a0(&_OBJC_CLASS___NSNumber);

                uVar19 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar14,puVar3,uVar19,1);

                _objc_release(uVar19);

                _objc_setAssociatedObject(lVar14,PTR_LOOP_003e6a28,pcVar1,3);

              }

              else {

                _objc_getAssociatedObject(lVar14,PTR_LOOP_003e6a20);

                uVar19 = _objc_retainAutoreleasedReturnValue();

                fVar29 = (float)FUN_00295480();

                _objc_release(uVar19);

                dVar31 = (double)fVar29;

              }

              FUN_002a4880(lVar14);

              auVar39 = _objc_retainAutoreleasedReturnValue();

              uVar19 = FUN_00293720(dVar33 + dVar34 + dVar36 + dVar30 + dVar31,uVar37,dVar35,dVar38,

                                    auVar39._0_8_,auVar39._8_8_,param_5);

              _objc_release(auVar39._0_8_);

              FUN_0029e5e0(uVar19,uVar37,dVar35,dVar38,lVar18);

              _objc_release(lVar17);

              _objc_release(pcVar1);

              uVar19 = extraout_x1_11;

            }

            FUN_00299480(&_OBJC_CLASS___NSNumber,uVar19,uVar13);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_5,&DAT_003e8480,uVar19,1);

            _objc_release(uVar19);

            if ((uVar7 & 1) == 0) {

              FUN_00295600(lVar14);

              FUN_002993a0(&_OBJC_CLASS___NSNumber);

              uVar19 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar14,&DAT_003e8486,uVar19,1);

              _objc_release(uVar19);

              FUN_00127924(param_5,lVar14);

              FUN_002993a0(&_OBJC_CLASS___NSNumber);

              uVar19 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar14,&DAT_003e8487,uVar19,1);

              _objc_release(uVar19);

            }

            else {

              _objc_setAssociatedObject(lVar14,&DAT_003e8486,0,1);

              _objc_setAssociatedObject(lVar14,&DAT_003e8487,0,1);

            }

            FUN_00295600(lVar18);

            FUN_002993a0(&_OBJC_CLASS___NSNumber);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar18,&DAT_003e8482,uVar19,1);

            _objc_release(uVar19);

            FUN_00295600(lVar18);

            FUN_002993a0(uVar37,&_OBJC_CLASS___NSNumber);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar18,&DAT_003e8483,uVar19,1);

            _objc_release(uVar19);

            FUN_0018ee10(param_5);

          }

          else {

            _objc_getAssociatedObject(param_5,&DAT_003e8481);

            lVar18 = _objc_retainAutoreleasedReturnValue();

            if (lVar18 == 0) {

LAB_00124af0:

              _objc_release(lVar18);

              goto LAB_00124af8;

            }

            FUN_002a4880(lVar18);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            if (lVar17 != param_5) {

              _objc_release(lVar17);

              goto LAB_00124af0;

            }

            uVar21 = FUN_002978a0(lVar18);

            _objc_release(lVar17);

            if ((uVar21 & 1) != 0) goto LAB_00124af0;

            _objc_getAssociatedObject(lVar14,&DAT_003e8486);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(lVar14,&DAT_003e8487);

            lVar22 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(lVar18,&DAT_003e8482);

            lVar23 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(lVar18,&DAT_003e8483);

            lVar24 = _objc_retainAutoreleasedReturnValue();

            dVar34 = (double)FUN_00127924(param_5,lVar14);

            if (lVar17 == 0) {

LAB_00124a2c:

              if (lVar22 == 0) {

                bVar5 = true;

              }

              else {

                fVar29 = (float)FUN_00295480();

                dVar38 = 0.5;

                bVar5 = ABS(dVar34 - (double)fVar29) < 0.5;

              }

            }

            else {

              dVar35 = (double)FUN_00295600(lVar14);

              fVar29 = (float)FUN_00295480(lVar17);

              dVar38 = 0.5;

              if (ABS(dVar35 - (double)fVar29) < 0.5) goto LAB_00124a2c;

              bVar5 = false;

            }

            if (lVar23 == 0) {

LAB_00124a8c:

              if (lVar24 == 0) {

                bVar6 = true;

              }

              else {

                FUN_00295600(lVar18);

                fVar29 = (float)FUN_00295480(lVar24);

                bVar6 = ABS(dVar38 - (double)fVar29) < 0.5;

              }

            }

            else {

              dVar34 = (double)FUN_00295600(lVar18);

              fVar29 = (float)FUN_00295480(lVar23);

              dVar38 = 0.5;

              if (ABS(dVar34 - (double)fVar29) < 0.5) goto LAB_00124a8c;

              bVar6 = false;

            }

            _objc_release(lVar24);

            _objc_release(lVar23);

            _objc_release(lVar22);

            _objc_release(lVar17);

            if (!(bool)(bVar5 & bVar6)) goto LAB_00124af0;

          }

          _objc_release(lVar18);

          _objc_release(lVar16);

          _objc_release(param_5);

        }

        else {

          uVar13 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

          if ((uVar13 & 1) != 0) {

            FUN_002959c0(param_5);

            lVar16 = _objc_retainAutoreleasedReturnValue();

            if (lVar16 != 0) {

              dVar31 = (double)FUN_00295600(lVar16);

              uVar13 = _CGRectIsEmpty();

              if ((uVar13 & 1) == 0) {

                if ((lVar15 == 0) ||

                   (uVar13 = _objc_opt_respondsToSelector(lVar15,"isSender"), (uVar13 & 1) == 0)) {

                  iVar9 = 0;

                }

                else {

                  iVar9 = FUN_00297a80(lVar15);

                }

                dVar38 = (double)FUN_00191a54(param_5);

                dVar30 = (dVar31 - dVar38) + -80.0 + -5.0;

                if (iVar9 == 0) {

                  dVar30 = param_3 + (dVar31 - dVar38) + 5.0;

                }

                _objc_release(lVar16);

                param_2 = param_2 + 2.0;

                local_1a0 = 20.0;

                param_3 = 80.0;

                goto LAB_00124538;

              }

              _objc_release(lVar16);

            }

          }

        }

      }

      else {

        uVar13 = _objc_opt_respondsToSelector(param_5,"viewModel");

        if ((uVar13 & 1) == 0) {

          lVar15 = 0;

        }

        else {

          FUN_002a6280(param_5);

          lVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_retain();

          if ((lVar15 != 0) && (uVar13 = FUN_00005168(lVar15), (uVar13 & 1) == 0)) {

            if (DAT_003e84a0 != -1) {

              FUN_0028f3f8();

            }

            if (DAT_003e8498 != 0) {

              auVar39 = _objc_opt_isKindOfClass(lVar15);

              if ((auVar39._0_8_ & 1) != 0) {

                FUN_002a6080(lVar15,auVar39._8_8_,&cf_parentModel);

                lVar16 = _objc_retainAutoreleasedReturnValue();

                if (lVar16 != 0) {

                  auVar39 = _objc_opt_respondsToSelector(lVar16,"subViewModels");

                  if ((auVar39._0_8_ & 1) != 0) {

                    FUN_002a6080(lVar16,auVar39._8_8_,&cf_subViewModels);

                    uVar19 = _objc_retainAutoreleasedReturnValue();

                    lVar18 = FUN_00293860(uVar19);

                    if (lVar18 != 0) {

                      FUN_00295440(uVar19);

                      lVar18 = _objc_retainAutoreleasedReturnValue();

                      _objc_release();

                      _objc_release(uVar19);

                      _objc_release(lVar16);

                      _objc_release(lVar15);

                      if (lVar18 != lVar15) goto LAB_00125414;

                      goto LAB_001244c8;

                    }

                    _objc_release(uVar19);

                  }

                }

                _objc_release(lVar16);

              }

            }

            _objc_release(lVar15);

            goto LAB_001244c8;

          }

        }

        _objc_release(lVar15);

      }

    }

LAB_00125414:

    _objc_release(lVar15);

  }

  _objc_release(lVar14);

  _objc_release(uVar11);

  _objc_release(pcVar10);

LAB_00125438:

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_b0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




