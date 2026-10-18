// tableView:didSelectRowAtIndexPath: @0x14844c


/* Function Stack Size: 0x20 bytes */



void CadisSettingsViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

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

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  cfstringStruct *pcVar7;

  cfstringStruct *pcVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  ID local_140;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  undefined8 local_118;

  ID IStack_110;

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined8 local_e8;

  ID IStack_e0;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  ID IStack_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  ID local_78;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  lVar3 = FUN_0029c020(param_4);

  if ((lVar3 == 0) && (lVar3 = FUN_0029bae0(param_4), 0 < lVar3)) {

    auVar9 = FUN_0029bae0(param_4);

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be440,auVar9._8_8_,auVar9._0_8_ + -1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    auVar9 = FUN_0029bae0(param_4);

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be458,auVar9._8_8_,auVar9._0_8_ + -1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,auVar9._0_8_,&cf_Yuzzh_yN>f_y_Y__,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    local_a0 = PTR___NSConcreteStackBlock_003886f0;

    local_98 = 0xc2000000;

    local_90 = FUN_00149094;

    puStack_88 = &DAT_00389080;

    _objc_retain(uVar6);

    local_80 = uVar6;

    _objc_retain(param_4);

    local_78 = param_4;

    FUN_00291400(uVar4,extraout_x1_01,&local_a0);

    local_d8 = puVar1;

    local_d0 = 0xc2000000;

    local_c8 = FUN_001491a4;

    puStack_c0 = &DAT_00388c90;

    _objc_retain(uVar4);

    local_b8 = uVar4;

    _objc_retain(uVar6);

    local_b0 = uVar6;

    IStack_a8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_OX_,0,&local_d8);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_1,extraout_x1_04,uVar4,1,0);

    _objc_release(local_b0);

    _objc_release(local_b8);

    _objc_release(local_78);

    _objc_release(local_80);

LAB_00148708:

    _objc_release(uVar4);

    _objc_release(uVar6);

    goto LAB_001488f8;

  }

  lVar3 = FUN_0029c020(param_4);

  if (lVar3 == 1) {

    auVar9 = FUN_0029bae0(param_4);

    uVar4 = auVar9._8_8_;

    if (auVar9._0_8_ != 0) {

      auVar10 = FUN_0029bae0(param_4);

      uVar4 = auVar10._8_8_;

      if (auVar10._0_8_ != 1) {

        FUN_002a31c0(param_1);

        goto LAB_001488f8;

      }

    }

    FUN_002a31e0(param_1,uVar4,auVar9._0_8_ != 0);

    goto LAB_001488f8;

  }

  lVar3 = FUN_0029c020(param_4);

  if ((lVar3 == 2) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 0)) {

    FUN_002a3620(param_1);

    goto LAB_001488f8;

  }

  lVar3 = FUN_0029c020(param_4);

  if ((lVar3 == 2) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 1)) {

    FUN_00147810();

    pcVar8 = &cf_eQ;

    pcVar7 = &cf_CadisCardOffsetY;

    pcVar5 = &cf_aSGr;

    uVar4 = extraout_x1_00;

  }

  else {

    lVar3 = FUN_0029c020(param_4);

    if ((lVar3 != 2) || (lVar3 = FUN_0029bae0(param_4), lVar3 != 2)) {

      lVar3 = FUN_0029c020(param_4);

      if ((lVar3 == 2) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 3)) {

        FUN_002a3200(param_1);

        goto LAB_001488f8;

      }

      lVar3 = FUN_0029c020(param_4);

      if ((lVar3 == 2) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 4)) {

        FUN_002a30a0(param_1);

        goto LAB_001488f8;

      }

      lVar3 = FUN_0029c020(param_4);

      if (lVar3 == 2) {

        auVar9 = FUN_0029bae0(param_4);

        uVar4 = auVar9._8_8_;

        if (auVar9._0_8_ != 5) goto LAB_001487ec;

        uVar6 = 4;

LAB_001488f0:

        FUN_002a3220(param_1,uVar4,uVar6);

        goto LAB_001488f8;

      }

LAB_001487ec:

      lVar3 = FUN_0029c020(param_4);

      if (lVar3 == 2) {

        auVar9 = FUN_0029bae0(param_4);

        uVar4 = auVar9._8_8_;

        if (auVar9._0_8_ == 6) {

          uVar6 = 7;

          goto LAB_001488f0;

        }

      }

      lVar3 = FUN_0029c020(param_4);

      if ((lVar3 == 3) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 2)) {

        FUN_00147aa8();

        pcVar8 = &cf_CadisWeatherOffsetX;

        uVar6 = 3;

        pcVar7 = &cf__Yl;

        uVar4 = extraout_x1_06;

      }

      else {

        lVar3 = FUN_0029c020(param_4);

        if ((lVar3 == 3) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 3)) {

          FUN_00147b38();

          pcVar8 = &cf_CadisWeatherOffsetY;

          uVar6 = 3;

          pcVar7 = &cf__Yl;

          uVar4 = extraout_x1_07;

        }

        else {

          lVar3 = FUN_0029c020(param_4);

          if ((lVar3 == 3) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 4)) {

            FUN_002a2fe0(param_1);

            goto LAB_001488f8;

          }

          lVar3 = FUN_0029c020(param_4);

          if (lVar3 == 3) {

            auVar9 = FUN_0029bae0(param_4);

            uVar4 = auVar9._8_8_;

            if (auVar9._0_8_ == 5) {

              uVar6 = 3;

              goto LAB_001488f0;

            }

          }

          lVar3 = FUN_0029c020(param_4);

          if ((lVar3 == 3) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 6)) {

            FUN_002a3900(param_1);

            goto LAB_001488f8;

          }

          lVar3 = FUN_0029c020(param_4);

          if ((lVar3 == 3) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 7)) {

            FUN_002a3920(param_1);

            goto LAB_001488f8;

          }

          lVar3 = FUN_0029c020(param_4);

          if ((lVar3 == 3) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 8)) {

            FUN_0029b020(param_1);

            goto LAB_001488f8;

          }

          lVar3 = FUN_0029c020(param_4);

          if (((lVar3 != 4) || (lVar3 = FUN_0029bae0(param_4), lVar3 != 2)) ||

             (lVar3 = FUN_00147cac(), lVar3 != 1)) {

            lVar3 = FUN_0029c020(param_4);

            if (((lVar3 == 4) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 3)) &&

               (lVar3 = FUN_00147cac(), lVar3 != 1)) {

              FUN_00147dc0();

              pcVar8 = &cf_CadisCalendarSpacing;

              uVar6 = 4;

              pcVar7 = &cf_eSNaSGr;

              uVar4 = extraout_x1_16;

            }

            else {

              lVar3 = FUN_0029c020(param_4);

              if (lVar3 == 4) {

                auVar9 = FUN_0029bae0(param_4);

                if (auVar9._0_8_ == 4) {

                  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_eSof_,&cf_eQ,1);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar6 = auVar9._0_8_;

                  FUN_00291400(uVar6,auVar9._8_8_,&PTR___NSConcreteGlobalBlock_0038d278);

                  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_09,&cf_Sm,1,0);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00290fe0(uVar6,auVar9._8_8_,auVar9._0_8_);

                  _objc_release(auVar9._0_8_);

                  local_108 = PTR___NSConcreteStackBlock_003886f0;

                  local_100 = 0xc2000000;

                  local_f8 = FUN_001493ac;

                  puStack_f0 = &DAT_00388d20;

                  _objc_retain(uVar6);

                  local_e8 = uVar6;

                  IStack_e0 = param_1;

                  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_10,&cf_nx_,0,&local_108);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00290fe0(uVar6,auVar9._8_8_,auVar9._0_8_);

                  _objc_release(auVar9._0_8_);

                  FUN_0029a500(param_1,extraout_x1_11,uVar6,1,0);

                  uVar4 = local_e8;

                  goto LAB_00148708;

                }

              }

              lVar3 = FUN_0029c020(param_4);

              if (lVar3 == 4) {

                auVar9 = FUN_0029bae0(param_4);

                if (auVar9._0_8_ == 5) {

                  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_eSQ___>e,&cf_eQ,1);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar6 = auVar9._0_8_;

                  FUN_00291400(uVar6,auVar9._8_8_,&PTR___NSConcreteGlobalBlock_0038d298);

                  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_12,&cf_Sm,1,0);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00290fe0(uVar6,auVar9._8_8_,auVar9._0_8_);

                  _objc_release(auVar9._0_8_);

                  local_138 = PTR___NSConcreteStackBlock_003886f0;

                  local_130 = 0xc2000000;

                  local_128 = FUN_0014959c;

                  puStack_120 = &DAT_00388d20;

                  _objc_retain(uVar6);

                  local_118 = uVar6;

                  IStack_110 = param_1;

                  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_13,&cf_nx_,0,&local_138);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00290fe0(uVar6,auVar9._8_8_,auVar9._0_8_);

                  _objc_release(auVar9._0_8_);

                  FUN_0029a500(param_1,extraout_x1_14,uVar6,1,0);

                  uVar4 = local_118;

                  goto LAB_00148708;

                }

              }

              lVar3 = FUN_0029c020(param_4);

              if (lVar3 == 4) {

                auVar9 = FUN_0029bae0(param_4);

                uVar4 = auVar9._8_8_;

                if (auVar9._0_8_ == 6) {

                  uVar6 = 1;

                  goto LAB_001488f0;

                }

              }

              lVar3 = FUN_0029c020(param_4);

              if (lVar3 == 4) {

                auVar9 = FUN_0029bae0(param_4);

                uVar4 = auVar9._8_8_;

                if (auVar9._0_8_ == 7) {

                  uVar6 = 5;

                  goto LAB_001488f0;

                }

              }

              lVar3 = FUN_0029c020(param_4);

              if (lVar3 == 4) {

                auVar9 = FUN_0029bae0(param_4);

                uVar4 = auVar9._8_8_;

                if (auVar9._0_8_ == 8) {

                  uVar6 = 6;

                  goto LAB_001488f0;

                }

              }

              lVar3 = FUN_0029c020(param_4);

              if ((lVar3 == 4) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 9)) {

                auVar9 = _objc_alloc(&objc::class_t::CadisCustomStyleListViewController);

                auVar9 = FUN_00296ea0(auVar9._0_8_,auVar9._8_8_,2);

                uVar6 = auVar9._0_8_;

                local_160 = PTR___NSConcreteStackBlock_003886f0;

                local_158 = 0xc2000000;

                local_150 = FUN_0014970c;

                puStack_148 = &DAT_00388e60;

                local_140 = param_1;

                FUN_002a0160(uVar6,auVar9._8_8_,&local_160);

                FUN_002990e0(param_1);

                auVar9 = _objc_retainAutoreleasedReturnValue();

                uVar4 = auVar9._0_8_;

                FUN_0029aa80(uVar4,auVar9._8_8_,uVar6,1);

                goto LAB_00148708;

              }

              lVar3 = FUN_0029c020(param_4);

              if (((lVar3 == 5) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 3)) &&

                 (lVar3 = FUN_00147ff0(), lVar3 == 1)) {

                FUN_00148048();

                pcVar8 = &cf_CadisContactOffsetY;

                uVar6 = 5;

                pcVar7 = &cf_T_N;

                uVar4 = extraout_x1_15;

                goto LAB_00148894;

              }

              lVar3 = FUN_0029c020(param_4);

              if (((lVar3 != 5) || (lVar3 = FUN_0029bae0(param_4), lVar3 != 4)) ||

                 (lVar3 = FUN_00147ff0(), lVar3 == 1)) {

                lVar3 = FUN_0029c020(param_4);

                if (lVar3 == 5) {

                  auVar9 = FUN_0029bae0(param_4);

                  uVar4 = auVar9._8_8_;

                  if (auVar9._0_8_ == 5) {

                    uVar6 = 2;

                    goto LAB_001488f0;

                  }

                }

                lVar3 = FUN_0029c020(param_4);

                if ((lVar3 == 5) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 6)) {

                  FUN_002a3000(param_1);

                  goto LAB_001488f8;

                }

                lVar3 = FUN_0029c020(param_4);

                if ((lVar3 == 5) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 7)) {

                  FUN_002a3020(param_1);

                  goto LAB_001488f8;

                }

                lVar3 = FUN_0029c020(param_4);

                if (((lVar3 != 5) || (lVar3 = FUN_0029bae0(param_4), lVar3 != 10)) ||

                   (iVar2 = FUN_001482b0(), iVar2 == 0)) {

                  lVar3 = FUN_0029c020(param_4);

                  if (((lVar3 == 5) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 0xb)) &&

                     (iVar2 = FUN_001482b0(), iVar2 != 0)) {

                    FUN_002a3800(param_1);

                    goto LAB_001488f8;

                  }

                  lVar3 = FUN_0029c020(param_4);

                  if ((lVar3 == 5) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 0xd)) {

                    FUN_002a3260(param_1);

                    goto LAB_001488f8;

                  }

                  lVar3 = FUN_0029c020(param_4);

                  if ((lVar3 != 5) || (lVar3 = FUN_0029bae0(param_4), lVar3 != 0xe))

                  goto LAB_001488f8;

                  uVar6 = _objc_alloc_init(&objc::class_t::CadisContactPickerViewController);

                  FUN_002990e0(param_1);

                  auVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar4 = auVar9._0_8_;

                  FUN_0029aa80(uVar4,auVar9._8_8_,uVar6,1);

                  goto LAB_00148708;

                }

                uVar6 = 8;

                uVar4 = extraout_x1_17;

                goto LAB_001488f0;

              }

              FUN_001480d8();

              pcVar8 = &cf_CadisContactSpacing;

              uVar6 = 5;

              pcVar7 = &cf_T_NNaSGr;

              uVar4 = extraout_x1_18;

            }

            FUN_002a3a60(param_1,uVar4,pcVar7,pcVar8,uVar6);

            goto LAB_001488f8;

          }

          FUN_00147d30();

          pcVar8 = &cf_CadisCalendarOffsetY;

          uVar6 = 4;

          pcVar7 = &cf_eS;

          uVar4 = extraout_x1_08;

        }

      }

LAB_00148894:

      FUN_002a3840(param_1,uVar4,pcVar7,pcVar8,uVar6);

      goto LAB_001488f8;

    }

    FUN_00147870();

    pcVar8 = &cf_eQ__SMOOckp;

    pcVar7 = &cf_CadisCardBottomAdjust;

    pcVar5 = &cf___SMOOck;

    uVar4 = extraout_x1_05;

  }

  FUN_002a3a40(param_1,uVar4,pcVar5,pcVar7,pcVar8);

LAB_001488f8:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




