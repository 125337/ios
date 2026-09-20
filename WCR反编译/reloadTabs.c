// reloadTabs @ 01e5868c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineTelegramTabStripView::reloadTabs(WCRefineTelegramTabStripView *this,ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 in_d0;
  cfstringStruct *local_3c8;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  cfstringStruct *local_358;
  ulong local_328;
  ulong local_320;
  ulong local_2e8;
  ulong local_2e0;
  undefined *local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  cfstringStruct *local_278;
  long local_270;
  undefined *local_268;
  cfstringStruct *local_260;
  undefined *local_258;
  cfstringStruct *local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyAppearance_026a8238);
  _memset(auStack_200,0,0x40);
  IVar1 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_tabButtons_026c6940);
  _objc_retainAutoreleasedReturnValue();
  local_2e0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2e0 != 0) {
    lVar5 = *local_1f0;
    local_2e8 = 0;
    do {
      do {
        if (*local_1f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1f0 - lVar5,IVar1);
        }
        local_1c0 = *(undefined8 *)(local_1f8 + local_2e8 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_removeFromSuperview_026ca800);
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10);
      local_2e8 = 0;
    } while (local_2e0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _memset(auStack_248,0,0x40);
  IVar1 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_badgeViews_026c6960);
  _objc_retainAutoreleasedReturnValue();
  local_320 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_320 != 0) {
    lVar5 = *local_238;
    local_328 = 0;
    do {
      do {
        if (*local_238 - lVar5 != 0) {
          _objc_enumerationMutation(*local_238 - lVar5,IVar1);
        }
        local_208 = *(undefined8 *)(local_240 + local_328 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_removeFromSuperview_026ca800);
        local_328 = local_328 + 1;
      } while (local_328 < local_320);
      local_320 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_128,0x10)
      ;
      local_328 = 0;
    } while (local_320 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  pcVar2 = (cfstringStruct *)PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_250 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_250;
  local_258 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_selectedTab_026a2a78);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_358 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_358 = &cf_all;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = local_358;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setSelectedTabId__026b01c0,local_260);
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_titleFontSize_026c6970);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,*(undefined8 *)PTR__UIFontWeightMedium_02578150,puVar3,
             PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  local_270 = 0;
  local_268 = puVar3;
  _memset(auStack_2b8,0,0x40);
  pcVar2 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_visibleTabs_026a8350);
  _objc_retainAutoreleasedReturnValue();
  local_388 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_388 != (cfstringStruct *)0x0) {
    lVar5 = *local_2a8;
    local_390 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_2a8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_2a8 - lVar5,pcVar2);
        }
        local_278 = *(cfstringStruct **)(local_2b0 + (long)local_390 * 8);
        puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,local_270);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_2c0;
        pcVar4 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        local_3c8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_3c8 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitle_forState__026caab8,local_3c8,0);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        puVar3 = local_2c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2c0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_1b0,
                   PTR_s_handleTap__0269dd00,0x40);
        IVar1 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scrollView_0269dcc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_2c0);
        local_270 = local_270 + 1;
        _objc_storeStrong(&local_2c0,0);
        local_390 = (cfstringStruct *)((long)&local_390->field0_0x0 + 1);
      } while (local_390 < local_388);
      local_388 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10
                );
      local_390 = (cfstringStruct *)0x0;
    } while (local_388 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setTabButtons__026c69f0,local_258);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b0,PTR_s_setBadgeViews__026c69f8,*(undefined8 *)PTR____NSArray0___02578280);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setBadgeValues__026c6a00);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b0,PTR_s_setSelectedTabId_animated__026a8348,local_260,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_refreshBadges_026a81d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_268,0);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_258,0);
  _objc_storeStrong(&local_250,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

