// FUN_002376d0 @0x2376d0


cfstringStruct * FUN_002376d0(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  cfstringStruct *pcVar8;

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291620();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  lVar5 = FUN_00293880(uVar4,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar5 != 0) {

    lVar9 = *local_120;

    do {

      lVar10 = 0;

      do {

        if (*local_120 != lVar9) {

          _objc_enumerationMutation(uVar4);

        }

        uVar3 = *(undefined8 *)(lStack_128 + lVar10 * 8);

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar11 = _objc_opt_isKindOfClass(uVar3,uVar2);

        uVar2 = auVar11._8_8_;

        if ((auVar11._0_8_ & 1) != 0) {

          auVar11 = FUN_00290f40(uVar3);

          uVar2 = auVar11._8_8_;

          if (auVar11._0_8_ == 0) {

            FUN_00297c00(uVar3);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar4);

            if (lVar5 != 0) goto LAB_00237848;

            goto LAB_00237818;

          }

        }

        lVar10 = lVar10 + 1;

      } while (lVar5 != lVar10);

      lVar5 = FUN_00293880(uVar4,uVar2,&local_130,auStack_f0,0x10);

    } while (lVar5 != 0);

  }

  _objc_release(uVar4);

LAB_00237818:

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00297c00();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  if (lVar5 != 0) {

LAB_00237848:

    FUN_0029bac0(lVar5);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITabBarController);

    uVar6 = _objc_opt_isKindOfClass(uVar2,uVar3);

    if ((uVar6 & 1) != 0) {

      _objc_retain(uVar2);

      FUN_002a6260(uVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_00293860();

      _objc_release(uVar3);

      if (1 < uVar6) {

        FUN_002a6260(uVar2);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar11._0_8_,auVar11._8_8_,1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar11._0_8_);

        FUN_002a5360(uVar3);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        auVar11 = FUN_00297fa0();

        if (auVar11._0_8_ != 0) {

          auVar11 = FUN_00297820(uVar4,auVar11._8_8_,&cf_U_);

          if ((auVar11._0_8_ & 1) == 0) {

            auVar11 = FUN_00297820(uVar4,auVar11._8_8_,&cf_format_s_);

            if ((auVar11._0_8_ & 1) != 0) goto LAB_00237920;

            auVar11 = FUN_00297820(uVar4,auVar11._8_8_,&cf_Contacts);

            if ((auVar11._0_8_ & 1) == 0) {

              auVar11 = FUN_00297820(uVar4,auVar11._8_8_,&cf__);

              if ((auVar11._0_8_ & 1) == 0) {

                uVar6 = FUN_00297820(uVar4,auVar11._8_8_,&cf__a_HQ);

                if ((uVar6 & 1) == 0) {

                  uVar6 = 0;

                  pcVar8 = &cf_en;

                  do {

                    auVar11 = FUN_00297fa0(uVar4);

                    if (auVar11._0_8_ <= uVar6) goto LAB_00237928;

                    iVar1 = FUN_00292be0(uVar4,auVar11._8_8_,uVar6);

                    if ((iVar1 + 0x5400U >> 4 & 0xfff) < 699) goto LAB_00237c14;

                    if (iVar1 - 0x3040U < 0xc0) goto LAB_00237c54;

                    uVar6 = uVar6 + 1;

                  } while (0x28 < (iVar1 - 0x4e00U >> 9 & 0x7f));

                  pcVar8 = &cf_zh;

                }

                else {

LAB_00237c54:

                  pcVar8 = &cf_ja;

                }

              }

              else {

LAB_00237c14:

                pcVar8 = &cf_ko;

              }

            }

            else {

              pcVar8 = &cf_en;

            }

          }

          else {

LAB_00237920:

            pcVar8 = &cf_zh;

          }

LAB_00237928:

          _objc_release(uVar4);

          _objc_release(uVar3);

          _objc_release(uVar2);

          goto LAB_00237b74;

        }

        _objc_release(uVar4);

        _objc_release(uVar3);

      }

      FUN_002a4d20(uVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_00297be0();

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_00293860();

      _objc_release(uVar4);

      _objc_release(uVar3);

      if (1 < uVar6) {

        FUN_002a4d20(uVar2);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_00297be0();

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar11._0_8_,auVar11._8_8_,1);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_002a5360();

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar4);

        _objc_release(auVar11._0_8_);

        _objc_release(uVar3);

        auVar11 = FUN_00297fa0(uVar7);

        if (auVar11._0_8_ != 0) {

          auVar11 = FUN_00297820(uVar7,auVar11._8_8_,&cf_U_);

          if ((auVar11._0_8_ & 1) == 0) {

            auVar11 = FUN_00297820(uVar7,auVar11._8_8_,&cf_format_s_);

            if ((auVar11._0_8_ & 1) != 0) goto LAB_00237a2c;

            auVar11 = FUN_00297820(uVar7,auVar11._8_8_,&cf_Contacts);

            if ((auVar11._0_8_ & 1) == 0) {

              auVar11 = FUN_00297820(uVar7,auVar11._8_8_,&cf__);

              if ((auVar11._0_8_ & 1) == 0) {

                uVar6 = FUN_00297820(uVar7,auVar11._8_8_,&cf__a_HQ);

                if ((uVar6 & 1) == 0) {

                  uVar6 = 0;

                  do {

                    auVar11 = FUN_00297fa0(uVar7);

                    pcVar8 = &cf_en;

                    if (auVar11._0_8_ <= uVar6) break;

                    iVar1 = FUN_00292be0(uVar7,auVar11._8_8_,uVar6);

                    if ((iVar1 + 0x5400U >> 4 & 0xfff) < 699) {

                      pcVar8 = &cf_ko;

                      break;

                    }

                    if (iVar1 - 0x3040U < 0xc0) {

                      pcVar8 = &cf_ja;

                      break;

                    }

                    uVar6 = uVar6 + 1;

                    pcVar8 = &cf_zh;

                  } while (0x28 < (iVar1 - 0x4e00U >> 9 & 0x7f));

                  _objc_release(uVar7);

                  _objc_release(uVar2);

                  goto LAB_00237b74;

                }

                pcVar8 = &cf_ja;

              }

              else {

                pcVar8 = &cf_ko;

              }

            }

            else {

              pcVar8 = &cf_en;

            }

          }

          else {

LAB_00237a2c:

            pcVar8 = &cf_zh;

          }

          _objc_release(uVar7);

          _objc_release(uVar2);

          goto LAB_00237b74;

        }

        _objc_release(uVar7);

      }

      _objc_release(uVar2);

    }

    _objc_release(uVar2);

  }

  FUN_00298780(&_OBJC_CLASS___NSBundle);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a1c0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  auVar11 = FUN_00297fa0(uVar4);

  uVar3 = auVar11._8_8_;

  uVar2 = uVar4;

  if (auVar11._0_8_ == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00299520(auVar11._0_8_,auVar11._8_8_,&cf_AppleLanguages);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar4);

    _objc_release(uVar3);

    _objc_release(auVar11._0_8_);

    uVar3 = extraout_x1_00;

  }

  auVar11 = FUN_00295f60(uVar2,uVar3,&cf_zh);

  if ((auVar11._0_8_ & 1) == 0) {

    auVar11 = FUN_00295f60(uVar2,auVar11._8_8_,&cf_ko);

    if ((auVar11._0_8_ & 1) == 0) {

      iVar1 = FUN_00295f60(uVar2,auVar11._8_8_,&cf_ja);

      pcVar8 = &cf_ja;

      if (iVar1 == 0) {

        pcVar8 = &cf_en;

      }

    }

    else {

      pcVar8 = &cf_ko;

    }

  }

  else {

    pcVar8 = &cf_zh;

  }

LAB_00237b74:

  _objc_release(uVar2);

  _objc_release(lVar5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return pcVar8;

}




