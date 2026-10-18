// FUN_00151594 @0x151594


void FUN_00151594(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4,

                 undefined8 param_5,undefined8 param_6,long param_7)



{

  uint uVar1;

  cfstringStruct *pcVar2;

  bool bVar3;

  bool bVar4;

  int iVar5;

  uint uVar6;

  uint uVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  undefined8 uVar13;

  long lVar14;

  cfstringStruct *pcVar15;

  cfstringStruct *pcVar16;

  cfstringStruct *pcVar17;

  cfstringStruct *pcVar18;

  cfstringStruct *pcVar19;

  undefined8 uVar20;

  long lVar21;

  undefined8 uVar22;

  undefined8 uVar23;

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

  ulong uVar24;

  double dVar25;

  double dVar26;

  undefined8 uVar27;

  undefined8 uVar28;

  double dVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  double dVar36;

  double dVar37;

  double dVar38;

  double dVar39;

  double dVar40;

  double dVar41;

  undefined1 auVar42 [16];

  undefined1 auVar43 [16];

  double local_e0;

  

  _objc_retain(param_6);

  if ((param_7 != 0) || (iVar5 = FUN_00147794(), iVar5 == 0)) {

    (*DAT_003e8948)(param_4,param_5,param_6,param_7);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    goto LAB_00151684;

  }

  FUN_002925a0(param_6);

  if (param_3 <= 0.0) {

    FUN_002987e0(&_OBJC_CLASS___UIScreen);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar8);

  }

  if ((DAT_003e8828 == 0) || (DAT_003e8848 != param_3)) {

LAB_001516e8:

    if ((DAT_003e8828 == 0) || (DAT_003e8848 != param_3)) {

      _objc_retain(param_4);

      dVar25 = (double)FUN_00159c48();

      iVar5 = FUN_00147f98();

      if (iVar5 == 0) {

        bVar4 = false;

      }

      else {

        FUN_00139ff0();

        uVar8 = _objc_retainAutoreleasedReturnValue();

        lVar9 = FUN_00293860();

        bVar4 = lVar9 != 0;

        _objc_release(uVar8);

      }

      uVar6 = FUN_00147c54();

      lVar10 = FUN_00147cac();

      lVar11 = FUN_00147ff0();

      dVar36 = 0.0;

      dVar39 = 0.0;

      if (bVar4) {

        dVar39 = (double)FUN_00159d3c();

      }

      uVar1 = 0;

      if (lVar10 != 1) {

        uVar1 = uVar6;

      }

      if (uVar1 == 1) {

        dVar36 = (double)FUN_00147dc0();

      }

      bVar3 = false;

      if (lVar11 != 1) {

        bVar3 = bVar4;

      }

      dVar38 = 0.0;

      local_e0 = 0.0;

      if (bVar3) {

        local_e0 = (double)FUN_001480d8();

      }

      if (uVar1 != 0) {

        dVar38 = (double)FUN_00136804();

        dVar38 = dVar36 + dVar38;

      }

      dVar26 = (double)FUN_00147870();

      _objc_alloc(&_OBJC_CLASS___UIView);

      dVar40 = 0.0;

      dVar34 = dVar39 + local_e0;

      if (!bVar3) {

        dVar34 = 0.0;

      }

      dVar34 = dVar26 + dVar34 + dVar25 + 12.0 + dVar38;

      dVar38 = 1.0;

      if (1.0 <= dVar34) {

        dVar38 = dVar34;

      }

      lVar9 = FUN_00296b80(0,0,param_3,dVar38);

      uVar1 = 0;

      if (lVar10 == 0) {

        uVar1 = uVar6;

      }

      if (uVar1 == 1) {

        FUN_00159db8(param_3);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        uVar27 = FUN_00295600();

        FUN_0029e5e0(uVar27,0,uVar8);

        auVar42 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

        auVar42 = FUN_00296f20(auVar42._0_8_,auVar42._8_8_,param_4,"cadis_calendarTapped");

        FUN_00291140(uVar8,auVar42._8_8_,auVar42._0_8_);

        FUN_00291380(lVar9,extraout_x1,uVar8);

        dVar38 = (double)FUN_00136804();

        dVar40 = dVar36 + dVar38 + 0.0;

        _objc_release(auVar42._0_8_);

        _objc_release(uVar8);

      }

      bVar3 = false;

      if (lVar11 == 0) {

        bVar3 = bVar4;

      }

      if (bVar3) {

        FUN_00162960(param_3,param_4);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        if (lVar12 != 0) {

          uVar8 = FUN_00295600(lVar12);

          FUN_0029e5e0(uVar8,dVar40,lVar12);

          FUN_00291380(lVar9,extraout_x1_00,lVar12);

          dVar40 = dVar39 + local_e0 + dVar40;

        }

        _objc_release(lVar12);

      }

      dVar34 = (double)FUN_001478d0();

      dVar38 = (double)FUN_00147810();

      _objc_alloc(&_OBJC_CLASS___UIView);

      dVar35 = param_3 + dVar34 * -2.0;

      dVar38 = dVar40 + 4.0 + dVar38;

      uVar8 = FUN_00296b80();

      FUN_00297e40();

      uVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4024000000000000);

      _objc_release(uVar27);

      FUN_00297e40(uVar8);

      auVar42 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar42._0_8_,auVar42._8_8_,1);

      _objc_release(auVar42._0_8_);

      FUN_00297e40(uVar8);

      auVar42 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1520(auVar42._0_8_,auVar42._8_8_,1);

      _objc_release(auVar42._0_8_);

      FUN_002987e0(&_OBJC_CLASS___UIScreen);

      uVar27 = _objc_retainAutoreleasedReturnValue();

      uVar28 = FUN_0029bda0();

      FUN_00297e40(uVar8);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0bc0(uVar28);

      _objc_release(uVar13);

      _objc_release(uVar27);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      uVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_00136a4c(&cf_CadisCardBgColor,uVar27);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar27);

      FUN_0029cf60(uVar8,extraout_x1_01,uVar13);

      _objc_release(uVar13);

      dVar29 = (double)FUN_0014796c();

      if (0.0 < dVar29) {

        FUN_00297e40(uVar8);

        uVar27 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0e0(dVar29);

        _objc_release(uVar27);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        uVar27 = _objc_retainAutoreleasedReturnValue();

        FUN_00136a4c(&cf_CadisBorderColor,uVar27);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar27);

        _objc_retainAutorelease(uVar13);

        uVar27 = FUN_00290a20();

        FUN_00297e40(uVar8);

        auVar42 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0a0(auVar42._0_8_,auVar42._8_8_,uVar27);

        _objc_release(auVar42._0_8_);

        _objc_release(uVar13);

      }

      dVar29 = (double)FUN_0013f6d4();

      dVar30 = (double)FUN_0013f770();

      dVar31 = (double)FUN_0013f7d0();

      dVar32 = (double)FUN_0013f830();

      dVar33 = (double)FUN_0013f890();

      _objc_alloc(&_OBJC_CLASS___UIImageView);

      dVar31 = dVar25 * dVar29 + dVar30 + dVar31;

      dVar33 = dVar35 * dVar29 + dVar32 + dVar33;

      uVar27 = FUN_00296b80((dVar35 - dVar35 * dVar29) * 0.5 - dVar32,

                            (dVar25 - dVar25 * dVar29) * 0.5 - dVar30,dVar33);

      iVar5 = FUN_001331c4();

      pcVar2 = &cf_CadisSelectedCardDark;

      if (iVar5 == 0) {

        pcVar2 = &cf_CadisSelectedCardLight;

      }

      _objc_retain(pcVar2);

      FUN_00136588();

      auVar42 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar42._0_8_,auVar42._8_8_,pcVar2);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar42._0_8_);

      if (lVar12 == 0) {

LAB_00151c28:

        lVar21 = 0;

      }

      else {

        auVar42 = FUN_00297fa0(lVar12);

        if (auVar42._0_8_ == 0) goto LAB_00151c28;

        if (iVar5 == 0) {

          if ((DAT_003e8808 != 0) &&

             (iVar5 = FUN_00297820(DAT_003e8818,auVar42._8_8_,lVar12), lVar21 = DAT_003e8808,

             iVar5 != 0)) goto LAB_00151c68;

          FUN_0013e1a0();

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4460(auVar42._0_8_,auVar42._8_8_,lVar12);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar42._0_8_);

          FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1_03,uVar13);

          lVar14 = _objc_retainAutoreleasedReturnValue();

          lVar21 = DAT_003e8808;

          DAT_003e8808 = lVar14;

          _objc_release(lVar21);

          _objc_retain(lVar12);

          lVar21 = DAT_003e8818;

          DAT_003e8818 = lVar12;

          _objc_release(lVar21);

          lVar21 = DAT_003e8808;

LAB_00151d50:

          _objc_retain(lVar21);

          _objc_release(uVar13);

        }

        else {

          if ((DAT_003e8810 == 0) ||

             (iVar5 = FUN_00297820(DAT_003e8820,auVar42._8_8_,lVar12), lVar21 = DAT_003e8810,

             iVar5 == 0)) {

            FUN_0013e1a0();

            auVar42 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4460(auVar42._0_8_,auVar42._8_8_,lVar12);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar42._0_8_);

            FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1_02,uVar13);

            lVar14 = _objc_retainAutoreleasedReturnValue();

            lVar21 = DAT_003e8810;

            DAT_003e8810 = lVar14;

            _objc_release(lVar21);

            _objc_retain(lVar12);

            lVar21 = DAT_003e8820;

            DAT_003e8820 = lVar12;

            _objc_release(lVar21);

            lVar21 = DAT_003e8810;

            goto LAB_00151d50;

          }

LAB_00151c68:

          _objc_retain(lVar21);

        }

      }

      _objc_release(lVar12);

      _objc_release(pcVar2);

      FUN_0029ec00(uVar27,extraout_x1_04,lVar21);

      _objc_release(lVar21);

      FUN_0029d6c0(uVar27,extraout_x1_05,2);

      FUN_00291380(uVar8,extraout_x1_06,uVar27);

      FUN_00291380(lVar9,extraout_x1_07,uVar8);

      bVar3 = false;

      if (lVar11 == 1) {

        bVar3 = bVar4;

      }

      dVar29 = (double)FUN_00136804();

      uVar7 = 0;

      if (lVar10 == 1) {

        uVar7 = uVar6;

      }

      dVar29 = dVar29 + -8.0;

      if (uVar7 == 1) {

        dVar30 = (double)FUN_00147d30();

        FUN_00159db8(param_3);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        uVar28 = FUN_00295600();

        FUN_0029e5e0(uVar28,dVar38 + (dVar30 / 100.0) * (dVar25 - dVar29),uVar13);

        auVar42 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

        auVar42 = FUN_00296f20(auVar42._0_8_,auVar42._8_8_,param_4,"cadis_calendarTapped");

        FUN_00291140(uVar13,auVar42._8_8_,auVar42._0_8_);

        FUN_00291380(lVar9,extraout_x1_08,uVar13);

        _objc_release(auVar42._0_8_);

        _objc_release(uVar13);

      }

      if (bVar3) {

        dVar30 = (double)FUN_00148048();

        FUN_00162960(param_3,param_4);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        if (lVar12 != 0) {

          uVar13 = FUN_00295600(lVar12);

          FUN_0029e5e0(uVar13,dVar38 + (dVar30 / 100.0) * (dVar25 - dVar39),lVar12);

          FUN_00291380(lVar9,extraout_x1_09,lVar12);

        }

        _objc_release(lVar12);

      }

      iVar5 = FUN_001479f8();

      if (iVar5 != 0) {

        FUN_0014c808();

        auVar42 = _objc_retainAutoreleasedReturnValue();

        lVar12 = auVar42._0_8_;

        if (lVar12 == 0) {

          FUN_00136efc();

        }

        else {

          FUN_00299540(lVar12,auVar42._8_8_,&cf_time);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          dVar30 = (double)FUN_00294860();

          _objc_release(uVar13);

          FUN_002940e0(&_OBJC_CLASS___NSDate);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          dVar32 = (double)FUN_002a51c0();

          _objc_release(uVar13);

          uVar13 = extraout_x1_10;

          if (1800.0 < dVar32 - dVar30) {

            FUN_00136efc();

            uVar13 = extraout_x1_11;

          }

          FUN_00299540(lVar12,uVar13,&cf_city);

          pcVar15 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar2 = &cf___;

          if (pcVar15 != (cfstringStruct *)0x0) {

            pcVar2 = pcVar15;

          }

          _objc_retain(pcVar2);

          _objc_release(pcVar15);

          FUN_00299540(lVar12,extraout_x1_12,&cf_temp);

          pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar15 = &cf___;

          if (pcVar16 != (cfstringStruct *)0x0) {

            pcVar15 = pcVar16;

          }

          _objc_retain(pcVar15);

          _objc_release(pcVar16);

          FUN_00299540(lVar12,extraout_x1_13,&cf_desc);

          pcVar17 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar16 = &cf___;

          if (pcVar17 != (cfstringStruct *)0x0) {

            pcVar16 = pcVar17;

          }

          _objc_retain(pcVar16);

          _objc_release(pcVar17);

          FUN_00299540(lVar12,extraout_x1_14,&cf_code);

          pcVar18 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar17 = &cf_113;

          if (pcVar18 != (cfstringStruct *)0x0) {

            pcVar17 = pcVar18;

          }

          _objc_retain(pcVar17);

          _objc_release(pcVar18);

          FUN_00299540(lVar12,extraout_x1_15,&cf_source);

          pcVar19 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar18 = &cf_wttr;

          if (pcVar19 != (cfstringStruct *)0x0) {

            pcVar18 = pcVar19;

          }

          _objc_retain(pcVar18);

          _objc_release(pcVar19);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_16,&cf__);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          iVar5 = FUN_00297820(pcVar18,auVar42._8_8_,&cf_qweather);

          if (iVar5 == 0) {

            iVar5 = FUN_00297460(pcVar17);

            uVar7 = iVar5 - 0x71;

            if ((uVar7 < 10) && ((0x249U >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {

              pcVar19 = (cfstringStruct *)(&PTR_cf_sun_max_fill_0038d7f8)[uVar7];

            }

            else if (iVar5 - 0xb0U < 0x58) {

              pcVar19 = &cf_cloud_drizzle_fill;

            }

            else {

              if (iVar5 - 0x10aU < 0x22) goto LAB_001521a4;

              if (iVar5 - 300U < 0xf) goto LAB_001521c8;

              if (iVar5 - 0x13dU < 0x16) {

                pcVar19 = &cf_cloud_snow_fill;

              }

              else {

                pcVar19 = &cf_cloud_sleet_fill;

                if (0x2d < iVar5 - 0x15eU) {

                  pcVar19 = &cf_cloud_sun_fill;

                }

              }

            }

          }

          else {

            uVar7 = FUN_00297460(pcVar17);

            uVar24 = (ulong)(uVar7 - 100);

            if (uVar7 - 100 < 0x37) {

              if ((1L << (uVar24 & 0x3f) & 0x3800000000000eU) == 0) {

                if ((1L << (uVar24 & 0x3f) & 0x4000000000001U) == 0) {

                  if ((1L << (uVar24 & 0x3f) & 0x40000000000010U) == 0) goto LAB_001521d4;

                  pcVar19 = &cf_cloud_fill;

                }

                else {

                  pcVar19 = &cf_sun_max_fill;

                }

              }

              else {

                pcVar19 = &cf_cloud_sun_fill;

              }

            }

            else {

LAB_001521d4:

              if (uVar7 - 300 < 5) {

                pcVar19 = &cf_cloud_bolt_rain_fill;

              }

              else if (uVar7 - 0x131 < 5) {

LAB_001521a4:

                pcVar19 = &cf_cloud_rain_fill;

              }

              else if (uVar7 - 0x136 < 3) {

LAB_001521c8:

                pcVar19 = &cf_cloud_heavyrain_fill;

              }

              else {

                if (uVar7 - 0x139 < 0x57) goto LAB_001521a4;

                if (uVar7 - 400 < 0x3a) {

                  pcVar19 = &cf_cloud_snow_fill;

                }

                else {

                  pcVar19 = &cf_smoke_fill;

                  if ((uVar7 & 0xfffffffe) != 500) {

                    if (uVar7 - 0x1f6 < 3) {

                      pcVar19 = &cf_cloud_fog_fill;

                    }

                    else if (uVar7 - 0x1fb < 2) {

                      pcVar19 = &cf_sun_dust_fill;

                    }

                    else if (6 < uVar7 - 0x1fd) {

                      pcVar19 = &cf_cloud_sun_fill;

                    }

                  }

                }

              }

            }

          }

          _objc_retain(pcVar19);

          auVar43 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

          uVar13 = auVar43._0_8_;

          FUN_00293320(0x402c000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,auVar43._8_8_,4)

          ;

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4be0(&_OBJC_CLASS___UIImage,auVar43._8_8_,pcVar19,auVar43._0_8_);

          uVar28 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar43._0_8_);

          FUN_0029ec00(uVar13,extraout_x1_17,uVar28);

          FUN_0029bfa0(&_OBJC_CLASS___UIColor);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(uVar13,auVar43._8_8_,auVar43._0_8_);

          _objc_release(auVar43._0_8_);

          FUN_0029d6c0(uVar13,extraout_x1_18,1);

          FUN_002a3de0(uVar13);

          FUN_00295600(uVar13);

          dVar30 = dVar33;

          FUN_00295600(uVar13);

          dVar32 = dVar31;

          auVar43 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

          uVar20 = auVar43._0_8_;

          FUN_002a1d60(uVar20,auVar43._8_8_,auVar42._0_8_);

          FUN_002a4ac0(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00388420,

                       &_OBJC_CLASS___UIFont);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e520(uVar20,auVar43._8_8_,auVar43._0_8_);

          _objc_release(auVar43._0_8_);

          FUN_0029bfa0(&_OBJC_CLASS___UIColor);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1da0(uVar20,auVar43._8_8_,auVar43._0_8_);

          _objc_release(auVar43._0_8_);

          FUN_002a3de0(uVar20);

          FUN_00295600(uVar20);

          FUN_00295600(uVar20);

          _objc_alloc(&_OBJC_CLASS___UIView);

          dVar41 = dVar33 + 10.0 + 4.0;

          dVar37 = dVar41 + dVar30 + 10.0;

          dVar30 = dVar31;

          if (dVar31 <= dVar32) {

            dVar30 = dVar32;

          }

          dVar30 = dVar30 + 12.0;

          lVar21 = FUN_00296b80(0,0,dVar37,dVar30);

          FUN_00292dc0(&_OBJC_CLASS___UIColor);

          uVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_00136a4c(&cf_CadisWeatherColor,uVar22);

          uVar23 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar22);

          FUN_0029cf60(lVar21,extraout_x1_19,uVar23);

          _objc_release(uVar23);

          FUN_00297e40(&_OBJC_CLASS___CAShapeLayer);

          uVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_00292380(0,0,dVar37,dVar30,dVar30 * 0.5,&_OBJC_CLASS___UIBezierPath);

          uVar23 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          auVar43 = FUN_00290a60();

          FUN_002a05c0(uVar22,auVar43._8_8_,auVar43._0_8_);

          _objc_release(uVar23);

          FUN_00297e40(lVar21);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_0029f920(auVar43._0_8_,auVar43._8_8_,uVar22);

          _objc_release(auVar43._0_8_);

          FUN_00147bc4();

          FUN_0029cb60(lVar21);

          FUN_002a23c0(lVar21,extraout_x1_20,1);

          FUN_0029e5e0(0x4024000000000000,(dVar30 - dVar31) * 0.5,dVar33,dVar31,uVar13);

          FUN_00291380(lVar21,extraout_x1_21,uVar13);

          FUN_00295600(uVar20);

          dVar32 = dVar31;

          FUN_00295600(uVar20);

          FUN_00295600(uVar20);

          FUN_0029e5e0(dVar41,(dVar30 - dVar31) * 0.5,dVar33,uVar20);

          FUN_00291380(lVar21,extraout_x1_22,uVar20);

          _objc_release(uVar22);

          _objc_release(uVar20);

          _objc_release(uVar28);

          _objc_release(uVar13);

          _objc_release(pcVar19);

          _objc_release(auVar42._0_8_);

          _objc_release(pcVar18);

          _objc_release(pcVar17);

          _objc_release(pcVar16);

          _objc_release(pcVar15);

          _objc_release(pcVar2);

          _objc_release(lVar12);

          if (lVar21 != 0) {

            dVar30 = (double)FUN_00147aa8();

            dVar31 = (double)FUN_00147b38();

            FUN_00295600(lVar21);

            FUN_00295600(lVar21);

            lVar12 = FUN_00147a50();

            if ((lVar12 == 1 & uVar6) == 1) {

              if (lVar10 == 0) {

                dVar38 = 0.0;

              }

              else if (lVar10 == 1) {

                dVar37 = (double)FUN_00147d30();

                dVar39 = dVar29;

LAB_00152684:

                dVar38 = dVar38 + (dVar37 / 100.0) * (dVar25 - dVar39);

                dVar29 = dVar39;

              }

              else {

                dVar38 = dVar36 + dVar26 + dVar25 + dVar40 + 12.0;

              }

            }

            else {

              dVar29 = dVar25;

              if ((bool)(lVar12 == 2 & bVar4)) {

                dVar29 = dVar39;

                if (lVar11 == 0) {

                  dVar38 = 0.0;

                  if (uVar1 == 0) goto LAB_00152730;

                  dVar39 = (double)FUN_00136804();

                  dVar38 = dVar36;

                }

                else {

                  if (lVar11 == 1) {

                    dVar37 = (double)FUN_00148048();

                    goto LAB_00152684;

                  }

                  uVar1 = 0;

                  if (lVar10 == 2) {

                    uVar1 = uVar6;

                  }

                  dVar39 = 0.0;

                  if (uVar1 == 1) {

                    dVar39 = (double)FUN_00136804();

                    dVar39 = dVar36 + dVar39;

                  }

                  dVar39 = dVar26 + dVar25 + dVar40 + 12.0 + dVar39;

                  dVar38 = local_e0;

                }

                dVar38 = dVar38 + dVar39;

              }

            }

LAB_00152730:

            FUN_0029e5e0(dVar34 + (dVar30 / 100.0) * (dVar35 - dVar33),

                         dVar38 + (dVar31 / 100.0) * (dVar29 - dVar32),dVar33,dVar32,lVar21);

            auVar42 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

            auVar42 = FUN_00296f20(auVar42._0_8_,auVar42._8_8_,param_4,"cadis_weatherBadgeTapped");

            FUN_00291140(lVar21,auVar42._8_8_,auVar42._0_8_);

            FUN_00297e40(lVar21);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            FUN_002a2860(0x408f400000000000);

            _objc_release(uVar13);

            FUN_00291380(lVar9,extraout_x1_23,lVar21);

            _objc_release(auVar42._0_8_);

            _objc_release(lVar21);

          }

        }

      }

      dVar40 = dVar25 + 12.0 + dVar26 + dVar40;

      uVar1 = 0;

      if (lVar10 == 2) {

        uVar1 = uVar6;

      }

      if (uVar1 == 1) {

        FUN_00159db8(param_3);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        uVar28 = FUN_00295600();

        FUN_0029e5e0(uVar28,dVar36 + dVar40,uVar13);

        auVar42 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

        auVar42 = FUN_00296f20(auVar42._0_8_,auVar42._8_8_,param_4,"cadis_calendarTapped");

        FUN_00291140(uVar13,auVar42._8_8_,auVar42._0_8_);

        FUN_00291380(lVar9,extraout_x1_24,uVar13);

        dVar25 = (double)FUN_00136804();

        dVar40 = dVar36 + dVar40 + dVar25;

        _objc_release(auVar42._0_8_);

        _objc_release(uVar13);

      }

      bVar3 = false;

      if (lVar11 == 2) {

        bVar3 = bVar4;

      }

      if (bVar3) {

        FUN_00162960(param_3,param_4);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        if (lVar10 != 0) {

          uVar13 = FUN_00295600(lVar10);

          FUN_0029e5e0(uVar13,local_e0 + dVar40,lVar10);

          FUN_00291380(lVar9,extraout_x1_25,lVar10);

        }

        _objc_release(lVar10);

      }

      _objc_release(uVar27);

      _objc_release(uVar8);

      _objc_release(param_4);

      _objc_retain(lVar9);

      lVar10 = DAT_003e8828;

      DAT_003e8828 = lVar9;

      _objc_release(lVar10);

      DAT_003e8848 = param_3;

      goto LAB_00151684;

    }

  }

  else {

    iVar5 = FUN_001678c4(DAT_003e8828);

    if (iVar5 == 0) {

      iVar5 = FUN_00167e4c(DAT_003e8828);

      if (iVar5 != 0) {

        DAT_003e8828 = 0;

        _objc_release();

        DAT_003e8848 = 0.0;

        goto LAB_001516e8;

      }

      FUN_00168060(DAT_003e8828);

    }

    else {

      FUN_00168060();

    }

  }

  lVar9 = DAT_003e8828;

  _objc_retain(DAT_003e8828);

LAB_00151684:

  _objc_release(param_6);

  _objc_autoreleaseReturnValue(lVar9);

  return;

}




