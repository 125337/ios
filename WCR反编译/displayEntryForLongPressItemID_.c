// displayEntryForLongPressItemID: @ 010ff7f8

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::displayEntryForLongPressItemID_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ID IVar8;
  ID IVar9;
  ulong local_310;
  ulong local_308;
  ID local_288;
  ulong local_250;
  ulong local_248;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ID local_1e8;
  ID local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  byte local_1c1;
  ID local_1c0;
  byte local_1b1;
  ID local_1b0;
  ID local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ID local_160;
  int local_154;
  ulong local_150;
  ulong local_148;
  SEL local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar1 = local_148;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_150 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_130 = 0;
    local_154 = 1;
  }
  else {
    uVar1 = local_150;
    _WCRLongPressMenuItemIsCustom();
    if ((uVar1 & 1) == 0) {
      _memset(auStack_1a0,0,0x40);
      IVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_allNativeAndDiscoveredLongPressE_026aed40);
      _objc_retainAutoreleasedReturnValue();
      local_248 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_248 != 0) {
        lVar7 = *local_190;
        local_250 = 0;
        do {
          do {
            if (*local_190 - lVar7 != 0) {
              _objc_enumerationMutation(*local_190 - lVar7,IVar2);
            }
            IVar8 = *(ID *)(local_198 + local_250 * 8);
            local_160 = IVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            IVar9 = IVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar8);
            if ((IVar9 & 1) != 0) {
              IVar9 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_mutableCopy_0269d8a0);
              IVar8 = local_138;
              local_1a8 = IVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_resolvedTitleForItemID__026aecd0,local_150);
              _objc_retainAutoreleasedReturnValue();
              IVar9 = IVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1b1 = 0;
              local_1c1 = 0;
              if (IVar9 == 0) {
                local_288 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                _objc_retainAutoreleasedReturnValue();
                local_1c1 = 1;
                local_1c0 = local_288;
              }
              else {
                local_288 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_resolvedTitleForItemID__026aecd0,local_150);
                _objc_retainAutoreleasedReturnValue();
                local_1b1 = 1;
                local_1b0 = local_288;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_288,&cf_title);
              if ((local_1c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c0);
              }
              if ((local_1b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b0);
              }
              (*(code *)PTR__objc_release_02578630)(IVar8);
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              FUN_010f4f48();
              _objc_retainAutoreleasedReturnValue();
              local_1d0 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar3 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d0,&cf_title
                          );
              }
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              FUN_010f4f48();
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar3 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
              IVar9 = local_138;
              if (puVar3 == (undefined *)0x0) {
                IVar8 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar9,PTR_s_isPlaceholderLongPressIcon__026aee00);
                (*(code *)PTR__objc_release_02578630)(IVar8);
                IVar8 = local_138;
                if ((IVar9 & 1) != 0) {
                  IVar9 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_menuTypeFromNativeItemID__026aee08,local_150);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar8,PTR_s_nativeSVGNameForMenuType__026aecf0,IVar9);
                  _objc_retainAutoreleasedReturnValue();
                  local_1e0 = IVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_length_0269cca0);
                  if (IVar8 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1e0,
                               &cf_icon);
                  }
                  _objc_storeStrong(&local_1e0,0);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d8,&cf_icon)
                ;
              }
              IVar9 = local_1a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_copy_0269d150);
              local_154 = 1;
              local_130 = IVar9;
              _objc_storeStrong(&local_1d8);
              _objc_storeStrong(&local_1d0,0);
              _objc_storeStrong(&local_1a8,0);
              goto LAB_010fff38;
            }
            local_250 = local_250 + 1;
          } while (local_250 < local_248);
          local_248 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_250 = 0;
        } while (local_248 != 0);
      }
      local_154 = 0;
LAB_010fff38:
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (local_154 == 0) {
        _memset(auStack_228,0,0x40);
        IVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_displayEntriesForCategory__026aee10,0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_308 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_308 != 0) {
          lVar7 = *local_218;
          local_310 = 0;
          do {
            do {
              if (*local_218 - lVar7 != 0) {
                _objc_enumerationMutation(*local_218 - lVar7,IVar2);
              }
              IVar9 = *(ID *)(local_220 + local_310 * 8);
              local_1e8 = IVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              IVar8 = IVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar9);
              IVar9 = local_1e8;
              if ((IVar8 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = IVar9;
                local_154 = 1;
                goto LAB_0110011c;
              }
              local_310 = local_310 + 1;
            } while (local_310 < local_308);
            local_308 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128
                       ,0x10);
            local_310 = 0;
          } while (local_308 != 0);
        }
        local_154 = 0;
LAB_0110011c:
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if (local_154 == 0) {
          local_130 = 0;
          local_154 = 1;
        }
      }
    }
    else {
      IVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_longPressCustomEntryByID__026aedf8,local_150);
      _objc_retainAutoreleasedReturnValue();
      local_154 = 1;
      local_130 = IVar2;
    }
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

