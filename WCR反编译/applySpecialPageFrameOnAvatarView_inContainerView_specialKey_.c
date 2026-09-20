// applySpecialPageFrameOnAvatarView:inContainerView:specialKey: @ 00eb38f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineAvatarFramePageOverlayHelper::
     applySpecialPageFrameOnAvatarView_inContainerView_specialKey_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  char *pcVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 in_d2;
  undefined8 uVar13;
  undefined8 in_d3;
  char *local_3f0;
  cfstringStruct *local_358;
  cfstringStruct *local_348;
  cfstringStruct *local_330;
  uint local_314;
  undefined *local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined *local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  char *local_210;
  char *local_208;
  undefined *local_200;
  byte local_1f1;
  undefined *local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_148;
  double local_140;
  double local_128;
  double local_120;
  double local_108;
  double local_100;
  double local_f8;
  double local_e0;
  cfstringStruct *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  undefined *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  dVar12 = DAT_02323ca0;
  local_38 = 0;
  dVar10 = DAT_02323ca0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if (((local_38 == 0) || (local_40 == (undefined *)0x0)) ||
     (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_4c = 1;
    goto LAB_00eb4a9c;
  }
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x24f6ee);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_menu__);
  if ((uVar2 & 1) == 0) {
LAB_00eb3a28:
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_avatarFrameSpecialUserEnabled_0269e028);
    if (((ulong)pcVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
      local_4c = 1;
    }
    else {
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_avatarFrameSpecialUserConfigForU_026ab200,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 0;
      local_314 = 1;
      local_68 = pcVar4;
      if (pcVar4 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_objectForKey__0269e048,&cf_chatListEnabled);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_314 = (uint)pcVar4 ^ 1;
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_314 & 1) == 0) {
        pcVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_89 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_330 = &::cf___;
        }
        else {
          local_330 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListPath);
          _objc_retainAutoreleasedReturnValue();
          local_88 = local_330;
        }
        local_89 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_330;
        if ((local_89 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListNightPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_a1 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_348 = &::cf___;
        }
        else {
          local_348 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListNightPath);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = local_348;
        }
        local_a1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_348;
        if ((local_a1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDarkModeForView__026ab208,local_40);
        if (((IVar6 & 1) == 0) ||
           (pcVar4 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0)
           , pcVar4 == (cfstringStruct *)0x0)) {
          local_358 = local_80;
        }
        else {
          local_358 = local_98;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_358;
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_resolvedImagePathForRelative__026ab210,local_358);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
        if (IVar6 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
          local_4c = 1;
        }
        else {
          pcVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKey__0269e048,&cf_chatListScale);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if ((dVar10 <= 0.0) || (local_c0 = dVar10, 5.0 < dVar10)) {
            local_c0 = 1.5;
          }
          if (local_c0 < dVar12) {
            local_c0 = dVar12;
          }
          pcVar4 = local_68;
          dVar10 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKey__0269e048,&cf_chatListOffsetX);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_68;
          local_c8 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKey__0269e048,&cf_chatListOffsetY);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_68;
          local_d0 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKey__0269e048,&cf_chatListAddMode);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (((long)pcVar5 < 0) || (local_d8 = pcVar5, 1 < (long)pcVar5)) {
            local_d8 = (cfstringStruct *)0x0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          local_100 = dVar10;
          local_f8 = dVar12;
          _CGRectGetWidth();
          local_e0 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          local_128 = dVar10;
          local_120 = dVar12;
          _CGRectGetHeight();
          dVar9 = local_e0;
          local_108 = dVar10;
          if ((local_e0 <= 0.0) || (dVar9 = dVar10, dVar10 <= 0.0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
            local_148 = dVar9;
            local_140 = dVar12;
            _CGRectGetWidth();
            local_e0 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
            local_168 = dVar9;
            local_160 = dVar12;
            _CGRectGetHeight(dVar9,dVar12);
            local_108 = dVar9;
          }
          if ((local_e0 <= 0.0) || (local_108 <= 0.0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
            local_4c = 1;
          }
          else {
            local_170 = local_e0 * local_c0;
            dVar10 = local_108 * local_c0;
            dVar12 = local_c0;
            local_178 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
            local_1a0 = dVar10;
            local_198 = dVar12;
            _CGRectGetMinX(dVar10,dVar12,in_d2);
            uVar13 = 0x4000000000000000;
            dVar10 = dVar10 + (local_e0 - local_170) / 2.0 + local_c8;
            dVar12 = local_c8;
            local_180 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
            local_1c8 = dVar10;
            local_1c0 = dVar12;
            local_1b8 = uVar13;
            _CGRectGetMinY(dVar10,dVar12,uVar13,in_d3);
            dVar11 = (dVar10 + (local_108 - local_178) / 2.0) - local_d0;
            dVar12 = local_180;
            dVar10 = local_170;
            dVar9 = local_178;
            local_1a8 = dVar11;
            FUN_00eb4ad4();
            local_1e8 = dVar12;
            dStack_1e0 = dVar11;
            local_1d8 = dVar10;
            dStack_1d0 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setClipsToBounds__026ca8c8,0);
            puVar3 = local_58;
            (*(code *)PTR__objc_retain_02578638)();
            local_1f0 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              puVar8 = PTR__OBJC_CLASS___UIView_026cdfd8;
              _objc_alloc();
              dVar12 = local_1e8;
              dVar10 = dStack_1e0;
              dVar9 = local_1d8;
              dVar11 = dStack_1d0;
              (*(code *)PTR__objc_msgSend_02578628)();
              puVar3 = local_1f0;
              local_1f0 = puVar8;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setTag__026caa80,DAT_0232c380);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f0,PTR_s_setUserInteractionEnabled__026caad8,0);
              puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setClipsToBounds__026ca8c8,1);
              local_1f1 = 0;
              puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                         local_b8);
              _objc_retainAutoreleasedReturnValue();
              local_200 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
              if ((puVar3 != (undefined *)0x0) &&
                 (puVar3 = PTR_WCRefineEmoticonUtil_026ce1c8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,local_200),
                 ((ulong)puVar3 & 1) != 0)) {
                pcVar7 = "MMEmoticonView";
                _objc_getClass();
                local_1f1 = pcVar7 != (char *)0x0;
              }
              if ((local_1f1 & 1) == 0) {
                local_3f0 = (char *)0x0;
              }
              else {
                local_3f0 = "MMEmoticonView";
                _objc_getClass();
              }
              local_208 = local_3f0;
              if (local_3f0 == (char *)0x0) {
                puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_bounds_026ca548);
                local_258 = dVar12;
                local_250 = dVar10;
                local_248 = dVar9;
                local_240 = dVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar12,dVar10,dVar9,dVar11,puVar3,PTR_s_initWithFrame__026ca6e8);
                local_238 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_0232c388);
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setContentMode__026ca8e0,1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,PTR_s_setAutoresizingMask__026ca878,0x12);
                puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImage_026cdfd0,
                           PTR_s_imageWithContentsOfFile__0269e0e0,local_b8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setImage__026ca978);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0,PTR_s_addSubview__026ca4c0,local_238);
                _objc_storeStrong(&local_238,0);
              }
              else {
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_bounds_026ca548);
                local_230 = dVar12;
                local_228 = dVar10;
                local_220 = dVar9;
                local_218 = dVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar12,dVar10,dVar9,dVar11,local_3f0,PTR_s_initWithFrame__026ca6e8);
                local_210 = local_3f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_3f0,PTR_s_setAutoresizingMask__026ca878,0x12);
                (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setTag__026caa80,DAT_0232c388)
                ;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0,PTR_s_addSubview__026ca4c0,local_210);
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineEmoticonUtil_026ce1c8,
                           PTR_s_setEmoticonOnView_imageAtPath__026a65e0,local_210,local_b8);
                _objc_storeStrong(&local_210,0);
              }
              if (local_d8 == (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_1f0)
                ;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_insertSubview_belowSubview__0269e078,local_1f0,local_38);
              }
              _objc_storeStrong(&local_200,0);
            }
            else {
              dStack_298 = dStack_1e0;
              local_2a0 = local_1e8;
              dStack_288 = dStack_1d0;
              local_290 = local_1d8;
              dVar12 = local_1e8;
              dVar10 = dStack_1e0;
              dVar9 = local_1d8;
              dVar11 = dStack_1d0;
              local_280 = local_2a0;
              dStack_278 = dStack_298;
              local_270 = local_290;
              dStack_268 = dStack_288;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setFrame__026ca960);
              puVar3 = local_1f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_viewWithTag__026cabe0,0x24f6ef);
              _objc_retainAutoreleasedReturnValue();
              local_2a8 = puVar3;
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_bounds_026ca548);
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar12,dVar10,dVar9,dVar11,local_2a8,PTR_s_setFrame__026ca960);
              }
              puVar3 = local_2a8;
              puVar8 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar8);
              if (((ulong)puVar3 & 1) == 0) {
                if (local_2a8 != (undefined *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineEmoticonUtil_026ce1c8,
                             PTR_s_setEmoticonOnView_imageAtPath__026a65e0,local_2a8,local_b8);
                }
              }
              else {
                puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImage_026cdfd0,
                           PTR_s_imageWithContentsOfFile__0269e0e0,local_b8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setImage__026ca978);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              if (local_d8 == (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_bringSubviewToFront__026ca550,local_1f0);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_insertSubview_belowSubview__0269e078,local_1f0,local_38);
              }
              _objc_storeStrong(&local_2a8,0);
            }
            _objc_storeStrong(&local_1f0,0);
            local_4c = 0;
          }
        }
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_80,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
        local_4c = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    uVar2 = 0;
    FUN_01138eb8();
    if ((uVar2 & 1) != 0) goto LAB_00eb3a28;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
    local_4c = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_00eb4a9c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

