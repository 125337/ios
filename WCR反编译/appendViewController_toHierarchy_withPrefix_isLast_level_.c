// appendViewController:toHierarchy:withPrefix:isLast:level: @ 00923290

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x34 bytes */

void WCNavigationMonitor::appendViewController_toHierarchy_withPrefix_isLast_level_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,
               long_long param_7)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ID IVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  ulong local_4c8;
  ulong local_4c0;
  undefined *local_2d8;
  undefined *local_2d0;
  byte local_2c1;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined *local_278;
  undefined8 local_270;
  undefined1 local_261;
  ulong local_260;
  undefined1 local_251;
  ulong local_250;
  ulong local_248;
  undefined8 local_240;
  ulong local_238;
  ulong local_230;
  undefined *local_228;
  undefined *local_220;
  ID local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  undefined *local_200;
  long local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  byte local_1da;
  undefined1 local_1d9;
  ulong local_1d8;
  byte local_1c9;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a1;
  ulong local_1a0;
  undefined1 local_191;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  cfstringStruct *local_150;
  long local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  byte local_122;
  byte local_121;
  long_long local_120;
  byte local_111;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  SEL local_f8;
  ID local_f0;
  undefined1 auStack_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar4 = DAT_02324020;
  uVar3 = DAT_02323da8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_4);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_5);
  uVar8 = local_100;
  local_111 = (byte)param_6;
  puVar7 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_120 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar7);
  uVar9 = local_100;
  local_121 = (byte)uVar8;
  puVar7 = PTR__OBJC_CLASS___UITabBarController_026ce108;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar7);
  local_122 = (byte)uVar9;
  local_130 = 0x4028000000000000;
  puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_fontWithName_size__026a1cd0,
             &cf_Menlo);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedSystemFontOfSize_weigh_026aa590);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_138;
    local_138 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  local_140 = (undefined *)0x0;
  local_148 = (long)local_120 % 4;
  if (local_148 == 0) {
    puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe6666666666666,0x3fd3333333333333,uVar3,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_140;
    local_140 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else if (local_148 == 1) {
    puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar3,0x3fe0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_140;
    local_140 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else if (local_148 == 2) {
    puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_140;
    local_140 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else if (local_148 == 3) {
    puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe6666666666666,0x3fe3333333333333,0x3fd3333333333333,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_140;
    local_140 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_140;
    local_140 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  pcVar2 = &::cf__;
  if ((local_111 & 1) == 0) {
    pcVar2 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar11 = local_f0;
  local_150 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f0,PTR_s_formattedNameForViewController__026aa598,local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_158 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
  _objc_retainAutoreleasedReturnValue();
  local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_38 = local_138;
  local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  local_30 = local_140;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_160 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = local_108;
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
  local_168 = puVar10;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_appendAttributedString__026a6388);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  pcVar2 = &::cf_space_s_;
  if ((local_111 & 1) == 0) {
    pcVar2 = &::cf__;
  }
  uVar12 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_stringByAppendingString__0269d398,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_100;
  local_170 = uVar12;
  if ((local_121 & 1) == 0) {
    if ((local_122 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = local_100;
      local_278 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar8);
      if (uVar9 != 0) {
        _memset(auStack_2c0,0,0x40);
        uVar8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_childViewControllers_0269d618);
        _objc_retainAutoreleasedReturnValue();
        local_4c0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_4c0 != 0) {
          lVar16 = *local_2b0;
          local_4c8 = 0;
          do {
            do {
              if (*local_2b0 - lVar16 != 0) {
                _objc_enumerationMutation(*local_2b0 - lVar16,uVar8);
              }
              local_280 = *(ulong *)(local_2b8 + local_4c8 * 8);
              local_2c1 = 0;
              uVar9 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_navigationController_0269d458);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (uVar9 != 0) {
                uVar9 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_navigationController_0269d458)
                ;
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar13;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_2c1 = (byte)uVar14;
                (*(code *)PTR__objc_release_02578630)(uVar13);
                (*(code *)PTR__objc_release_02578630)(uVar9);
              }
              uVar9 = local_280;
              if ((local_2c1 & 1) == 0) {
                puVar7 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar7);
                uVar13 = local_280;
                if ((uVar9 & 1) == 0) {
                  puVar7 = PTR__OBJC_CLASS___UITabBarController_026ce108;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isKindOfClass__0269cd68,puVar7)
                  ;
                  if ((uVar13 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_278,PTR_s_addObject__0269d180,local_280);
                  }
                }
              }
              local_4c8 = local_4c8 + 1;
            } while (local_4c8 < local_4c0);
            local_4c0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_e8,
                       0x10);
            local_4c8 = 0;
          } while (local_4c0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar8);
      }
      uVar8 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      puVar7 = local_278;
      if (uVar8 != 0) {
        uVar8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar8);
      }
      local_2d0 = (undefined *)0x0;
      while( true ) {
        puVar7 = local_2d0;
        puVar10 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_count_0269cfe0);
        if (puVar10 <= puVar7) break;
        puVar10 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_objectAtIndexedSubscript__0269cc78,local_2d0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_2d0;
        puVar15 = local_278;
        local_2d8 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_appendViewController_toHierarchy_026aa588,local_2d8,local_108,
                   local_170,puVar7 == puVar15 + -1,local_120 + 1);
        _objc_storeStrong(&local_2d8,0);
        local_2d0 = local_2d0 + 1;
      }
      _objc_storeStrong((long)puVar7 - (long)puVar10,&local_278,0);
      local_1a8 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_count_0269cfe0);
      if (uVar8 != 0) {
        for (local_1c0 = 0; uVar8 = local_1c0, uVar9 = local_1b8,
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0), uVar8 < uVar9;
            local_1c0 = local_1c0 + 1) {
          uVar9 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_1c0);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = local_1c0;
          uVar13 = local_1b8;
          local_1c8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
          local_1d9 = 0;
          uVar6 = uVar8 == uVar13 - 1;
          bVar5 = false;
          if ((bool)uVar6) {
            uVar8 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            local_1d9 = uVar6;
            local_1d8 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar6 = local_1d9;
            bVar5 = uVar8 == 0;
          }
          local_1c9 = bVar5;
          local_1d9 = uVar6;
          uVar8 = local_1c0;
          uVar9 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_selectedIndex_0269e580);
          local_1da = uVar8 == uVar9;
          local_1e8 = 0x4028000000000000;
          puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = puVar7;
          if (puVar7 == (undefined *)0x0) {
            puVar10 = PTR__OBJC_CLASS___UIFont_026cdfc0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e8,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
                       PTR__OBJC_CLASS___UIFont_026cdfc0,
                       PTR_s_monospacedSystemFontOfSize_weigh_026aa590);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_1f0;
            local_1f0 = puVar10;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          local_1f8 = (long)(local_120 + 1) % 4;
          local_200 = (undefined *)0x0;
          if (local_1f8 == 0) {
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3fe6666666666666,0x3fd3333333333333,uVar3,0x3ff0000000000000,
                       PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_200;
            local_200 = puVar10;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          else if (local_1f8 == 1) {
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,uVar3,0x3fe0000000000000,0x3ff0000000000000,
                       PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_200;
            local_200 = puVar10;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          else if (local_1f8 == 2) {
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_200;
            local_200 = puVar10;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          else if (local_1f8 == 3) {
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3fe6666666666666,0x3fe3333333333333,0x3fd3333333333333,0x3ff0000000000000,
                       PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_200;
            local_200 = puVar10;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          else {
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = local_200;
            local_200 = puVar10;
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          pcVar2 = &::cf__;
          if ((local_1c9 & 1) == 0) {
            pcVar2 = &::cf__;
          }
          (*(code *)PTR__objc_retain_02578638)();
          pcVar1 = &::cf__;
          if ((local_1da & 1) == 0) {
            pcVar1 = &::cf___;
          }
          local_208 = pcVar2;
          (*(code *)PTR__objc_retain_02578638)();
          IVar11 = local_f0;
          local_210 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_formattedNameForViewController__026aa598,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_218 = IVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_________);
          _objc_retainAutoreleasedReturnValue();
          local_68 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
          local_58 = local_1f0;
          local_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
          local_50 = local_200;
          puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_220 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = local_108;
          puVar7 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
          local_228 = puVar10;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_appendAttributedString__026a6388);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          uVar8 = local_1c8;
          puVar7 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar7);
          uVar9 = local_1c8;
          if ((uVar8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_230 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            local_238 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_count_0269cfe0);
            if (uVar9 != 0) {
              pcVar2 = &::cf_space_s_;
              if ((local_1c9 & 1) == 0) {
                pcVar2 = &::cf__;
              }
              uVar12 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_stringByAppendingString__0269d398,pcVar2);
              _objc_retainAutoreleasedReturnValue();
              local_248 = 0;
              local_240 = uVar12;
              while( true ) {
                uVar8 = local_248;
                uVar9 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_count_0269cfe0);
                if (uVar9 <= uVar8) break;
                uVar9 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,PTR_s_objectAtIndexedSubscript__0269cc78,local_248);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = local_248;
                uVar13 = local_238;
                local_250 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_count_0269cfe0);
                local_261 = 0;
                uVar6 = uVar8 == uVar13 - 1;
                bVar5 = false;
                if ((bool)uVar6) {
                  uVar8 = local_1c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c8,PTR_s_presentedViewController_0269d448);
                  _objc_retainAutoreleasedReturnValue();
                  local_261 = uVar6;
                  local_260 = uVar8;
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  uVar6 = local_261;
                  bVar5 = uVar8 == 0;
                }
                local_251 = bVar5;
                local_261 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_appendViewController_toHierarchy_026aa588,local_250,
                           local_108,local_240,local_251,local_120 + 2);
                _objc_storeStrong(&local_250,0);
                local_248 = local_248 + 1;
              }
              _objc_storeStrong(uVar8 - uVar9,&local_240,0);
            }
            _objc_storeStrong(&local_238);
            _objc_storeStrong(&local_230,0);
          }
          uVar8 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar8 != 0) {
            pcVar2 = &::cf_space_s_;
            if ((local_1c9 & 1) == 0) {
              pcVar2 = &::cf__;
            }
            uVar12 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_stringByAppendingString__0269d398,pcVar2);
            _objc_retainAutoreleasedReturnValue();
            IVar11 = local_f0;
            uVar8 = local_1c8;
            local_270 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar11,PTR_s_appendViewController_toHierarchy_026aa588,uVar8,local_108,
                       local_270,1,local_120 + 2);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            _objc_storeStrong(&local_270,0);
          }
          _objc_storeStrong(&local_228);
          _objc_storeStrong(&local_220,0);
          _objc_storeStrong(&local_218,0);
          _objc_storeStrong(&local_210,0);
          _objc_storeStrong(&local_208,0);
          _objc_storeStrong(&local_200,0);
          _objc_storeStrong(&local_1f0,0);
          _objc_storeStrong(&local_1c8,0);
        }
      }
      uVar8 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      IVar11 = local_f0;
      if (uVar8 != 0) {
        uVar8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar11,PTR_s_appendViewController_toHierarchy_026aa588,uVar8,local_108,local_170,
                   1,local_120 + 1);
        (*(code *)PTR__objc_release_02578630)(uVar8);
      }
      local_1a8 = 1;
      _objc_storeStrong(&local_1b8);
      _objc_storeStrong(&local_1b0,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_count_0269cfe0);
    if (uVar8 != 0) {
      for (local_188 = 0; uVar8 = local_188, uVar9 = local_180,
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0), uVar8 < uVar9;
          local_188 = local_188 + 1) {
        uVar9 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_objectAtIndexedSubscript__0269cc78,local_188);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = local_188;
        uVar13 = local_180;
        local_190 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0);
        local_1a1 = 0;
        uVar6 = uVar8 == uVar13 - 1;
        bVar5 = false;
        if ((bool)uVar6) {
          uVar8 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          local_1a1 = uVar6;
          local_1a0 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar6 = local_1a1;
          bVar5 = uVar8 == 0;
        }
        local_191 = bVar5;
        local_1a1 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_appendViewController_toHierarchy_026aa588,local_190,local_108,
                   local_170,local_191,local_120 + 1);
        _objc_storeStrong(&local_190,0);
      }
    }
    uVar8 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar11 = local_f0;
    if (uVar8 != 0) {
      uVar8 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar11,PTR_s_appendViewController_toHierarchy_026aa588,uVar8,local_108,local_170,1,
                 local_120 + 1);
      (*(code *)PTR__objc_release_02578630)(uVar8);
    }
    local_1a8 = 1;
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

