// applyPluginOnlyLongPressOrderToMenuItems: @ 011062fc

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::applyPluginOnlyLongPressOrderToMenuItems_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_3f8;
  undefined *local_3f0;
  ulong local_3b8;
  ulong local_3b0;
  uint local_384;
  undefined *local_330;
  undefined *local_328;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined8 local_270;
  byte local_261;
  undefined *local_260;
  undefined4 local_254;
  ulong local_238;
  ID local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined *local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = (undefined *)0x0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  IVar1 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_resolvedLongPressOrder_026aed60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_1d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  puVar3 = local_1c8;
  local_1d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar4;
  _memset(auStack_228,0,0x40);
  puVar4 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_328 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
  if (local_328 != (undefined *)0x0) {
    lVar7 = *local_218;
    local_330 = (undefined *)0x0;
    do {
      do {
        if (*local_218 - lVar7 != 0) {
          _objc_enumerationMutation(*local_218 - lVar7,puVar4);
        }
        uVar8 = *(ulong *)(local_220 + (long)local_330 * 8);
        local_230 = 0;
        local_1e8 = uVar8;
        _objc_getAssociatedObject(uVar8,&DAT_028e3508);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_238 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar8 & 1) != 0) {
          _objc_storeStrong(&local_230,local_238);
        }
        _objc_storeStrong(&local_238,0);
        IVar5 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
        IVar1 = local_1b8;
        if (IVar5 == 0) {
          IVar6 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_menuItemTitle__026aee28,local_1e8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_itemIDMatchingMenuTitle__026aee38);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_230;
          local_230 = IVar1;
          (*(code *)PTR__objc_release_02578630)(IVar5);
          (*(code *)PTR__objc_release_02578630)(IVar6);
        }
        IVar1 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
        if ((IVar1 == 0) ||
           ((IVar1 = local_1b8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_menuItemIsPluginCreated__026aee50,local_1e8),
            (IVar1 & 1) != 0 &&
            (IVar1 = local_1b8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_menuItemIDKeepsInsertedPosition__026aee58,local_230),
            (IVar1 & 1) == 0)))) {
          IVar1 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
          local_261 = 0;
          local_384 = 0;
          if (IVar1 != 0) {
            puVar2 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,local_230);
            _objc_retainAutoreleasedReturnValue();
            local_261 = 1;
            local_384 = 0;
            local_260 = puVar2;
            if (puVar2 == (undefined *)0x0) {
              IVar1 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_menuItemIsPluginCreated__026aee50,local_1e8);
              local_384 = 0;
              if ((IVar1 & 1) != 0) {
                IVar1 = local_230;
                _WCRLongPressMenuItemIsNative();
                local_384 = (uint)IVar1 ^ 1;
              }
            }
          }
          if ((local_261 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_260);
          }
          if ((local_384 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_1e8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1e8,local_230);
          }
          local_254 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_1e8);
          local_254 = 3;
        }
        _objc_storeStrong(&local_230,0);
        local_330 = local_330 + 1;
      } while (local_330 < local_328);
      local_328 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10)
      ;
      local_330 = (undefined *)0x0;
    } while (local_328 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = local_1d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
  puVar4 = local_1c8;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar4;
  }
  else {
    _memset(auStack_2b0,0,0x40);
    IVar1 = local_1d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_3b0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10);
    if (local_3b0 != 0) {
      lVar7 = *local_2a0;
      local_3b8 = 0;
      do {
        do {
          if (*local_2a0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2a0 - lVar7,IVar1);
          }
          local_270 = *(undefined8 *)(local_2a8 + local_3b8 * 8);
          puVar4 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,local_270);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = puVar4;
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,puVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d8,PTR_s_removeObjectForKey__0269d700,local_270);
          }
          _objc_storeStrong(&local_2b8,0);
          local_3b8 = local_3b8 + 1;
        } while (local_3b8 < local_3b0);
        local_3b0 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,
                   0x10);
        local_3b8 = 0;
      } while (local_3b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _memset(auStack_300,0,0x40);
    puVar4 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_3f0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3f0 != (undefined *)0x0) {
      lVar7 = *local_2f0;
      local_3f8 = (undefined *)0x0;
      do {
        do {
          if (*local_2f0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2f0 - lVar7,puVar4);
          }
          puVar2 = local_1e0;
          local_2c0 = *(undefined8 *)(local_2f8 + (long)local_3f8 * 8);
          puVar3 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,local_2c0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_3f8 = local_3f8 + 1;
        } while (local_3f8 < local_3f0);
        local_3f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,auStack_1a8,
                   0x10);
        local_3f8 = (undefined *)0x0;
      } while (local_3f0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_copy_0269d150);
    local_1b0 = puVar4;
  }
  local_254 = 1;
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1b0;
}

