// FUN_0021e6ec @0x21e6ec


void FUN_0021e6ec(long param_1)



{

  bool bVar1;

  int iVar2;

  uint uVar3;

  uint uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  ulong uVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  long lVar16;

  undefined8 uVar17;

  long lVar18;

  long lVar19;

  undefined8 uVar20;

  long lVar21;

  long lVar22;

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

  byte bVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  long local_4f8;

  undefined8 local_4f0;

  undefined8 local_4c0;

  long lStack_4b8;

  long *local_4b0;

  undefined8 uStack_4a8;

  undefined8 local_4a0;

  undefined8 uStack_498;

  undefined8 uStack_490;

  undefined8 uStack_488;

  undefined *local_480;

  undefined8 local_478;

  code *local_470;

  undefined *puStack_468;

  long local_460;

  long local_458;

  undefined *local_450;

  undefined8 local_448;

  code *local_440;

  undefined *puStack_438;

  long local_430;

  undefined8 local_428;

  long local_420;

  undefined8 local_418;

  long local_410;

  undefined8 local_408;

  undefined8 local_400;

  undefined8 *puStack_3f8;

  undefined8 local_3f0;

  long lStack_3e8;

  long *local_3e0;

  undefined8 uStack_3d8;

  undefined8 local_3d0;

  undefined8 uStack_3c8;

  undefined8 uStack_3c0;

  undefined8 uStack_3b8;

  undefined8 local_3b0;

  long lStack_3a8;

  long *local_3a0;

  undefined8 uStack_398;

  undefined8 local_390;

  undefined8 uStack_388;

  undefined8 uStack_380;

  undefined8 uStack_378;

  undefined8 local_370;

  long lStack_368;

  long *local_360;

  undefined8 uStack_358;

  undefined8 local_350;

  undefined8 uStack_348;

  undefined8 uStack_340;

  undefined8 uStack_338;

  undefined8 local_330;

  long lStack_328;

  long *local_320;

  undefined8 uStack_318;

  undefined8 local_310;

  undefined8 uStack_308;

  undefined8 uStack_300;

  undefined8 uStack_2f8;

  undefined1 auStack_2f0 [128];

  undefined1 auStack_270 [128];

  undefined1 auStack_1f0 [128];

  undefined1 auStack_170 [128];

  undefined8 local_f0;

  undefined8 *local_e8;

  undefined8 local_e0;

  undefined1 local_d8;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  lVar5 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar5 == 0) goto LAB_0021e7e8;

  _objc_getAssociatedObject(lVar5,&DAT_003eaefc);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_002924e0();

  if (iVar2 == 0) {

    _objc_getAssociatedObject(lVar5,&DAT_003eaefb);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar7);

    _objc_release(uVar6);

    if (iVar2 == 0) {

      _objc_getAssociatedObject(lVar5,&DAT_003eaefd);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      iVar2 = FUN_002924e0();

      _objc_release(uVar6);

      if (iVar2 != 0) {

        _objc_setAssociatedObject(lVar5,&DAT_003eaf00,0,1);

        _objc_setAssociatedObject(lVar5,&DAT_003eaf01,0,1);

        _objc_setAssociatedObject(lVar5,&DAT_003eaefa,PTR____kCFBooleanFalse_00388318,1);

        FUN_0021bac8(lVar5);

        goto LAB_0021e7e8;

      }

      _objc_getAssociatedObject(lVar5,&DAT_003eaf00);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      lVar8 = FUN_002937a0();

      if (lVar8 == 0) {

        FUN_0029c6e0(&_OBJC_CLASS___NSSet);

        local_4f8 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar8);

        local_4f8 = lVar8;

      }

      _objc_release(lVar8);

      _objc_release(uVar6);

      _objc_getAssociatedObject(lVar5,&DAT_003eaf01);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(lVar5,&DAT_003eaf00,0,1);

      _objc_setAssociatedObject(lVar5,&DAT_003eaf01,0,1);

      auVar27 = FUN_00293860(local_4f8);

      if (auVar27._0_8_ == 0) {

        _objc_setAssociatedObject(lVar5,&DAT_003eaefa,PTR____kCFBooleanFalse_00388318,1);

      }

      else {

        FUN_002a6080(lVar5,auVar27._8_8_,&cf_m_tableView);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_0020e91c(lVar5);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002101cc(lVar5);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        if (lVar9 == 0) {

          local_4f0 = 0;

        }

        else {

          FUN_00299540(uVar7);

          local_4f0 = _objc_retainAutoreleasedReturnValue();

        }

        uVar10 = FUN_00297aa0();

        if ((uVar10 & 1) == 0) {

          _objc_retain(uVar6);

          _objc_release(local_4f0);

          local_4f0 = uVar6;

        }

        uVar24 = 0;

        bVar1 = false;

        if ((((lVar9 != 0) && ((DAT_003eaa30 & 1) != 0)) && (DAT_003ead50 == 0)) && (lVar8 != 0)) {

          iVar2 = FUN_00297aa0(local_4f0);

          if (((iVar2 == 0) || (iVar2 = FUN_002a28a0(local_4f0), iVar2 != DAT_003eaab4)) ||

             (lVar11 = FUN_00293860(local_4f8), lVar11 == 0)) {

            bVar1 = false;

            uVar24 = 0;

          }

          else {

            uVar24 = FUN_002974a0(lVar9);

            uVar24 = FUN_0020eb40(lVar5,uVar24);

            uVar12 = FUN_002974a0(lVar9);

            FUN_0020ec88(lVar5,uVar12,uVar24);

            uVar24 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00297aa0();

            if (iVar2 == 0) {

              bVar1 = false;

            }

            else {

              iVar2 = FUN_002a28a0(uVar24);

              bVar1 = iVar2 == DAT_003eaab4;

            }

          }

        }

        FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        bVar23 = 0;

        if (bVar1) {

          FUN_0021fca4(local_4f0,local_4f8);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_0021fca4(uVar24,local_4f8);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_retain(uVar14);

          _objc_retain(uVar15);

          lVar11 = FUN_00293860(uVar14);

          lVar16 = FUN_00293860(uVar15);

          if (lVar11 == lVar16) {

            uStack_308 = 0;

            local_310 = 0;

            uStack_2f8 = 0;

            uStack_300 = 0;

            lStack_328 = 0;

            local_330 = 0;

            uStack_318 = 0;

            local_320 = (long *)0x0;

            _objc_retain(uVar14);

            auVar27 = FUN_00293880(uVar14,extraout_x1,&local_330,&local_f0,0x10);

            if (auVar27._0_8_ != 0) {

              lVar11 = *local_320;

              do {

                uVar20 = auVar27._8_8_;

                lVar16 = 0;

                do {

                  if (*local_320 != lVar11) {

                    _objc_enumerationMutation(uVar14);

                    uVar20 = extraout_x1_00;

                  }

                  uVar25 = *(undefined8 *)(lStack_328 + lVar16 * 8);

                  FUN_00299540(uVar14,uVar20,uVar25);

                  auVar28 = _objc_retainAutoreleasedReturnValue();

                  uVar20 = auVar28._0_8_;

                  FUN_00299540(uVar15,auVar28._8_8_,uVar25);

                  uVar25 = _objc_retainAutoreleasedReturnValue();

                  uVar17 = _objc_opt_class(&_OBJC_CLASS___NSCountedSet);

                  uVar10 = _objc_opt_isKindOfClass(uVar25,uVar17);

                  if ((uVar10 & 1) == 0) {

LAB_0021ef38:

                    _objc_release(uVar25);

                    _objc_release(uVar20);

                    _objc_release(uVar14);

                    _objc_release(uVar15);

                    _objc_release(uVar14);

                    _objc_release(uVar15);

                    _objc_release(uVar14);

                    goto LAB_0021f530;

                  }

                  lVar18 = FUN_00293860(uVar20);

                  lVar19 = FUN_00293860(uVar25);

                  if (lVar18 != lVar19) goto LAB_0021ef38;

                  uStack_348 = 0;

                  local_350 = 0;

                  uStack_338 = 0;

                  uStack_340 = 0;

                  lStack_368 = 0;

                  local_370 = 0;

                  uStack_358 = 0;

                  local_360 = (long *)0x0;

                  _objc_retain(uVar20);

                  auVar28 = FUN_00293880(uVar20,extraout_x1_01,&local_370,auStack_170,0x10);

                  if (auVar28._0_8_ != 0) {

                    lVar18 = *local_360;

                    do {

                      uVar17 = auVar28._8_8_;

                      lVar19 = 0;

                      do {

                        if (*local_360 != lVar18) {

                          _objc_enumerationMutation(uVar20);

                          uVar17 = extraout_x1_02;

                        }

                        uVar26 = *(undefined8 *)(lStack_368 + lVar19 * 8);

                        auVar29 = FUN_002938a0(uVar20,uVar17,uVar26);

                        auVar30 = FUN_002938a0(uVar25,auVar29._8_8_,uVar26);

                        uVar17 = auVar30._8_8_;

                        if (auVar29._0_8_ != auVar30._0_8_) {

                          _objc_release(uVar20);

                          goto LAB_0021ef38;

                        }

                        lVar19 = lVar19 + 1;

                      } while (auVar28._0_8_ != lVar19);

                      auVar28 = FUN_00293880(uVar20,uVar17,&local_370,auStack_170,0x10);

                    } while (auVar28._0_8_ != 0);

                  }

                  _objc_release(uVar20);

                  _objc_release(uVar25);

                  _objc_release(uVar20);

                  lVar16 = lVar16 + 1;

                  uVar20 = extraout_x1_03;

                } while (lVar16 != auVar27._0_8_);

                auVar27 = FUN_00293880(uVar14,extraout_x1_03,&local_330,&local_f0,0x10);

              } while (auVar27._0_8_ != 0);

            }

            _objc_release(uVar14);

            _objc_release(uVar15);

            _objc_release(uVar14);

            _objc_release(uVar15);

            _objc_release(uVar14);

            FUN_00220024(local_4f0);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_00220024(uVar24);

            uVar15 = _objc_retainAutoreleasedReturnValue();

            lVar11 = 0;

            while( true ) {

              FUN_00294d00(local_4f0);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              lVar16 = FUN_00293860();

              _objc_release(uVar20);

              if (lVar16 <= lVar11) break;

              FUN_00294d00(local_4f0);

              auVar27 = _objc_retainAutoreleasedReturnValue();

              FUN_00299500(auVar27._0_8_,auVar27._8_8_,lVar11);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              _objc_release(auVar27._0_8_);

              uVar10 = FUN_00297760(uVar20);

              if ((uVar10 & 1) == 0) {

                FUN_002a5fe0(uVar20);

                uVar25 = _objc_retainAutoreleasedReturnValue();

                lVar16 = FUN_00297fa0();

                if (lVar16 == 0) {

                  uVar3 = 0;

                }

                else {

                  FUN_002a5fe0(uVar20);

                  auVar27 = _objc_retainAutoreleasedReturnValue();

                  uVar3 = FUN_00293560(local_4f8,auVar27._8_8_,auVar27._0_8_);

                  _objc_release(auVar27._0_8_);

                }

                _objc_release(uVar25);

              }

              else {

                uVar3 = 0;

              }

              iVar2 = FUN_00297760(uVar20);

              if (iVar2 == 0) {

                uVar4 = 0;

              }

              else {

                FUN_00295de0(uVar20);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                uVar4 = FUN_00293560(uVar15,auVar27._8_8_,auVar27._0_8_);

                _objc_release(auVar27._0_8_);

                uVar4 = uVar4 ^ 1;

              }

              if (((uVar3 | uVar4) & 1) != 0) {

                auVar27 = FUN_002974a0(lVar9);

                FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar27._8_8_,lVar11,auVar27._0_8_);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                FUN_00291240(uVar12,auVar27._8_8_,auVar27._0_8_);

                _objc_release(auVar27._0_8_);

              }

              _objc_release(uVar20);

              lVar11 = lVar11 + 1;

            }

            lVar11 = 0;

            while( true ) {

              FUN_00294d00(uVar24);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              lVar16 = FUN_00293860();

              _objc_release(uVar20);

              if (lVar16 <= lVar11) break;

              FUN_00294d00(uVar24);

              auVar27 = _objc_retainAutoreleasedReturnValue();

              FUN_00299500(auVar27._0_8_,auVar27._8_8_,lVar11);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              _objc_release(auVar27._0_8_);

              uVar10 = FUN_00297760(uVar20);

              if ((uVar10 & 1) == 0) {

                FUN_002a5fe0(uVar20);

                uVar25 = _objc_retainAutoreleasedReturnValue();

                lVar16 = FUN_00297fa0();

                if (lVar16 == 0) {

                  uVar3 = 0;

                }

                else {

                  FUN_002a5fe0(uVar20);

                  auVar27 = _objc_retainAutoreleasedReturnValue();

                  uVar3 = FUN_00293560(local_4f8,auVar27._8_8_,auVar27._0_8_);

                  _objc_release(auVar27._0_8_);

                }

                _objc_release(uVar25);

              }

              else {

                uVar3 = 0;

              }

              iVar2 = FUN_00297760(uVar20);

              if (iVar2 == 0) {

                uVar4 = 0;

              }

              else {

                FUN_00295de0(uVar20);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                uVar4 = FUN_00293560(uVar14,auVar27._8_8_,auVar27._0_8_);

                _objc_release(auVar27._0_8_);

                uVar4 = uVar4 ^ 1;

              }

              if (((uVar3 | uVar4) & 1) != 0) {

                auVar27 = FUN_002974a0(lVar9);

                FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar27._8_8_,lVar11,auVar27._0_8_);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                FUN_00291240(uVar13,auVar27._8_8_,auVar27._0_8_);

                _objc_release(auVar27._0_8_);

              }

              _objc_release(uVar20);

              lVar11 = lVar11 + 1;

            }

            FUN_00294d00(local_4f0);

            uVar20 = _objc_retainAutoreleasedReturnValue();

            lVar11 = FUN_00293860();

            lVar16 = FUN_00293860(uVar12);

            lVar18 = FUN_00293860(uVar13);

            _objc_release(uVar20);

            FUN_00294d00(uVar24);

            uVar20 = _objc_retainAutoreleasedReturnValue();

            lVar19 = FUN_00293860();

            _objc_release(uVar20);

            if ((lVar11 - lVar16) + lVar18 == lVar19) {

              auVar27 = FUN_00293860(uVar12);

              FUN_002a26e0(&_OBJC_CLASS___NSMutableSet,auVar27._8_8_,auVar27._0_8_);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              uStack_388 = 0;

              local_390 = 0;

              uStack_378 = 0;

              uStack_380 = 0;

              lStack_3a8 = 0;

              local_3b0 = 0;

              uStack_398 = 0;

              local_3a0 = (long *)0x0;

              _objc_retain(uVar12);

              lVar11 = FUN_00293880(uVar12,extraout_x1_04,&local_3b0,auStack_1f0,0x10);

              if (lVar11 != 0) {

                lVar16 = *local_3a0;

                do {

                  lVar18 = 0;

                  do {

                    if (*local_3a0 != lVar16) {

                      _objc_enumerationMutation(uVar12);

                    }

                    auVar27 = FUN_0029bae0(*(undefined8 *)(lStack_3a8 + lVar18 * 8));

                    FUN_00299400(&_OBJC_CLASS___NSNumber,auVar27._8_8_,auVar27._0_8_);

                    auVar27 = _objc_retainAutoreleasedReturnValue();

                    FUN_00291240(uVar20,auVar27._8_8_,auVar27._0_8_);

                    _objc_release(auVar27._0_8_);

                    lVar18 = lVar18 + 1;

                  } while (lVar11 != lVar18);

                  lVar11 = FUN_00293880(uVar12,extraout_x1_05,&local_3b0,auStack_1f0,0x10);

                } while (lVar11 != 0);

              }

              _objc_release(uVar12);

              auVar27 = FUN_00293860(uVar13);

              FUN_002a26e0(&_OBJC_CLASS___NSMutableSet,auVar27._8_8_,auVar27._0_8_);

              uVar25 = _objc_retainAutoreleasedReturnValue();

              uStack_3c8 = 0;

              local_3d0 = 0;

              uStack_3b8 = 0;

              uStack_3c0 = 0;

              lStack_3e8 = 0;

              local_3f0 = 0;

              uStack_3d8 = 0;

              local_3e0 = (long *)0x0;

              _objc_retain(uVar13);

              lVar11 = FUN_00293880(uVar13,extraout_x1_06,&local_3f0,auStack_270,0x10);

              if (lVar11 != 0) {

                lVar16 = *local_3e0;

                do {

                  lVar18 = 0;

                  do {

                    if (*local_3e0 != lVar16) {

                      _objc_enumerationMutation(uVar13);

                    }

                    auVar27 = FUN_0029bae0(*(undefined8 *)(lStack_3e8 + lVar18 * 8));

                    FUN_00299400(&_OBJC_CLASS___NSNumber,auVar27._8_8_,auVar27._0_8_);

                    auVar27 = _objc_retainAutoreleasedReturnValue();

                    FUN_00291240(uVar25,auVar27._8_8_,auVar27._0_8_);

                    _objc_release(auVar27._0_8_);

                    lVar18 = lVar18 + 1;

                  } while (lVar11 != lVar18);

                  lVar11 = FUN_00293880(uVar13,extraout_x1_07,&local_3f0,auStack_270,0x10);

                } while (lVar11 != 0);

              }

              _objc_release(uVar13);

              FUN_00294d00(local_4f0);

              uVar17 = _objc_retainAutoreleasedReturnValue();

              FUN_00220214(uVar17,uVar20);

              lVar11 = _objc_retainAutoreleasedReturnValue();

              _objc_release(uVar17);

              FUN_00294d00(uVar24);

              uVar17 = _objc_retainAutoreleasedReturnValue();

              FUN_00220214(uVar17,uVar25);

              lVar16 = _objc_retainAutoreleasedReturnValue();

              _objc_release(uVar17);

              if ((lVar11 == 0) || (lVar16 == 0)) {

                _objc_release(lVar16);

                _objc_release(lVar11);

                _objc_release(uVar25);

                _objc_release(uVar20);

                _objc_release(uVar15);

                _objc_release(uVar14);

              }

              else {

                iVar2 = FUN_002977e0(lVar11,extraout_x1_08,lVar16);

                _objc_release(lVar16);

                _objc_release(lVar11);

                _objc_release(uVar25);

                _objc_release(uVar20);

                _objc_release(uVar15);

                _objc_release(uVar14);

                if (iVar2 != 0) {

                  local_f0 = 0;

                  local_e0 = 0x2020000000;

                  local_d8 = 0;

                  local_450 = PTR___NSConcreteStackBlock_003886f0;

                  local_448 = 0xc2000000;

                  local_440 = FUN_002204c4;

                  puStack_438 = &DAT_0038f488;

                  local_e8 = &local_f0;

                  _objc_retain(lVar8);

                  local_430 = lVar8;

                  _objc_retain(uVar7);

                  local_428 = uVar7;

                  _objc_retain(lVar9);

                  local_420 = lVar9;

                  _objc_retain(uVar24);

                  local_418 = uVar24;

                  _objc_retain(lVar5);

                  local_410 = lVar5;

                  _objc_retain(uVar12);

                  local_408 = uVar12;

                  _objc_retain(uVar13);

                  local_400 = uVar13;

                  puStack_3f8 = &local_f0;

                  FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_09,&local_450);

                  bVar23 = *(byte *)(local_e8 + 3);

                  _objc_release(local_400);

                  _objc_release(local_408);

                  _objc_release(local_410);

                  _objc_release(local_418);

                  _objc_release(local_420);

                  _objc_release(local_428);

                  _objc_release(local_430);

                  bVar23 = bVar23 ^ 1;

                  __Block_object_dispose(&local_f0,8);

                  goto LAB_0021f538;

                }

              }

            }

            else {

              _objc_release(uVar15);

              _objc_release(uVar14);

            }

LAB_0021f530:

            bVar23 = 0;

          }

          else {

            _objc_release(uVar15);

            _objc_release(uVar14);

            _objc_release(uVar15);

            _objc_release(uVar14);

            bVar23 = 0;

          }

        }

LAB_0021f538:

        if (((((bVar23 & 1) == 0) && (lVar8 != 0)) && ((DAT_003eaa30 & 1) != 0)) &&

           ((DAT_003ead50 & 1) == 0)) {

          iVar2 = FUN_00297aa0(uVar24);

          if (iVar2 == 0) {

            _objc_setAssociatedObject(lVar5,&DAT_003ead5c,0,1);

          }

          else {

            FUN_002a00a0(uVar7,extraout_x1_10,uVar24,lVar9);

            FUN_0021027c(lVar5,uVar24);

          }

          local_480 = PTR___NSConcreteStackBlock_003886f0;

          local_478 = 0xc2000000;

          local_470 = FUN_0022061c;

          puStack_468 = &DAT_00388d50;

          _objc_retain(lVar8);

          local_460 = lVar8;

          _objc_retain(lVar5);

          local_458 = lVar5;

          FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_13,&local_480);

          _objc_release(local_458);

          lVar11 = local_460;

LAB_0021f79c:

          _objc_release(lVar11);

        }

        else if ((bVar23 & 1) != 0) {

          uStack_498 = 0;

          local_4a0 = 0;

          uStack_488 = 0;

          uStack_490 = 0;

          lStack_4b8 = 0;

          local_4c0 = 0;

          uStack_4a8 = 0;

          local_4b0 = (long *)0x0;

          FUN_002a62e0(lVar8);

          auVar27 = _objc_retainAutoreleasedReturnValue();

          lVar11 = auVar27._0_8_;

          auVar27 = FUN_00293880(lVar11,auVar27._8_8_,&local_4c0,auStack_2f0,0x10);

          if (auVar27._0_8_ != 0) {

            lVar16 = *local_4b0;

            do {

              uVar14 = auVar27._8_8_;

              lVar18 = 0;

              do {

                if (*local_4b0 != lVar16) {

                  _objc_enumerationMutation(lVar11);

                  uVar14 = extraout_x1_11;

                }

                uVar15 = *(undefined8 *)(lStack_4b8 + lVar18 * 8);

                FUN_00296760(lVar8,uVar14,uVar15);

                lVar19 = _objc_retainAutoreleasedReturnValue();

                if (lVar19 != 0) {

                  lVar21 = FUN_0029c020(lVar19);

                  lVar22 = FUN_002974a0(lVar9);

                  if (lVar21 == lVar22) {

                    lVar21 = FUN_0029bae0(lVar19);

                    FUN_00294d00(uVar24);

                    uVar14 = _objc_retainAutoreleasedReturnValue();

                    lVar22 = FUN_00293860();

                    _objc_release(uVar14);

                    if (lVar21 < lVar22) {

                      FUN_00294d00(uVar24);

                      uVar14 = _objc_retainAutoreleasedReturnValue();

                      auVar28 = FUN_0029bae0(lVar19);

                      FUN_00299500(uVar14,auVar28._8_8_,auVar28._0_8_);

                      uVar20 = _objc_retainAutoreleasedReturnValue();

                      _objc_release(uVar14);

                      iVar2 = FUN_00297760(uVar20);

                      if (iVar2 != 0) {

                        FUN_0029b9c0(uVar15);

                        auVar28 = _objc_retainAutoreleasedReturnValue();

                        iVar2 = FUN_00297820(auVar28._0_8_,auVar28._8_8_,&cf_XZYCLGDividerCell);

                        _objc_release(auVar28._0_8_);

                        if (iVar2 != 0) {

                          FUN_0020cd60(uVar15,uVar20);

                        }

                      }

                      _objc_release(uVar20);

                    }

                  }

                }

                _objc_release(lVar19);

                lVar18 = lVar18 + 1;

                uVar14 = extraout_x1_12;

              } while (auVar27._0_8_ != lVar18);

              auVar27 = FUN_00293880(lVar11,extraout_x1_12,&local_4c0,auStack_2f0,0x10);

            } while (auVar27._0_8_ != 0);

          }

          goto LAB_0021f79c;

        }

        _objc_setAssociatedObject(lVar5,&DAT_003eaefa,0,1);

        if ((DAT_003eaa30 == 1) && ((DAT_003ead50 & 1) == 0)) {

          FUN_0020b734(lVar5,1);

        }

        _objc_release(uVar13);

        _objc_release(uVar12);

        _objc_release(uVar24);

        _objc_release(local_4f0);

        _objc_release(uVar7);

        _objc_release(lVar9);

        _objc_release(lVar8);

      }

      _objc_release(uVar6);

      _objc_release(local_4f8);

      goto LAB_0021e7e8;

    }

  }

  else {

    _objc_release(uVar6);

  }

  _objc_setAssociatedObject(lVar5,&DAT_003eaf00,0,1);

  _objc_setAssociatedObject(lVar5,&DAT_003eaf01,0,1);

  _objc_setAssociatedObject(lVar5,&DAT_003eaefa,PTR____kCFBooleanFalse_00388318,1);

LAB_0021e7e8:

  _objc_release(lVar5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




