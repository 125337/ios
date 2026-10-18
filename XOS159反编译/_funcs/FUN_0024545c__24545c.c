// FUN_0024545c @0x24545c


void FUN_0024545c(undefined1 param_1 [16],double param_2,double param_3,double param_4,

                 undefined8 param_5,undefined8 param_6)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  byte bVar3;

  char cVar4;

  bool bVar5;

  uint uVar6;

  uint uVar7;

  uint uVar8;

  undefined8 uVar9;

  ulong uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  long lVar13;

  long lVar14;

  undefined **ppuVar15;

  undefined8 uVar16;

  long lVar17;

  long lVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  long lVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  cfstringStruct *pcVar25;

  cfstringStruct *pcVar26;

  undefined8 uVar27;

  undefined8 uVar28;

  cfstringStruct *pcVar29;

  cfstringStruct *pcVar30;

  ulong uVar31;

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

  undefined8 extraout_x1_32;

  undefined8 extraout_x1_33;

  undefined8 extraout_x1_34;

  undefined8 extraout_x1_35;

  undefined8 extraout_x1_36;

  undefined8 extraout_x1_37;

  undefined8 extraout_x1_38;

  undefined8 extraout_x1_39;

  undefined8 extraout_x1_40;

  undefined8 extraout_x1_41;

  undefined8 extraout_x1_42;

  undefined8 extraout_x1_43;

  undefined8 extraout_x1_44;

  ulong extraout_x1_45;

  undefined8 extraout_x1_46;

  undefined8 extraout_x1_47;

  undefined8 uVar32;

  cfstringStruct *pcVar33;

  long lVar34;

  long lVar35;

  undefined8 uVar36;

  float fVar37;

  float fVar38;

  double dVar39;

  double dVar40;

  double dVar41;

  double dVar42;

  double dVar43;

  undefined1 auVar44 [16];

  undefined1 auVar45 [16];

  undefined1 auVar46 [16];

  undefined8 local_1a8;

  long local_1a0;

  ulong local_180;

  undefined *local_170;

  long lStack_168;

  code *local_160;

  undefined *puStack_158;

  long local_150;

  double dStack_148;

  undefined8 uStack_140;

  undefined8 uStack_138;

  undefined8 local_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  long local_100;

  double local_f8;

  long local_a0;

  

  local_a0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_6);

  FUN_002925a0(param_5);

  dVar39 = (double)_CGRectGetWidth();

  FUN_002925a0(param_5);

  dVar40 = (double)_CGRectGetHeight();

  cVar4 = DAT_003eb290;

  lVar13 = DAT_003e7298;

  if ((dVar39 <= 0.0) || (dVar40 <= 0.0)) goto LAB_00247820;

  if (99 < DAT_003e7298) {

    FUN_0029bb60(param_5);

    dVar41 = 0.0;

    if (DAT_003eb428 == 0) {

      dVar41 = 18.0;

    }

    dVar42 = ((dVar40 - param_3) + -62.0) - dVar41;

    dVar40 = dVar40 - (dVar41 + 80.0);

    if (dVar42 <= dVar40) {

      dVar40 = dVar42;

    }

    FUN_0024da68(lVar13);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    dVar43 = (double)FUN_0024e5a8();

    FUN_0029d4a0(param_5,extraout_x1,0);

    dVar42 = -dVar43;

    if (-dVar43 <= dVar40 - dVar43) {

      dVar42 = dVar40 - dVar43;

    }

    FUN_00292180(&_OBJC_CLASS___CATransaction);

    FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_00,1);

    FUN_00295600(param_6);

    uVar10 = _CGRectEqualToRect();

    if ((uVar10 & 1) == 0) {

      FUN_0029e5e0(0,dVar42,dVar39,dVar41 + 80.0,param_6);

    }

    FUN_0024fa8c(lVar13,param_5,param_6);

    FUN_002925e0(param_5,extraout_x1_01,param_6);

    FUN_002930a0(&_OBJC_CLASS___CATransaction);

    _objc_release(uVar9);

    goto LAB_00247820;

  }

  if (DAT_003e7298 == 2) {

    FUN_0029bb60(param_5);

    FUN_0029d4a0(param_5,extraout_x1_08,0);

    dVar41 = param_3 + 78.0;

    if (param_3 + 78.0 <= dVar40) {

      dVar41 = dVar40;

    }

    FUN_0029e5e0(0,(dVar40 - dVar41) + 10.0,dVar39,param_6);

    FUN_00235cf4(param_5);

    FUN_00232600(param_5,param_6);

    goto LAB_00247820;

  }

  if (DAT_003e7298 != 3) {

    if (DAT_003e7298 == 4) {

      FUN_0029bb60(param_5);

      FUN_002a6520(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029bea0();

      uVar11 = _objc_retainAutoreleasedReturnValue();

      dVar41 = (double)FUN_0029bda0();

      if (dVar41 == 0.0) {

        FUN_002987e0(&_OBJC_CLASS___UIScreen);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        dVar41 = (double)FUN_0029bda0();

        if (dVar41 <= 1.0) {

          dVar41 = 1.0;

        }

        dVar41 = (double)(long)(dVar41 * 62.4) / dVar41;

        _objc_release(uVar12);

      }

      else {

        if (dVar41 <= 1.0) {

          dVar41 = 1.0;

        }

        dVar41 = (double)(long)(dVar41 * 62.4) / dVar41;

      }

      dVar39 = ((dVar39 - param_2) - param_4) + -12.0;

      if (dVar39 <= 0.0) {

        dVar39 = 0.0;

      }

      _objc_release(uVar11);

      _objc_release(uVar9);

      dVar42 = 2.0;

      if (param_3 <= 0.0) {

        dVar42 = 8.0;

      }

      FUN_0029e5e0(param_2 + 6.0,((dVar40 - param_3) - dVar41) - dVar42,dVar39,dVar41,param_6);

      _objc_retain(param_5);

      _objc_retain(param_6);

      FUN_002318f4(param_5);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      if (lVar13 == 0) {

        local_180 = 0;

      }

      else {

        local_180 = FUN_0029c2c0(lVar13);

      }

      local_128 = 0x7fffffffffffffff;

      FUN_0023fd00(param_5,&local_128);

      _objc_unsafeClaimAutoreleasedReturnValue();

      FUN_0029fea0(param_6,extraout_x1_10,local_128);

      FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      lVar34 = 0;

      while( true ) {

        FUN_00297be0(param_5);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        lVar14 = FUN_00293860();

        _objc_release(uVar11);

        if (lVar14 <= lVar34) break;

        FUN_002481b4(param_5,lVar34,local_180);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar9,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        lVar34 = lVar34 + 1;

      }

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      FUN_00291d40(auVar44._0_8_,auVar44._8_8_,&cf_xzyHomeBottomBarPopupItems);

      ppuVar15 = (undefined **)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar44._0_8_);

      lVar34 = FUN_00293860(ppuVar15);

      if (lVar34 == 0) {

        _objc_release(ppuVar15);

        ppuVar15 = &PTR__OBJC_CLASS___NSConstantArray_003bef08;

      }

      FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      dStack_148 = 0.0;

      local_150 = 0;

      uStack_138 = 0;

      uStack_140 = 0;

      lStack_168 = 0;

      local_170 = (undefined *)0x0;

      puStack_158 = (undefined *)0x0;

      local_160 = (code *)0x0;

      _objc_retain(ppuVar15);

      lVar34 = FUN_00293880(ppuVar15,extraout_x1_11,&local_170,&local_120,0x10);

      if (lVar34 != 0) {

        lVar14 = *(long *)local_160;

        do {

          lVar35 = 0;

          do {

            if (*(long *)local_160 != lVar14) {

              _objc_enumerationMutation(ppuVar15);

            }

            uVar36 = *(undefined8 *)(lStack_168 + lVar35 * 8);

            uVar16 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

            auVar44 = _objc_opt_isKindOfClass(uVar36,uVar16);

            uVar16 = auVar44._8_8_;

            if ((auVar44._0_8_ & 1) != 0) {

              auVar44 = FUN_00293560(uVar12,uVar16,uVar36);

              uVar16 = auVar44._8_8_;

              if ((auVar44._0_8_ & 1) == 0) {

                lVar17 = FUN_002974a0(uVar36);

                FUN_00248a34();

                auVar44 = _objc_retainAutoreleasedReturnValue();

                uVar16 = auVar44._8_8_;

                lVar21 = auVar44._0_8_;

                if (lVar21 != 0) {

                  if (lVar17 < 0) {

                    _objc_release(lVar21);

                    uVar16 = extraout_x1_13;

                  }

                  else {

                    lVar18 = FUN_00293860(uVar9);

                    _objc_release(lVar21);

                    uVar16 = extraout_x1_12;

                    if (lVar18 <= lVar17) goto LAB_00245f9c;

                  }

                  FUN_00291240(uVar12,uVar16,uVar36);

                  FUN_002481b4(param_5,lVar17,local_180);

                  auVar44 = _objc_retainAutoreleasedReturnValue();

                  FUN_00291240(uVar11,auVar44._8_8_,auVar44._0_8_);

                  _objc_release(auVar44._0_8_);

                  uVar16 = extraout_x1_14;

                }

              }

            }

LAB_00245f9c:

            lVar35 = lVar35 + 1;

          } while (lVar34 != lVar35);

          lVar34 = FUN_00293880(ppuVar15,uVar16,&local_170,&local_120,0x10);

        } while (lVar34 != 0);

      }

      _objc_release(ppuVar15);

      lVar34 = FUN_00293860(uVar11);

      if (lVar34 == 0) {

        FUN_002481b4(param_5,0xffffffffffffffff,local_180);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar11,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

      }

      lVar34 = FUN_00293860(uVar9);

      if (lVar34 < 2) {

        lVar34 = 1;

      }

      FUN_002481b4(param_5,lVar34 + -1,local_180);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      dVar40 = (double)_CACurrentMediaTime();

      lVar34 = DAT_003eb298;

      if ((DAT_003eb298 == 0) || (5.0 <= dVar40 - DAT_003eb2a0)) {

        DAT_003eb2a0 = dVar40;

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        uVar36 = _objc_retainAutoreleasedReturnValue();

        uVar27 = _NSClassFromString(&cf_MMServiceCenter);

        uVar28 = _NSSelectorFromString(&cf_defaultCenter);

        uVar19 = _NSSelectorFromString(&cf_getService_);

        uVar10 = _objc_opt_respondsToSelector(uVar27,uVar28);

        if ((uVar10 & 1) == 0) {

          uVar27 = 0;

        }

        else {

          _objc_msgSend(uVar27,uVar28);

          uVar27 = _objc_retainAutoreleasedReturnValue();

        }

        lVar34 = _NSClassFromString(&cf_CContactMgr);

        if ((lVar34 != 0) &&

           (uVar10 = _objc_opt_respondsToSelector(uVar27,uVar19), (uVar10 & 1) != 0)) {

          _objc_msgSend(uVar27,uVar19,lVar34);

          uVar28 = _objc_retainAutoreleasedReturnValue();

          uVar20 = _NSSelectorFromString(&cf_getSelfContact);

          auVar44 = _objc_opt_respondsToSelector(uVar28,uVar20);

          if ((auVar44._0_8_ & 1) == 0) {

            auVar45._8_8_ = 0;

            auVar45._0_8_ = auVar44._8_8_;

            auVar45 = auVar45 << 0x40;

          }

          else {

            _objc_msgSend(uVar28,uVar20);

            auVar45 = _objc_retainAutoreleasedReturnValue();

          }

          uVar32 = auVar45._0_8_;

          FUN_002a6080(uVar32,auVar45._8_8_,&cf_m_nsNickName);

          auVar44 = _objc_retainAutoreleasedReturnValue();

          uVar20 = auVar44._0_8_;

          FUN_002a6080(uVar32,auVar44._8_8_,&cf_m_nsUsrName);

          uVar22 = _objc_retainAutoreleasedReturnValue();

          uVar23 = _objc_opt_class(&_OBJC_CLASS___NSString);

          uVar10 = _objc_opt_isKindOfClass(uVar20,uVar23);

          if ((uVar10 & 1) != 0) {

            auVar44 = FUN_00297fa0(uVar20);

            if (auVar44._0_8_ != 0) {

              FUN_002a00a0(uVar36,auVar44._8_8_,uVar20,&cf_name);

            }

          }

          lVar34 = _NSClassFromString(&cf_HeadImageMgr);

          if (lVar34 != 0) {

            uVar23 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar10 = _objc_opt_isKindOfClass(uVar22,uVar23);

            if (((uVar10 & 1) != 0) && (lVar14 = FUN_00297fa0(uVar22), lVar14 != 0)) {

              _objc_msgSend(uVar27,uVar19,lVar34);

              uVar19 = _objc_retainAutoreleasedReturnValue();

              uVar23 = _NSSelectorFromString(&cf_getHeadImage_);

              uVar10 = _objc_opt_respondsToSelector(uVar19,uVar23);

              if ((uVar10 & 1) == 0) {

                uVar23 = 0;

              }

              else {

                _objc_msgSend(uVar19,uVar23,uVar22);

                uVar23 = _objc_retainAutoreleasedReturnValue();

              }

              uVar24 = _objc_opt_class(&_OBJC_CLASS___UIImage);

              auVar44 = _objc_opt_isKindOfClass(uVar23,uVar24);

              if ((auVar44._0_8_ & 1) != 0) {

                FUN_002a00a0(uVar36,auVar44._8_8_,uVar23,&cf_image);

              }

              _objc_release(uVar23);

              _objc_release(uVar19);

            }

          }

          _objc_release(uVar22);

          _objc_release(uVar20);

          _objc_release(uVar32);

          _objc_release(uVar28);

        }

        _objc_release(uVar27);

        lVar14 = FUN_002937a0(uVar36);

        lVar34 = DAT_003eb298;

        DAT_003eb298 = lVar14;

        _objc_release(lVar34);

        lVar34 = DAT_003eb298;

        _objc_retain(DAT_003eb298);

        _objc_release(uVar36);

      }

      else {

        _objc_retain(DAT_003eb298);

      }

      FUN_002a5360(uVar16);

      pcVar25 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_retain();

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar44._0_8_,auVar44._8_8_,&cf_xzyHomeBottomBarProfileSubtitle);

      uVar36 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar44._0_8_);

      FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45c0(uVar36,auVar44._8_8_,auVar44._0_8_);

      pcVar26 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar1 = &cf___;

      if (pcVar26 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar26;

      }

      _objc_retain(pcVar1);

      _objc_release(uVar36);

      _objc_release(pcVar26);

      _objc_release(auVar44._0_8_);

      lVar14 = FUN_00297fa0(pcVar1);

      if (lVar14 == 0) {

        if (DAT_003eb2b0 != -1) {

          FUN_0028fbf8();

        }

        dVar40 = (double)_CACurrentMediaTime();

        pcVar26 = DAT_003eb2b8;

        if ((DAT_003eb2b8 == (cfstringStruct *)0x0) || (5.0 <= dVar40 - DAT_003eb2c0)) {

          DAT_003eb2c0 = dVar40;

          FUN_002944e0(DAT_003eb2a8,extraout_x1_24,&cf_CadisWeatherCache);

          uVar36 = _objc_retainAutoreleasedReturnValue();

          auVar44 = FUN_00293860();

          if (auVar44._0_8_ == 0) {

            if (60.0 < dVar40 - DAT_003eb2c8) {

              DAT_003eb2c8 = dVar40;

              thunk_FUN_00136efc();

            }

            pcVar33 = DAT_003eb2b8;

            pcVar26 = (cfstringStruct *)0x0;

            DAT_003eb2b8 = (cfstringStruct *)0x0;

          }

          else {

            FUN_00299540(uVar36,auVar44._8_8_,&cf_time);

            uVar27 = _objc_retainAutoreleasedReturnValue();

            dVar40 = (double)FUN_00294860();

            _objc_release(uVar27);

            FUN_002940e0(&_OBJC_CLASS___NSDate);

            uVar27 = _objc_retainAutoreleasedReturnValue();

            dVar39 = (double)FUN_002a51c0();

            bVar5 = DAT_003e72d0 != dVar40;

            _objc_release(uVar27);

            uVar27 = extraout_x1_25;

            if (bVar5 && 1800.0 < dVar39 - dVar40) {

              DAT_003e72d0 = dVar40;

              thunk_FUN_00136efc();

              uVar27 = extraout_x1_26;

            }

            FUN_00299540(uVar36,uVar27,&cf_city);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            pcVar33 = auVar44._0_8_;

            FUN_00299540(uVar36,auVar44._8_8_,&cf_temp);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            uVar27 = auVar44._0_8_;

            FUN_00299540(uVar36,auVar44._8_8_,&cf_desc);

            local_1a8 = _objc_retainAutoreleasedReturnValue();

            uVar28 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar10 = _objc_opt_isKindOfClass(pcVar33,uVar28);

            if ((uVar10 & 1) == 0) {

              _objc_release(pcVar33);

              pcVar33 = (cfstringStruct *)0x0;

            }

            uVar28 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar10 = _objc_opt_isKindOfClass(uVar27,uVar28);

            if ((uVar10 & 1) == 0) {

              _objc_release(uVar27);

              uVar27 = 0;

            }

            uVar28 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar10 = _objc_opt_isKindOfClass(local_1a8,uVar28);

            if ((uVar10 & 1) == 0) {

              _objc_release(local_1a8);

              local_1a8 = 0;

            }

            lVar14 = FUN_00297fa0(uVar27);

            pcVar29 = DAT_003eb2b8;

            if (lVar14 == 0) {

              pcVar26 = (cfstringStruct *)0x0;

              DAT_003eb2b8 = (cfstringStruct *)0x0;

            }

            else {

              FUN_002a4400(&_OBJC_CLASS___NSMutableString);

              pcVar29 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              auVar44 = FUN_00297fa0(pcVar33);

              uVar28 = auVar44._8_8_;

              if (auVar44._0_8_ != 0) {

                FUN_002919a0(pcVar29,uVar28,&cf___);

                uVar28 = extraout_x1_27;

              }

              FUN_002919a0(pcVar29,uVar28,&cf__);

              auVar44 = FUN_00297fa0(local_1a8);

              if (auVar44._0_8_ != 0) {

                FUN_002919a0(pcVar29,auVar44._8_8_,&cf___);

              }

              pcVar30 = (cfstringStruct *)FUN_002937a0(pcVar29);

              pcVar26 = DAT_003eb2b8;

              DAT_003eb2b8 = pcVar30;

              _objc_release(pcVar26);

              pcVar26 = DAT_003eb2b8;

              _objc_retain(DAT_003eb2b8);

            }

            _objc_release(pcVar29);

            _objc_release(local_1a8);

            _objc_release(uVar27);

          }

          _objc_release(pcVar33);

          _objc_release(uVar36);

        }

        else {

          _objc_retain(DAT_003eb2b8);

        }

        pcVar33 = pcVar25;

        if (pcVar26 != (cfstringStruct *)0x0) {

          pcVar33 = pcVar26;

        }

        _objc_retain(pcVar33);

        _objc_release(pcVar26);

      }

      else {

        _objc_retain(pcVar1);

        pcVar33 = pcVar1;

      }

      _objc_release(pcVar1);

      _objc_release(pcVar25);

      FUN_002a1b20(uVar16,extraout_x1_28,pcVar33);

      _objc_release(pcVar33);

      FUN_00299540(lVar34,extraout_x1_29,&cf_name);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      lVar14 = auVar44._0_8_;

      if (lVar14 == 0) {

        FUN_002a5360(uVar16);

        auVar44 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a1f60(uVar16,auVar44._8_8_,auVar44._0_8_);

      if (lVar14 == 0) {

        _objc_release(auVar44._0_8_);

      }

      _objc_release(lVar14);

      if ((DAT_003eb269 & 1) == 0) {

        FUN_00299540(lVar34,extraout_x1_30,&cf_image);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar14 != 0) {

          FUN_00299540(lVar34,extraout_x1_31,&cf_image);

          auVar44 = _objc_retainAutoreleasedReturnValue();

          FUN_00296620(auVar44._0_8_,auVar44._8_8_,1);

          auVar46 = _objc_retainAutoreleasedReturnValue();

          FUN_0029ec00(uVar16,auVar46._8_8_,auVar46._0_8_);

          _objc_release(auVar46._0_8_);

          _objc_release(auVar44._0_8_);

          FUN_0029eb60(0x4040000000000000,uVar16);

        }

      }

      bVar3 = DAT_003eb428;

      auVar44 = FUN_002365b0();

      FUN_002a5e60(param_6,auVar44._8_8_,uVar9,uVar11,uVar16,local_180,bVar3,auVar44._0_8_);

      _objc_release(pcVar25);

      _objc_release(lVar34);

      _objc_release(uVar16);

      _objc_release(uVar12);

      _objc_release(uVar11);

      _objc_release(ppuVar15);

      _objc_release(uVar9);

      _objc_release(lVar13);

      _objc_release(param_6);

      _objc_release(param_5);

      FUN_002925e0(param_5,extraout_x1_32,param_6);

      goto LAB_00247820;

    }

    FUN_0029bb60(param_5);

    dVar41 = 60.0;

    if (cVar4 == '\0') {

      dVar41 = 50.0;

    }

    FUN_0029e5e0(0x4032000000000000,((dVar40 - param_3) - dVar41) * 0.5,dVar39 + -36.0,param_6);

    _objc_retain(param_5);

    _objc_retain(param_6);

    FUN_002a62a0(param_6,extraout_x1_09,&DAT_0000238d);

    auVar44 = _objc_retainAutoreleasedReturnValue();

    lVar13 = auVar44._0_8_;

    FUN_002a62a0(param_6,auVar44._8_8_,&DAT_0000238e);

    lVar34 = _objc_retainAutoreleasedReturnValue();

    if ((lVar13 != 0) && (lVar34 != 0)) {

      FUN_002925a0(param_6);

      dVar39 = (double)_CGRectGetHeight();

      dVar40 = 60.0;

      if (DAT_003eb290 == '\0') {

        dVar40 = 50.0;

      }

      if (dVar39 <= dVar40) {

        dVar40 = dVar39;

      }

      FUN_002925a0(param_6);

      dVar41 = (double)_CGRectGetWidth();

      dVar41 = (dVar41 - dVar40) + -10.0;

      if (dVar41 <= 44.0) {

        dVar41 = 44.0;

      }

      FUN_0029e5e0(0,0,dVar41,dVar39,lVar13);

      FUN_00295600(lVar13);

      dVar41 = (double)_CGRectGetMaxX();

      FUN_0029e5e0(dVar41 + 10.0,0,dVar40,dVar40,lVar34);

      FUN_002318f4(param_5);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      if (lVar14 == 0) {

        lVar35 = 0;

LAB_0024615c:

        FUN_00297be0(param_5);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        lVar17 = FUN_00293860();

        _objc_release(uVar9);

        if (lVar17 <= lVar35) goto LAB_00246188;

      }

      else {

        lVar35 = FUN_0029c2c0(lVar14);

        if (-1 < lVar35) goto LAB_0024615c;

LAB_00246188:

        lVar35 = 0;

      }

      FUN_00297be0(param_5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      lVar17 = FUN_00293860();

      _objc_release(uVar9);

      bVar3 = DAT_003eb269;

      FUN_002365b0();

      FUN_00237604();

      auVar44 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar44._8_8_,&cf___);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar44._0_8_);

      if (DAT_003e7268 == '\x01') {

        FUN_0023aa8c(param_5);

        uVar11 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        uVar11 = 0;

      }

      FUN_002925a0(param_6);

      _CGRectGetWidth();

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_15,&cf__ld__ld________d__d__d___1f___1f___1f)

      ;

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(param_6,PTR_LOOP_003e72b8);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_00297820(auVar44._0_8_,auVar44._8_8_,uVar12);

      if ((uVar10 & 1) == 0) {

        _objc_setAssociatedObject(param_6,PTR_LOOP_003e72b8,uVar12,3);

        FUN_002a1f80(lVar13,extraout_x1_16,uVar9,0);

        FUN_002a4ac0(0x402e000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00388420,

                     &_OBJC_CLASS___UIFont);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a53a0(lVar13);

        auVar46 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e520(auVar46._0_8_,auVar46._8_8_,uVar16);

        _objc_release(auVar46._0_8_);

        _objc_release(uVar16);

        FUN_0029d660(lVar13,extraout_x1_17,1);

        FUN_0029d640(0,0x4034000000000000,0,0x4030000000000000,lVar13);

        FUN_0029ec40(0,0,0,0x4010000000000000,lVar13);

        FUN_00297e40(lVar13);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(dVar39 * 0.5);

        _objc_release(uVar16);

        FUN_00297e40(lVar13);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0e0(0);

        _objc_release(uVar16);

        FUN_00293060(0x3ff0000000000000,0x3fed70a3d70a3d71,&_OBJC_CLASS___UIColor);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00293060(0x3fb999999999999a,0x3fed70a3d70a3d71,&_OBJC_CLASS___UIColor);

        uVar36 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar16,uVar36);

        auVar46 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(lVar13,auVar46._8_8_,auVar46._0_8_);

        _objc_release(auVar46._0_8_);

        _objc_release(uVar36);

        _objc_release(uVar16);

        FUN_00293060(0x3fc70a3d70a3d70a,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00293060(0x3fed70a3d70a3d71,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        uVar36 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar16,uVar36);

        auVar46 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1fc0(lVar13,auVar46._8_8_,auVar46._0_8_,0);

        _objc_release(auVar46._0_8_);

        _objc_release(uVar36);

        _objc_release(uVar16);

        if (bVar3 == 0) {

LAB_002464ec:

          FUN_0023720c(0x4035000000000000,&cf_magnifyingglass,4);

          auVar46 = _objc_retainAutoreleasedReturnValue();

          uVar36 = auVar46._8_8_;

          lVar21 = auVar46._0_8_;

          uVar16 = 0;

          if (lVar21 != 0) goto LAB_00246514;

        }

        else {

          FUN_00236cac(&cf_icons_filled_search);

          lVar21 = _objc_retainAutoreleasedReturnValue();

          if (lVar21 == 0) goto LAB_002464ec;

LAB_00246514:

          dVar39 = DAT_003e7250;

          _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

          dVar39 = dVar39 * 0.6;

          uVar36 = FUN_00296e00(dVar39,dVar39);

          local_120 = PTR___NSConcreteStackBlock_003886f0;

          local_118 = 0xc2000000;

          local_110 = FUN_002491b8;

          puStack_108 = &DAT_0038f988;

          _objc_retain(lVar21);

          local_100 = lVar21;

          local_f8 = dVar39;

          FUN_00296560(uVar36,extraout_x1_18,&local_120);

          uVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar21);

          _objc_release(local_100);

          _objc_release(uVar36);

          uVar36 = extraout_x1_19;

        }

        FUN_0029ec20(lVar13,uVar36,uVar16,0);

        FUN_00292400(&_OBJC_CLASS___UIColor);

        uVar36 = _objc_retainAutoreleasedReturnValue();

        FUN_002a64a0(&_OBJC_CLASS___UIColor);

        uVar27 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar36,uVar27);

        auVar46 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1f40(lVar13,auVar46._8_8_,auVar46._0_8_);

        _objc_release(auVar46._0_8_);

        _objc_release(uVar27);

        _objc_release(uVar36);

        FUN_00297e40(lVar34);

        uVar36 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(dVar40 * 0.5);

        _objc_release(uVar36);

        FUN_00297e40(lVar34);

        uVar36 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0e0(0);

        _objc_release(uVar36);

        FUN_00292080(lVar13);

        auVar46 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(lVar34,auVar46._8_8_,auVar46._0_8_);

        _objc_release(auVar46._0_8_);

        if ((bVar3 == 0) || (lVar17 <= lVar35)) {

LAB_002466e8:

          FUN_0023758c(lVar35,lVar17);

          uVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_0023720c(0x4036000000000000,uVar36,6);

          lVar21 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar36);

          if (lVar21 != 0) goto LAB_0024672c;

          uVar27 = 0;

          uVar36 = extraout_x1_20;

        }

        else {

          FUN_0023b714(lVar35,1);

          uVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_00236cac();

          lVar21 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar36);

          if (lVar21 == 0) goto LAB_002466e8;

LAB_0024672c:

          dVar40 = DAT_003e7250;

          _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

          dVar40 = dVar40 * 0.6;

          uVar36 = FUN_00296e00(dVar40,dVar40);

          local_170 = PTR___NSConcreteStackBlock_003886f0;

          lStack_168 = 0xc2000000;

          local_160 = FUN_002491d4;

          puStack_158 = &DAT_0038f988;

          _objc_retain(lVar21);

          local_150 = lVar21;

          dStack_148 = dVar40;

          FUN_00296560(uVar36,extraout_x1_21,&local_170);

          uVar27 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar21);

          _objc_release(local_150);

          _objc_release(uVar36);

          uVar36 = extraout_x1_22;

        }

        FUN_0029ec20(lVar34,uVar36,uVar27,0);

        FUN_002a5320(lVar13);

        auVar46 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1f40(lVar34,auVar46._8_8_,auVar46._0_8_);

        _objc_release(auVar46._0_8_);

        FUN_0023966c(lVar34,uVar11,1);

        _objc_release(uVar27);

        _objc_release(uVar16);

      }

      _objc_release(auVar44._0_8_);

      _objc_release(uVar12);

      _objc_release(uVar11);

      _objc_release(uVar9);

      _objc_release(lVar14);

    }

    _objc_release(lVar34);

    _objc_release(lVar13);

    _objc_release(param_6);

    _objc_release(param_5);

    FUN_002925e0(param_5,extraout_x1_23,param_6);

    goto LAB_00247820;

  }

  FUN_0029bb60(param_5);

  bVar3 = DAT_003eb428;

  FUN_0029d4a0(param_5,extraout_x1_02,0);

  dVar41 = 0.0;

  if (bVar3 == 0) {

    dVar41 = 18.0;

  }

  dVar42 = ((dVar40 - param_3) + -62.0) - dVar41;

  dVar40 = dVar40 - (dVar41 + 80.0);

  if (dVar42 <= dVar40) {

    dVar40 = dVar42;

  }

  dVar41 = -20.0;

  if (-20.0 <= dVar40 + -20.0) {

    dVar41 = dVar40 + -20.0;

  }

  FUN_0029e5e0(0x403c000000000000,dVar41,dVar39 + -56.0,param_6);

  _objc_retain(param_5);

  _objc_retain(param_6);

  FUN_002925a0(param_6);

  dVar40 = (double)_CGRectGetWidth();

  FUN_002925a0(param_6);

  dVar39 = (double)_CGRectGetHeight();

  if ((0.0 < dVar40) && (0.0 < dVar39)) {

    FUN_00297be0(param_5);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    lVar34 = FUN_00293860();

    _objc_release(uVar9);

    lVar13 = lVar34;

    if (3 < lVar34) {

      lVar13 = 4;

    }

    _objc_getAssociatedObject(param_6,PTR_LOOP_003e72d8);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (lVar14 == 0) {

LAB_0024702c:

      FUN_002318f4(param_5);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar44._8_8_;

      local_1a0 = auVar44._0_8_;

      if (local_1a0 == 0) {

        local_180 = 0;

      }

      else {

        auVar44 = FUN_0029c2c0();

        uVar9 = auVar44._8_8_;

        local_180 = 0;

        if (auVar44._0_8_ < 4) {

          local_180 = auVar44._0_8_;

        }

      }

      FUN_002a62a0(param_6,uVar9,&DAT_00002454);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      lVar35 = auVar44._0_8_;

      FUN_002a62a0(param_6,auVar44._8_8_,&DAT_00002455);

      lVar17 = _objc_retainAutoreleasedReturnValue();

      if ((lVar35 != 0) && (lVar17 != 0)) {

        uVar9 = 0x4049000000000000;

        if (DAT_003eb428 == 0) {

          uVar9 = 0x4051000000000000;

        }

        FUN_0029e5e0(0,0x4034000000000000,dVar40,uVar9,lVar35);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(lVar35,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        FUN_00297e40(lVar35);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(0x4010000000000000);

        _objc_release(uVar9);

        FUN_00297e40(lVar35);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

        _objc_release(auVar44._0_8_);

        FUN_00292400(&_OBJC_CLASS___UIColor);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        uVar11 = FUN_00290a20();

        FUN_00297e40(lVar35);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1460(auVar44._0_8_,auVar44._8_8_,uVar11);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar9);

        FUN_00297e40(lVar35);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14a0(0x3dcccccd);

        _objc_release(uVar9);

        FUN_00297e40(lVar35);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14e0(0x4024000000000000);

        _objc_release(uVar9);

        FUN_00297e40(lVar35);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1480(0,0x4010000000000000);

        _objc_release(uVar9);

        _objc_retain(lVar35);

        FUN_002a62a0(lVar35,extraout_x1_34,&DAT_00002456);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        uVar9 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

        uVar10 = _objc_opt_isKindOfClass(uVar11,uVar9);

        uVar9 = uVar11;

        if ((uVar10 & 1) == 0) {

          auVar44 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

          uVar9 = FUN_00296b00(auVar44._0_8_,auVar44._8_8_,0);

          _objc_release(uVar11);

          FUN_002a1c80(uVar9,extraout_x1_35,&DAT_00002456);

          FUN_002a23c0(uVar9,extraout_x1_36,0);

          FUN_0029ce00(uVar9,extraout_x1_37,0x12);

          FUN_00297100(lVar35,extraout_x1_38,uVar9,0);

        }

        FUN_0024906c(uVar9);

        _objc_release(lVar35);

        FUN_002925a0(lVar35);

        FUN_0029e5e0(uVar9);

        FUN_00297e40(uVar9);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(0x4010000000000000);

        _objc_release(uVar11);

        FUN_00297e40(uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar44._0_8_,auVar44._8_8_,1);

        _objc_release(auVar44._0_8_);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_00293640(uVar9);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(auVar44._0_8_,auVar44._8_8_,uVar11);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        FUN_002a27e0(lVar17,extraout_x1_39,param_5);

        FUN_002a2800(lVar17,extraout_x1_40,0xfffffffffffffffe);

        FUN_0029e5e0(dVar40 * 0.5 + -33.0,0x4010000000000000,0x4050800000000000,0x4050800000000000,

                     lVar17);

        FUN_00297e40(lVar17);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(0x4040800000000000);

        _objc_release(uVar11);

        FUN_00297e40(lVar17);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar44._0_8_,auVar44._8_8_,0);

        _objc_release(auVar44._0_8_);

        FUN_00292400(&_OBJC_CLASS___UIColor);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        uVar12 = FUN_00290a20();

        FUN_00297e40(lVar17);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1460(auVar44._0_8_,auVar44._8_8_,uVar12);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        FUN_00297e40(lVar17);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14a0(0x3e3851ec);

        _objc_release(uVar11);

        FUN_00297e40(lVar17);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14e0(0x402a000000000000);

        _objc_release(uVar11);

        FUN_00297e40(lVar17);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1480(0,0x401c000000000000);

        _objc_release(uVar11);

        FUN_00297e40(lVar17);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a2860(0x4018000000000000);

        _objc_release(uVar11);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(lVar17,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        FUN_00248c6c(lVar17);

        _objc_unsafeClaimAutoreleasedReturnValue();

        FUN_002a64a0(&_OBJC_CLASS___UIColor);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1f40(lVar17,auVar44._8_8_,auVar44._0_8_);

        _objc_release(auVar44._0_8_);

        FUN_0023c784();

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ec20(lVar17,auVar44._8_8_,auVar44._0_8_,0);

        _objc_release(auVar44._0_8_);

        FUN_002a1f80(lVar17,extraout_x1_41,0,0);

        FUN_0023966c(lVar17,0,1);

        lVar21 = 0;

        while( true ) {

          auVar44 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003bef38);

          if (auVar44._0_8_ <= lVar21) break;

          FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bef38,auVar44._8_8_,lVar21);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          lVar18 = FUN_002974a0();

          _objc_release(uVar11);

          FUN_002a62a0(param_6,extraout_x1_42,&UNK_0000245e + lVar18);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          uVar12 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

          auVar44 = _objc_opt_isKindOfClass(uVar11,uVar12);

          if ((auVar44._0_8_ & 1) != 0) {

            FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bef50,auVar44._8_8_,lVar21);

            uVar12 = _objc_retainAutoreleasedReturnValue();

            dVar39 = (double)FUN_00294860();

            _objc_release(uVar12);

            FUN_0029e5e0((dVar40 * (dVar39 + 0.5)) / 5.0 + -24.0,0x4035000000000000,

                         0x4048000000000000,0x4048000000000000,uVar11);

            FUN_0023ca14(uVar11,param_5,lVar18,local_180,lVar13);

          }

          _objc_release(uVar11);

          lVar21 = lVar21 + 1;

        }

        FUN_002444e4(param_6,lVar13,DAT_003eb428);

        uVar11 = extraout_x1_43;

        if ((DAT_003eb428 & 1) == 0) {

          lVar21 = 0;

          while( true ) {

            auVar44 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003bef38);

            uVar11 = auVar44._8_8_;

            if (auVar44._0_8_ <= lVar21) break;

            FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bef38,uVar11,lVar21);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            lVar18 = FUN_002974a0();

            _objc_release(uVar11);

            if (lVar18 < lVar13) {

              FUN_002a62a0(param_6,extraout_x1_47,&UNK_0000245e + lVar18);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              uVar12 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

              uVar10 = _objc_opt_isKindOfClass(uVar11,uVar12);

              if ((uVar10 & 1) != 0) {

                FUN_00244c70(param_6,lVar18);

                auVar44 = _objc_retainAutoreleasedReturnValue();

                FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bef50,auVar44._8_8_,lVar21);

                uVar12 = _objc_retainAutoreleasedReturnValue();

                dVar39 = (double)FUN_00294860();

                _objc_release(uVar12);

                FUN_00295600(uVar11);

                dVar41 = (double)_CGRectGetMaxY();

                FUN_0029e5e0((dVar40 * (dVar39 + 0.5)) / 5.0 + -40.0,dVar41 + 2.0,0x4054000000000000

                             ,0x402c000000000000,auVar44._0_8_);

                _objc_release(auVar44._0_8_);

              }

              _objc_release(uVar11);

            }

            lVar21 = lVar21 + 1;

          }

        }

        FUN_002925e0(param_6,uVar11,lVar17);

        FUN_002365b0();

        FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_44,lVar13);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar10 = auVar44._8_8_;

        uVar11 = auVar44._0_8_;

        if (0 < lVar34) {

          lVar34 = 0;

          do {

            if (DAT_003e7268 == '\x01') {

              FUN_00239d20(lVar34,param_5);

              auVar46 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              auVar46._8_8_ = 0;

              auVar46._0_8_ = uVar10;

              auVar46 = auVar46 << 0x40;

            }

            pcVar25 = auVar46._0_8_;

            pcVar1 = &cf__;

            if (pcVar25 != (cfstringStruct *)0x0) {

              pcVar1 = pcVar25;

            }

            FUN_00291240(uVar11,auVar46._8_8_,pcVar1);

            _objc_release(pcVar25);

            lVar34 = lVar34 + 1;

            uVar10 = extraout_x1_45;

          } while (lVar13 != lVar34);

        }

        puVar2 = PTR_LOOP_003e72d8;

        FUN_00293240(uVar11,uVar10,&cf__);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar44._8_8_,&cf__ld___1f___1f__ld__d__d___);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_6,puVar2,uVar12,3);

        _objc_release(uVar12);

        _objc_release(auVar44._0_8_);

        _objc_release(uVar11);

        _objc_release(uVar9);

      }

    }

    else {

      uVar9 = _objc_opt_class(&_OBJC_CLASS___NSString);

      auVar44 = _objc_opt_isKindOfClass(lVar14,uVar9);

      if ((auVar44._0_8_ & 1) == 0) goto LAB_0024702c;

      FUN_00293280(lVar14,auVar44._8_8_,&cf__);

      local_1a0 = _objc_retainAutoreleasedReturnValue();

      auVar44 = FUN_00293860();

      if (auVar44._0_8_ < 6) {

LAB_00247024:

        _objc_release(local_1a0);

        goto LAB_0024702c;

      }

      FUN_00299500(local_1a0,auVar44._8_8_,1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      fVar37 = (float)FUN_00295480();

      _objc_release(uVar9);

      FUN_00299500(local_1a0,extraout_x1_03,2);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      fVar38 = (float)FUN_00295480();

      _objc_release(uVar9);

      FUN_00299500(local_1a0,extraout_x1_04,3);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      lVar35 = FUN_002974a0();

      _objc_release(uVar9);

      FUN_00299500(local_1a0,extraout_x1_05,4);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002924e0();

      _objc_release(uVar9);

      FUN_00299500(local_1a0,extraout_x1_06,5);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar7 = FUN_002924e0();

      _objc_release(uVar9);

      uVar8 = FUN_002365b0();

      if ((((0.5 <= ABS((double)fVar37 - dVar40)) || (0.5 <= ABS((double)fVar38 - dVar39))) ||

          (lVar35 != lVar13)) || ((((uVar6 ^ uVar8) & 1) != 0 || (DAT_003eb428 != uVar7))))

      goto LAB_00247024;

      if (DAT_003e7268 == '\x01') {

        FUN_00297be0(param_5);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        lVar35 = FUN_00293860();

        _objc_release(uVar9);

        if ((0 < lVar34) && (lVar13 <= lVar35)) {

          lVar35 = 0;

          do {

            FUN_00297be0(param_5);

            auVar44 = _objc_retainAutoreleasedReturnValue();

            FUN_00299500(auVar44._0_8_,auVar44._8_8_,lVar35);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002920c0();

            pcVar25 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            pcVar1 = &cf___;

            if (pcVar25 != (cfstringStruct *)0x0) {

              pcVar1 = pcVar25;

            }

            _objc_retain(pcVar1);

            _objc_release(pcVar25);

            _objc_release(uVar9);

            _objc_release(auVar44._0_8_);

            auVar44 = FUN_00293860(local_1a0);

            pcVar25 = &cf__;

            if (lVar35 < auVar44._0_8_ + -6) {

              FUN_00299500(local_1a0,auVar44._8_8_,lVar35 + 6);

              pcVar25 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            }

            auVar46 = FUN_00297fa0(pcVar1);

            auVar44._8_8_ = auVar46._8_8_;

            auVar44._0_8_ = &cf___;

            if (auVar46._0_8_ != 0) {

              FUN_0023898c(pcVar1);

              auVar44 = _objc_retainAutoreleasedReturnValue();

            }

            uVar10 = FUN_00297820(auVar44._0_8_,auVar44._8_8_,pcVar25);

            if ((uVar10 & 1) == 0) {

              FUN_00239d20(lVar35,param_5);

              pcVar33 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar26 = &cf__;

              if (pcVar33 != (cfstringStruct *)0x0) {

                pcVar26 = pcVar33;

              }

              _objc_retain(pcVar26);

              _objc_release(pcVar33);

              uVar6 = FUN_00297820(pcVar26,extraout_x1_07,pcVar25);

              uVar6 = uVar6 ^ 1;

              _objc_release(pcVar26);

            }

            else {

              uVar6 = 0;

            }

            _objc_release(auVar44._0_8_);

            _objc_release(pcVar25);

            _objc_release(pcVar1);

            lVar35 = lVar35 + 1;

          } while ((lVar35 < lVar13) && ((uVar6 & 1) == 0));

          if ((uVar6 & 1) != 0) goto LAB_00247024;

        }

      }

      FUN_002318f4(param_5);

      auVar44 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar44._8_8_;

      lVar35 = auVar44._0_8_;

      if (lVar35 == 0) {

        uVar10 = 0;

      }

      else {

        auVar44 = FUN_0029c2c0(lVar35);

        uVar9 = auVar44._8_8_;

        uVar10 = 0;

        if (auVar44._0_8_ < 4) {

          uVar10 = auVar44._0_8_;

        }

      }

      FUN_00299500(local_1a0,uVar9,0);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar31 = FUN_002974a0();

      _objc_release(uVar9);

      if (uVar31 != uVar10) {

        _objc_release(lVar35);

        goto LAB_00247024;

      }

      FUN_002a62a0(param_6,extraout_x1_33,&DAT_00002455);

      lVar17 = _objc_retainAutoreleasedReturnValue();

      uVar9 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

      auVar44 = _objc_opt_isKindOfClass(lVar17,uVar9);

      if ((auVar44._0_8_ & 1) != 0) {

        FUN_002925e0(param_6,auVar44._8_8_,lVar17);

      }

    }

    _objc_release(lVar17);

    _objc_release(lVar35);

    _objc_release(local_1a0);

    _objc_release(lVar14);

  }

  _objc_release(param_6);

  _objc_release(param_5);

  FUN_002925e0(param_5,extraout_x1_46,param_6);

LAB_00247820:

  _objc_release(param_6);

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_a0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




