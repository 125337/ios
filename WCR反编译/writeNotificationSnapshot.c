// writeNotificationSnapshot @ 01121b50

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::writeNotificationSnapshot(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  cfstringStruct *local_1d8;
  byte local_1bc;
  byte local_1b8;
  uint local_1b4;
  cfstringStruct *local_1a8;
  undefined *local_120;
  undefined *local_118;
  byte local_10c;
  byte local_10b;
  byte local_10a;
  bool local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  SEL local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = (cfstringStruct *)param_1;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((param_1 & 1) == 0) {
    FUN_01119e60();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = (cfstringStruct *)param_1;
    if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
      local_e4 = 1;
    }
    else {
      pcVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_ownerWxid_026aef20);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_01119250();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_dataWithContentsOfURL__026a9eb0);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_URLByDeletingLastPathComponent_026af050);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_100 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_URLByDeletingLastPathComponent_026af050);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_createDirectoryAtURL_withInterme_026aafa0,pcVar2,1,0);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_writeToURL_options_error__026af080,local_100,1,0);
        local_109 = false;
        bVar1 = ((ulong)puVar6 & 1) == 0;
        if (bVar1) {
          local_1a8 = &::cf___;
        }
        else {
          local_1a8 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_108 = local_1a8;
        }
        local_109 = !bVar1;
        _objc_storeStrong(&local_f0,local_1a8);
        if ((local_109 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_108);
        }
        _objc_storeStrong(&local_100);
        _objc_storeStrong(&local_f8,0);
      }
      pcVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_enabled_0269db80);
      local_1b4 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isLocked_0269db88);
        local_1b4 = 0;
        if (((ulong)pcVar2 & 1) != 0) {
          puVar6 = PTR_WCRefinePrivateFriendManager_026ce160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePrivateFriendManager_026ce160,
                     PTR_s_isEntryVisibleForCurrentUser_0269e560);
          local_1b4 = (uint)puVar6;
        }
      }
      local_10a = (byte)local_1b4 & 1;
      local_1b8 = 0;
      if ((local_1b4 & 1) != 0) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_notificationDisguiseEnabled_026aef08);
        local_1b8 = (byte)pcVar2;
      }
      local_10b = local_1b8 & 1;
      local_1bc = 0;
      if ((local_10a & 1) != 0) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_notificationDisguiseEnabled_026aef08);
        local_1bc = (byte)pcVar2 ^ 1;
      }
      local_10c = local_1bc & 1;
      local_c8 = &cf_version;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = &cf_owner;
      pcVar2 = local_d0;
      local_78 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_ownerWxid_026aef20);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1d8 = &::cf___;
      }
      local_70 = local_1d8;
      local_b8 = &cf_enabled;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_10b & 1);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = &cf_suppress;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_68 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_10c & 1);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_usernames;
      pcVar3 = local_d0;
      local_60 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_selectedUsernames_026a6628);
      _objc_retainAutoreleasedReturnValue();
      local_208 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_208 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      local_58 = local_208;
      local_a0 = &cf_displayNames;
      pcVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_selectedDisplayNames_026af060);
      _objc_retainAutoreleasedReturnValue();
      local_218 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_218 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
      }
      local_50 = local_218;
      local_98 = &cf_title;
      pcVar5 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_notificationDisguiseResolvedTitl_026a6808);
      _objc_retainAutoreleasedReturnValue();
      local_90 = &cf_body;
      pcVar9 = local_d0;
      local_48 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_notificationDisguiseBody_026a6810);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_88 = &cf_avatarFile;
      local_38 = local_f0;
      local_80 = &cf_generation;
      puVar10 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_40 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_c8,10);
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar12;
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_URLByDeletingLastPathComponent_026af050);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_createDirectoryAtURL_withInterme_026aafa0,pcVar2,1,0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8,
                 PTR_s_dataWithPropertyList_format_opti_026af128,local_118,200,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_120 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_writeToURL_options_error__026af080,local_e0,1,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_f0,0);
      local_e4 = 0;
    }
    _objc_storeStrong(&local_e0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

