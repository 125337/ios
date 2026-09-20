// reloadThemes @ 01fbc0bc

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::reloadThemes(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong local_290;
  ulong local_288;
  undefined *local_220;
  undefined *local_218;
  ID local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_130;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isBubbleRole_026c9f68);
  local_141 = (byte)IVar3;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  _memset(auStack_198,0,0x40);
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_availableThemeNames_026c9fd0);
  _objc_retainAutoreleasedReturnValue();
  local_218 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_218 != (undefined *)0x0) {
    lVar6 = *local_188;
    local_220 = (undefined *)0x0;
    do {
      do {
        if (*local_188 - lVar6 != 0) {
          _objc_enumerationMutation(*local_188 - lVar6,puVar2);
        }
        local_158 = *(undefined8 *)(local_190 + (long)local_220 * 8);
        puVar4 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_isBubbleOnlyPackNamed__026c9fd8,local_158);
        if ((uint)puVar4 == (local_141 & 1)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
        }
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10)
      ;
      local_220 = (undefined *)0x0;
    } while (local_218 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setThemeNames__026c9fe0,local_150);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar2;
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,&::cf___);
  }
  puVar2 = local_1a0;
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_themeNames_026c9fe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setDisplayNames__026c9ff0,local_1a0);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_130;
  local_1a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isBubbleRole_026c9f68);
  pcVar1 = &cf_llS;
  if ((IVar3 & 1) == 0) {
    pcVar1 = &cf__NN_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setHeaderTitle__0269e3c0,pcVar1);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_sortFooterTitle_026c9ff8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setFooterTitle__0269e3c8);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _memset(auStack_1f0,0,0x40);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_displayNames_026ca000);
  _objc_retainAutoreleasedReturnValue();
  local_288 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_288 != 0) {
    lVar6 = *local_1e0;
    local_290 = 0;
    do {
      do {
        if (*local_1e0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar6,IVar3);
        }
        local_1b0 = *(undefined8 *)(local_1e8 + local_290 * 8);
        IVar5 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_listCellForName__026ca008,local_1b0);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setUserInfo__026a17c8,local_1b0);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_addCell__0269e3f8,local_1f8);
        _objc_storeStrong(&local_1f8,0);
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      local_290 = 0;
    } while (local_288 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,0);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

