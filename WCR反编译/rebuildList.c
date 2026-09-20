// rebuildList @ 01f6a0bc

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackBookmarkListViewController::rebuildList(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  long lVar8;
  ulong uVar9;
  cfstringStruct *local_1d0;
  ulong local_1b0;
  ulong local_1a8;
  char *local_158;
  byte local_149;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined4 local_c4;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  if (param_1 == 0) {
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_clearAllSection_0269e380);
    pcVar2 = "WCTableViewNormalCellManager";
    _objc_getClass();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_d0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b0;
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pageTitle_026ba7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setHeaderTitle__0269e3c0);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (IVar5 == 0) {
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_kind_026a27e8);
      pcVar1 = &cf_fe6e0_WSRh_nS6e0;
      if (IVar4 != 1) {
        pcVar1 = &cf_fe;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFooterTitle__0269e3c8,pcVar1);
    }
    else {
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_kind_026a27e8);
      if (IVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFooterTitle__0269e3c8,&cf_pQS_nSyd0)
        ;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_setFooterTitle__0269e3c8,&cf_pQS_nSSm6e0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSection__0269e3d0,local_d8);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,DAT_02323f60,DAT_02323f38,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != 0) {
      lVar8 = *local_118;
      local_1b0 = 0;
      do {
        do {
          if (*local_118 - lVar8 != 0) {
            _objc_enumerationMutation(*local_118 - lVar8,IVar4);
          }
          uVar9 = *(ulong *)(local_120 + local_1b0 * 8);
          local_e8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isDirectory_026b0ba0);
          local_139 = 0;
          local_149 = 0;
          if ((uVar9 & 1) == 0) {
            local_1d0 = &cf_fileicon_music;
            FUN_01f6a820(0x4041800000000000,&cf_fileicon_music,0,&cf_music_note);
            _objc_retainAutoreleasedReturnValue();
            local_149 = 1;
            local_148 = local_1d0;
          }
          else {
            local_1d0 = &cf_icons_filled_folder;
            FUN_01f6a820(0x4041800000000000,&cf_icons_filled_folder,local_e0,&cf_folder_fill);
            _objc_retainAutoreleasedReturnValue();
            local_139 = 1;
            local_138 = local_1d0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = local_1d0;
          if ((local_149 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          if ((local_139 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          IVar5 = local_b0;
          pcVar2 = local_d0;
          puVar3 = PTR_s_handleCellTap__0269e440;
          puVar6 = PTR_WCRefineVoicePackStore_026cea20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackStore_026cea20,PTR_s_listTitleForItem__026c97e8,local_e8);
          _objc_retainAutoreleasedReturnValue();
          IVar7 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_detailForItem__026c97f0,local_e8);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_130;
          uVar9 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isDirectory_026b0ba0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_normalCellForSel_target_title_de_026b3248,puVar3,IVar5,puVar6,
                     IVar7,pcVar1,(uVar9 & 1) != 0);
          _objc_retainAutoreleasedReturnValue();
          local_158 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(IVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_setValue_forKey__0269d300,local_e8,&cf_userInfo);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_attachSwipeToCell_item__026c97f8,local_158,local_e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addCell__0269e3f8,local_158);
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_130,0);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_reloadTableView_0269dcb0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_prefetchVoiceDurations_026c9800);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

