// FUN_016a01ac @ 016a01ac

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016a01ac(undefined8 ************param_1,undefined8 param_2)

{
  double dVar1;
  bool bVar2;
  undefined8 ************ppppppppppppuVar3;
  undefined8 ***********pppppppppppuVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ************ppppppppppppuVar8;
  undefined8 ************ppppppppppppuVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint local_aa8;
  undefined *local_9d0;
  undefined *local_9a8;
  double local_998;
  uint local_988;
  undefined8 ************local_818;
  undefined8 ************local_7f8;
  double local_7a8;
  double local_778;
  double local_750;
  byte local_698;
  double local_678;
  undefined8 ************local_638;
  undefined8 ************local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double local_460;
  double dStack_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double dStack_418;
  undefined8 ************local_410;
  undefined8 ************local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  double dStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  double local_3d0;
  double dStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  double local_3b0;
  double dStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  double local_390;
  double local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  double local_358;
  double local_350;
  byte local_341;
  undefined *local_340;
  byte local_331;
  undefined *local_330;
  double local_328;
  double local_320;
  byte local_311;
  undefined *local_310;
  byte local_301;
  undefined *local_300;
  undefined *local_2f8;
  double local_2f0;
  double local_2e8;
  byte local_2da;
  byte local_2d9;
  undefined8 ************local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined8 ************local_288;
  undefined8 ************local_280;
  undefined1 local_271;
  double local_270;
  undefined8 uStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined8 uStack_228;
  double local_220;
  double dStack_218;
  double local_208;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  byte local_1ba;
  byte local_1b9;
  undefined8 ************local_1b8;
  byte local_1a9;
  undefined8 ************local_1a8;
  byte local_199;
  undefined8 ************local_198;
  byte local_189;
  undefined8 ************local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  byte local_161;
  ulong local_160;
  double local_158;
  double local_150;
  byte local_141;
  undefined8 ************local_140;
  byte local_131;
  undefined8 ************local_130;
  byte local_121;
  undefined8 ************local_120;
  byte local_111;
  undefined8 ************local_110;
  double local_108;
  undefined8 ************local_100;
  undefined8 ************local_f8;
  undefined8 ************local_f0;
  undefined8 ************local_e8;
  undefined8 ************local_e0;
  undefined8 ************local_d8;
  undefined8 ************local_d0;
  undefined8 ************local_c8;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  undefined8 ***********local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 ************local_98;
  undefined8 ************local_90;
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  undefined8 ************local_80;
  int local_74;
  undefined8 ************local_70 [3];
  undefined1 local_51;
  undefined8 ************local_50;
  undefined8 local_48;
  undefined8 ************local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  dVar13 = DAT_02323da8;
  dVar19 = DAT_02323d38;
  dVar1 = DAT_02323c70;
  dVar21 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar16 = DAT_02323c68;
  local_48 = param_2;
  local_40 = param_1;
  FUN_016a9384();
  if (((ulong)param_1 & 1) != 0) {
    (*DAT_028e3d90)(local_40,local_48);
    goto LAB_016a39bc;
  }
  (*DAT_028e3d90)(local_40,local_48);
  ppppppppppppuVar3 = local_40;
  FUN_016b5d90();
  _objc_retainAutoreleasedReturnValue();
  local_50 = ppppppppppppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (ppppppppppppuVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatEnhanceEnabled);
  _objc_retainAutoreleasedReturnValue();
  ppppppppppppuVar8 = ppppppppppppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
  local_51 = SUB81(ppppppppppppuVar8,0);
  if ((((ulong)ppppppppppppuVar8 & 1) == 0) ||
     (ppppppppppppuVar3 = local_40, FUN_016b6d24(), ((ulong)ppppppppppppuVar3 & 1) != 0)) {
    ppppppppppppuVar3 = local_40;
    FUN_016adc54();
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = ppppppppppppuVar3;
    if (ppppppppppppuVar3 != (undefined8 ************)0x0) {
      FUN_016b3fe8(ppppppppppppuVar3,1);
    }
    FUN_016b70e8(local_40,0,0);
    FUN_016b4420(local_40,0);
    local_74 = 1;
    _objc_storeStrong(local_70,0);
  }
  else {
    ppppppppppppuVar3 = local_40;
    FUN_016b7284();
    _objc_retainAutoreleasedReturnValue();
    local_80 = ppppppppppppuVar3;
    if ((ppppppppppppuVar3 == (undefined8 ************)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (ppppppppppppuVar3,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
       ((ulong)ppppppppppppuVar3 & 1) == 0)) {
      local_74 = 1;
    }
    else {
      ppppppppppppuVar3 = local_40;
      FUN_016b742c(local_40,local_80);
      local_81 = (byte)ppppppppppppuVar3;
      ppppppppppppuVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatOnlyEmoticonEnabled);
      _objc_retainAutoreleasedReturnValue();
      ppppppppppppuVar8 = ppppppppppppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
      local_82 = (byte)ppppppppppppuVar8;
      ppppppppppppuVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatOnlyFileEnabled);
      _objc_retainAutoreleasedReturnValue();
      ppppppppppppuVar8 = ppppppppppppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
      local_83 = (byte)ppppppppppppuVar8;
      ppppppppppppuVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatUseImage);
      _objc_retainAutoreleasedReturnValue();
      ppppppppppppuVar8 = ppppppppppppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
      local_84 = (byte)ppppppppppppuVar8;
      ppppppppppppuVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatButtonShadowAlpha);
      _objc_retainAutoreleasedReturnValue();
      ppppppppppppuVar8 = ppppppppppppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
      local_638 = ppppppppppppuVar8;
      if ((local_84 & 1) != 0) {
        local_638 = (undefined8 ************)0x0;
      }
      local_98 = local_638;
      ppppppppppppuVar3 = local_50;
      local_90 = ppppppppppppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatImageAlphaLight);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
      ppppppppppppuVar3 = local_50;
      local_a0 = dVar16;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatImageAlphaDark);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      local_a8 = dVar16;
      FUN_0169b20c();
      if (((ulong)ppppppppppppuVar3 & 1) == 0) {
        local_678 = local_a0;
      }
      else {
        local_678 = local_a8;
      }
      local_b0 = local_678;
      if (local_678 < 0.0) {
        local_b0 = 0.0;
      }
      if (1.0 < local_b0) {
        local_b0 = 1.0;
      }
      local_778 = local_b0;
      if (((local_82 & 1) != 0) || ((local_83 & 1) != 0)) {
        local_b8 = (undefined8 ************)0x0;
        ppppppppppppuVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
        if (((ulong)ppppppppppppuVar3 & 1) != 0) {
          ppppppppppppuVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_messageWrap_0269d070);
          _objc_retainAutoreleasedReturnValue();
          pppppppppppuVar4 = local_b8;
          local_b8 = ppppppppppppuVar3;
          (*(code *)PTR__objc_release_02578630)(pppppppppppuVar4);
        }
        local_b9 = false;
        if (local_b8 != (undefined8 ************)0x0) {
          pppppppppppuVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_m_uiMessageType_0269d0a8);
          local_b9 = (int)pppppppppppuVar4 == 0x2f;
        }
        ppppppppppppuVar3 = local_40;
        FUN_016ada98();
        local_698 = 1;
        if (((ulong)ppppppppppppuVar3 & 1) == 0) {
          pppppppppppuVar4 = local_b8;
          FUN_016ae5fc();
          local_698 = (byte)pppppppppppuVar4;
        }
        local_ba = local_698 & 1;
        if ((((local_82 & 1) == 0) || (local_bb = 1, (local_b9 & 1) == 0)) &&
           (local_bb = 0, (local_83 & 1) != 0)) {
          local_bb = local_ba;
        }
        if (local_bb == 0) {
          ppppppppppppuVar3 = local_40;
          FUN_016adc54();
          _objc_retainAutoreleasedReturnValue();
          local_c8 = ppppppppppppuVar3;
          if (ppppppppppppuVar3 != (undefined8 ************)0x0) {
            FUN_016b3fe8(ppppppppppppuVar3,1);
          }
          FUN_016b70e8(local_40,local_83 & 1,0);
          FUN_016b4420(local_40,0);
          local_74 = 1;
          _objc_storeStrong(&local_c8,0);
        }
        else {
          local_74 = 0;
        }
        ppppppppppppuVar3 = &local_b8;
        _objc_storeStrong(ppppppppppppuVar3,0);
        if (local_74 != 0) goto LAB_016a39a0;
      }
      FUN_016b7698();
      local_d0 = ppppppppppppuVar3;
      if ((ppppppppppppuVar3 != (undefined8 ************)0x0) &&
         (ppppppppppppuVar8 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_80,PTR_s_isKindOfClass__0269cd68,ppppppppppppuVar3),
         ppppppppppppuVar3 = local_80, ((ulong)ppppppppppppuVar8 & 1) != 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = ppppppppppppuVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (ppppppppppppuVar3,PTR_s_valueForKey__0269d128,&cf_parentModel);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = ppppppppppppuVar3;
        if (ppppppppppppuVar3 == (undefined8 ************)0x0) {
LAB_016a0d54:
          local_74 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (ppppppppppppuVar3,PTR_s_valueForKey__0269d128,&cf_subViewModels);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = ppppppppppppuVar3;
          if (((ppppppppppppuVar3 == (undefined8 ************)0x0) ||
              ((*(code *)PTR__objc_msgSend_02578628)(ppppppppppppuVar3,PTR_s_count_0269cfe0),
              ppppppppppppuVar3 < (undefined8 ************)((long)&MACH_HEADER.magic + 2))) ||
             (ppppppppppppuVar3 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_indexOfObject__0269e870,local_d8),
             ppppppppppppuVar3 == (undefined8 ************)0x0)) {
            local_74 = 0;
          }
          else {
            ppppppppppppuVar3 = local_40;
            FUN_016adc54();
            _objc_retainAutoreleasedReturnValue();
            local_f0 = ppppppppppppuVar3;
            if (ppppppppppppuVar3 != (undefined8 ************)0x0) {
              FUN_016b3fe8(ppppppppppppuVar3,1);
            }
            FUN_016b70e8(local_40,local_83 & 1,0);
            FUN_016b4420(local_40,0);
            local_74 = 1;
            _objc_storeStrong(&local_f0,0);
          }
          _objc_storeStrong(&local_e8,0);
          if (local_74 == 0) goto LAB_016a0d54;
        }
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
        if (local_74 != 0) goto LAB_016a39a0;
      }
      ppppppppppppuVar3 = local_40;
      FUN_016adc54();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = ppppppppppppuVar3;
      if (ppppppppppppuVar3 == (undefined8 ************)0x0) {
        local_74 = 1;
      }
      else {
        ppppppppppppuVar3 = local_40;
        _objc_getAssociatedObject(local_40,&DAT_028e3ebb);
        _objc_retainAutoreleasedReturnValue();
        ppppppppppppuVar8 = local_40;
        local_100 = ppppppppppppuVar3;
        FUN_016b770c();
        _objc_retainAutoreleasedReturnValue();
        ppppppppppppuVar3 = ppppppppppppuVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = false;
        if (ppppppppppppuVar3 != (undefined8 ************)0x0) {
          ppppppppppppuVar3 = local_40;
          FUN_016b7790();
          bVar2 = false;
          if ((((ulong)ppppppppppppuVar3 & 1) != 0) &&
             (bVar2 = false, local_100 != (undefined8 ************)0x0)) {
            ppppppppppppuVar3 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_unsignedLongLongValue_0269d6b8);
            bVar2 = ppppppppppppuVar3 == (undefined8 ************)DAT_028e3d80;
          }
        }
        (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar8);
        if (bVar2) {
          FUN_016b3fe8(local_f8,0);
          FUN_016b7894(local_40);
          FUN_016b70e8(local_40,local_83 & 1,1);
          local_74 = 1;
        }
        else {
          if ((local_84 & 1) == 0) {
            local_131 = 0;
            local_141 = 0;
            if ((local_81 & 1) == 0) {
              ppppppppppppuVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatButtonSizeOther)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_141 = 1;
              local_140 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            else {
              ppppppppppppuVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatButtonSize);
              _objc_retainAutoreleasedReturnValue();
              local_131 = 1;
              local_130 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            local_108 = local_778;
            if ((local_141 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            if ((local_131 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_130);
            }
          }
          else {
            local_111 = 0;
            local_121 = 0;
            if ((local_81 & 1) == 0) {
              ppppppppppppuVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_objectForKeyedSubscript__0269d098,
                         &cf_repeatImageButtonSizeOther);
              _objc_retainAutoreleasedReturnValue();
              local_121 = 1;
              local_120 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_750 = local_778;
            }
            else {
              ppppppppppppuVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatImageButtonSize)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_111 = 1;
              local_110 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_750 = local_778;
            }
            local_108 = local_750;
            if ((local_121 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_120);
            }
            if ((local_111 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_110);
            }
          }
          FUN_016b1b78();
          ppppppppppppuVar3 = local_50;
          dVar12 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatCornerRadius);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
          ppppppppppppuVar3 = local_98;
          dVar20 = local_b0;
          dVar16 = local_108;
          local_150 = dVar12;
          if (dVar12 < 0.0) {
            local_150 = 0.0;
          }
          if (10.0 < local_150) {
            local_150 = 10.0;
          }
          if (local_150 == 10.0) {
            local_7a8 = local_108 / 2.0;
          }
          else {
            local_7a8 = local_150;
          }
          local_158 = local_7a8;
          local_160 = 0;
          local_161 = 0;
          local_170 = 0;
          local_178 = 0;
          local_180 = 0;
          if ((local_84 & 1) == 0) {
            local_189 = 0;
            local_199 = 0;
            local_7f8 = local_50;
            if ((local_81 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatTextContentOther
                        );
              _objc_retainAutoreleasedReturnValue();
              local_199 = 1;
              local_198 = local_7f8;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatTextContentSelf)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_189 = 1;
              local_188 = local_7f8;
            }
            _objc_storeStrong(&local_160,local_7f8);
            if ((local_199 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_198);
            }
            if ((local_189 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_188);
            }
            if ((local_160 == 0) ||
               (uVar7 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0), uVar7 == 0))
            {
              local_1a9 = 0;
              local_1b9 = 0;
              local_818 = local_50;
              if ((local_81 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_objectForKeyedSubscript__0269d098,
                           &cf_repeatTextContentOther);
                _objc_retainAutoreleasedReturnValue();
                local_1b9 = 1;
                local_1b8 = local_818;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_objectForKeyedSubscript__0269d098,
                           &cf_repeatTextContentSelf);
                _objc_retainAutoreleasedReturnValue();
                local_1a9 = 1;
                local_1a8 = local_818;
              }
              _objc_storeStrong(&local_160,local_818);
              if ((local_1b9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b8);
              }
              if ((local_1a9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1a8);
              }
            }
            ppppppppppppuVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatBoldFont);
            _objc_retainAutoreleasedReturnValue();
            ppppppppppppuVar8 = ppppppppppppuVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_161 = (byte)ppppppppppppuVar8;
            (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
            uVar6 = (ulong)(local_81 & 1);
            getRepeatEnhanceTextColorForSender(SUB41(local_81 & 1,0));
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_170;
            local_170 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar6 = (ulong)(local_81 & 1);
            FUN_016b31d0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_178;
            local_178 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar6 = (ulong)(local_81 & 1);
            FUN_016b9394(local_108,local_158,0x3ff0000000000000,uVar6,0,local_98,local_160,
                         local_161 & 1,local_170,local_178);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_180;
            local_180 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          else {
            uVar10 = (uint)local_81;
            puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = (ulong)(uVar10 & 1);
            FUN_016b9394(dVar16,local_7a8,dVar20,uVar6,1,ppppppppppppuVar3,0,0);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_180;
            local_180 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          uVar7 = local_180;
          ppppppppppppuVar3 = local_40;
          FUN_016b770c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8);
          uVar10 = (uint)uVar7 ^ 1;
          (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
          local_1ba = (byte)uVar10 & 1;
          if ((uVar10 & 1) != 0) {
            if ((local_84 & 1) == 0) {
              uVar7 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToString__0269ccc8,&cf__)
              ;
              local_988 = 1;
              if ((uVar7 & 1) == 0) {
                uVar7 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_isEqualToString__0269ccc8,&cf_format_s_);
                local_988 = (uint)uVar7;
              }
              local_2da = (byte)local_988 & 1;
              if ((local_988 & 1) != 0) {
                _objc_storeStrong(&local_160,&cf__);
              }
              local_2e8 = local_108 - dVar13 * local_108 * 2.0;
              dVar21 = dVar13;
              local_998 = local_2e8;
              if ((local_2da & 1) != 0) {
                dVar21 = 1.2;
                local_998 = local_2e8 * 1.2;
              }
              local_2f0 = local_998;
              local_301 = 0;
              local_311 = 0;
              local_9a8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              if ((local_161 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_998,PTR__OBJC_CLASS___UIFont_026cdfc0,
                           PTR_s_systemFontOfSize__0269cc50);
                _objc_retainAutoreleasedReturnValue();
                local_311 = 1;
                local_310 = local_9a8;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_998,PTR__OBJC_CLASS___UIFont_026cdfc0,
                           PTR_s_boldSystemFontOfSize__0269cf28);
                _objc_retainAutoreleasedReturnValue();
                local_301 = 1;
                local_300 = local_9a8;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_2f8 = local_9a8;
              if ((local_311 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_310);
              }
              if ((local_301 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_300);
              }
              uVar7 = local_160;
              local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
              local_331 = 0;
              local_341 = 0;
              local_9d0 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              dVar16 = local_2e8;
              if ((local_161 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
                _objc_retainAutoreleasedReturnValue();
                local_341 = 1;
                local_340 = local_9d0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_boldSystemFontOfSize__0269cf28);
                _objc_retainAutoreleasedReturnValue();
                local_331 = 1;
                local_330 = local_9d0;
              }
              local_30 = local_9d0;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_sizeWithAttributes__026cab08);
              local_328 = dVar16;
              local_320 = dVar21;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if ((local_341 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_340);
              }
              if ((local_331 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_330);
              }
              local_350 = local_328 + dVar13 * local_108 * 2.0;
              if (local_150 == 10.0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
              }
              local_358 = local_108 * dVar1;
              local_360 = local_108 * DAT_02323e80;
              dVar13 = local_328 + local_360 * 2.0;
              uVar17 = 0;
              uVar15 = 0;
              dVar21 = local_108;
              local_350 = dVar13;
              FUN_01696f30();
              ppppppppppppuVar3 = local_f8;
              local_380 = uVar15;
              uStack_378 = uVar17;
              local_370 = dVar13;
              dStack_368 = dVar21;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
              uVar10 = (uint)ppppppppppppuVar3;
              uStack_3b8 = uStack_378;
              local_3c0 = local_380;
              dStack_3a8 = dStack_368;
              local_3b0 = local_370;
              local_3a0 = uVar15;
              local_398 = uVar17;
              local_390 = dVar13;
              local_388 = dVar21;
              _CGRectEqualToRect(uVar15,uVar17,dVar13,dVar21,local_380,uStack_378,local_370,
                                 dStack_368);
              if ((uVar10 & 1) == 0) {
                uStack_3d8 = uStack_378;
                local_3e0 = local_380;
                dStack_3c8 = dStack_368;
                local_3d0 = local_370;
                uStack_3f8 = uStack_378;
                local_400 = local_380;
                dStack_3e8 = dStack_368;
                local_3f0 = local_370;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_380,uStack_378,local_370,dStack_368,local_f8,
                           PTR_s_setFrame__026ca960);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_titleForState__026a2208,0);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = local_160;
              local_408 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_isEqualToString__0269ccc8,ppppppppppppuVar3);
              if ((((uVar7 & 1) == 0) && (local_160 != 0)) &&
                 (uVar7 = local_160,
                 (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0), uVar7 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_setTitle_forState__026caab8,local_160,0);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_titleLabel_026caba0);
              _objc_retainAutoreleasedReturnValue();
              local_410 = ppppppppppppuVar3;
              if (ppppppppppppuVar3 != (undefined8 ************)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(ppppppppppppuVar3,PTR_s_font_0269ea00);
                _objc_retainAutoreleasedReturnValue();
                ppppppppppppuVar8 = ppppppppppppuVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
                if (((ulong)ppppppppppppuVar8 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_setFont__026ca958,local_2f8)
                  ;
                }
                ppppppppppppuVar3 = local_410;
                (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_textAlignment_026a66e8);
                if (ppppppppppppuVar3 != (undefined8 ************)((long)&MACH_HEADER.magic + 1)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_410,PTR_s_setTextAlignment__026caa90,1);
                }
                ppppppppppppuVar3 = local_410;
                (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_numberOfLines_026a8e70);
                if (ppppppppppppuVar3 != (undefined8 ************)((long)&MACH_HEADER.magic + 1)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_410,PTR_s_setNumberOfLines__026ca9d8,1);
                }
              }
              dVar21 = local_358;
              dVar13 = local_360;
              dVar16 = local_358;
              dVar20 = local_360;
              FUN_016b3184();
              ppppppppppppuVar3 = local_f8;
              local_430 = dVar21;
              dStack_428 = dVar13;
              local_420 = dVar16;
              dStack_418 = dVar20;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_contentEdgeInsets_026b2c90);
              uVar10 = (uint)ppppppppppppuVar3;
              dStack_468 = dStack_428;
              local_470 = local_430;
              dStack_458 = dStack_418;
              local_460 = local_420;
              local_450 = dVar21;
              local_448 = dVar13;
              local_440 = dVar16;
              local_438 = dVar20;
              FUN_016b9a98(dVar21,dVar13,dVar16,dVar20,local_430,dStack_428,local_420,dStack_418);
              if ((uVar10 & 1) == 0) {
                dStack_488 = dStack_428;
                local_490 = local_430;
                dStack_478 = dStack_418;
                local_480 = local_420;
                dStack_4a8 = dStack_428;
                local_4b0 = local_430;
                dStack_498 = dStack_418;
                local_4a0 = local_420;
                dVar21 = local_430;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_430,dStack_428,local_420,dStack_418,local_f8,
                           PTR_s_setContentEdgeInsets__0269ebd0);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_titleColorForState__026b2c98,0);
              _objc_retainAutoreleasedReturnValue();
              local_4b8 = ppppppppppppuVar3;
              if ((local_170 != 0) &&
                 (uVar7 = local_170,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_170,PTR_s_isEqual__0269e9a8,ppppppppppppuVar3), (uVar7 & 1) == 0))
              {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_setTitleColor_forState__026caac0,local_170,0);
              }
              uVar7 = local_178;
              local_aa8 = 0;
              if (local_178 != 0) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_backgroundColor_026ca518);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqual__0269e9a8);
                local_aa8 = (uint)uVar7 ^ 1;
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              if ((local_aa8 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_setBackgroundColor__026ca888,local_178);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_alpha_026ca4d8);
              dVar21 = ABS(dVar21 - 1.0);
              if (dVar19 < dVar21) {
                dVar21 = 1.0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setAlpha__026ca860);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar21 = dVar21 - local_158;
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              dVar13 = local_158;
              if (dVar19 < ABS(dVar21)) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(dVar13);
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              _objc_storeStrong(&local_4b8);
              _objc_storeStrong(&local_410,0);
              _objc_storeStrong(&local_408,0);
              _objc_storeStrong(&local_2f8,0);
            }
            else {
              local_1c8 = local_108;
              uVar15 = 0;
              dVar13 = 0.0;
              dVar16 = local_108;
              dVar20 = local_108;
              FUN_01696f30();
              ppppppppppppuVar3 = local_f8;
              local_1e8 = dVar13;
              uStack_1e0 = uVar15;
              local_1d8 = dVar16;
              dStack_1d0 = dVar20;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
              uVar10 = (uint)ppppppppppppuVar3;
              uStack_228 = uStack_1e0;
              local_230 = local_1e8;
              dStack_218 = dStack_1d0;
              local_220 = local_1d8;
              local_208 = dVar13;
              local_200 = uVar15;
              local_1f8 = dVar16;
              local_1f0 = dVar20;
              _CGRectEqualToRect(dVar13,uVar15,dVar16,dVar20,local_1e8,uStack_1e0,local_1d8,
                                 dStack_1d0);
              if ((uVar10 & 1) == 0) {
                uStack_268 = uStack_1e0;
                local_270 = local_1e8;
                dStack_258 = dStack_1d0;
                local_260 = local_1d8;
                ppppppppppppuVar3 = local_f8;
                dVar13 = local_1e8;
                local_250 = local_270;
                uStack_248 = uStack_268;
                local_240 = local_260;
                dStack_238 = dStack_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,uStack_1e0,local_1d8,dStack_1d0,local_f8,
                           PTR_s_setFrame__026ca960);
                uVar10 = (uint)ppppppppppppuVar3;
              }
              FUN_0169b20c();
              local_271 = (undefined1)uVar10;
              ppppppppppppuVar8 = (undefined8 ************)(ulong)(local_81 & 1);
              FUN_016b1be0(ppppppppppppuVar8,uVar10 & 1);
              _objc_retainAutoreleasedReturnValue();
              ppppppppppppuVar3 = local_f8;
              local_280 = ppppppppppppuVar8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_imageForState__0269edf0,0);
              _objc_retainAutoreleasedReturnValue();
              local_288 = ppppppppppppuVar3;
              if ((local_280 != ppppppppppppuVar3) &&
                 (ppppppppppppuVar8 = local_280,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_280,PTR_s_isEqual__0269e9a8,ppppppppppppuVar3),
                 ((ulong)ppppppppppppuVar8 & 1) == 0)) {
                if (local_280 == (undefined8 ************)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_setImage_forState__0269cc60,0,0);
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_setImage_forState__0269cc60,local_280,0);
                  ppppppppppppuVar3 = local_f8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_imageView_0269f230);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
                  dVar13 = local_108 * dVar21;
                  dVar16 = local_108 * dVar21;
                  dVar20 = local_108 * dVar21;
                  dVar21 = local_108 * dVar21;
                  FUN_016b3184();
                  local_2d0 = dVar13;
                  dStack_2c8 = dVar16;
                  local_2c0 = dVar20;
                  dStack_2b8 = dVar21;
                  local_2a8 = dVar13;
                  dStack_2a0 = dVar16;
                  local_298 = dVar20;
                  dStack_290 = dVar21;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar13,dVar16,dVar20,dVar21,local_f8,PTR_s_setImageEdgeInsets__0269ebe0
                            );
                }
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_backgroundColor_026ca518);
              _objc_retainAutoreleasedReturnValue();
              ppppppppppppuVar8 = (undefined8 ************)PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if (ppppppppppppuVar3 != ppppppppppppuVar8) {
                puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setBackgroundColor__026ca888);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_alpha_026ca4d8);
              dVar21 = ABS(dVar13 - local_b0);
              if (dVar19 < dVar21) {
                dVar21 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setAlpha__026ca860);
              }
              local_2d9 = 0;
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_imageView_0269f230);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = false;
              if (ppppppppppppuVar3 != (undefined8 ************)0x0) {
                ppppppppppppuVar8 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_imageView_0269f230);
                _objc_retainAutoreleasedReturnValue();
                local_2d9 = 1;
                local_2d8 = ppppppppppppuVar8;
                (*(code *)PTR__objc_msgSend_02578628)();
                dVar21 = ABS(dVar21 - 1.0);
                bVar2 = dVar19 < dVar21;
              }
              if ((local_2d9 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_2d8);
              }
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if (bVar2) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_imageView_0269f230);
                _objc_retainAutoreleasedReturnValue();
                dVar21 = 1.0;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar21 = dVar21 - local_158;
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              dVar13 = local_158;
              if (dVar19 < ABS(dVar21)) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(dVar13);
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              _objc_storeStrong(&local_288);
              _objc_storeStrong(&local_280,0);
            }
            dVar21 = (double)(long)local_98 / 100.0;
            if (dVar21 <= dVar19) {
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              fVar11 = SUB84(dVar21,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar21 = (double)fVar11;
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if (dVar19 < dVar21) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                dVar21 = 0.0;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              ppppppppppppuVar8 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              uVar10 = (uint)ppppppppppppuVar8;
              FUN_016b9b38(dVar21,dVar19,*(undefined8 *)PTR__CGSizeZero_025782f8,
                           *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8));
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if ((uVar10 & 1) == 0) {
                uVar17 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
                uVar15 = *(undefined8 *)PTR__CGSizeZero_025782f8;
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar15,uVar17);
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
            }
            else {
              ppppppppppppuVar3 = local_f8;
              dVar13 = dVar21;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if (dVar19 < ABS(dVar13 - 1.5)) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(0x3ff8000000000000);
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              ppppppppppppuVar3 = (undefined8 ************)PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0,dVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithWhite_alpha__0269cf30);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              ppppppppppppuVar8 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)(ppppppppppppuVar3,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              uVar14 = 0;
              uVar18 = 0x3ff8000000000000;
              FUN_01696f7c();
              ppppppppppppuVar3 = local_f8;
              uVar15 = uVar14;
              uVar17 = uVar18;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              ppppppppppppuVar9 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if (ppppppppppppuVar9 != ppppppppppppuVar8) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              ppppppppppppuVar8 = ppppppppppppuVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              uVar10 = (uint)ppppppppppppuVar8;
              FUN_016b9b38(uVar15,uVar17,uVar14,uVar18);
              fVar11 = (float)uVar15;
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if ((uVar10 & 1) == 0) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar14,uVar18);
                fVar11 = (float)uVar14;
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
              ppppppppppppuVar3 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              if (dVar19 < ABS((double)fVar11 - dVar21)) {
                ppppppppppppuVar3 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)((float)dVar21);
                (*(code *)PTR__objc_release_02578630)(ppppppppppppuVar3);
              }
            }
            FUN_016b3ab4(local_f8);
            FUN_016b9b90(local_40,local_180);
          }
          FUN_016b4420(local_40,1);
          FUN_016b3fe8(local_f8,0);
          FUN_016b7894(local_40);
          FUN_016b70e8(local_40,local_83 & 1,1);
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_170,0);
          _objc_storeStrong(&local_160,0);
          local_74 = 0;
        }
        _objc_storeStrong(&local_100,0);
      }
      _objc_storeStrong(&local_f8,0);
    }
LAB_016a39a0:
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_016a39bc:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

