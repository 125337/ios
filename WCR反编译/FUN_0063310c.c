// FUN_0063310c @ 0063310c

void FUN_0063310c(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  cfstringStruct *local_580;
  cfstringStruct *local_560;
  cfstringStruct *local_528;
  cfstringStruct *local_500;
  cfstringStruct *local_4d8;
  cfstringStruct *local_480;
  cfstringStruct *local_460;
  undefined *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  code *local_308;
  undefined *local_300;
  ulong local_2f8;
  undefined *local_2f0;
  char *local_2e8;
  long local_2e0;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  ulong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  cfstringStruct *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  byte local_210;
  byte local_20f;
  undefined **local_208;
  long local_200 [2];
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  undefined *local_1c8;
  undefined4 local_1bc;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  byte local_189;
  undefined8 local_188;
  cfstringStruct *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  byte local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined8 local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined1 local_61;
  ulong local_60;
  byte local_41;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  FUN_0063a16c();
  if ((param_1 & 1) != 0) {
    local_31 = 0;
    uVar3 = local_28;
    FUN_006421a8();
    if ((uVar3 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isViewLoaded_0269cde0);
      local_41 = 0;
      local_61 = 0;
      bVar2 = false;
      uVar1 = (uVar3 & 1) != 0;
      if ((bool)uVar1) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_41 = 1;
        local_40 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = uVar3 != 0;
        local_61 = uVar1;
        local_60 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar1 = local_61;
      }
      local_61 = uVar1;
      if ((local_41 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      if (bVar2) {
        local_31 = 1;
      }
      else {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar3 != 0) {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if ((local_70 == local_28) || (lVar14 = local_78 - local_28, lVar14 == 0)) {
            lVar14 = 1;
            local_31 = 1;
          }
          _objc_storeStrong(lVar14,&local_78);
          _objc_storeStrong(&local_70,0);
        }
      }
    }
    uVar3 = local_28;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = &cf_home_setup_classify_show;
    if ((local_31 & 1) == 0) {
      pcVar6 = &cf_home_setup_classify_hide;
    }
    FUN_00636798(uVar3,uVar5,pcVar6,(local_31 & 1) != 0);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_31 & 1) == 0) {
      local_80 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_80;
        local_80 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if (local_80 != 0) {
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,1999);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
          FUN_00636834(local_88);
        }
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,0x7cd);
        _objc_retainAutoreleasedReturnValue();
        local_90 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineNameplateHelper_026ce5f8,
                     PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_90);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
                   local_80);
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,0x7cc);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
        }
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,0x7cb);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
      }
      FUN_00636798(local_28,local_80,&cf_home_setup_hide_applied,0);
      _objc_storeStrong(&local_80,0);
    }
    else {
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
      local_a8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02323d00,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = 0x3fe0101010101010;
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
      local_b0 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0101010101010,0x3fe0101010101010,0x3fe0101010101010,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      local_b8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_navigationHomeOnlineAvatarSize_026a60e8);
      local_c8 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineAvatarRadius_026a60f0);
      local_d0 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineAvatarHorizo_026a60f8);
      local_d8 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineAvatarVertic_026a6100);
      local_e0 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineAvatarSpacin_026a6108);
      local_f0 = 1;
      local_e8 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameFont_026a6110);
      pcVar6 = local_c0;
      local_f8 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameBold_026a6118);
      local_f9 = (byte)pcVar6;
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameText_026a6120);
      _objc_retainAutoreleasedReturnValue();
      local_460 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_460 = local_a8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = local_460;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameText_026a6128);
      _objc_retainAutoreleasedReturnValue();
      local_480 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_480 = local_b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = local_480;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameText_026a6130);
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameHori_026a6138);
      local_120 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineNicknameVert_026a6140);
      local_128 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationHomeOnlineIconSize_026a6148);
      pcVar6 = local_c0;
      local_130 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationHomeOnlineIconType_026a6150);
      pcVar7 = local_c0;
      local_138 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineIconFolderPa_026a6158);
      _objc_retainAutoreleasedReturnValue();
      local_140 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationHomeOnlineIconRadius_026a6160);
      pcVar6 = local_c0;
      local_148 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineIconColorLig_026a6168);
      _objc_retainAutoreleasedReturnValue();
      local_159 = 0;
      local_4d8 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_4d8 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
        local_158 = local_4d8;
      }
      local_159 = pcVar6 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = local_4d8;
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineIconColorDar_026a6170);
      _objc_retainAutoreleasedReturnValue();
      local_171 = 0;
      local_500 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_500 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
        local_170 = local_500;
      }
      local_171 = pcVar6 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = local_500;
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineSeparatorOnl_026a6178);
      _objc_retainAutoreleasedReturnValue();
      local_528 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_528 = &cf__W_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = local_528;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if ((local_180 == (cfstringStruct *)0x0) ||
         (pcVar6 = local_180, (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0)
         , pcVar6 == (cfstringStruct *)0x0)) {
        _objc_storeStrong(&local_180,&cf__W_);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationHomeOnlineTextSize_026a6180);
      pcVar6 = local_c0;
      local_188 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineTextBoldFont_026a6188);
      local_189 = (byte)pcVar6;
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineTextColorLig_026a6190);
      _objc_retainAutoreleasedReturnValue();
      local_560 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_560 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = local_560;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineTextColorDar_026a6198);
      _objc_retainAutoreleasedReturnValue();
      local_580 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_580 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = local_580;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineTextHorizont_026a61a0);
      local_1a8 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_navigationHomeOnlineTextVertical_026a61a8);
      local_1b8 = 0;
      uVar3 = local_28;
      local_1b0 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_1b8;
        local_1b8 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if (local_1b8 == 0) {
        local_1bc = 1;
      }
      else {
        puVar8 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = puVar8;
        if ((puVar8 == (undefined *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_length_0269cca0),
           puVar8 == (undefined *)0x0)) {
          local_1bc = 1;
        }
        else {
          local_1d0 = (char *)0x0;
          pcVar9 = "MMServiceCenter";
          _objc_getClass();
          local_1d8 = pcVar9;
          if (pcVar9 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar9,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = pcVar9;
            if (pcVar9 != (char *)0x0) {
              pcVar9 = "CContactMgr";
              _objc_getClass();
              local_1e8 = pcVar9;
              if (pcVar9 != (char *)0x0) {
                pcVar10 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_performSelector_withObject__026ca7c0,
                           PTR_s_getService__0269d170,pcVar9);
                _objc_retainAutoreleasedReturnValue();
                local_1f0 = pcVar10;
                if (pcVar10 != (char *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar10,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar9 = local_1d0;
                  local_1d0 = pcVar10;
                  (*(code *)PTR__objc_release_02578630)(pcVar9);
                }
                _objc_storeStrong(&local_1f0,0);
              }
            }
            _objc_storeStrong(&local_1e0,0);
          }
          lVar11 = 9;
          _NSSearchPathForDirectoriesInDomains(9,1,1);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_200[0] = lVar14;
          (*(code *)PTR__objc_release_02578630)(lVar11);
          uVar3 = local_1b8;
          if (local_200[0] == 0) {
            local_1bc = 1;
          }
          else {
            ppuVar12 = &local_318;
            local_318 = PTR___NSConcreteStackBlock_02578660;
            local_310 = 0xc2000000;
            local_30c = 0;
            local_308 = FUN_00642ae8;
            local_300 = &DAT_0257e6a8;
            local_290 = local_28;
            (*(code *)PTR__objc_retain_02578638)();
            puVar8 = local_1c8;
            local_2f8 = uVar3;
            local_288 = local_c8;
            local_280 = local_d8;
            local_278 = local_e0;
            local_270 = local_d0;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar9 = local_1d0;
            local_2f0 = puVar8;
            (*(code *)PTR__objc_retain_02578638)();
            lVar14 = local_200[0];
            local_2e8 = pcVar9;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_108;
            local_2e0 = lVar14;
            local_268 = local_f0;
            local_260 = local_f8;
            local_210 = local_f9 & 1;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar7 = local_110;
            local_2d8 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_118;
            local_2d0 = pcVar7;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar7 = local_140;
            local_2c8 = pcVar6;
            local_258 = local_e8;
            local_250 = local_120;
            local_248 = local_128;
            local_240 = local_130;
            local_238 = local_138;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_150;
            local_2c0 = pcVar7;
            local_230 = local_148;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar7 = local_168;
            local_2b8 = pcVar6;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_180;
            local_2b0 = pcVar7;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar7 = local_198;
            local_2a8 = pcVar6;
            local_228 = local_188;
            local_20f = local_189 & 1;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar6 = local_1a0;
            local_2a0 = pcVar7;
            (*(code *)PTR__objc_retain_02578638)();
            local_298 = pcVar6;
            local_220 = local_1a8;
            local_218 = local_1b0;
            _objc_retainBlock();
            puVar13 = PTR__OBJC_CLASS___NSThread_026ce0a8;
            local_208 = ppuVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
            puVar8 = PTR___dispatch_main_q_02578680;
            if (((ulong)puVar13 & 1) == 0) {
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              _dispatch_async();
              (*(code *)PTR__objc_release_02578630)(puVar8);
            }
            else {
              (*(code *)local_208[2])();
            }
            _objc_storeStrong(&local_208);
            _objc_storeStrong(&local_298,0);
            _objc_storeStrong(&local_2a0,0);
            _objc_storeStrong(&local_2a8,0);
            _objc_storeStrong(&local_2b0,0);
            _objc_storeStrong(&local_2b8,0);
            _objc_storeStrong(&local_2c0,0);
            _objc_storeStrong(&local_2c8,0);
            _objc_storeStrong(&local_2d0,0);
            _objc_storeStrong(&local_2d8,0);
            _objc_storeStrong(&local_2e0,0);
            _objc_storeStrong(&local_2e8,0);
            _objc_storeStrong(&local_2f0,0);
            _objc_storeStrong(&local_2f8,0);
            local_1bc = 0;
          }
          _objc_storeStrong(local_200);
          _objc_storeStrong(&local_1d0,0);
        }
        _objc_storeStrong(&local_1c8,0);
      }
      _objc_storeStrong(&local_1b8);
      _objc_storeStrong(&local_1a0,0);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
    }
  }
  return;
}

