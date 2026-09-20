// ensureSystemGroups @ 01ad4978

/* Function Stack Size: 0x10 bytes */

void WCRefineGroupManager::ensureSystemGroups(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint local_3ac;
  byte local_380;
  uint local_354;
  uint local_330;
  uint local_32c;
  ulong local_310;
  ulong local_308;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined *local_240;
  long local_238;
  undefined *local_230;
  byte local_221;
  ulong local_220;
  byte local_211;
  ulong local_210;
  ulong local_208;
  byte local_1f9;
  ulong local_1f8;
  byte local_1ea;
  byte local_1e9;
  ulong local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  ulong local_1c8;
  byte local_1b9;
  ulong local_1b8;
  byte local_1a9;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  byte local_15a;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  byte local_141;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [128];
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_141 = 0;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_ensureGroupId_name_kind_scope_or_026be1d0,&cf_sys_friend,&::cf_S,1,1,0);
  local_141 = (local_141 & 1) != 0 || (int)param_1 != 0;
  IVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_ensureGroupId_name_kind_scope_or_026be1d0,&cf_sys_chatroom,&cf__J,1);
  local_141 = (local_141 & 1) != 0 || (int)IVar1 != 0;
  IVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_ensureGroupId_name_kind_scope_or_026be1d0,&cf_sys_other,&cf_vQN,1,0x1c,
             2);
  local_141 = (local_141 & 1) != 0 || (int)IVar1 != 0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x20);
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_n_vvJ_Y;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_88 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = &cf__gmo_;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_80 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0x80);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &::cf__;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_78 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = &cf_lQOS;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_70 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = &cf_gRS;
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_68 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,4);
  _objc_retainAutoreleasedReturnValue();
  local_30 = &cf_ON_OT_N;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_88,6);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_objectForKeyedSubscript__0269d098,
             &cf_homeGroupingQuickPinnedUnreadOrderMigrated);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_159 = (byte)puVar3;
  local_15a = 0;
  _memset(auStack_1a8,0,0x40);
  uVar9 = *(ulong *)(local_138 + 8);
  (*(code *)PTR__objc_retain_02578638)();
  local_308 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_108,0x10);
  if (local_308 != 0) {
    lVar11 = *local_198;
    local_310 = 0;
    do {
      do {
        if (*local_198 - lVar11 != 0) {
          _objc_enumerationMutation(*local_198 - lVar11,uVar9);
        }
        uVar12 = *(ulong *)(local_1a0 + local_310 * 8);
        local_168 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_scope_0269ea90);
        local_1b9 = 0;
        local_1c9 = 0;
        local_32c = 0;
        if (uVar12 == 2) {
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_kind_026a27e8);
          if (uVar12 != 0) {
            uVar12 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_kind_026a27e8);
            local_32c = 0;
            if (uVar12 != 3) goto LAB_01ad4f6c;
          }
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_1b9 = 1;
          local_1b8 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_330 = 1;
          if ((uVar12 & 1) == 0) {
            uVar12 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            local_1c9 = 1;
            local_1c8 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_330 = (uint)uVar12;
          }
          local_32c = local_330;
        }
LAB_01ad4f6c:
        if ((local_1c9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c8);
        }
        if ((local_1b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1b8);
        }
        local_1a9 = (byte)local_32c & 1;
        if ((local_32c & 1) != 0) {
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar12);
          if ((uVar10 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setName__0269e0c8,&cf_bSvJ_Y);
            local_141 = 1;
          }
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_kind_026a27e8);
          if (uVar12 != 3) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setKind__026ad410,3);
            local_141 = 1;
          }
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_members_0269ea98);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar12);
          if (uVar10 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_setMembers__026b00e0,
                       *(undefined8 *)PTR____NSArray0___02578280);
            local_141 = 1;
          }
        }
        puVar3 = local_150;
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        uVar12 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar12);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar12 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90);
        local_1e9 = 0;
        local_354 = 0;
        if (uVar12 == 4) {
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_1e9 = 1;
          local_1e8 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_354 = (uint)uVar12;
        }
        if ((local_1e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1e8);
        }
        local_1d9 = (byte)local_354 & 1;
        local_1f9 = 0;
        local_380 = 1;
        if ((local_354 & 1) == 0) {
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_1f9 = 1;
          local_1f8 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_380 = (byte)uVar12;
        }
        if ((local_1f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1f8);
        }
        local_1ea = local_380 & 1;
        uVar12 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_kind_026a27e8);
        if ((uVar12 == 0) && ((local_1ea & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setKind__026ad410,3);
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setName__0269e0c8,local_1d8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_setMembers__026b00e0,*(undefined8 *)PTR____NSArray0___02578280)
          ;
          local_141 = 1;
        }
        uVar12 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_kind_026a27e8);
        if ((uVar12 == 3) &&
           (((uVar12 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90), uVar12 == 0x20
             || (uVar12 = local_168,
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90),
                uVar12 == 0x40)) ||
            (uVar12 = local_168,
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90), uVar12 == 0x80)))
           ) {
          uVar12 = local_168;
          FUN_01ad5b10(0);
          if ((uVar12 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_setAvatarSource__026bdab0,&cf_official);
            puVar2 = PTR_WCRefineGroup_026ce630;
            uVar12 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90);
            uVar10 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_groupId_0269ea88);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,uVar12);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setAvatarValue__026bdab8);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(uVar10);
            local_141 = 1;
          }
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90);
          FUN_01ad5e50();
          local_208 = uVar12;
          if (((local_159 & 1) == 0) && (uVar12 != 0x7fffffffffffffff)) {
            uVar12 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_order_026ad490);
            if (uVar12 != local_208) {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setOrder__026ad418,local_208);
              local_141 = 1;
            }
            local_15a = 1;
          }
        }
        uVar12 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_kind_026a27e8);
        local_211 = 0;
        local_221 = 0;
        local_3ac = 0;
        if (uVar12 == 3) {
          uVar12 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scope_0269ea90);
          local_3ac = 0;
          if (uVar12 == 8) {
            uVar12 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_avatarSource_026a3170);
            _objc_retainAutoreleasedReturnValue();
            local_211 = 1;
            local_210 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_3ac = 0;
            if ((uVar12 & 1) != 0) {
              uVar12 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_avatarValue_026a3178);
              _objc_retainAutoreleasedReturnValue();
              local_221 = 1;
              local_220 = uVar12;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_3ac = (uint)uVar12 ^ 1;
            }
          }
        }
        if ((local_221 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_220);
        }
        if ((local_211 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_210);
        }
        if ((local_3ac & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_setAvatarValue__026bdab8,&cf_photo_accounts_icon);
          local_141 = 1;
        }
        _objc_storeStrong(&local_1d8,0);
        local_310 = local_310 + 1;
      } while (local_310 < local_308);
      local_308 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_108,0x10)
      ;
      local_310 = 0;
    } while (local_308 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_130 = &cf_sys_public;
  local_128 = &cf_sys_official;
  local_120 = &cf_sys_service;
  local_118 = &cf_sys_fallback_friend;
  local_110 = &cf_sys_fallback_chatroom;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_130,5)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_230 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_230;
  lVar11 = *(long *)(local_138 + 8);
  local_260 = PTR___NSConcreteGlobalBlock_02578658;
  local_258 = 0xd0800000;
  local_254 = 0;
  local_250 = FUN_01ad5ec4;
  local_248 = &DAT_0258b148;
  (*(code *)PTR__objc_retain_02578638)();
  local_240 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar11,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_260);
  _objc_retainAutoreleasedReturnValue();
  local_238 = lVar11;
  (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_count_0269cfe0);
  if (lVar11 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_138 + 8),PTR_s_removeObjectsAtIndexes__026a2c98,local_238);
    local_141 = 1;
  }
  if ((local_15a & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
               &cf_homeGroupingQuickPinnedUnreadOrderMigrated);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_158);
  }
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_persist_026b68b8);
  }
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

