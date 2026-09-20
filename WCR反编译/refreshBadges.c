// refreshBadges @ 01e58f5c

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramTabStripView::refreshBadges(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2c0;
  undefined *local_290;
  undefined *local_288;
  undefined *local_238;
  byte local_229;
  undefined *local_228;
  undefined1 local_219;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158;
  byte local_14a;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  local_138 = param_2;
  local_130 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeTelegramGroupingShowUnreadBa_026c66b8);
  local_149 = (byte)puVar3;
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_homeTelegramGroupingShowRedDot_026c66c8);
  local_14a = (byte)puVar2;
  puVar3 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_visibleTabs_026a8350);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_158 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_149 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_14a & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithObjects__026af658,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_1a8,0,0x40);
  puVar2 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  local_288 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
  if (local_288 != (undefined *)0x0) {
    lVar6 = *local_198;
    local_290 = (undefined *)0x0;
    do {
      do {
        if (*local_198 - lVar6 != 0) {
          _objc_enumerationMutation(*local_198 - lVar6,puVar2);
        }
        puVar4 = local_160;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_168 = *(undefined8 *)(local_1a0 + (long)local_290 * 8);
        if (((local_149 & 1) == 0) && ((local_14a & 1) == 0)) {
          local_2c0 = (undefined *)0x0;
        }
        else {
          local_2c0 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_unreadCountForTab__026c6a08,local_168);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_numberWithUnsignedInteger__0269e4d0,local_2c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10)
      ;
      local_290 = (undefined *)0x0;
    } while (local_288 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_badgeValues_026c6a10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBadgeValues__026c6a00,local_160);
    _memset(auStack_1f8,0,0x40);
    puVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_badgeViews_026c6960);
    _objc_retainAutoreleasedReturnValue();
    local_2f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2f8 != (undefined *)0x0) {
      lVar6 = *local_1e8;
      local_300 = (undefined *)0x0;
      do {
        do {
          if (*local_1e8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar6,puVar2);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + (long)local_300 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_removeFromSuperview_026ca800);
          local_300 = local_300 + 1;
        } while (local_300 < local_2f8);
        local_2f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        local_300 = (undefined *)0x0;
      } while (local_2f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_208 = (undefined *)0x0;
    local_200 = puVar2;
    while( true ) {
      puVar2 = local_208;
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tabButtons_026c6940);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_208;
      bVar1 = false;
      if (puVar2 < puVar5) {
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
        bVar1 = puVar3 < puVar2;
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (!bVar1) break;
      puVar2 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectAtIndexedSubscript__0269cc78,local_208);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_160;
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_objectAtIndexedSubscript__0269cc78,local_208 + 2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_218 = puVar2;
      if (((local_149 & 1) != 0) || (bVar1 = false, (local_14a & 1) != 0)) {
        puVar2 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_kind_026a27e8);
        bVar1 = false;
        if (puVar2 != (undefined *)0x0) {
          bVar1 = local_218 != (undefined *)0x0;
        }
      }
      local_219 = bVar1;
      puVar2 = PTR_WCRefineHelper_026ce000;
      local_228 = (undefined *)0x0;
      if ((bool)local_219 != false) {
        local_229 = 0;
        if ((local_14a & 1) != 0) {
          local_229 = local_149 ^ 1;
        }
        local_229 = local_229 & 1;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_218);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_229 & 1)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_officialUnreadBadgeViewWithCount_026b10e0,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_228;
        local_228 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if (local_228 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
        local_238 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_238);
        _objc_storeStrong(&local_238,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        puVar2 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_scrollView_0269dcc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_228);
      }
      _objc_storeStrong(&local_228);
      _objc_storeStrong(&local_210,0);
      local_208 = local_208 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBadgeViews__026c69f8,local_200);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setNeedsLayout_0269deb8);
    _objc_storeStrong(&local_200,0);
    local_1ac = 0;
  }
  else {
    local_1ac = 1;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

