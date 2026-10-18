// tableView:numberOfRowsInSection: @0x10a9c


/* Function Stack Size: 0x20 bytes */



long_long _0x2f19de29::tableView_numberOfRowsInSection_

                    (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  int iVar1;

  long lVar2;

  undefined **ppuVar3;

  undefined8 uVar4;

  undefined **ppuVar5;

  long_long lVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  lVar2 = FUN_002a4e60(param_3);

  if (lVar2 == 0x3e9) {

    if (param_4 < 8) {

      if ((1L << (param_4 & 0x3f) & 0xd4U) != 0) goto LAB_00010aec;

      if (param_4 == 3) {

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        ppuVar3 = auVar7._0_8_;

        iVar1 = FUN_002924c0(ppuVar3,auVar7._8_8_,&cf_xzyCoverParallaxLightingEnabled);

        lVar6 = 3;

        goto LAB_00010ccc;

      }

      if (param_4 != 5) goto LAB_00010b24;

      FUN_00293960(param_1);

      ppuVar3 = (undefined **)_objc_retainAutoreleasedReturnValue();

      lVar6 = FUN_00293860();

    }

    else {

LAB_00010b24:

      if (param_4 == 0) {

LAB_00010f34:

        lVar6 = 3;

        goto LAB_00010f8c;

      }

      if (param_4 != 1) goto LAB_00010b60;

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      ppuVar3 = auVar7._0_8_;

      iVar1 = FUN_002924c0(ppuVar3,auVar7._8_8_,&cf_coverAvatarCornerEnabled);

      lVar6 = 4;

LAB_00010ccc:

      if (iVar1 == 0) {

        lVar6 = 1;

      }

    }

  }

  else {

LAB_00010b60:

    lVar2 = FUN_002a4e60(param_3);

    if (lVar2 != 0x3ea) {

      lVar2 = FUN_002a4e60(param_3);

      if (lVar2 == 0x3eb) {

        if (param_4 == 0) {

          lVar6 = 5;

          goto LAB_00010f8c;

        }

        if (param_4 != 2) {

          if (param_4 == 1) goto LAB_00010bb8;

          goto LAB_00010f88;

        }

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_002924c0(auVar7._0_8_,auVar7._8_8_,&cf_mesMsgMergeBubbleEnabled);

        _objc_release(auVar7._0_8_);

        if (iVar1 != 0) {

          _objc_getAssociatedObject(param_1,"bubbleFolders");

          ppuVar3 = (undefined **)_objc_retainAutoreleasedReturnValue();

          if (ppuVar3 == (undefined **)0x0) {

            lVar2 = 0;

          }

          else {

            lVar2 = FUN_00293860(ppuVar3);

          }

LAB_00010e3c:

          lVar6 = lVar2 + 1;

          goto LAB_00010e40;

        }

      }

      else {

        lVar2 = FUN_002a4e60(param_3);

        if (lVar2 == 0x3ec) {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar7 = _objc_retainAutoreleasedReturnValue();

          iVar1 = FUN_002924c0(auVar7._0_8_,auVar7._8_8_,&cf_bubbleCropEnabled);

          _objc_release(auVar7._0_8_);

          lVar6 = 5;

LAB_00010c1c:

          if (iVar1 == 0) {

            lVar6 = 1;

          }

          goto LAB_00010f8c;

        }

        lVar2 = FUN_002a4e60(param_3);

        if (lVar2 == 0x3ed) {

          lVar6 = 2;

          if ((long)param_4 < 8) {

            if (param_4 < 2) goto LAB_00010f8c;

            if (param_4 == 3) {

              FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

              auVar7 = _objc_retainAutoreleasedReturnValue();

              lVar2 = FUN_00297480(auVar7._0_8_,auVar7._8_8_,&cf_xzyTimeLabelColorStyle);

              _objc_release(auVar7._0_8_);

              lVar6 = 3;

              if (lVar2 != 4) {

                lVar6 = 1;

              }

              goto LAB_00010f8c;

            }

            if (param_4 == 7) goto LAB_00010f8c;

          }

          else {

            if (param_4 == 8) goto LAB_00010f34;

            if (param_4 == 9) {

              FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

              auVar7 = _objc_retainAutoreleasedReturnValue();

              uVar4 = auVar7._0_8_;

              iVar1 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_xzyTimeLabelSuffixEnabled);

              goto LAB_00010eb0;

            }

            if (param_4 == 10) goto LAB_00010f8c;

          }

        }

        else {

          lVar2 = FUN_002a4e60(param_3);

          if (lVar2 == 0x3ee) {

            if (param_4 < 3) {

              lVar6 = *(long_long *)(&DAT_00308220 + param_4 * 8);

              goto LAB_00010f8c;

            }

LAB_00010f88:

            lVar6 = 0;

            goto LAB_00010f8c;

          }

          lVar2 = FUN_002a4e60(param_3);

          if (lVar2 == 0x3ef) {

            if ((long)param_4 < 3) {

              if (param_4 == 0) goto LAB_00010bb8;

              if (param_4 != 1) {

                if (param_4 == 2) goto LAB_00010f34;

                goto LAB_00010f88;

              }

            }

            else {

              if (param_4 == 5) {

                lVar6 = 6;

                goto LAB_00010f8c;

              }

              if (param_4 == 4) {

                FUN_00299060(param_1);

                ppuVar3 = (undefined **)_objc_retainAutoreleasedReturnValue();

                lVar6 = FUN_00293860();

                goto LAB_00010e40;

              }

              if (param_4 != 3) goto LAB_00010f88;

            }

          }

          else {

            lVar2 = FUN_002a4e60(param_3);

            if (lVar2 == 0x3f0) {

              if ((long)param_4 < 3) {

                if (param_4 == 0) {

                  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

                  auVar7 = _objc_retainAutoreleasedReturnValue();

                  uVar4 = auVar7._0_8_;

                  iVar1 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_xzyColorSchemeNicknameEnabled);

                  goto LAB_00010c84;

                }

                if (param_4 == 1) {

                  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

                  auVar7 = _objc_retainAutoreleasedReturnValue();

                  uVar4 = auVar7._0_8_;

                  iVar1 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_xzyColorSchemeMessageEnabled);

                }

                else {

                  if (param_4 != 2) goto LAB_00010f88;

                  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

                  auVar7 = _objc_retainAutoreleasedReturnValue();

                  uVar4 = auVar7._0_8_;

                  iVar1 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_xzyColorSchemeRedPacketEnabled);

                }

LAB_00010eb0:

                _objc_release(uVar4);

                lVar6 = 3;

                goto LAB_00010c1c;

              }

              if (1 < param_4 - 3) goto LAB_00010f88;

            }

            else {

              lVar2 = FUN_002a4e60(param_3);

              if (lVar2 == 0x3f1) {

                if (1 < param_4) {

                  if (param_4 == 3) goto LAB_00010f34;

                  if (param_4 == 2) {

                    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

                    auVar7 = _objc_retainAutoreleasedReturnValue();

                    uVar4 = auVar7._0_8_;

                    iVar1 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_xzyBubbleShadowBreathEnabled);

                    goto LAB_00010eb0;

                  }

                  goto LAB_00010f88;

                }

              }

              else {

                lVar2 = FUN_002a4e60(param_3);

                if (lVar2 != 0x3f2) {

                  lVar2 = FUN_002a4e60(param_3);

                  if (lVar2 == 0x3f4) goto LAB_00010bcc;

                  lVar2 = FUN_002a4e60(param_3);

                  if (lVar2 == 0x3f3) {

                    lVar6 = 0xc;

                    if (param_4 != 0) {

                      lVar6 = 0;

                    }

                    goto LAB_00010f8c;

                  }

                  lVar2 = FUN_002a4e60(param_3);

                  if (lVar2 == 0x3f5) {

                    if (param_4 == 0) {

                      lVar6 = 0xb;

                      goto LAB_00010f8c;

                    }

                    if (param_4 == 1) {

                      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

                      auVar7 = _objc_retainAutoreleasedReturnValue();

                      FUN_00291d40(auVar7._0_8_,auVar7._8_8_,&cf_xzyHomeBottomBarPopupItems);

                      ppuVar5 = (undefined **)_objc_retainAutoreleasedReturnValue();

                      _objc_release(auVar7._0_8_);

                      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_003bd840;

                      if (ppuVar5 != (undefined **)0x0) {

                        ppuVar3 = ppuVar5;

                      }

                      lVar2 = FUN_00293860(ppuVar3);

                      goto LAB_00010e3c;

                    }

                    goto LAB_00010f88;

                  }

                  if (param_4 == 0) {

                    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

                    auVar7 = _objc_retainAutoreleasedReturnValue();

                    iVar1 = FUN_002924c0(auVar7._0_8_,auVar7._8_8_,&cf_coversEnabled);

                    _objc_release(auVar7._0_8_);

                    lVar6 = 9;

                    if (iVar1 == 0) {

                      lVar6 = 0;

                    }

                    goto LAB_00010f8c;

                  }

                }

              }

            }

          }

        }

      }

LAB_00010aec:

      lVar6 = 1;

      goto LAB_00010f8c;

    }

    lVar6 = 1;

    if (3 < (long)param_4) {

      if (param_4 - 4 < 2) {

LAB_00010bcc:

        lVar6 = 2;

        goto LAB_00010f8c;

      }

      if (param_4 != 6) goto LAB_00010f8c;

      _objc_getAssociatedObject(param_1,"showCreatorPermissionSwitch");

      uVar4 = _objc_retainAutoreleasedReturnValue();

      iVar1 = FUN_002924e0();

LAB_00010c84:

      _objc_release(uVar4);

      lVar6 = 1;

      if (iVar1 != 0) {

        lVar6 = 2;

      }

      goto LAB_00010f8c;

    }

    if (param_4 != 0) {

      if (param_4 != 2) {

        if (param_4 != 3) goto LAB_00010f8c;

LAB_00010bb8:

        lVar6 = 4;

        goto LAB_00010f8c;

      }

      goto LAB_00010f34;

    }

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    ppuVar3 = auVar7._0_8_;

    iVar1 = FUN_002924c0(ppuVar3,auVar7._8_8_,&cf_mesMsgMergeEnabled);

    lVar6 = 1;

    if (iVar1 != 0) {

      lVar6 = 2;

    }

  }

LAB_00010e40:

  _objc_release(ppuVar3);

LAB_00010f8c:

  _objc_release(param_3);

  return lVar6;

}




