// FUN_01619994 @ 01619994

/* WARNING: Removing unreachable block (ram,0x0161bb8c) */

void FUN_01619994(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  cfstringStruct *local_5a8;
  cfstringStruct *local_570;
  cfstringStruct *local_540;
  cfstringStruct *local_530;
  cfstringStruct *local_520;
  cfstringStruct *local_500;
  uint local_4f4;
  uint local_4dc;
  cfstringStruct *local_4d8;
  uint local_4a4;
  uint local_474;
  cfstringStruct *local_470;
  cfstringStruct *local_3f8;
  cfstringStruct *local_368;
  cfstringStruct *local_360;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  byte local_2f9;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  byte local_2e1;
  cfstringStruct *local_2e0;
  byte local_2d1;
  cfstringStruct *local_2d0;
  byte local_2c1;
  cfstringStruct *local_2c0;
  byte local_2b1;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  bool local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  byte local_279;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  undefined1 local_258 [15];
  undefined1 local_249;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  byte local_231;
  cfstringStruct *local_230;
  byte local_222;
  undefined1 local_221;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  undefined8 local_210;
  undefined8 local_208;
  byte local_1f9;
  undefined *local_1f8;
  undefined *local_1f0;
  cfstringStruct *local_1e8;
  byte local_1d9;
  cfstringStruct *local_1d8;
  byte local_1c9;
  cfstringStruct *local_1c8;
  byte local_1b9;
  cfstringStruct *local_1b8;
  byte local_1a9;
  cfstringStruct *local_1a8;
  byte local_199;
  cfstringStruct *local_198;
  byte local_189;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  byte local_169;
  cfstringStruct *local_168;
  byte local_159;
  cfstringStruct *local_158;
  byte local_149;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  byte local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  uint local_bc;
  cfstringStruct *local_b8;
  double local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_2);
  local_b8 = (cfstringStruct *)0x0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8,param_3);
  pcVar4 = local_a8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar4 & 1) == 0) || (local_b0 <= 0.0)) {
    local_a0 = (cfstringStruct *)0x0;
    local_bc = 1;
    goto LAB_0161bc18;
  }
  pcVar4 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_toolbar);
  if ((((ulong)pcVar4 & 1) == 0) &&
     (pcVar4 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_toolbar_),
     ((ulong)pcVar4 & 1) == 0)) {
LAB_0161a330:
    pcVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar5 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_138;
      local_138 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    pcVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_actionmenu);
    if (((((((ulong)pcVar4 & 1) != 0) ||
          (pcVar4 = local_d0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_isEqualToString__0269ccc8,&cf_chatmore),
          ((ulong)pcVar4 & 1) != 0)) ||
         (pcVar4 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_c8,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_actionmenu_),
         ((ulong)pcVar4 & 1) != 0)) ||
        (pcVar4 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_chatmore_),
        ((ulong)pcVar4 & 1) != 0)) &&
       (((pcVar4 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0)
         , pcVar4 == (cfstringStruct *)0x0 ||
         (pcVar4 = local_138,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_138,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_setting),
         ((ulong)pcVar4 & 1) != 0)) ||
        (pcVar4 = local_138,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_more),
        ((ulong)pcVar4 & 1) != 0)))) {
      pcVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_470 = local_c8;
      }
      else {
        local_470 = local_d8;
      }
      pcVar7 = pcVar5;
      FUN_0161db0c(pcVar5,local_470);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_138;
      local_138 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_138,&cf_icons_outlined_more);
    }
    pcVar4 = local_138;
    _WCRPluginIconValueIsAlbum();
    local_149 = 0;
    local_159 = 0;
    local_169 = 0;
    local_179 = 0;
    local_189 = 0;
    local_199 = 0;
    local_1a9 = 0;
    local_1b9 = 0;
    local_1c9 = 0;
    local_1d9 = 0;
    local_474 = 1;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&cf__);
      local_474 = 1;
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_containsString__0269d0b0,&cf__PluginIcons_);
        local_474 = 1;
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&cf_WCRefine_);
          local_474 = 1;
          if (((ulong)pcVar4 & 1) == 0) {
            pcVar4 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_containsString__0269d0b0,&cf_SuperFloat_Icons);
            local_474 = 1;
            if (((ulong)pcVar4 & 1) == 0) {
              pcVar4 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_containsString__0269d0b0,&cf_SuperFloat_FloatBall);
              local_474 = 1;
              if (((ulong)pcVar4 & 1) == 0) {
                pcVar4 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_containsString__0269d0b0,&cf__SuperFloat_icon_);
                local_474 = 1;
                if (((ulong)pcVar4 & 1) == 0) {
                  pcVar4 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  local_149 = 1;
                  local_148 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_159 = 1;
                  local_158 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_474 = 1;
                  if (((ulong)pcVar4 & 1) == 0) {
                    pcVar4 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_pathExtension_0269e090);
                    _objc_retainAutoreleasedReturnValue();
                    local_169 = 1;
                    local_168 = pcVar4;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_179 = 1;
                    local_178 = pcVar4;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_474 = 1;
                    if (((ulong)pcVar4 & 1) == 0) {
                      pcVar4 = local_138;
                      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_pathExtension_0269e090);
                      _objc_retainAutoreleasedReturnValue();
                      local_189 = 1;
                      local_188 = pcVar4;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      _objc_retainAutoreleasedReturnValue();
                      local_199 = 1;
                      local_198 = pcVar4;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_474 = 1;
                      if (((ulong)pcVar4 & 1) == 0) {
                        pcVar4 = local_138;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_138,PTR_s_pathExtension_0269e090);
                        _objc_retainAutoreleasedReturnValue();
                        local_1a9 = 1;
                        local_1a8 = pcVar4;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        _objc_retainAutoreleasedReturnValue();
                        local_1b9 = 1;
                        local_1b8 = pcVar4;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        local_474 = 1;
                        if (((ulong)pcVar4 & 1) == 0) {
                          pcVar4 = local_138;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_138,PTR_s_pathExtension_0269e090);
                          _objc_retainAutoreleasedReturnValue();
                          local_1c9 = 1;
                          local_1c8 = pcVar4;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          _objc_retainAutoreleasedReturnValue();
                          local_1d9 = 1;
                          local_1d8 = pcVar4;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          local_474 = (uint)pcVar4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((local_1d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    if ((local_1c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
    if ((local_1b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b8);
    }
    if ((local_1a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1a8);
    }
    if ((local_199 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_198);
    }
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    if ((local_179 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_178);
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    local_139 = (byte)local_474 & 1;
    if ((local_474 & 1) == 0) {
LAB_0161b070:
      pcVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = pcVar6 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_231 = 0;
      local_4dc = 0;
      local_221 = bVar2;
      if (!bVar2) {
        pcVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrLocalIcon);
        _objc_retainAutoreleasedReturnValue();
        local_231 = 1;
        local_230 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_4f4 = 1;
        if (((ulong)pcVar4 & 1) == 0) {
          puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackEnabled_026b1a60);
          local_4f4 = (uint)puVar3;
        }
        local_4dc = local_4f4;
      }
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      local_222 = (byte)local_4dc & 1;
      local_249 = 0;
      bVar2 = (local_4dc & 1) == 0;
      if (bVar2) {
        local_500 = (cfstringStruct *)0x0;
      }
      else {
        local_500 = local_a8;
        FUN_01620dd4();
        _objc_retainAutoreleasedReturnValue();
        local_248 = local_500;
      }
      local_249 = !bVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_240 = local_500;
      if ((local_249 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_248);
      }
      pcVar4 = local_240;
      (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_length_0269cca0);
      local_5a8 = (cfstringStruct *)0x0;
      if (pcVar4 == (cfstringStruct *)0x0) {
LAB_0161b970:
        local_2f9 = 0;
        bVar2 = local_b8 == (cfstringStruct *)0x0;
        if (bVar2) {
          _WCRSuperFloatMenuIconTintColor();
          _objc_retainAutoreleasedReturnValue();
          local_2f8 = local_5a8;
        }
        else {
          local_5a8 = local_b8;
        }
        local_2f9 = bVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_2f0 = local_5a8;
        if ((local_2f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2f8);
        }
        pcVar4 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_previewImageNamed_size_color__026a6580,local_138,local_2f0);
        _objc_retainAutoreleasedReturnValue();
        local_308 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_138);
          _objc_retainAutoreleasedReturnValue();
          local_310 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_138
                      );
            _objc_retainAutoreleasedReturnValue();
            local_318 = pcVar4;
            if ((pcVar4 == (cfstringStruct *)0x0) || (local_2f0 == (cfstringStruct *)0x0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_a0 = pcVar4;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_imageWithTintColor_renderingMode_026a31a0,local_2f0,1);
              _objc_retainAutoreleasedReturnValue();
              local_a0 = pcVar4;
            }
            local_bc = 1;
            _objc_storeStrong(&local_318,0);
          }
          else {
            FUN_01630d7c(pcVar4,local_138,local_2f0);
            _objc_retainAutoreleasedReturnValue();
            local_bc = 1;
            local_a0 = pcVar4;
          }
          _objc_storeStrong(&local_310,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_bc = 1;
          local_a0 = pcVar4;
        }
        _objc_storeStrong(&local_308);
        _objc_storeStrong(&local_2f0,0);
      }
      else {
        pcVar4 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_258._0_8_ = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_240);
        _objc_retainAutoreleasedReturnValue();
        local_530 = (cfstringStruct *)0x0;
        local_260 = pcVar4;
        if ((pcVar4 == (cfstringStruct *)0x0) ||
           (local_530 = (cfstringStruct *)local_258._0_8_,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_258._0_8_,PTR_s_isEqualToString__0269ccc8,&cf_svg),
           ((ulong)local_530 & 1) != 0)) {
          local_279 = 0;
          bVar2 = local_b8 == (cfstringStruct *)0x0;
          if (bVar2) {
            _WCRSuperFloatMenuIconTintColor();
            _objc_retainAutoreleasedReturnValue();
            local_278 = local_530;
          }
          else {
            local_530 = local_b8;
          }
          local_279 = bVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_270 = local_530;
          if ((local_279 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_278);
          }
          pcVar4 = (cfstringStruct *)local_258._0_8_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_258._0_8_,PTR_s_isEqualToString__0269ccc8,&cf_svg);
          local_291 = false;
          bVar2 = ((ulong)pcVar4 & 1) == 0;
          if (bVar2) {
            local_540 = (cfstringStruct *)0x0;
          }
          else {
            local_540 = local_240;
            FUN_01630f58(local_b0,local_240,local_270);
            _objc_retainAutoreleasedReturnValue();
            local_290 = local_540;
          }
          local_291 = !bVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_288 = local_540;
          if ((local_291 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_290);
          }
          if (local_288 == (cfstringStruct *)0x0) {
            pcVar5 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                       PTR_s_previewImageNamed_size_color__026a6580,local_240,local_270);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_288;
            local_288 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if (local_288 == (cfstringStruct *)0x0) {
            pcVar4 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_2a0 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar5 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                       PTR_s_previewImageNamed_size_color__026a6580,local_2a0,local_270);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_288;
            local_288 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            _objc_storeStrong(&local_2a0,0);
          }
          if (local_288 == (cfstringStruct *)0x0) {
            pcVar4 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultTitle);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4;
            FUN_01618794();
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2b1 = 0;
            local_2c1 = 0;
            local_2d1 = 0;
            local_2e1 = 0;
            local_570 = local_a8;
            if (pcVar6 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              local_2d1 = 1;
              local_2d0 = local_570;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              local_2e1 = 1;
              local_2e0 = local_570;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultTitle);
              _objc_retainAutoreleasedReturnValue();
              local_2b1 = 1;
              local_2b0 = local_570;
              FUN_01618794();
              _objc_retainAutoreleasedReturnValue();
              local_2c1 = 1;
              local_2c0 = local_570;
            }
            FUN_0161db0c(local_570,local_c8);
            _objc_retainAutoreleasedReturnValue();
            local_2a8 = local_570;
            if ((local_2e1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2e0);
            }
            if ((local_2d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2d0);
            }
            if ((local_2c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2c0);
            }
            if ((local_2b1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2b0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar5 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                       PTR_s_previewImageNamed_size_color__026a6580,local_2a8,local_270);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_288;
            local_288 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            _objc_storeStrong(&local_2a8,0);
          }
          pcVar4 = local_288;
          bVar2 = local_288 != (cfstringStruct *)0x0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = pcVar4;
          }
          local_bc = (uint)bVar2;
          _objc_storeStrong(&local_288);
          _objc_storeStrong(&local_270,0);
        }
        else {
          pcVar4 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_resizedImage_side__026a3d20,local_260);
          _objc_retainAutoreleasedReturnValue();
          local_520 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_520 = local_260;
          }
          local_268 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_520,PTR_s_imageWithRenderingMode__026ca690,1);
          _objc_retainAutoreleasedReturnValue();
          local_bc = 1;
          local_a0 = local_520;
          _objc_storeStrong(&local_268,0);
        }
        _objc_storeStrong(&local_260);
        local_5a8 = (cfstringStruct *)local_258;
        _objc_storeStrong(local_5a8,0);
        if (local_bc == 0) goto LAB_0161b970;
      }
      _objc_storeStrong(&local_240,0);
    }
    else {
      pcVar4 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                 PTR_s_displayImageForIconValue_size__026ab508,local_138);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_absoluteAlbumIconPathFromStored__026ab528,local_138);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        local_1f9 = 0;
        local_4a4 = 0;
        if (puVar3 == (undefined *)0x0) {
          pcVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&cf__);
          local_4a4 = 0;
          if (((ulong)pcVar4 & 1) != 0) {
            puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            local_1f9 = 1;
            local_1f8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_4a4 = (uint)puVar3;
          }
        }
        if ((local_1f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1f8);
        }
        if ((local_4a4 & 1) != 0) {
          _objc_storeStrong(&local_1f0,local_138);
        }
        puVar3 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
        if ((puVar3 == (undefined *)0x0) &&
           (pcVar4 = local_138,
           (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&cf__),
           ((ulong)pcVar4 & 1) == 0)) {
          uVar9 = 9;
          _NSSearchPathForDirectoriesInDomains(9,1,1);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_208 = uVar10;
          (*(code *)PTR__objc_release_02578630)(uVar9);
          uVar10 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_208,PTR_s_stringByAppendingPathComponent__026cab30,local_138);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_210 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (((ulong)puVar11 & 1) != 0) {
            _objc_storeStrong(&local_1f0,local_210);
          }
          _objc_storeStrong(&local_210);
          _objc_storeStrong(&local_208,0);
        }
        puVar3 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
        if (puVar3 == (undefined *)0x0) {
LAB_0161b03c:
          local_bc = 0;
        }
        else {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_1f0);
          _objc_retainAutoreleasedReturnValue();
          local_218 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_bc = 0;
          }
          else {
            pcVar5 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                       PTR_s_resizedImage_side__026a3d20,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            local_4d8 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_4d8 = local_218;
            }
            local_220 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_4d8,PTR_s_imageWithRenderingMode__026ca690,1);
            _objc_retainAutoreleasedReturnValue();
            local_bc = 1;
            local_a0 = local_4d8;
            _objc_storeStrong(&local_220,0);
          }
          _objc_storeStrong(&local_218,0);
          if (local_bc == 0) goto LAB_0161b03c;
        }
        _objc_storeStrong(&local_1f0,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_bc = 1;
        local_a0 = pcVar4;
      }
      _objc_storeStrong(&local_1e8,0);
      if (local_bc == 0) goto LAB_0161b070;
    }
    _objc_storeStrong(&local_138,0);
  }
  else {
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    local_e9 = 0;
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_toolbar_);
      local_368 = local_c8;
      if (((ulong)pcVar4 & 1) == 0) {
        local_368 = &cf___;
      }
      else {
        pcVar4 = &cf_wcr_sf_toolbar_;
        (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_sf_toolbar_,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_substringFromIndex__0269d120,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        local_e8 = local_368;
      }
      local_360 = local_368;
    }
    else {
      local_360 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_360;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    pcVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_hasPrefix__0269d320,&cf_chat_);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
      if (pcVar4 != (cfstringStruct *)0x0) {
        pcVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_108 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
        if (pcVar4 == (cfstringStruct *)0x0) {
          pcVar5 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_108;
          local_108 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        local_3f8 = local_108;
        FUN_01630b84();
        dVar1 = local_b0;
        pcVar5 = local_108;
        pcVar4 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
        if (((ulong)local_3f8 & 1) == 0) {
          local_119 = 0;
          bVar2 = local_b8 == (cfstringStruct *)0x0;
          if (bVar2) {
            _WCRSuperFloatMenuIconTintColor();
            _objc_retainAutoreleasedReturnValue();
            local_118 = local_3f8;
          }
          else {
            local_3f8 = local_b8;
          }
          local_119 = bVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar1,pcVar4,PTR_s_previewImageNamed_size_color__026a6580,pcVar5,local_3f8);
          _objc_retainAutoreleasedReturnValue();
          local_110 = pcVar4;
          if ((local_119 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
          pcVar4 = local_110;
          bVar2 = local_110 != (cfstringStruct *)0x0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = pcVar4;
          }
          local_bc = (uint)bVar2;
          _objc_storeStrong(&local_110,0);
          if (local_bc == 0) goto LAB_0161a0d0;
        }
        else {
LAB_0161a0d0:
          local_98 = _WCRChatToolbarActionKey;
          local_78 = local_e0;
          local_90 = _WCRChatToolbarTitleKey;
          pcVar4 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          local_88 = _WCRChatToolbarIconKey;
          local_68 = local_108;
          local_80 = _WCRChatToolbarCustomIconKey;
          pcVar6 = local_a8;
          local_70 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar6;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_60 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_98,4);
          _objc_retainAutoreleasedReturnValue();
          local_128 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_128;
          _WCRChatToolbarImage(local_b0,local_128,0);
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar4;
          if ((pcVar4 == (cfstringStruct *)0x0) ||
             (pcVar4 = local_108, FUN_01630b84(), ((ulong)pcVar4 & 1) != 0)) {
            pcVar4 = local_130;
            if (local_130 == (cfstringStruct *)0x0) {
              local_bc = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_a0 = pcVar4;
              local_bc = 1;
            }
          }
          else {
            pcVar4 = local_130;
            FUN_01630d7c(local_130,local_108,local_b8);
            _objc_retainAutoreleasedReturnValue();
            local_bc = 1;
            local_a0 = pcVar4;
          }
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
        }
        _objc_storeStrong(&local_108,0);
        goto joined_r0x0161a2fc;
      }
LAB_0161a30c:
      local_bc = 0;
    }
    else {
      local_58 = _WCRChatToolbarActionKey;
      local_40 = local_e0;
      local_50 = _WCRChatToolbarTitleKey;
      pcVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      local_48 = _WCRChatToolbarIconKey;
      pcVar6 = local_a8;
      local_38 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_f8;
      _WCRChatToolbarImage(local_b0,local_f8,0);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar4;
      if (pcVar4 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = pcVar4;
      }
      local_bc = (uint)(pcVar4 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
joined_r0x0161a2fc:
      if (local_bc == 0) goto LAB_0161a30c;
    }
    _objc_storeStrong(&local_e0,0);
    if (local_bc == 0) goto LAB_0161a330;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
LAB_0161bc18:
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_a0);
  return;
}

