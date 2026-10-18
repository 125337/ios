// FUN_001003e0 @0x1003e0


void FUN_001003e0(undefined8 param_1,long param_2)



{

  undefined8 uVar1;

  undefined *puVar2;

  int iVar3;

  uint uVar4;

  uint uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

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

  long lVar16;

  long lVar17;

  undefined1 auVar18 [16];

  long local_a8;

  long local_90;

  long local_88;

  long local_78;

  long local_68;

  

  _objc_retain();

  _objc_retain(param_2);

  lVar6 = FUN_00293860(param_1);

  if ((lVar6 == 0) || ((DAT_003e8010 & 1) != 0)) goto LAB_00101068;

  DAT_003e8010 = 1;

  lVar6 = FUN_00293860(param_1);

  _objc_retain(param_2);

  if ((param_2 == 0) || (lVar7 = FUN_00297fa0(param_2), local_68 = param_2, lVar7 == 0)) {

    FUN_00100028(param_1);

    local_68 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_2);

    if (local_68 != 0) goto LAB_00100490;

    local_68 = 0;

  }

  else {

LAB_00100490:

    auVar18 = FUN_00297fa0(local_68);

    uVar9 = auVar18._8_8_;

    if (auVar18._0_8_ != 0) {

      lVar7 = lVar6 + -1;

      if (0 < lVar6) {

        lVar17 = 0;

        do {

          FUN_00299500(param_1,uVar9,lVar17);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          if (lVar8 != 0) {

            uVar9 = _objc_getClass("TextMessageSubViewModel");

            auVar18 = _objc_opt_isKindOfClass(lVar8,uVar9);

            if ((auVar18._0_8_ & 1) == 0) {

LAB_00100634:

              iVar3 = FUN_001024a0(lVar8);

              if (iVar3 != 0) {

                _objc_setAssociatedObject(lVar8,PTR_LOOP_003e68a8,local_68,1);

                puVar2 = PTR_LOOP_003e68b0;

                FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_00,lVar6);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar8,puVar2,uVar9,1);

                _objc_release(uVar9);

                _objc_setAssociatedObject

                          (lVar8,PTR_LOOP_003e6860,

                           &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08,1);

                goto LAB_001009b4;

              }

              _objc_setAssociatedObject(lVar8,PTR_LOOP_003e68a8,local_68,1);

              puVar2 = PTR_LOOP_003e68b0;

              FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_01,lVar6);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar8,puVar2,uVar9,1);

              _objc_release(uVar9);

              FUN_000ffc74(lVar8);

              lVar13 = _objc_retainAutoreleasedReturnValue();

              if (lVar13 != 0) {

                _objc_setAssociatedObject(lVar13,PTR_LOOP_003e68a8,local_68,1);

                puVar2 = PTR_LOOP_003e68b0;

                FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_02,lVar6);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar13,puVar2,uVar9,1);

                _objc_release(uVar9);

              }

              FUN_00102314(lVar8);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              uVar9 = auVar18._8_8_;

              local_78 = auVar18._0_8_;

              if (local_78 != 0) {

                if (lVar17 < 1) {

LAB_001007c4:

                  local_88 = 0;

                }

                else {

                  FUN_00299500(param_1,uVar9,lVar17 + -1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_001024a0();

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_03;

                  if ((uVar10 & 1) != 0) goto LAB_001007c4;

                  FUN_00299500(param_1,extraout_x1_03,lVar17 + -1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00102314();

                  local_88 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_04;

                }

                if (lVar17 < lVar7) {

                  FUN_00299500(param_1,uVar9,lVar17 + 1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_001024a0();

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_05;

                  if ((uVar10 & 1) != 0) goto LAB_00100874;

                  FUN_00299500(param_1,extraout_x1_05,lVar17 + 1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00102314();

                  local_90 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_06;

                }

                else {

LAB_00100874:

                  local_90 = 0;

                }

                if (local_88 == 0) {

                  uVar5 = 0;

                }

                else {

                  uVar5 = FUN_00297820(local_88,uVar9,local_78);

                  uVar9 = extraout_x1_07;

                }

                uVar4 = 0;

                if (local_90 != 0) {

                  uVar4 = FUN_00297820(local_90,uVar9,local_78);

                  uVar9 = extraout_x1_08;

                }

                puVar2 = PTR_LOOP_003e6860;

                uVar11 = 2;

                if ((uVar5 & uVar4) == 0) {

                  uVar11 = 3;

                }

                uVar1 = 1;

                if (((uVar5 ^ 1) & uVar4 & 1) == 0) {

                  uVar1 = uVar11;

                }

                if (((uVar5 | uVar4) & 1) == 0) {

                  uVar1 = 0;

                }

                FUN_002994a0(&_OBJC_CLASS___NSNumber,uVar9,uVar1);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar8,puVar2,uVar9,1);

                _objc_release(uVar9);

                puVar2 = PTR_LOOP_003e6860;

                if (lVar13 != 0) {

                  FUN_002994a0(&_OBJC_CLASS___NSNumber,extraout_x1_09,uVar1);

                  local_a8 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(lVar13,puVar2,local_a8,1);

                  goto LAB_00100984;

                }

                goto LAB_00100994;

              }

              _objc_setAssociatedObject

                        (lVar8,PTR_LOOP_003e6860,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08

                         ,1);

              if (lVar13 != 0) {

                _objc_setAssociatedObject

                          (lVar13,PTR_LOOP_003e6860,

                           &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08,1);

              }

            }

            else {

              FUN_002a6080(lVar8,auVar18._8_8_,&cf_parentModel);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              lVar13 = auVar18._0_8_;

              if (lVar13 == 0) {

                local_78 = 0;

LAB_00100628:

                _objc_release(local_78);

                _objc_release(lVar13);

                goto LAB_00100634;

              }

              FUN_002a6080(lVar13,auVar18._8_8_,&cf_subViewModels);

              local_78 = _objc_retainAutoreleasedReturnValue();

              if (local_78 == 0) goto LAB_00100628;

              uVar9 = _objc_opt_class(&_OBJC_CLASS___NSArray);

              uVar10 = _objc_opt_isKindOfClass(local_78,uVar9);

              if ((uVar10 & 1) == 0) goto LAB_00100628;

              auVar18 = FUN_00293860(local_78);

              uVar9 = auVar18._8_8_;

              if (auVar18._0_8_ < 2) goto LAB_00100628;

              lVar16 = lVar17;

              if (lVar17 + 1 < lVar6) {

                do {

                  FUN_00299500(param_1,uVar9,lVar16 + 1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar11 = _objc_getClass("TextMessageSubViewModel");

                  auVar18 = _objc_opt_isKindOfClass(uVar9,uVar11);

                  if ((auVar18._0_8_ & 1) == 0) {

LAB_001009cc:

                    _objc_release(uVar9);

                    uVar9 = extraout_x1_11;

                    break;

                  }

                  FUN_002a6080(uVar9,auVar18._8_8_,&cf_parentModel);

                  lVar12 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(lVar12);

                  if (lVar12 != lVar13) goto LAB_001009cc;

                  _objc_release(uVar9);

                  lVar16 = lVar16 + 1;

                  uVar9 = extraout_x1;

                } while (lVar7 != lVar16);

              }

              if (lVar17 <= lVar16) {

                lVar12 = lVar17;

                do {

                  FUN_00299500(param_1,uVar9,lVar12);

                  lVar14 = _objc_retainAutoreleasedReturnValue();

                  if (lVar14 != 0) {

                    _objc_setAssociatedObject(lVar14,PTR_LOOP_003e68a8,local_68,1);

                    puVar2 = PTR_LOOP_003e68b0;

                    FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_12,lVar6);

                    uVar9 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(lVar14,puVar2,uVar9,1);

                    _objc_release(uVar9);

                    FUN_000ffc74(lVar14);

                    lVar15 = _objc_retainAutoreleasedReturnValue();

                    if (lVar15 != 0) {

                      _objc_setAssociatedObject(lVar15,PTR_LOOP_003e68a8,local_68,1);

                      puVar2 = PTR_LOOP_003e68b0;

                      FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_13,lVar6);

                      uVar9 = _objc_retainAutoreleasedReturnValue();

                      _objc_setAssociatedObject(lVar15,puVar2,uVar9,1);

                      _objc_release(uVar9);

                    }

                    _objc_release(lVar15);

                  }

                  _objc_release(lVar14);

                  lVar12 = lVar12 + 1;

                  uVar9 = extraout_x1_14;

                } while (lVar16 + 1 != lVar12);

              }

              _objc_setAssociatedObject(lVar13,PTR_LOOP_003e68a8,local_68,1);

              puVar2 = PTR_LOOP_003e68b0;

              FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_15,lVar6);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar13,puVar2,uVar9,1);

              _objc_release(uVar9);

              FUN_000ffc74(lVar13);

              local_88 = _objc_retainAutoreleasedReturnValue();

              if (local_88 != 0) {

                _objc_setAssociatedObject(local_88,PTR_LOOP_003e68a8,local_68,1);

                puVar2 = PTR_LOOP_003e68b0;

                FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_16,lVar6);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(local_88,puVar2,uVar9,1);

                _objc_release(uVar9);

              }

              FUN_00102314(lVar13);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              uVar9 = auVar18._8_8_;

              local_90 = auVar18._0_8_;

              if (local_90 == 0) {

                if (lVar17 <= lVar16) {

                  do {

                    FUN_00299500(param_1,uVar9,lVar17);

                    lVar12 = _objc_retainAutoreleasedReturnValue();

                    if (lVar12 != 0) {

                      _objc_setAssociatedObject

                                (lVar12,PTR_LOOP_003e6860,

                                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08,1);

                      FUN_000ffc74(lVar12);

                      lVar14 = _objc_retainAutoreleasedReturnValue();

                      if (lVar14 != 0) {

                        _objc_setAssociatedObject

                                  (lVar14,PTR_LOOP_003e6860,

                                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08,1);

                      }

                      _objc_release(lVar14);

                    }

                    _objc_release(lVar12);

                    lVar17 = lVar17 + 1;

                    uVar9 = extraout_x1_18;

                  } while (lVar16 + 1 != lVar17);

                }

                _objc_setAssociatedObject

                          (lVar13,PTR_LOOP_003e6860,

                           &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08,1);

                FUN_000ffc74(lVar13);

                local_a8 = _objc_retainAutoreleasedReturnValue();

                lVar17 = lVar16;

                if (local_a8 != 0) {

                  _objc_setAssociatedObject

                            (local_a8,PTR_LOOP_003e6860,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc08,1);

                }

              }

              else {

                if (lVar17 < 1) {

                  local_a8 = 0;

                }

                else {

                  FUN_00299500(param_1,uVar9,lVar17 + -1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_001024a0();

                  _objc_release(uVar9);

                  if ((uVar10 & 1) == 0) {

                    FUN_00299500(param_1,extraout_x1_17,lVar17 + -1);

                    uVar9 = _objc_retainAutoreleasedReturnValue();

                    FUN_00102314();

                    local_a8 = _objc_retainAutoreleasedReturnValue();

                    _objc_release(uVar9);

                    uVar9 = extraout_x1_19;

                  }

                  else {

                    local_a8 = 0;

                    uVar9 = extraout_x1_17;

                  }

                }

                if (lVar16 < lVar7) {

                  FUN_00299500(param_1,uVar9,lVar16 + 1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_001024a0();

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_20;

                  if ((uVar10 & 1) != 0) goto LAB_00100d64;

                  FUN_00299500(param_1,extraout_x1_20,lVar16 + 1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00102314();

                  lVar12 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_23;

                  if (local_a8 == 0) goto LAB_00100dc4;

LAB_00100d6c:

                  uVar4 = FUN_00297820(local_a8,uVar9,local_90);

                  uVar9 = extraout_x1_21;

                  uVar5 = uVar4;

                  if (lVar12 == 0) goto LAB_00100dcc;

LAB_00100d80:

                  uVar5 = FUN_00297820(lVar12,uVar9,local_90);

                  uVar9 = extraout_x1_22;

                }

                else {

LAB_00100d64:

                  lVar12 = 0;

                  if (local_a8 != 0) goto LAB_00100d6c;

LAB_00100dc4:

                  uVar4 = 0;

                  uVar5 = 0;

                  if (lVar12 != 0) goto LAB_00100d80;

LAB_00100dcc:

                  uVar4 = uVar5;

                  uVar5 = 0;

                }

                puVar2 = PTR_LOOP_003e6860;

                if (((uVar4 | uVar5) & 1) == 0) {

                  uVar11 = 0;

                }

                else if (((uVar4 ^ 1) & uVar5 & 1) == 0) {

                  uVar11 = 2;

                  if ((uVar4 & uVar5) == 0) {

                    uVar11 = 3;

                  }

                }

                else {

                  uVar11 = 1;

                }

                FUN_002994a0(&_OBJC_CLASS___NSNumber,uVar9,uVar11);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar13,puVar2,uVar9,1);

                _objc_release(uVar9);

                puVar2 = PTR_LOOP_003e6860;

                uVar9 = extraout_x1_24;

                if (local_88 != 0) {

                  FUN_002994a0(&_OBJC_CLASS___NSNumber,extraout_x1_24,uVar11);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(local_88,puVar2,uVar9,1);

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_25;

                }

                if (lVar17 <= lVar16) {

                  do {

                    FUN_00299500(param_1,uVar9,lVar17);

                    auVar18 = _objc_retainAutoreleasedReturnValue();

                    puVar2 = PTR_LOOP_003e6860;

                    lVar14 = auVar18._0_8_;

                    if (lVar14 != 0) {

                      FUN_002994a0(&_OBJC_CLASS___NSNumber,auVar18._8_8_,uVar11);

                      uVar9 = _objc_retainAutoreleasedReturnValue();

                      _objc_setAssociatedObject(lVar14,puVar2,uVar9,1);

                      _objc_release(uVar9);

                      FUN_000ffc74(lVar14);

                      auVar18 = _objc_retainAutoreleasedReturnValue();

                      puVar2 = PTR_LOOP_003e6860;

                      lVar15 = auVar18._0_8_;

                      if (lVar15 != 0) {

                        FUN_002994a0(&_OBJC_CLASS___NSNumber,auVar18._8_8_,uVar11);

                        uVar9 = _objc_retainAutoreleasedReturnValue();

                        _objc_setAssociatedObject(lVar15,puVar2,uVar9,1);

                        _objc_release(uVar9);

                      }

                      _objc_release(lVar15);

                    }

                    _objc_release(lVar14);

                    lVar17 = lVar17 + 1;

                    uVar9 = extraout_x1_26;

                  } while (lVar16 + 1 != lVar17);

                }

                _objc_release(lVar12);

                lVar17 = lVar16;

              }

LAB_00100984:

              _objc_release(local_a8);

LAB_00100994:

              _objc_release(local_90);

              _objc_release(local_88);

            }

            _objc_release(local_78);

            _objc_release(lVar13);

          }

LAB_001009b4:

          lVar17 = lVar17 + 1;

          _objc_release(lVar8);

          uVar9 = extraout_x1_10;

        } while (lVar17 < lVar6);

      }

      _objc_retain(local_68);

      lVar7 = DAT_003e7e90;

      DAT_003e7e90 = local_68;

      _objc_release(lVar7);

      _objc_retain(local_68);

      lVar7 = DAT_003e7ea8;

      DAT_003e7ea8 = local_68;

      _objc_release(lVar7);

      DAT_003e7ee0 = lVar6;

      FUN_00295440(param_1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_storeWeak(&DAT_003e7e98,uVar9);

      _objc_release(uVar9);

      FUN_00297d80(param_1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_storeWeak(&DAT_003e7ea0,uVar9);

      _objc_release(uVar9);

      DAT_003e7ee8 = _CFAbsoluteTimeGetCurrent();

    }

  }

  DAT_003e8010 = 0;

  _objc_release(local_68);

LAB_00101068:

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




