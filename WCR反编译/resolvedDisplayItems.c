// resolvedDisplayItems @ 01afa674

/* Function Stack Size: 0x10 bytes */

ID WCRefineHomeAvatarStripView::resolvedDisplayItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  undefined1 *local_358;
  undefined1 *local_350;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  char *local_268;
  char *local_258;
  undefined1 *local_248;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  byte local_1c5;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  undefined *local_170;
  undefined4 local_164;
  undefined1 *local_160;
  long local_158;
  undefined **local_150;
  undefined **local_148;
  undefined1 *local_140;
  byte local_131;
  char *local_130;
  char *local_128;
  byte local_119;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_e0;
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_homeAvatarStripItemMeta_026a2290);
  _objc_retainAutoreleasedReturnValue();
  local_248 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_248 = *(undefined1 **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_248;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MMServiceCenter";
  local_f8 = puVar1;
  _objc_getClass();
  pcVar4 = "MMNewSessionMgr";
  local_100 = pcVar3;
  _objc_getClass();
  local_119 = 0;
  local_108 = pcVar4;
  if ((local_100 == (char *)0x0) ||
     (pcVar3 = local_100,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar3 & 1) == 0)) {
    local_258 = (char *)0x0;
  }
  else {
    local_258 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 1;
    local_118 = local_258;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_258;
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  local_131 = 0;
  if ((local_110 == (char *)0x0) || (local_108 == (char *)0x0)) {
    local_268 = (char *)0x0;
  }
  else {
    local_268 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_getService__0269d170,local_108);
    _objc_retainAutoreleasedReturnValue();
    local_131 = 1;
    local_130 = local_268;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = local_268;
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  puVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_homeAvatarStripSortMode_026a23e8);
  ppuVar5 = &PTR___NSConcreteGlobalBlock_0258b218;
  local_140 = puVar2;
  _objc_retainBlock();
  ppuVar6 = &PTR___NSConcreteGlobalBlock_0258b238;
  local_148 = ppuVar5;
  _objc_retainBlock();
  local_150 = ppuVar6;
  for (local_158 = 0; lVar10 = local_158, puVar2 = local_e8,
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0), puVar1 = local_f8,
      lVar10 < (long)puVar2; local_158 = local_158 + 1) {
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,local_158);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_160;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      local_164 = 4;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar1;
      _memset(auStack_1b8,0,0x40);
      puVar2 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      if (local_2a8 != (undefined1 *)0x0) {
        lVar10 = *local_1a8;
        local_2b0 = (undefined1 *)0x0;
        do {
          do {
            if (*local_1a8 - lVar10 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar10,puVar2);
            }
            uVar11 = *(ulong *)(local_1b0 + (long)local_2b0 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_178 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((uVar11 & 1) != 0) &&
               (uVar11 = local_178,
               (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0), uVar11 != 0))
            {
              puVar1 = PTR_WCRefineHomeAvatarStripItem_026cf358;
              _objc_alloc_init();
              local_1c0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUsername__026a2510,local_178);
              uVar11 = local_178;
              FUN_01afb824();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setDisplayName__026ae2f8);
              (*(code *)PTR__objc_release_02578630)(uVar11);
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setUnreadCount__026a2cc0);
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setUnreadAsRedDot__026be720,0);
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setLastMsgTime__026be728,0);
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setRowIndex__026be208,local_158)
              ;
              local_1c4 = 0;
              local_1c5 = 0;
              local_1d0 = 0;
              FUN_01afc134(local_178,local_128,&local_1c4,&local_1c5,&local_1d0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_setUnreadCount__026a2cc0,local_1c4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_setUnreadAsRedDot__026be720,local_1c5 & 1);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_setLastMsgTime__026be728,local_1d0);
              dVar12 = 0.0;
              local_1d8 = 0.0;
              local_1e0 = 0.0;
              puVar7 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_objectForKeyedSubscript__0269d098,local_178);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_1e8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((ulong)puVar7 & 1) != 0) {
                puVar7 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_customAvatarPath);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1f0 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
                if (((ulong)puVar7 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_setCustomAvatarPath__026be730,local_1f0);
                }
                puVar7 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_verticalOffset);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar7);
                if (((ulong)puVar8 & 1) != 0) {
                  puVar7 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_verticalOffset);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_1d8 = dVar12;
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  if (40.0 < local_1d8) {
                    local_1d8 = 40.0;
                  }
                  dVar12 = local_1d8;
                  if (local_1d8 < -40.0) {
                    local_1d8 = -40.0;
                    dVar12 = local_1d8;
                  }
                }
                puVar7 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_horizontalOffset);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar7);
                if (((ulong)puVar8 & 1) != 0) {
                  puVar7 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_horizontalOffset)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_1e0 = dVar12;
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  if (80.0 < local_1e0) {
                    local_1e0 = 80.0;
                  }
                  if (local_1e0 < -80.0) {
                    local_1e0 = -80.0;
                  }
                }
                _objc_storeStrong(&local_1f0,0);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,local_1c0,PTR_s_setVerticalOffset__026be6d8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e0,local_1c0,PTR_s_setHorizontalOffset__026be6e8);
              (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_1c0);
              _objc_storeStrong(&local_1e8);
              _objc_storeStrong(&local_1c0,0);
            }
            local_2b0 = local_2b0 + 1;
          } while (local_2b0 < local_2a8);
          local_2a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_2b0 = (undefined1 *)0x0;
        } while (local_2a8 != (undefined1 *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_140 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_sortUsingComparator__0269d168,local_148);
      }
      else if (local_140 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_sortUsingComparator__0269d168,local_150);
      }
      local_350 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_homeAvatarStripPerRowCount_026a23e0);
      if (7 < (long)local_350) {
        local_350 = (undefined1 *)((long)&MACH_HEADER.cputype + 3);
      }
      if ((long)local_350 < 2) {
        local_358 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        local_358 = local_350;
      }
      puVar9 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
      puVar1 = local_f8;
      if ((long)local_358 < (long)puVar9) {
        local_c0 = 0;
        local_c8 = local_358;
        local_b8 = 0;
        local_b0 = local_358;
        puVar9 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_subarrayWithRange__0269d848,0,local_358);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(puVar9);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_addObjectsFromArray__0269d540,local_170);
      }
      _objc_storeStrong(&local_170,0);
      local_164 = 0;
    }
    _objc_storeStrong(&local_160,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_164 = 1;
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

