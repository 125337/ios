// currentPluginsSnapshot @ 01773730

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginHubManager::currentPluginsSnapshot(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint local_53c;
  undefined *local_520;
  undefined *local_518;
  undefined *local_4b0;
  undefined *local_4a8;
  uint local_44c;
  cfstringStruct *local_448;
  cfstringStruct *local_430;
  cfstringStruct *local_418;
  cfstringStruct *local_400;
  char *local_3b8;
  char *local_3b0;
  char *local_370;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  undefined8 local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  undefined *local_288;
  byte local_279;
  undefined *local_278;
  undefined4 local_26c;
  undefined *local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  cfstringStruct *local_218;
  undefined *local_210;
  undefined *local_208 [2];
  char *local_1f8;
  bool local_1e9;
  char *local_1e8;
  char *local_1e0 [3];
  char *local_1c8;
  SEL local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "WCPluginsMgr";
  local_1c0 = param_2;
  local_1b8 = (undefined *)param_1;
  _objc_getClass();
  local_1c8 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    puVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isSubclassOfClass__0269e590,puVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_respondsToSelector__026ca818,PTR_s_sharedInstance_0269cd30);
      local_1e9 = false;
      bVar1 = ((ulong)pcVar2 & 1) == 0;
      if (bVar1) {
        local_370 = (char *)0x0;
      }
      else {
        local_370 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = local_370;
      }
      local_1e9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e0[0] = local_370;
      if ((local_1e9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e8);
      }
      local_1f8 = (char *)0x0;
      pcVar4 = local_1e0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0[0],PTR_s_valueForKey__0269d128,&cf_plugins);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_1f8;
      local_1f8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_1f8;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        _objc_storeStrong(&local_1f8,*(undefined8 *)PTR____NSArray0___02578280);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_208[0] = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_210 = puVar5;
      _memset(auStack_258,0,0x40);
      pcVar2 = local_1f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_3b0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10)
      ;
      if (local_3b0 != (char *)0x0) {
        lVar12 = *local_248;
        local_3b8 = (char *)0x0;
        do {
          do {
            if (*local_248 - lVar12 != 0) {
              _objc_enumerationMutation(*local_248 - lVar12,pcVar2);
            }
            local_218 = *(cfstringStruct **)(local_250 + (long)local_3b8 * 8);
            puVar3 = PTR_WCRefinePluginHubItem_026cee50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefinePluginHubItem_026cee50,PTR_s_new_0269d288);
            pcVar6 = local_218;
            local_260 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_218,PTR_s_valueForKey__0269d128,&cf_isController);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_260,PTR_s_setIsController__026b43c0,(ulong)pcVar7 & 0xffffffff);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_valueForKey__0269d128,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            local_400 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_400 = &::cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setTitle__0269cef0,local_400);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_valueForKey__0269d128,&cf_version)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_418 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_418 = &::cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setVersion__026a7018,local_418);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_218,PTR_s_valueForKey__0269d128,&cf_controller);
            _objc_retainAutoreleasedReturnValue();
            local_430 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_430 = &::cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setController__0269d2d8,local_430)
            ;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_218;
            (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_valueForKey__0269d128,&cf_key);
            _objc_retainAutoreleasedReturnValue();
            local_448 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_448 = &::cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setKey__026b43f0,local_448);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_260,PTR_s_setSourceModel__026b4440,local_218);
            puVar5 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_identifier_026a4a88);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar3 = local_210;
            local_279 = 0;
            local_44c = 1;
            if (puVar8 != (undefined *)0x0) {
              puVar8 = local_260;
              (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_identifier_026a4a88);
              _objc_retainAutoreleasedReturnValue();
              local_279 = 1;
              local_278 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
              local_44c = (uint)puVar3;
            }
            if ((local_279 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_278);
            }
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar3 = local_210;
            if ((local_44c & 1) == 0) {
              puVar5 = local_260;
              (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_identifier_026a4a88);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_208[0],PTR_s_addObject__0269d180,local_260);
              local_26c = 0;
            }
            else {
              local_26c = 4;
            }
            _objc_storeStrong(&local_260,0);
            local_3b8 = local_3b8 + 1;
          } while (local_3b8 < local_3b0);
          local_3b0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                     0x10);
          local_3b8 = (char *)0x0;
        } while (local_3b0 != (char *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_288 = puVar3;
      _memset(auStack_2d0,0,0x40);
      puVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_customEntryDefinitions_026b4448);
      _objc_retainAutoreleasedReturnValue();
      local_4a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_4a8 != (undefined *)0x0) {
        lVar12 = *local_2c0;
        local_4b0 = (undefined *)0x0;
        do {
          do {
            if (*local_2c0 - lVar12 != 0) {
              _objc_enumerationMutation(*local_2c0 - lVar12,puVar3);
            }
            uVar13 = *(ulong *)(local_2c8 + (long)local_4b0 * 8);
            local_290 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar13);
            if ((uVar9 & 1) != 0) {
              puVar5 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_identifierForCustomEntry__026b4450,local_290);
              _objc_retainAutoreleasedReturnValue();
              local_2d8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
              if (puVar5 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_2d8)
                ;
              }
              _objc_storeStrong(&local_2d8,0);
            }
            local_4b0 = local_4b0 + 1;
          } while (local_4b0 < local_4a8);
          local_4a8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_128,
                     0x10);
          local_4b0 = (undefined *)0x0;
        } while (local_4a8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar5 = local_1b8;
      local_2e0 = (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(puVar5);
      puVar8 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_plugins_026b43a8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_2e0;
      local_2e0 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_sync_exit(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _memset(auStack_328,0,0x40);
      puVar3 = local_2e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_518 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1a8,0x10
                );
      if (local_518 != (undefined *)0x0) {
        lVar12 = *local_318;
        local_520 = (undefined *)0x0;
        do {
          do {
            if (*local_318 - lVar12 != 0) {
              _objc_enumerationMutation(*local_318 - lVar12,puVar3);
            }
            puVar5 = local_288;
            uVar14 = *(undefined8 *)(local_320 + (long)local_520 * 8);
            local_2e8 = uVar14;
            (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_identifier_026a4a88);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsObject__0269cbb8);
            puVar8 = local_210;
            local_53c = 1;
            if (((ulong)puVar5 & 1) != 0) {
              uVar11 = local_2e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_identifier_026a4a88);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_containsObject__0269cbb8);
              local_53c = (uint)puVar8;
              (*(code *)PTR__objc_release_02578630)(uVar11);
            }
            (*(code *)PTR__objc_release_02578630)(uVar14);
            puVar5 = local_210;
            if ((local_53c & 1) == 0) {
              uVar14 = local_2e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_identifier_026a4a88);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(uVar14);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_208[0],PTR_s_addObject__0269d180,local_2e8);
            }
            local_520 = local_520 + 1;
          } while (local_520 < local_518);
          local_518 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,auStack_1a8,
                     0x10);
          local_520 = (undefined *)0x0;
        } while (local_518 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_208[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar3;
      local_26c = 1;
      _objc_storeStrong(&local_2e0);
      _objc_storeStrong(&local_288,0);
      _objc_storeStrong(&local_210,0);
      _objc_storeStrong(local_208,0);
      _objc_storeStrong(&local_1f8,0);
      _objc_storeStrong(local_1e0,0);
      goto LAB_017747f0;
    }
  }
  puVar3 = local_1b8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(puVar3);
  puVar5 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_plugins_026b43a8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1b0 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_sync_exit(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
LAB_017747f0:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

