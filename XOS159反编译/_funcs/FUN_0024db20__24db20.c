// FUN_0024db20 @0x24db20


void FUN_0024db20(long param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

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

  undefined1 auVar7 [16];

  uint local_54;

  

  _objc_retain();

  if ((param_1 == 0) || (lVar2 = FUN_00297fa0(param_1), lVar2 == 0)) {

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    goto LAB_0024dce8;

  }

  FUN_002984e0(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar7._0_8_;

  iVar1 = FUN_00297820(uVar3,auVar7._8_8_,&cf_clear);

  if (iVar1 == 0) {

    iVar1 = FUN_00297820(uVar3,extraout_x1,&cf_white);

    if (iVar1 == 0) {

      iVar1 = FUN_00297820(uVar3,extraout_x1_00,&cf_black);

      if (iVar1 == 0) {

        iVar1 = FUN_00297820(uVar3,extraout_x1_01,&cf_red);

        if (iVar1 == 0) {

          iVar1 = FUN_00297820(uVar3,extraout_x1_02,&cf_green);

          if (iVar1 == 0) {

            iVar1 = FUN_00297820(uVar3,extraout_x1_03,&cf_blue);

            if (iVar1 == 0) {

              iVar1 = FUN_00297820(uVar3,extraout_x1_04,&cf_orange);

              if (iVar1 == 0) {

                iVar1 = FUN_00297820(uVar3,extraout_x1_05,&cf_yellow);

                if (iVar1 == 0) {

                  iVar1 = FUN_00297820(uVar3,extraout_x1_06,&cf_accent);

                  if (iVar1 != 0) {

                    FUN_00293040(0x3fd28f5c28f5c28f,0x3fde147ae147ae14,0x3ff0000000000000,

                                 0x3ff0000000000000,&_OBJC_CLASS___UIColor);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    FUN_00293040(0x3fcd70a3d70a3d71,0x3fd851eb851eb852,0x3fed70a3d70a3d71,

                                 0x3ff0000000000000,&_OBJC_CLASS___UIColor);

                    uVar6 = _objc_retainAutoreleasedReturnValue();

                    FUN_00231604(uVar5,uVar6);

                    uVar4 = _objc_retainAutoreleasedReturnValue();

                    goto LAB_0024dd98;

                  }

                  iVar1 = FUN_00297820(uVar3,extraout_x1_07,&cf_label);

                  if (iVar1 == 0) {

                    iVar1 = FUN_00297820(uVar3,extraout_x1_08,&cf_secondarylabel);

                    if (iVar1 == 0) {

                      iVar1 = FUN_00297820(uVar3,extraout_x1_09,&cf_tertiarylabel);

                      if (iVar1 == 0) {

                        iVar1 = FUN_00297820(uVar3,extraout_x1_10,&cf_bg);

                        if (iVar1 == 0) {

                          iVar1 = FUN_00297820(uVar3,extraout_x1_11,&cf_concavebg);

                          if (iVar1 != 0) {

                            FUN_00293060(0x3ff0000000000000,0x3feeb851eb851eb8,

                                         &_OBJC_CLASS___UIColor);

                            uVar5 = _objc_retainAutoreleasedReturnValue();

                            FUN_00293060(0x3fbc28f5c28f5c29,0x3feeb851eb851eb8,

                                         &_OBJC_CLASS___UIColor);

                            uVar6 = _objc_retainAutoreleasedReturnValue();

                            FUN_00231604(uVar5,uVar6);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_0024dd98;

                          }

                          iVar1 = FUN_00297820(uVar3,extraout_x1_12,&cf_searchbg);

                          if (iVar1 != 0) {

                            FUN_00293060(0x3ff0000000000000,0x3fed70a3d70a3d71,

                                         &_OBJC_CLASS___UIColor);

                            uVar5 = _objc_retainAutoreleasedReturnValue();

                            FUN_00293060(0x3fb999999999999a,0x3fed70a3d70a3d71,

                                         &_OBJC_CLASS___UIColor);

                            uVar6 = _objc_retainAutoreleasedReturnValue();

                            FUN_00231604(uVar5,uVar6);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_0024dd98;

                          }

                          iVar1 = FUN_00297820(uVar3,extraout_x1_13,&cf_fill);

                          if (iVar1 != 0) {

                            FUN_00293060(0x3fed70a3d70a3d71,0x3ff0000000000000,

                                         &_OBJC_CLASS___UIColor);

                            uVar5 = _objc_retainAutoreleasedReturnValue();

                            FUN_00293060(0x3fcc28f5c28f5c29,0x3ff0000000000000,

                                         &_OBJC_CLASS___UIColor);

                            uVar6 = _objc_retainAutoreleasedReturnValue();

                            FUN_00231604(uVar5,uVar6);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_0024dd98;

                          }

                          iVar1 = FUN_00297820(uVar3,extraout_x1_14,&cf_selected);

                          if (iVar1 != 0) {

                            FUN_00293040(0x3fd28f5c28f5c28f,0x3fde147ae147ae14,0x3ff0000000000000,

                                         0x3ff0000000000000,&_OBJC_CLASS___UIColor);

                            uVar5 = _objc_retainAutoreleasedReturnValue();

                            FUN_00293060(0x3fee147ae147ae14,0x3ff0000000000000,

                                         &_OBJC_CLASS___UIColor);

                            uVar6 = _objc_retainAutoreleasedReturnValue();

                            FUN_00231604(uVar5,uVar6);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_0024dd98;

                          }

                          iVar1 = FUN_00297820(uVar3,extraout_x1_15,&cf_selectedtext);

                          if (iVar1 != 0) {

                            FUN_002a64a0(&_OBJC_CLASS___UIColor);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_0024dce0;

                          }

                          iVar1 = FUN_00295f60(uVar3,extraout_x1_16,&cf__);

                          if (iVar1 == 0) {

LAB_0024e14c:

                            FUN_00292dc0(&_OBJC_CLASS___UIColor);

                            uVar4 = _objc_retainAutoreleasedReturnValue();

                            goto LAB_0024dce0;

                          }

                          FUN_0029be20(&_OBJC_CLASS___NSScanner,extraout_x1_17,uVar3);

                          auVar7 = _objc_retainAutoreleasedReturnValue();

                          uVar5 = auVar7._0_8_;

                          FUN_002a0f00(uVar5,auVar7._8_8_,1);

                          local_54 = 0;

                          iVar1 = FUN_0029bde0(uVar5,extraout_x1_18,&local_54);

                          if (iVar1 == 0) {

                            _objc_release(uVar5);

                            goto LAB_0024e14c;

                          }

                          FUN_00293040((double)(local_54 >> 0x10 & 0xff) / 255.0,

                                       (double)(local_54 >> 8 & 0xff) / 255.0,

                                       (double)(local_54 & 0xff) / 255.0,0x3ff0000000000000,

                                       &_OBJC_CLASS___UIColor);

                          uVar4 = _objc_retainAutoreleasedReturnValue();

                        }

                        else {

                          FUN_00293060(0x3ff0000000000000,0x3fef5c28f5c28f5c,&_OBJC_CLASS___UIColor)

                          ;

                          uVar5 = _objc_retainAutoreleasedReturnValue();

                          FUN_00293060(0x3fc47ae147ae147b,0x3fef5c28f5c28f5c,&_OBJC_CLASS___UIColor)

                          ;

                          uVar6 = _objc_retainAutoreleasedReturnValue();

                          FUN_00231604(uVar5,uVar6);

                          uVar4 = _objc_retainAutoreleasedReturnValue();

LAB_0024dd98:

                          _objc_release(uVar6);

                        }

                        _objc_release(uVar5);

                      }

                      else {

                        FUN_002a4fc0(&_OBJC_CLASS___UIColor);

                        uVar4 = _objc_retainAutoreleasedReturnValue();

                      }

                    }

                    else {

                      FUN_0029bfa0(&_OBJC_CLASS___UIColor);

                      uVar4 = _objc_retainAutoreleasedReturnValue();

                    }

                  }

                  else {

                    FUN_00297c40(&_OBJC_CLASS___UIColor);

                    uVar4 = _objc_retainAutoreleasedReturnValue();

                  }

                }

                else {

                  FUN_002a4d00(&_OBJC_CLASS___UIColor);

                  uVar4 = _objc_retainAutoreleasedReturnValue();

                }

              }

              else {

                FUN_002a4c40(&_OBJC_CLASS___UIColor);

                uVar4 = _objc_retainAutoreleasedReturnValue();

              }

            }

            else {

              FUN_002a4a80(&_OBJC_CLASS___UIColor);

              uVar4 = _objc_retainAutoreleasedReturnValue();

            }

          }

          else {

            FUN_002a4b80(&_OBJC_CLASS___UIColor);

            uVar4 = _objc_retainAutoreleasedReturnValue();

          }

        }

        else {

          FUN_002a4cc0(&_OBJC_CLASS___UIColor);

          uVar4 = _objc_retainAutoreleasedReturnValue();

        }

      }

      else {

        FUN_00292400(&_OBJC_CLASS___UIColor);

        uVar4 = _objc_retainAutoreleasedReturnValue();

      }

    }

    else {

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      uVar4 = _objc_retainAutoreleasedReturnValue();

    }

  }

  else {

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

  }

LAB_0024dce0:

  _objc_release(uVar3);

LAB_0024dce8:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




