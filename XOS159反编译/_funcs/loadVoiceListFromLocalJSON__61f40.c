// loadVoiceListFromLocalJSON @0x61f40


/* Function Stack Size: 0x10 bytes */



bool _0x00bdda58::loadVoiceListFromLocalJSON(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  ulong uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar12;

  bool bVar13;

  undefined8 uVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  long local_208;

  long local_1f8;

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00298780(&_OBJC_CLASS___NSBundle);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  FUN_00299b40(auVar18._0_8_,auVar18._8_8_,&cf_ys,&cf_json);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar18._0_8_);

  auVar18 = FUN_00297fa0(uVar2);

  if (auVar18._0_8_ != 0) {

    FUN_00291240(uVar1,auVar18._8_8_,uVar2);

  }

  _NSSearchPathForDirectoriesInDomains(0xd,1,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  auVar18 = FUN_00297fa0(uVar4);

  if (auVar18._0_8_ != 0) {

    FUN_002a4460(uVar4,auVar18._8_8_,&cf_XOS_ys_json);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00291240(uVar1,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

  }

  _NSSearchPathForDirectoriesInDomains(5,1,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  auVar18 = FUN_00297fa0(uVar5);

  if (auVar18._0_8_ != 0) {

    FUN_002a4460(uVar5,auVar18._8_8_,&cf_XOS_ys_json);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00291240(uVar1,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

  }

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  _objc_retain(uVar1);

  auVar18 = FUN_00293880(uVar1,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (auVar18._0_8_ != 0) {

    lVar12 = *local_1a0;

    do {

      uVar3 = auVar18._8_8_;

      local_208 = auVar18._0_8_;

      local_1f8 = 0;

      do {

        if (*local_1a0 != lVar12) {

          _objc_enumerationMutation(uVar1);

          uVar3 = extraout_x1_00;

        }

        FUN_00294020(&_OBJC_CLASS___NSData,uVar3,*(undefined8 *)(lStack_1a8 + local_1f8 * 8));

        uVar3 = _objc_retainAutoreleasedReturnValue();

        auVar18 = FUN_00297fa0();

        if (auVar18._0_8_ != 0) {

          FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar18._8_8_,uVar3,0,0);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          uVar7 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

          uVar8 = _objc_opt_isKindOfClass(uVar6,uVar7);

          if ((uVar8 & 1) == 0) {

            uVar7 = _objc_opt_class(&_OBJC_CLASS___NSArray);

            uVar8 = _objc_opt_isKindOfClass(uVar6,uVar7);

            if ((uVar8 & 1) != 0) goto LAB_000621c4;

          }

          else {

LAB_000621c4:

            FUN_002a63a0(param_1);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b240();

            _objc_release(uVar7);

            FUN_00292a40(param_1);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b240();

            _objc_release(uVar7);

            uVar7 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

            uVar8 = _objc_opt_isKindOfClass(uVar6,uVar7);

            if ((uVar8 & 1) == 0) {

              FUN_002a63a0(param_1);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_002a0060(auVar18._0_8_,auVar18._8_8_,uVar6,&cf__);

              _objc_release(auVar18._0_8_);

              FUN_00292a40(param_1);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              uVar7 = auVar18._0_8_;

              FUN_00291240(uVar7,auVar18._8_8_,&cf__);

            }

            else {

              uStack_1c8 = 0;

              local_1d0 = 0;

              uStack_1b8 = 0;

              uStack_1c0 = 0;

              lStack_1e8 = 0;

              local_1f0 = 0;

              uStack_1d8 = 0;

              local_1e0 = (long *)0x0;

              _objc_retain(uVar6);

              auVar18 = FUN_00293880(uVar6,extraout_x1_01,&local_1f0,auStack_170,0x10);

              if (auVar18._0_8_ != 0) {

                lVar16 = *local_1e0;

                do {

                  uVar7 = auVar18._8_8_;

                  lVar17 = 0;

                  do {

                    if (*local_1e0 != lVar16) {

                      _objc_enumerationMutation(uVar6);

                      uVar7 = extraout_x1_02;

                    }

                    uVar14 = *(undefined8 *)(lStack_1e8 + lVar17 * 8);

                    FUN_00299540(uVar6,uVar7,uVar14);

                    lVar9 = _objc_retainAutoreleasedReturnValue();

                    uVar7 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

                    auVar19 = _objc_opt_isKindOfClass(lVar9,uVar7);

                    if ((auVar19._0_8_ & 1) == 0) {

                      uVar7 = _objc_opt_class(&_OBJC_CLASS___NSArray);

                      uVar8 = _objc_opt_isKindOfClass(lVar9,uVar7);

                      if ((uVar8 & 1) == 0) {

                        lVar15 = 0;

                      }

                      else {

                        _objc_retain(lVar9);

                        lVar15 = lVar9;

                      }

                    }

                    else {

                      FUN_00299540(lVar9,auVar19._8_8_,&cf_list);

                      auVar19 = _objc_retainAutoreleasedReturnValue();

                      lVar15 = auVar19._0_8_;

                      if (lVar15 == 0) {

                        FUN_00299540(lVar9,auVar19._8_8_,&cf_voices);

                        auVar19 = _objc_retainAutoreleasedReturnValue();

                        lVar11 = auVar19._0_8_;

                        if (lVar11 == 0) {

                          FUN_00299540(lVar9,auVar19._8_8_,&cf_items);

                          lVar10 = _objc_retainAutoreleasedReturnValue();

                        }

                        else {

                          _objc_retain(lVar11);

                          lVar10 = lVar11;

                        }

                        _objc_release(lVar11);

                      }

                      else {

                        _objc_retain(lVar15);

                        lVar10 = lVar15;

                      }

                      _objc_release(lVar15);

                      uVar7 = _objc_opt_class(&_OBJC_CLASS___NSArray);

                      uVar8 = _objc_opt_isKindOfClass(lVar10,uVar7);

                      if ((uVar8 & 1) == 0) {

                        lVar15 = 0;

                      }

                      else {

                        _objc_retain(lVar10);

                        lVar15 = lVar10;

                      }

                      _objc_release(lVar10);

                    }

                    lVar11 = FUN_00293860(lVar15);

                    if (lVar11 != 0) {

                      FUN_002a63a0(param_1);

                      auVar19 = _objc_retainAutoreleasedReturnValue();

                      FUN_002a0060(auVar19._0_8_,auVar19._8_8_,lVar15,uVar14);

                      _objc_release(auVar19._0_8_);

                    }

                    _objc_release(lVar15);

                    _objc_release(lVar9);

                    lVar17 = lVar17 + 1;

                    uVar7 = extraout_x1_03;

                  } while (auVar18._0_8_ != lVar17);

                  auVar18 = FUN_00293880(uVar6,extraout_x1_03,&local_1f0,auStack_170,0x10);

                } while (auVar18._0_8_ != 0);

              }

              _objc_release(uVar6);

              FUN_00292a40(param_1);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              FUN_002a63a0(param_1);

              uVar14 = _objc_retainAutoreleasedReturnValue();

              FUN_00291600();

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_002a3f40(auVar18._0_8_,auVar18._8_8_,"localizedCompare:");

              auVar19 = _objc_retainAutoreleasedReturnValue();

              FUN_00291260(uVar7,auVar19._8_8_,auVar19._0_8_);

              _objc_release(auVar19._0_8_);

              _objc_release(auVar18._0_8_);

              _objc_release(uVar14);

            }

            _objc_release(uVar7);

            FUN_00292a40(param_1);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            lVar16 = FUN_00293860();

            _objc_release(uVar7);

            if (lVar16 != 0) {

              FUN_0029bd80(param_1);

              FUN_00292a40(param_1);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_00299500(auVar18._0_8_,auVar18._8_8_,0);

              auVar19 = _objc_retainAutoreleasedReturnValue();

              FUN_0029d920(param_1,auVar19._8_8_,auVar19._0_8_);

              _objc_release(auVar19._0_8_);

              _objc_release(auVar18._0_8_);

              FUN_002a2aa0(param_1);

              FUN_002a4dc0(param_1);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              FUN_0029b140();

              _objc_release(uVar7);

              _objc_release(uVar6);

              _objc_release(uVar3);

              bVar13 = 1;

              goto LAB_000625fc;

            }

          }

          _objc_release(uVar6);

        }

        _objc_release(uVar3);

        local_1f8 = local_1f8 + 1;

        uVar3 = extraout_x1_04;

      } while (local_1f8 != local_208);

      auVar18 = FUN_00293880(uVar1,extraout_x1_04,&local_1b0,auStack_f0,0x10);

    } while (auVar18._0_8_ != 0);

  }

  bVar13 = 0;

LAB_000625fc:

  _objc_release(uVar1);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return bVar13;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




