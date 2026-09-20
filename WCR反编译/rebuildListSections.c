// rebuildListSections @ 01f8afa4

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::rebuildListSections(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  char *pcVar9;
  ID IVar10;
  undefined *puVar11;
  int iVar12;
  cfstringStruct *local_280;
  cfstringStruct *local_270;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  undefined *local_230;
  undefined *local_210;
  char *local_1f8;
  cfstringStruct *local_1d8;
  char *local_1b8 [3];
  char *local_1a0;
  ID local_198;
  undefined *local_190;
  long local_188;
  byte local_179;
  char *local_178;
  ID local_170;
  ulong local_168;
  bool local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  bool local_121;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  bool local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  byte local_f1;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  char *local_80;
  undefined *local_78;
  bool local_69;
  cfstringStruct *local_68;
  byte local_59;
  ID local_58;
  undefined *local_50;
  char *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_clearAllSection_0269e380);
    pcVar4 = "WCTableViewNormalCellManager";
    _objc_getClass();
    puVar5 = PTR_WCRefineHelper_026ce000;
    local_48 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_28;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindingPickMode_026c9b88);
    if ((IVar6 & 1) == 0) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selecting_026c9890);
      if ((IVar6 & 1) == 0) {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_loadingItems_026c9b90);
        if ((IVar6 & 1) == 0) {
          IVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar1 = &cf_feSSp0_t0b_0_0mRtet;
          if (IVar8 != 0) {
            pcVar1 = (cfstringStruct *)0x0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFooterTitle__0269e3c8,pcVar1);
          (*(code *)PTR__objc_release_02578630)(IVar6);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_setFooterTitle__0269e3c8,&cf_ck_WR_S_);
        }
      }
      else {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1d8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        local_59 = 0;
        local_69 = false;
        if (IVar8 == 0) {
          local_1d8 = &cf_pagvRQp_d_O;
        }
        else {
          IVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
          _objc_retainAutoreleasedReturnValue();
          local_59 = 1;
          local_58 = IVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          local_68 = local_1d8;
        }
        local_69 = IVar8 != 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFooterTitle__0269e3c8,local_1d8);
        if ((local_69 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        if ((local_59 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_58);
        }
        (*(code *)PTR__objc_release_02578630)(IVar6);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFooterTitle__0269e3c8,&cf_p);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSection__0269e3d0,local_50);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,DAT_02323f60,DAT_02323f38,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_48;
    local_78 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_normalCellForSel_target_title_ri_026b2e78);
    if (((ulong)pcVar4 & 1) == 0) {
      local_1f8 = "WCTableViewCellManager";
      _objc_getClass();
    }
    else {
      local_1f8 = local_48;
    }
    local_80 = local_1f8;
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = IVar8 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    local_210 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_99 = 0;
    local_a9 = 0;
    local_b9 = 0;
    local_81 = bVar3;
    if (bVar3) {
      puVar5 = PTR_WCRefineVoicePackStore_026cea20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackStore_026cea20,PTR_s_pinnedRelativePaths_026b0cd0);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setWithArray__0269d9a0);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_210;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = local_210;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_210;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    local_230 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_d1 = 0;
    local_e1 = 0;
    local_f1 = 0;
    if ((local_81 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_230;
    }
    else {
      puVar5 = PTR_WCRefineVoicePackStore_026cea20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackStore_026cea20,PTR_s_favoriteRelativePaths_026b0cb0);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setWithArray__0269d9a0);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_230;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_230;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    local_109 = false;
    bVar3 = (local_81 & 1) == 0;
    if (bVar3) {
      local_250 = (cfstringStruct *)0x0;
    }
    else {
      local_250 = &cf_icons_filled_folder;
      FUN_01f8c3b8(0x4041800000000000,&cf_icons_filled_folder,local_78,&cf_folder_fill);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_250;
    }
    local_109 = !bVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_250;
    if ((local_109 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    local_121 = false;
    bVar3 = (local_81 & 1) == 0;
    if (bVar3) {
      local_260 = (cfstringStruct *)0x0;
    }
    else {
      local_260 = &cf_fileicon_music;
      FUN_01f8c3b8(0x4041800000000000,&cf_fileicon_music,0,&cf_music_note);
      _objc_retainAutoreleasedReturnValue();
      local_120 = local_260;
    }
    local_121 = !bVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = local_260;
    if ((local_121 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_120);
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,DAT_02323c98,0x3fd3333333333333,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_141 = false;
    bVar3 = (local_81 & 1) == 0;
    local_130 = puVar5;
    if (bVar3) {
      local_270 = (cfstringStruct *)0x0;
    }
    else {
      local_270 = &cf_voice_circle_regular;
      FUN_01f8c3b8(0x4036000000000000,&cf_voice_circle_regular,puVar5,&cf_waveform_circle);
      _objc_retainAutoreleasedReturnValue();
      local_140 = local_270;
    }
    local_141 = !bVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = local_270;
    if ((local_141 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_140);
    }
    local_159 = false;
    bVar3 = (local_81 & 1) == 0;
    if (bVar3) {
      local_280 = (cfstringStruct *)0x0;
    }
    else {
      local_280 = &cf_pause_filled;
      FUN_01f8c3b8(0x4036000000000000,&cf_pause_filled,local_130,&cf_pause_fill);
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_280;
    }
    local_159 = !bVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_280;
    if ((local_159 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    local_168 = 0;
    while( true ) {
      uVar2 = local_168;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      if (IVar8 <= uVar2) break;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_170 = IVar8;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      local_178 = (char *)0x0;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedPaths_026ba4d0);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_absolutePath_026ae300);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_containsObject__0269cbb8);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      local_179 = (byte)IVar7;
      local_188 = 0;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selecting_026c9890);
      if ((IVar6 & 1) == 0) {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindingPickMode_026c9b88);
        if (((IVar6 & 1) == 0) ||
           (IVar6 = local_170,
           (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isDirectory_026b0ba0),
           (IVar6 & 1) != 0)) {
          IVar6 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isDirectory_026b0ba0);
          if ((IVar6 & 1) != 0) {
            local_188 = 1;
          }
        }
        else {
          local_188 = 1;
        }
      }
      else {
        iVar12 = 3;
        if ((local_179 & 1) == 0) {
          iVar12 = 0;
        }
        local_188 = (long)iVar12;
      }
      puVar5 = PTR_WCRefineVoicePackStore_026cea20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackStore_026cea20,PTR_s_listTitleForItem__026c97e8,local_170);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = local_170;
      local_190 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isDirectory_026b0ba0);
      IVar6 = local_28;
      pcVar4 = local_48;
      puVar11 = local_190;
      puVar5 = PTR_s_handlePickCellTap__026c9b98;
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selecting_026c9890);
        if (((IVar6 & 1) == 0) &&
           (IVar6 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindingPickMode_026c9b88),
           (IVar6 & 1) == 0)) {
          IVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_playIconViewForItem_index_playIc_026c9bb0,local_170,local_168,
                     local_138,local_150);
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = local_80;
          local_198 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_normalCellForSel_target_title_ri_026b2e78,
                     PTR_s_handlePickCellTap__026c9b98,local_28,local_190,IVar6);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_178;
          local_178 = pcVar9;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_valueForKey__0269d128,&cf_cellConfig);
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_valueForKey__0269d128,&cf_leftConfig);
          _objc_retainAutoreleasedReturnValue();
          local_1b8[0] = pcVar4;
          if (pcVar4 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_setValue_forKey__0269d300,local_118,&cf_image);
            pcVar4 = local_1b8[0];
            IVar6 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_detailForVoiceItem_pinnedPaths_f_026c9ba8,local_170,local_90,
                       local_c8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_setValue_forKey__0269d300,IVar6,&cf_detail);
            (*(code *)PTR__objc_release_02578630)(IVar6);
          }
          _objc_storeStrong(local_1b8);
          _objc_storeStrong(&local_1a0,0);
          _objc_storeStrong(&local_198,0);
        }
        else {
          IVar6 = local_28;
          pcVar9 = local_48;
          puVar11 = local_190;
          puVar5 = PTR_s_handlePickCellTap__026c9b98;
          IVar8 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_detailForVoiceItem_pinnedPaths_f_026c9ba8,local_170,local_90,
                     local_c8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar9,PTR_s_normalCellForSel_target_title_de_026b3248,puVar5,IVar6,puVar11,
                     IVar8,local_118,local_188);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_178;
          local_178 = pcVar9;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(IVar8);
        }
      }
      else {
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_detailForFolderItem_pinnedPaths__026c9ba0,local_170,local_90,
                   local_c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_normalCellForSel_target_title_de_026b3248,puVar5,IVar6,puVar11,IVar8
                   ,local_100,local_188);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = local_178;
        local_178 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        (*(code *)PTR__objc_release_02578630)(IVar8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_setValue_forKey__0269d300,local_170,&cf_userInfo);
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selecting_026c9890);
      if (((IVar6 & 1) == 0) &&
         (IVar7 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bindingPickMode_026c9b88),
         IVar8 = local_28, puVar5 = local_90, IVar6 = local_170, pcVar4 = local_178,
         (IVar7 & 1) == 0)) {
        IVar7 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8);
        puVar11 = local_c8;
        IVar10 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar8,PTR_s_attachFavoriteSwipeToCell_item_p_026c9bb8,pcVar4,IVar6,
                   (ulong)puVar5 & 0xffffffff,puVar11);
        (*(code *)PTR__objc_release_02578630)(IVar10);
        (*(code *)PTR__objc_release_02578630)(IVar7);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,local_178);
      _objc_storeStrong(&local_190);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_170,0);
      local_168 = local_168 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadTableView_0269dcb0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_prefetchFolderStats_026c99a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_prefetchVoiceDurations_026c9800);
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageSheetMode_026c9788);
    if ((IVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
    }
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

