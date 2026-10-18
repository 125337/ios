// applyCardToCalendar:cardDir:presenter: @0x55214


/* Function Stack Size: 0x28 bytes */



void _0x2f19de29::applyCardToCalendar_cardDir_presenter_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  int iVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  long lVar17;

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

  cfstringStruct *pcVar18;

  int iVar19;

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  long local_118;

  long local_110;

  long local_f8;

  long local_c0;

  cfstringStruct *local_b0;

  cfstringStruct *pcStack_a8;

  cfstringStruct *local_a0;

  cfstringStruct *pcStack_98;

  undefined8 local_90;

  long lStack_88;

  cfstringStruct *local_80;

  ID IStack_78;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  FUN_002a4460(param_4,extraout_x1,&cf_theme_xos);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00295160(auVar20._0_8_,auVar20._8_8_,uVar3);

  _objc_release(auVar20._0_8_);

  if ((uVar4 & 1) == 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf___u1Y_,&cf_aSGrDneNNX__W,1);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    uVar10 = auVar20._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar20._8_8_,&cf_nx_,0,0);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar10,auVar20._8_8_,auVar20._0_8_);

    _objc_release(auVar20._0_8_);

    if (param_5 != 0) {

      param_1 = param_5;

    }

    FUN_0029a500(param_1,extraout_x1_09,uVar10,1,0);

  }

  else {

    FUN_002a59a0(&objc::class_t::XOSLoader);

    auVar20 = FUN_002982e0(&objc::class_t::XOSLoader,extraout_x1_01,uVar3);

    if ((auVar20._0_8_ & 1) != 0) {

      iVar1 = FUN_0029b7a0(&objc::class_t::XOSLoader);

      FUN_002a4400(&_OBJC_CLASS___NSMutableString);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4400(&_OBJC_CLASS___NSMutableString);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4400(&_OBJC_CLASS___NSMutableString);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4400(&_OBJC_CLASS___NSMutableString);

      auVar20 = _objc_retainAutoreleasedReturnValue();

      uVar10 = auVar20._8_8_;

      uVar8 = auVar20._0_8_;

      if (iVar1 == 0) {

        local_c0 = 0;

      }

      else {

        local_c0 = 0;

        iVar19 = 0;

        do {

          FUN_00295200(&objc::class_t::XOSLoader,uVar10,iVar19);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          if (lVar9 != 0) {

            FUN_00299b20(lVar9);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_002984e0();

            uVar11 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar10);

            FUN_002a5080(&objc::class_t::XOSLoader,extraout_x1_02,iVar19);

            lVar12 = _objc_retainAutoreleasedReturnValue();

            if (lVar12 != 0) {

              auVar20 = FUN_00297fa0(lVar12);

              if (auVar20._0_8_ != 0) {

                auVar20 = FUN_00297820(uVar11,auVar20._8_8_,&cf_html);

                if (((auVar20._0_8_ & 1) == 0) &&

                   (iVar2 = FUN_00297820(uVar11,auVar20._8_8_,&cf_htm), iVar2 == 0)) {

                  iVar2 = FUN_00297820(uVar11,extraout_x1_03,&cf_css);

                  if (iVar2 == 0) {

                    iVar2 = FUN_00297820(uVar11,extraout_x1_05,&cf_js);

                    if (iVar2 == 0) goto LAB_000553f8;

                    FUN_002919e0(lVar6,extraout_x1_07,lVar12);

                    pcVar18 = &cf_<script>__<_script>;

                    uVar10 = uVar8;

                    uVar14 = extraout_x1_08;

                  }

                  else {

                    FUN_002919e0(uVar5,extraout_x1_05,lVar12);

                    pcVar18 = &cf_<style>__<_style>;

                    uVar10 = uVar7;

                    uVar14 = extraout_x1_06;

                  }

                  FUN_002919a0(uVar10,uVar14,pcVar18);

                }

                else {

                  _objc_retain(lVar12);

                  _objc_release(local_c0);

                  local_c0 = lVar12;

                }

              }

            }

LAB_000553f8:

            _objc_release(lVar12);

            _objc_release(uVar11);

          }

          _objc_release(lVar9);

          iVar19 = iVar19 + 1;

          uVar10 = extraout_x1_04;

        } while (iVar1 != iVar19);

      }

      FUN_002a59a0(&objc::class_t::XOSLoader);

      if (local_c0 == 0) {

        auVar20 = FUN_00297fa0(uVar5);

        if (auVar20._0_8_ == 0) {

          auVar20 = FUN_00297fa0(lVar6);

          uVar10 = auVar20._8_8_;

          if (auVar20._0_8_ == 0) goto LAB_000556e4;

          _objc_retain(lVar6);

          auVar20._8_8_ = extraout_x1_13;

          auVar20._0_8_ = lVar6;

          pcVar18 = &cf_js;

          lVar9 = lVar6;

        }

        else {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_____);

          auVar20 = _objc_retainAutoreleasedReturnValue();

          lVar9 = auVar20._0_8_;

          pcVar18 = &cf_html;

        }

        uVar10 = auVar20._8_8_;

        local_f8 = auVar20._0_8_;

        if (lVar9 != 0) goto LAB_00055700;

LAB_000556e4:

        local_f8 = 0;

LAB_000557c8:

        FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar10,&cf___u1Y_,&cf_aSGr_N_g_b0RgHev,1);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        uVar10 = auVar20._0_8_;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar20._8_8_,&cf_nx_,0,0);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar10,auVar20._8_8_,auVar20._0_8_);

        _objc_release(auVar20._0_8_);

        if (param_5 != 0) {

          param_1 = param_5;

        }

        FUN_0029a500(param_1,extraout_x1_16,uVar10,1,0);

        _objc_release(uVar10);

      }

      else {

        lVar9 = FUN_00297fa0(uVar7);

        if ((lVar9 == 0) && (lVar9 = FUN_00297fa0(uVar8), lVar9 == 0)) {

          _objc_retain(local_c0);

          pcVar18 = &cf_html;

          local_f8 = local_c0;

        }

        else {

          local_f8 = FUN_00299020(local_c0);

          auVar20 = FUN_00297fa0(uVar7);

          if (auVar20._0_8_ != 0) {

            auVar20 = FUN_0029abc0(local_f8,auVar20._8_8_,&cf_<_head>,1);

            lVar9 = 0;

            if (auVar20._0_8_ != 0x7fffffffffffffff) {

              lVar9 = auVar20._0_8_;

            }

            FUN_00297080(local_f8,auVar20._8_8_,uVar7,lVar9);

          }

          auVar20 = FUN_00297fa0(uVar8);

          uVar10 = auVar20._8_8_;

          if (auVar20._0_8_ != 0) {

            auVar20 = FUN_0029abc0(local_f8,uVar10,&cf_<_body>,1);

            if (auVar20._0_8_ == 0x7fffffffffffffff) {

              FUN_002919e0(local_f8,auVar20._8_8_,uVar8);

              uVar10 = extraout_x1_11;

            }

            else {

              FUN_00297080(local_f8,auVar20._8_8_,uVar8,auVar20._0_8_);

              uVar10 = extraout_x1_12;

            }

          }

          pcVar18 = &cf_html;

          if (local_f8 == 0) goto LAB_000556e4;

        }

LAB_00055700:

        auVar20 = FUN_00297fa0(local_f8);

        uVar10 = auVar20._8_8_;

        if (auVar20._0_8_ == 0) goto LAB_000557c8;

        FUN_00167d7c();

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar11 = FUN_00299020();

        _objc_release(uVar10);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_14,&cf_aSGr_);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        lVar9 = 0;

        while( true ) {

          auVar20 = FUN_00293860(uVar11);

          uVar14 = auVar20._8_8_;

          if (auVar20._0_8_ <= lVar9) break;

          FUN_00299500(uVar11,uVar14,lVar9);

          auVar20 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar20._0_8_,auVar20._8_8_,&cf_name);

          auVar21 = _objc_retainAutoreleasedReturnValue();

          uVar4 = FUN_00297820(auVar21._0_8_,auVar21._8_8_,uVar10);

          _objc_release(auVar21._0_8_);

          _objc_release(auVar20._0_8_);

          uVar14 = extraout_x1_15;

          if ((uVar4 & 1) != 0) goto LAB_00055858;

          lVar9 = lVar9 + 1;

        }

        lVar9 = -1;

LAB_00055858:

        FUN_002a4460(param_4,uVar14,&cf_config_json);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        uVar13 = auVar20._0_8_;

        local_b0 = &cf_name;

        pcStack_a8 = &cf_code;

        local_a0 = &cf_type;

        pcStack_98 = &cf_cardDir;

        local_90 = uVar10;

        lStack_88 = local_f8;

        local_80 = pcVar18;

        IStack_78 = param_4;

        FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar20._8_8_,&local_90,&local_b0,4);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        uVar15 = FUN_00299020();

        _objc_release(uVar14);

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_00295160(auVar20._0_8_,auVar20._8_8_,uVar13);

        _objc_release(auVar20._0_8_);

        uVar14 = extraout_x1_17;

        if (iVar1 != 0) {

          FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_17,uVar13);

          auVar20 = _objc_retainAutoreleasedReturnValue();

          lVar12 = auVar20._0_8_;

          if (lVar12 != 0) {

            FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar20._8_8_,lVar12,0,0);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            uVar16 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

            auVar20 = _objc_opt_isKindOfClass(uVar14,uVar16);

            if ((auVar20._0_8_ & 1) != 0) {

              FUN_00299540(uVar14,auVar20._8_8_,&cf_of_);

              auVar20 = _objc_retainAutoreleasedReturnValue();

              lVar17 = auVar20._0_8_;

              if (lVar17 == 0) {

                FUN_00299540(uVar14,auVar20._8_8_,&cf_bgHeight);

                local_110 = _objc_retainAutoreleasedReturnValue();

              }

              else {

                _objc_retain(lVar17);

                local_110 = lVar17;

              }

              _objc_release(lVar17);

              FUN_00299540(uVar14,extraout_x1_18,&cf_Q___>e);

              auVar20 = _objc_retainAutoreleasedReturnValue();

              lVar17 = auVar20._0_8_;

              if (lVar17 == 0) {

                FUN_00299540(uVar14,auVar20._8_8_,&cf_contentScale);

                local_118 = _objc_retainAutoreleasedReturnValue();

              }

              else {

                _objc_retain(lVar17);

                local_118 = lVar17;

              }

              _objc_release(lVar17);

              FUN_00291600(uVar14);

              uVar16 = _objc_retainAutoreleasedReturnValue();

              _NSLog(&cf__Cover_applyCardconfig_json_bgHStr___scaleStr___allKeys___);

              _objc_release(uVar16);

              uVar16 = extraout_x1_19;

              if (local_110 != 0) {

                FUN_00295480(local_110);

                FUN_002993c0(&_OBJC_CLASS___NSNumber);

                auVar20 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(uVar15,auVar20._8_8_,auVar20._0_8_,&cf_bgHeight);

                _objc_release(auVar20._0_8_);

                uVar16 = extraout_x1_20;

              }

              if (local_118 != 0) {

                FUN_00295480(local_118);

                FUN_002993c0(&_OBJC_CLASS___NSNumber);

                auVar20 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(uVar15,auVar20._8_8_,auVar20._0_8_,&cf_contentScale);

                _objc_release(auVar20._0_8_);

                uVar16 = extraout_x1_21;

              }

              FUN_00299540(uVar15,uVar16,&cf_bgHeight);

              auVar20 = _objc_retainAutoreleasedReturnValue();

              FUN_00299540(uVar15,auVar20._8_8_,&cf_contentScale);

              uVar16 = _objc_retainAutoreleasedReturnValue();

              _NSLog(&cf__Cover_applyCardstyleDictbgHeight___contentScale___);

              _objc_release(uVar16);

              _objc_release(auVar20._0_8_);

              _objc_release(local_118);

              _objc_release(local_110);

            }

            _objc_release(uVar14);

          }

          _objc_release(lVar12);

          uVar14 = extraout_x1_22;

        }

        if (lVar9 < 0) {

          FUN_00291240(uVar11,uVar14,uVar15);

          lVar9 = FUN_00293860(uVar11);

          lVar9 = lVar9 + -1;

        }

        else {

          FUN_002a0040(uVar11,uVar14,uVar15,lVar9);

        }

        FUN_0017247c(uVar11);

        FUN_00136588();

        auVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_0029efa0(auVar20._0_8_,auVar20._8_8_,lVar9 + 10,&cf_CadisCalendarStyle);

        _objc_release(auVar20._0_8_);

        FUN_00136588();

        uVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4a40();

        _objc_release(uVar14);

        FUN_00136604();

        FUN_001728f8();

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        uVar14 = auVar20._0_8_;

        FUN_002a0060(uVar14,auVar20._8_8_,param_3,&cf_CoverSelectedCard);

        FUN_002a0060(uVar14,extraout_x1_23,param_4,&cf_CoverSelectedCardPath);

        FUN_002a4a40(uVar14);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_24,&cf____uaSGr0_);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar20._8_8_,&cf_n_bR,auVar20._0_8_,1);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar20._0_8_);

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_25,&cf__Yv,0,0);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar16,auVar20._8_8_,auVar20._0_8_);

        _objc_release(auVar20._0_8_);

        if (param_5 != 0) {

          param_1 = param_5;

        }

        FUN_0029a500(param_1,extraout_x1_26,uVar16,1,0);

        _objc_getAssociatedObject(param_5,"bubbleCollectionView");

        lVar9 = _objc_retainAutoreleasedReturnValue();

        if (lVar9 != 0) {

          FUN_0029b140(lVar9);

        }

        _objc_release(lVar9);

        _objc_release(uVar16);

        _objc_release(uVar14);

        _objc_release(uVar15);

        _objc_release(uVar13);

        _objc_release(uVar10);

        _objc_release(uVar11);

      }

      _objc_release(local_f8);

      _objc_release(local_c0);

      _objc_release(uVar8);

      _objc_release(uVar7);

      _objc_release(lVar6);

      _objc_release(uVar5);

      goto LAB_00055d54;

    }

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar20._8_8_,&cf___u1Y_,&cf_elgaSGrDnS,1);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    uVar10 = auVar20._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar20._8_8_,&cf_nx_,0,0);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar10,auVar20._8_8_,auVar20._0_8_);

    _objc_release(auVar20._0_8_);

    if (param_5 != 0) {

      param_1 = param_5;

    }

    FUN_0029a500(param_1,extraout_x1_10,uVar10,1,0);

  }

  _objc_release(uVar10);

LAB_00055d54:

  _objc_release(uVar3);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




