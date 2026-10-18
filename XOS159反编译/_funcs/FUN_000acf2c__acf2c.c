// FUN_000acf2c @0xacf2c


undefined8 FUN_000acf2c(long param_1,undefined8 param_2)



{

  bool bVar1;

  bool bVar2;

  undefined *puVar3;

  undefined *puVar4;

  byte bVar5;

  byte bVar6;

  byte bVar7;

  byte bVar8;

  uint uVar9;

  int iVar10;

  int iVar11;

  uint uVar12;

  uint uVar13;

  undefined4 uVar14;

  undefined4 uVar15;

  long lVar16;

  long lVar17;

  ulong uVar18;

  undefined8 uVar19;

  long lVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  ulong uVar23;

  undefined8 uVar24;

  long lVar25;

  long lVar26;

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

  undefined **ppuVar27;

  undefined8 uVar28;

  long lVar29;

  long lVar30;

  undefined8 uVar31;

  long lVar32;

  long lVar33;

  long lVar34;

  float fVar35;

  double dVar36;

  double dVar37;

  undefined1 auVar38 [16];

  long local_4b0;

  uint local_4a0;

  ulong local_488;

  long local_460;

  undefined8 local_440;

  long lStack_438;

  long *local_430;

  undefined8 uStack_428;

  undefined8 local_420;

  undefined8 uStack_418;

  undefined8 uStack_410;

  undefined8 uStack_408;

  undefined8 local_400;

  long lStack_3f8;

  long *local_3f0;

  undefined8 uStack_3e8;

  undefined8 local_3e0;

  undefined8 uStack_3d8;

  undefined8 uStack_3d0;

  undefined8 uStack_3c8;

  undefined8 local_3c0;

  long lStack_3b8;

  long *local_3b0;

  undefined8 uStack_3a8;

  undefined8 local_3a0;

  undefined8 uStack_398;

  undefined8 uStack_390;

  undefined8 uStack_388;

  undefined8 local_380;

  long lStack_378;

  long *local_370;

  undefined8 uStack_368;

  undefined8 local_360;

  undefined8 uStack_358;

  undefined8 uStack_350;

  undefined8 uStack_348;

  undefined8 local_340;

  long lStack_338;

  long *local_330;

  undefined8 uStack_328;

  undefined8 local_320;

  undefined8 uStack_318;

  undefined8 uStack_310;

  undefined8 uStack_308;

  undefined1 auStack_300 [128];

  undefined1 auStack_280 [128];

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  uVar9 = FUN_000a89d8();

  uVar9 = uVar9 ^ 1;

  if (param_1 == 0) {

    uVar9 = 1;

  }

  if (((uVar9 & 1) != 0) || (lVar16 = FUN_00293860(param_1), lVar16 == 0)) {

LAB_000aecac:

    uVar28 = 0;

    goto LAB_000aecb0;

  }

  FUN_000828e0();

  if (DAT_003e74db == '\x01') {

    bVar2 = false;

    uVar28 = 0;

    if (((DAT_003e7a2e | DAT_003e7a2f) & 1) != 0) goto LAB_000aecb0;

  }

  else if (((DAT_003e7a2e | DAT_003e7a2f) & 1) == 0) {

    bVar2 = false;

  }

  else {

    lVar16 = FUN_00297fa0(DAT_003e7488);

    if (lVar16 != 0) {

      lVar16 = FUN_00293860(param_1);

      lVar17 = FUN_00295440(param_1);

      lVar20 = FUN_00297d80(param_1);

      bVar2 = true;

      if (((lVar16 != DAT_003e7678) || (DAT_003e7680 != lVar17)) || (DAT_003e7688 != lVar20))

      goto LAB_000ad0c0;

      FUN_00295440(param_1);

      lVar16 = _objc_retainAutoreleasedReturnValue();

      if (lVar16 == 0) {

        lVar17 = 0;

      }

      else {

        _objc_getAssociatedObject(lVar16,PTR_LOOP_003e64b0);

        auVar38 = _objc_retainAutoreleasedReturnValue();

        lVar17 = auVar38._0_8_;

        if ((lVar17 != 0) &&

           (uVar18 = FUN_00297820(lVar17,auVar38._8_8_,DAT_003e7488), (uVar18 & 1) != 0)) {

          _objc_release(lVar17);

          _objc_release(lVar16);

          goto LAB_000aecac;

        }

      }

      _objc_release(lVar17);

      _objc_release(lVar16);

    }

    bVar2 = true;

  }

LAB_000ad0c0:

  if (DAT_003e7668 == 0) {

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    lVar17 = _objc_retainAutoreleasedReturnValue();

    lVar16 = DAT_003e7668;

    DAT_003e7668 = lVar17;

    _objc_release(lVar16);

  }

  FUN_000ac140(param_1,param_2);

  lVar16 = _objc_retainAutoreleasedReturnValue();

  if ((lVar16 == 0) || (lVar17 = FUN_00297fa0(lVar16), lVar17 == 0)) {

LAB_000ad1cc:

    uVar28 = 0;

  }

  else {

    auVar38 = FUN_00297fa0(DAT_003e7488);

    if ((auVar38._0_8_ == 0) ||

       (iVar10 = FUN_00297820(lVar16,auVar38._8_8_,DAT_003e7488), iVar10 == 0)) {

      bVar1 = false;

    }

    else {

      FUN_00295440(param_1);

      lVar17 = _objc_retainAutoreleasedReturnValue();

      if (lVar17 == 0) {

        lVar20 = 0;

      }

      else {

        _objc_getAssociatedObject(lVar17,PTR_LOOP_003e64b0);

        auVar38 = _objc_retainAutoreleasedReturnValue();

        lVar20 = auVar38._0_8_;

        if ((lVar20 != 0) && (iVar10 = FUN_00297820(lVar20,auVar38._8_8_,DAT_003e7488), iVar10 != 0)

           ) {

          DAT_003e7678 = FUN_00293860(param_1);

          DAT_003e7680 = FUN_00295440(param_1);

          DAT_003e7688 = FUN_00297d80(param_1);

          _objc_release(lVar20);

          _objc_release(lVar17);

          goto LAB_000ad1cc;

        }

      }

      _objc_release(lVar20);

      _objc_release(lVar17);

      bVar1 = true;

    }

    dVar36 = (double)_CFAbsoluteTimeGetCurrent();

    uVar28 = extraout_x1;

    if (bVar1) {

      FUN_0029b4a0(DAT_003e7668,extraout_x1,lVar16);

      uVar28 = extraout_x1_00;

    }

    FUN_00299540(DAT_003e7668,uVar28,lVar16);

    lVar17 = _objc_retainAutoreleasedReturnValue();

    if ((lVar17 == 0) || (dVar37 = (double)FUN_00294860(lVar17), 0.2 <= dVar36 - dVar37)) {

      FUN_002993a0(dVar36,&_OBJC_CLASS___NSNumber);

      auVar38 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(DAT_003e7668,auVar38._8_8_,auVar38._0_8_,lVar16);

      _objc_release(auVar38._0_8_);

      uVar18 = FUN_00293860(DAT_003e7668);

      if (0x14 < uVar18) {

        FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

        uVar28 = _objc_retainAutoreleasedReturnValue();

        lVar20 = DAT_003e7668;

        uStack_318 = 0;

        local_320 = 0;

        uStack_308 = 0;

        uStack_310 = 0;

        lStack_338 = 0;

        local_340 = 0;

        uStack_328 = 0;

        local_330 = (long *)0x0;

        _objc_retain(DAT_003e7668);

        auVar38 = FUN_00293880(lVar20,extraout_x1_01,&local_340,auStack_100,0x10);

        if (auVar38._0_8_ != 0) {

          lVar32 = *local_330;

          do {

            uVar19 = auVar38._8_8_;

            lVar33 = 0;

            do {

              if (*local_330 != lVar32) {

                _objc_enumerationMutation(lVar20);

                uVar19 = extraout_x1_02;

              }

              uVar31 = *(undefined8 *)(lStack_338 + lVar33 * 8);

              FUN_00299540(DAT_003e7668,uVar19,uVar31);

              uVar19 = _objc_retainAutoreleasedReturnValue();

              dVar37 = (double)FUN_00294860();

              _objc_release(uVar19);

              uVar19 = extraout_x1_03;

              if (5.0 < dVar36 - dVar37) {

                FUN_00291240(uVar28,extraout_x1_03,uVar31);

                uVar19 = extraout_x1_04;

              }

              lVar33 = lVar33 + 1;

            } while (auVar38._0_8_ != lVar33);

            auVar38 = FUN_00293880(lVar20,uVar19,&local_340,auStack_100,0x10);

          } while (auVar38._0_8_ != 0);

        }

        _objc_release(lVar20);

        FUN_0029b4c0(DAT_003e7668,extraout_x1_05,uVar28);

        _objc_release(uVar28);

      }

      FUN_002986c0(param_2);

      uVar28 = _objc_retainAutoreleasedReturnValue();

      bVar5 = FUN_000bcd6c();

      bVar6 = DAT_003e7bc0;

      _objc_release(uVar28);

      bVar5 = bVar5 | bVar6;

      if ((bVar5 & 1) == 0) {

        FUN_002986c0(param_2);

        uVar28 = _objc_retainAutoreleasedReturnValue();

        bVar6 = FUN_000bce54();

        bVar8 = DAT_003e7bc1;

        _objc_release(uVar28);

        bVar6 = bVar6 | bVar8;

      }

      else {

        bVar6 = 0;

      }

      FUN_000a1fe0();

      uVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_002986c0(param_2);

      auVar38 = _objc_retainAutoreleasedReturnValue();

      uVar9 = FUN_00295fa0(auVar38._0_8_,auVar38._8_8_,&cf__chatroom);

      _objc_release(auVar38._0_8_);

      if (bVar2) {

        auVar38 = FUN_00293860(param_1);

        FUN_002940a0(&_OBJC_CLASS___NSMutableData,auVar38._8_8_,auVar38._0_8_);

        local_4b0 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        local_460 = FUN_00299000(local_4b0);

      }

      else {

        local_460 = 0;

        local_4b0 = 0;

      }

      puVar3 = PTR____kCFBooleanFalse_00388318;

      uVar18 = 0;

      local_4a0 = uVar9 ^ 1;

      iVar10 = 1;

      while( true ) {

        auVar38 = FUN_00293860(param_1);

        puVar4 = PTR____kCFBooleanTrue_00388320;

        if (auVar38._0_8_ <= uVar18) break;

        FUN_00299500(param_1,auVar38._8_8_,uVar18);

        uVar19 = _objc_retainAutoreleasedReturnValue();

        if (local_460 != 0) {

          _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5ce0);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          bVar7 = FUN_002924e0();

          _objc_release(uVar31);

          _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5cc0);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          iVar11 = FUN_002924e0();

          _objc_release(uVar31);

          bVar8 = bVar7 | 2;

          if (iVar11 == 0) {

            bVar8 = bVar7;

          }

          _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5cc8);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          iVar11 = FUN_002924e0();

          _objc_release(uVar31);

          bVar7 = bVar8 | 4;

          if (iVar11 == 0) {

            bVar7 = bVar8;

          }

          _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6478);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          iVar11 = FUN_002924e0();

          _objc_release(uVar31);

          bVar8 = bVar7 | 8;

          if (iVar11 == 0) {

            bVar8 = bVar7;

          }

          _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6480);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          iVar11 = FUN_002924e0();

          _objc_release(uVar31);

          bVar7 = bVar8 | 0x10;

          if (iVar11 == 0) {

            bVar7 = bVar8;

          }

          _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6498);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          iVar11 = FUN_002924e0();

          _objc_release(uVar31);

          bVar8 = bVar7 | 0x20;

          if (iVar11 == 0) {

            bVar8 = bVar7;

          }

          *(byte *)(local_460 + uVar18) = bVar8;

        }

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5ce0,puVar3,1);

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc0,puVar3,1);

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc8,puVar3,1);

        if (!bVar2) {

          _objc_setAssociatedObject

                    (uVar19,PTR_LOOP_003e64a8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1)

          ;

        }

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e6478,puVar3,1);

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e6480,puVar3,1);

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e6498,puVar3,1);

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e64f0,puVar3,1);

        _objc_setAssociatedObject(uVar19,PTR_LOOP_003e64b0,lVar16,1);

        puVar4 = PTR_LOOP_003e5cd0;

        FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_06,bVar5 & 1);

        uVar31 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(uVar19,puVar4,uVar31,1);

        _objc_release(uVar31);

        puVar4 = PTR_LOOP_003e5cd8;

        FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_07,bVar6 & 1);

        uVar31 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(uVar19,puVar4,uVar31,1);

        _objc_release(uVar31);

        if (uVar18 == 0) {

          _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc0,PTR____kCFBooleanTrue_00388320,1);

          _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc8,PTR____kCFBooleanTrue_00388320,1);

LAB_000ad874:

          lVar20 = FUN_00293860(param_1);

          if (uVar18 == lVar20 - 1U) {

            _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc0,PTR____kCFBooleanTrue_00388320,1);

          }

        }

        else {

          FUN_00299500(param_1,extraout_x1_08,uVar18 - 1);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          iVar11 = FUN_000af458(uVar19);

          if (iVar11 != 0) {

            ppuVar27 = &PTR_LOOP_003e6480;

            uVar21 = uVar31;

            if (1 < iVar10) goto LAB_000ad838;

LAB_000ad84c:

            iVar10 = 1;

            _objc_setAssociatedObject(uVar31,PTR_LOOP_003e5cc0,PTR____kCFBooleanTrue_00388320,1);

LAB_000ad86c:

            _objc_release(uVar31);

            goto LAB_000ad874;

          }

          iVar11 = FUN_000af458(uVar31);

          ppuVar27 = &PTR_LOOP_003e5cc8;

          uVar21 = uVar19;

          if (iVar11 != 0) {

LAB_000ad838:

            _objc_setAssociatedObject(uVar21,*ppuVar27,PTR____kCFBooleanTrue_00388320,1);

            goto LAB_000ad84c;

          }

          FUN_000856e8(uVar19);

          lVar20 = _objc_retainAutoreleasedReturnValue();

          FUN_000856e8(uVar31);

          lVar32 = _objc_retainAutoreleasedReturnValue();

          puVar4 = PTR____kCFBooleanTrue_00388320;

          if ((lVar20 != 0) && (lVar32 != 0)) {

            FUN_002985c0(lVar20);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_002985c0(lVar32);

            auVar38 = _objc_retainAutoreleasedReturnValue();

            uVar24 = auVar38._0_8_;

            uVar12 = FUN_00297820(uVar21,auVar38._8_8_,uVar28);

            if (((uVar12 | local_4a0) & 1) == 0) {

              FUN_00298640(lVar20);

              lVar33 = _objc_retainAutoreleasedReturnValue();

              FUN_00298640(lVar32);

              auVar38 = _objc_retainAutoreleasedReturnValue();

              lVar34 = auVar38._0_8_;

              if ((lVar33 == 0) || (lVar34 == 0)) {

                _objc_release(lVar34);

                _objc_release(lVar33);

                uVar22 = extraout_x1_12;

              }

              else {

                uVar23 = FUN_00297820(lVar33,auVar38._8_8_,lVar34);

                _objc_release(lVar34);

                _objc_release(lVar33);

                uVar22 = extraout_x1_11;

                if ((uVar23 & 1) != 0) goto LAB_000ad9e4;

              }

LAB_000ada10:

              if (1 < iVar10) {

                uVar12 = FUN_00297820(uVar24,uVar22,uVar28);

                uVar13 = FUN_00297820(uVar21,extraout_x1_13,uVar28);

                if (((uVar13 | uVar9 & uVar12 ^ 0xffffffff) & 1) != 0) {

                  _objc_setAssociatedObject

                            (uVar31,PTR_LOOP_003e6480,PTR____kCFBooleanTrue_00388320,1);

                }

              }

              _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc8,PTR____kCFBooleanTrue_00388320,1);

              iVar10 = 1;

              _objc_setAssociatedObject(uVar31,PTR_LOOP_003e5cc0,PTR____kCFBooleanTrue_00388320,1);

            }

            else {

              iVar11 = FUN_00297820(uVar24,extraout_x1_09,uVar21);

              uVar22 = extraout_x1_10;

              if (iVar11 == 0) goto LAB_000ada10;

LAB_000ad9e4:

              FUN_00297820(uVar21,uVar22,uVar28);

              if ((bVar6 & 1) == 0) {

                bVar8 = 0;

              }

              else {

                bVar8 = FUN_0019213c();

              }

              if (((bVar5 | bVar8) & 1) == 0) {

                _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5ce0,PTR____kCFBooleanTrue_00388320,1)

                ;

                _objc_setAssociatedObject(uVar19,PTR_LOOP_003e6478,PTR____kCFBooleanTrue_00388320,1)

                ;

              }

              else {

                _objc_setAssociatedObject(uVar31,PTR_LOOP_003e5ce0,PTR____kCFBooleanTrue_00388320,1)

                ;

                _objc_getAssociatedObject(uVar31,PTR_LOOP_003e5cc8);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                uVar23 = FUN_002924e0();

                _objc_release(uVar22);

                if ((uVar23 & 1) == 0) {

                  _objc_setAssociatedObject

                            (uVar31,PTR_LOOP_003e6478,PTR____kCFBooleanTrue_00388320,1);

                }

              }

              _objc_setAssociatedObject(uVar31,PTR_LOOP_003e5cc0,puVar3,1);

              iVar10 = iVar10 + 1;

            }

            _objc_release(uVar24);

            _objc_release(uVar21);

            _objc_release(lVar32);

            _objc_release(lVar20);

            goto LAB_000ad86c;

          }

          _objc_setAssociatedObject(uVar19,PTR_LOOP_003e5cc8,PTR____kCFBooleanTrue_00388320,1);

          _objc_setAssociatedObject(uVar31,PTR_LOOP_003e5cc0,puVar4,1);

          _objc_release(lVar32);

          _objc_release(lVar20);

          _objc_release(uVar31);

          iVar10 = 1;

        }

        _objc_release(uVar19);

        uVar18 = uVar18 + 1;

      }

      for (lVar20 = 0; iVar10 = FUN_00293860(param_1), lVar20 < iVar10 + -1; lVar20 = lVar20 + 1) {

        FUN_00299500(param_1,extraout_x1_14,lVar20);

        uVar19 = _objc_retainAutoreleasedReturnValue();

        _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6480);

        uVar31 = _objc_retainAutoreleasedReturnValue();

        iVar10 = FUN_002924e0();

        _objc_release(uVar31);

        if (iVar10 != 0) {

          FUN_00299500(param_1,extraout_x1_15,lVar20 + 1);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(uVar31,PTR_LOOP_003e5cc0);

          uVar21 = _objc_retainAutoreleasedReturnValue();

          uVar12 = FUN_002924e0();

          _objc_release(uVar21);

          if (((uVar9 | uVar12) & 1) == 0) {

            _objc_setAssociatedObject(uVar19,PTR_LOOP_003e6498,puVar4,1);

          }

          _objc_release(uVar31);

        }

        _objc_release(uVar19);

      }

      for (local_488 = 0; uVar18 = FUN_00293860(param_1), local_488 < uVar18;

          local_488 = local_488 + 1) {

        FUN_00299500(param_1);

        uVar19 = _objc_retainAutoreleasedReturnValue();

        auVar38 = _objc_getClass("TextMessageViewModel");

        iVar10 = FUN_00297980(uVar19,auVar38._8_8_,auVar38._0_8_);

        if (iVar10 != 0) {

          auVar38 = _objc_opt_respondsToSelector(uVar19,"subViewModels");

          if ((auVar38._0_8_ & 1) != 0) {

            FUN_002a6080(uVar19,auVar38._8_8_,&cf_subViewModels);

            lVar20 = _objc_retainAutoreleasedReturnValue();

            if ((lVar20 != 0) && (lVar32 = FUN_00293860(lVar20), lVar32 != 0)) {

              _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5cc8);

              uVar31 = _objc_retainAutoreleasedReturnValue();

              uVar14 = FUN_002924e0();

              _objc_release(uVar31);

              _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5cc0);

              uVar31 = _objc_retainAutoreleasedReturnValue();

              uVar15 = FUN_002924e0();

              _objc_release(uVar31);

              _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5ce0);

              uVar31 = _objc_retainAutoreleasedReturnValue();

              uVar21 = FUN_002924e0();

              _objc_release(uVar31);

              _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6478);

              uVar31 = _objc_retainAutoreleasedReturnValue();

              uVar24 = FUN_002924e0();

              _objc_release(uVar31);

              _objc_getAssociatedObject(uVar19,PTR_LOOP_003e64a0);

              lVar32 = _objc_retainAutoreleasedReturnValue();

              uStack_358 = 0;

              local_360 = 0;

              uStack_348 = 0;

              uStack_350 = 0;

              lStack_378 = 0;

              local_380 = 0;

              uStack_368 = 0;

              local_370 = (long *)0x0;

              _objc_retain(lVar20);

              auVar38 = FUN_00293880(lVar20,extraout_x1_16,&local_380,auStack_180,0x10);

              if (auVar38._0_8_ != 0) {

                lVar33 = *local_370;

                do {

                  uVar31 = auVar38._8_8_;

                  lVar34 = 0;

                  do {

                    if (*local_370 != lVar33) {

                      _objc_enumerationMutation(lVar20);

                      uVar31 = extraout_x1_17;

                    }

                    puVar3 = PTR_LOOP_003e5cc8;

                    uVar22 = *(undefined8 *)(lStack_378 + lVar34 * 8);

                    FUN_00299380(&_OBJC_CLASS___NSNumber,uVar31,uVar14);

                    uVar31 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(uVar22,puVar3,uVar31,1);

                    _objc_release(uVar31);

                    puVar3 = PTR_LOOP_003e5cc0;

                    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_18,uVar15);

                    uVar31 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(uVar22,puVar3,uVar31,1);

                    _objc_release(uVar31);

                    puVar3 = PTR_LOOP_003e5ce0;

                    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_19,uVar21);

                    uVar31 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(uVar22,puVar3,uVar31,1);

                    _objc_release(uVar31);

                    puVar3 = PTR_LOOP_003e6478;

                    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_20,uVar24);

                    uVar31 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(uVar22,puVar3,uVar31,1);

                    _objc_release(uVar31);

                    puVar3 = PTR_LOOP_003e5cd0;

                    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_21,bVar5 & 1);

                    uVar31 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(uVar22,puVar3,uVar31,1);

                    _objc_release(uVar31);

                    puVar3 = PTR_LOOP_003e5cd8;

                    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_22,bVar6 & 1);

                    uVar31 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(uVar22,puVar3,uVar31,1);

                    _objc_release(uVar31);

                    uVar31 = extraout_x1_23;

                    if (!bVar2) {

                      _objc_setAssociatedObject

                                (uVar22,PTR_LOOP_003e64a8,

                                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

                      _objc_setAssociatedObject

                                (uVar22,PTR_LOOP_003e64e8,

                                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

                      uVar31 = extraout_x1_24;

                    }

                    if (lVar32 != 0) {

                      _objc_setAssociatedObject(uVar22,PTR_LOOP_003e64a0,lVar32,1);

                      uVar31 = extraout_x1_25;

                    }

                    lVar34 = lVar34 + 1;

                  } while (auVar38._0_8_ != lVar34);

                  auVar38 = FUN_00293880(lVar20,uVar31,&local_380,auStack_180,0x10);

                } while (auVar38._0_8_ != 0);

              }

              _objc_release(lVar20);

              _objc_release(lVar32);

            }

            _objc_release(lVar20);

          }

        }

        _objc_release(uVar19);

      }

      _objc_retain(lVar16);

      lVar20 = DAT_003e7488;

      DAT_003e7488 = lVar16;

      _objc_release(lVar20);

      DAT_003e7678 = FUN_00293860(param_1);

      DAT_003e7680 = FUN_00295440(param_1);

      DAT_003e7688 = FUN_00297d80(param_1);

      bVar1 = false;

      if (local_4b0 != 0) {

        bVar1 = bVar2;

      }

      if (bVar1) {

        lVar20 = FUN_00297fa0(local_4b0);

        lVar32 = FUN_00293860(param_1);

        if (lVar20 == lVar32) {

          _objc_retainAutorelease(local_4b0);

          lVar20 = FUN_00292680(local_4b0);

          uVar18 = 0;

          while( true ) {

            auVar38 = FUN_00293860(param_1);

            if (auVar38._0_8_ <= uVar18) break;

            FUN_00299500(param_1,auVar38._8_8_,uVar18);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5ce0);

            uVar31 = _objc_retainAutoreleasedReturnValue();

            uVar12 = FUN_002924e0();

            _objc_release(uVar31);

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5cc0);

            uVar31 = _objc_retainAutoreleasedReturnValue();

            iVar10 = FUN_002924e0();

            _objc_release(uVar31);

            uVar9 = uVar12 | 2;

            if (iVar10 == 0) {

              uVar9 = uVar12;

            }

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e5cc8);

            uVar31 = _objc_retainAutoreleasedReturnValue();

            iVar10 = FUN_002924e0();

            _objc_release(uVar31);

            uVar12 = uVar9 | 4;

            if (iVar10 == 0) {

              uVar12 = uVar9;

            }

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6478);

            uVar31 = _objc_retainAutoreleasedReturnValue();

            iVar10 = FUN_002924e0();

            _objc_release(uVar31);

            uVar9 = uVar12 | 8;

            if (iVar10 == 0) {

              uVar9 = uVar12;

            }

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6480);

            uVar31 = _objc_retainAutoreleasedReturnValue();

            iVar10 = FUN_002924e0();

            _objc_release(uVar31);

            uVar12 = uVar9 | 0x10;

            if (iVar10 == 0) {

              uVar12 = uVar9;

            }

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e6498);

            uVar31 = _objc_retainAutoreleasedReturnValue();

            iVar10 = FUN_002924e0();

            _objc_release(uVar31);

            uVar9 = uVar12 | 0x20;

            if (iVar10 == 0) {

              uVar9 = uVar12;

            }

            if (uVar9 != *(byte *)(lVar20 + uVar18)) {

              _objc_setAssociatedObject

                        (uVar19,PTR_LOOP_003e64a8,

                         &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

              _objc_setAssociatedObject

                        (uVar19,PTR_LOOP_003e64e8,

                         &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

              _objc_setAssociatedObject(uVar19,PTR_LOOP_003e64e0,0,1);

              auVar38 = _objc_getClass("TextMessageViewModel");

              iVar10 = FUN_00297980(uVar19,auVar38._8_8_,auVar38._0_8_);

              if (iVar10 != 0) {

                auVar38 = _objc_opt_respondsToSelector(uVar19,"subViewModels");

                if ((auVar38._0_8_ & 1) != 0) {

                  FUN_002a6080(uVar19,auVar38._8_8_,&cf_subViewModels);

                  uVar31 = _objc_retainAutoreleasedReturnValue();

                  uStack_398 = 0;

                  local_3a0 = 0;

                  uStack_388 = 0;

                  uStack_390 = 0;

                  lStack_3b8 = 0;

                  local_3c0 = 0;

                  uStack_3a8 = 0;

                  local_3b0 = (long *)0x0;

                  _objc_retain();

                  lVar32 = FUN_00293880(uVar31,extraout_x1_26,&local_3c0,auStack_200,0x10);

                  if (lVar32 != 0) {

                    lVar33 = *local_3b0;

                    do {

                      lVar34 = 0;

                      do {

                        if (*local_3b0 != lVar33) {

                          _objc_enumerationMutation(uVar31);

                        }

                        uVar21 = *(undefined8 *)(lStack_3b8 + lVar34 * 8);

                        _objc_setAssociatedObject

                                  (uVar21,PTR_LOOP_003e64a8,

                                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

                        _objc_setAssociatedObject

                                  (uVar21,PTR_LOOP_003e64e8,

                                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

                        _objc_setAssociatedObject(uVar21,PTR_LOOP_003e64e0,0,1);

                        lVar34 = lVar34 + 1;

                      } while (lVar32 != lVar34);

                      lVar32 = FUN_00293880(uVar31,extraout_x1_27,&local_3c0,auStack_200,0x10);

                    } while (lVar32 != 0);

                  }

                  _objc_release(uVar31);

                  _objc_release(uVar31);

                }

              }

            }

            _objc_release(uVar19);

            uVar18 = uVar18 + 1;

          }

        }

      }

      uStack_3d8 = 0;

      local_3e0 = 0;

      uStack_3c8 = 0;

      uStack_3d0 = 0;

      lStack_3f8 = 0;

      local_400 = 0;

      uStack_3e8 = 0;

      local_3f0 = (long *)0x0;

      _objc_retain(param_1);

      lVar20 = FUN_00293880(param_1,extraout_x1_28,&local_400,auStack_280,0x10);

      if (lVar20 != 0) {

        lVar32 = *local_3f0;

        do {

          lVar33 = 0;

          do {

            if (*local_3f0 != lVar32) {

              _objc_enumerationMutation(param_1);

            }

            uVar19 = *(undefined8 *)(lStack_3f8 + lVar33 * 8);

            _objc_getAssociatedObject(uVar19,PTR_LOOP_003e64a8);

            lVar34 = _objc_retainAutoreleasedReturnValue();

            if ((lVar34 == 0) || (fVar35 = (float)FUN_00295480(lVar34), fVar35 <= 0.0)) {

              uVar18 = _objc_opt_respondsToSelector(uVar19,"isShowChatRoomDisplayName");

              if ((uVar18 & 1) != 0) {

                FUN_00297ac0(uVar19);

              }

              uVar18 = _objc_opt_respondsToSelector(uVar19,"rowHeight");

              if ((uVar18 & 1) != 0) {

                FUN_0029bb40(uVar19);

              }

            }

            auVar38 = _objc_getClass("TextMessageViewModel");

            iVar10 = FUN_00297980(uVar19,auVar38._8_8_,auVar38._0_8_);

            if (iVar10 != 0) {

              auVar38 = _objc_opt_respondsToSelector(uVar19,"subViewModels");

              if ((auVar38._0_8_ & 1) != 0) {

                FUN_002a6080(uVar19,auVar38._8_8_,&cf_subViewModels);

                uVar19 = _objc_retainAutoreleasedReturnValue();

                lVar25 = FUN_00293860();

                if (lVar25 != 0) {

                  uStack_418 = 0;

                  local_420 = 0;

                  uStack_408 = 0;

                  uStack_410 = 0;

                  lStack_438 = 0;

                  local_440 = 0;

                  uStack_428 = 0;

                  local_430 = (long *)0x0;

                  _objc_retain(uVar19);

                  lVar25 = FUN_00293880(uVar19,extraout_x1_29,&local_440,auStack_300,0x10);

                  if (lVar25 != 0) {

                    lVar30 = *local_430;

                    do {

                      lVar29 = 0;

                      do {

                        if (*local_430 != lVar30) {

                          _objc_enumerationMutation(uVar19);

                        }

                        uVar31 = *(undefined8 *)(lStack_438 + lVar29 * 8);

                        _objc_getAssociatedObject(uVar31,PTR_LOOP_003e64a8);

                        lVar26 = _objc_retainAutoreleasedReturnValue();

                        if ((lVar26 == 0) || (fVar35 = (float)FUN_00295480(lVar26), fVar35 <= 0.0))

                        {

                          uVar18 = _objc_opt_respondsToSelector(uVar31,"isShowChatRoomDisplayName");

                          if ((uVar18 & 1) != 0) {

                            FUN_00297ac0(uVar31);

                          }

                          uVar18 = _objc_opt_respondsToSelector(uVar31,"rowHeight");

                          if ((uVar18 & 1) != 0) {

                            FUN_0029bb40(uVar31);

                          }

                        }

                        _objc_release(lVar26);

                        lVar29 = lVar29 + 1;

                      } while (lVar25 != lVar29);

                      lVar25 = FUN_00293880(uVar19,extraout_x1_30,&local_440,auStack_300,0x10);

                    } while (lVar25 != 0);

                  }

                  _objc_release(uVar19);

                }

                _objc_release(uVar19);

              }

            }

            _objc_release(lVar34);

            lVar33 = lVar33 + 1;

          } while (lVar33 != lVar20);

          lVar20 = FUN_00293880(param_1,extraout_x1_31,&local_400,auStack_280,0x10);

        } while (lVar20 != 0);

      }

      _objc_release(param_1);

      _objc_release(local_4b0);

      _objc_release(uVar28);

      uVar28 = 1;

    }

    else {

      uVar28 = 0;

    }

    _objc_release(lVar17);

  }

  _objc_release(lVar16);

LAB_000aecb0:

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return uVar28;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




