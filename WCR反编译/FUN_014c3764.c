// FUN_014c3764 @ 014c3764

void FUN_014c3764(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_240;
  ulong local_238;
  ulong local_170 [2];
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  ulong local_100;
  byte local_f1;
  ulong local_e8;
  ulong local_e0 [3];
  undefined4 local_c4;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar2 = param_1 + 0x30;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_loadWeakRetained();
  local_c0 = uVar2;
  if (uVar2 == 0) {
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_wcRefine_isSettingsPageOnScreen_026af5c0);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(local_c0 + 0xb) = 0;
      local_c4 = 1;
    }
    else {
      uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
      FUN_014c42cc();
      if ((uVar1 & 1) == 0) {
        uVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_wcRefineSearchInstantiatePluginC_026af608,
                   *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        local_e0[0] = uVar2;
        if (uVar2 == 0) {
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_loadedPluginClassSet_026af5f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_loadPluginsOneByOne_atIndex__026af580,
                     *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x38) + 1);
          local_c4 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_c0 + 0x38),PTR_s_addObject__0269d180,uVar2);
          local_e8 = 0;
          uVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_findTableViewManagerInViewContro_026af610,local_e0[0],1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_e8;
          local_e8 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_f1 = 0;
          if (local_e8 != 0) {
            local_100 = 0;
            uVar2 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
            if ((uVar2 & 1) != 0) {
              uVar3 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_100;
              local_100 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            if ((local_100 == 0) ||
               (uVar2 = local_100,
               (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0), uVar2 == 0)) {
              uVar2 = local_e0[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0[0],PTR_s_respondsToSelector__026ca818,
                         PTR_s_reloadTableData_0269dca8);
              if ((uVar2 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0[0],PTR_s_performSelector__026ca7b8,
                           PTR_s_reloadTableData_0269dca8);
              }
              uVar2 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
              if ((uVar2 & 1) != 0) {
                uVar3 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = local_100;
                local_100 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
            }
            if ((local_100 != 0) &&
               (uVar2 = local_100,
               (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0), uVar2 != 0)) {
              local_f1 = 1;
              _memset(auStack_158,0,0x40);
              uVar2 = local_100;
              (*(code *)PTR__objc_retain_02578638)();
              local_238 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                         auStack_a8,0x10);
              if (local_238 != 0) {
                lVar6 = *local_148;
                local_240 = 0;
                do {
                  do {
                    if (*local_148 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_148 - lVar6,uVar2);
                    }
                    local_118 = *(undefined8 *)(local_150 + local_240 * 8);
                    _objc_setAssociatedObject
                              (local_118,"pluginSourceClass",*(undefined8 *)(param_1 + 0x20),1);
                    local_240 = local_240 + 1;
                  } while (local_240 < local_238);
                  local_238 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                             auStack_a8,0x10);
                  local_240 = 0;
                } while (local_238 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar2);
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                         *(undefined8 *)(local_c0 + 0x10));
              _objc_retainAutoreleasedReturnValue();
              local_160 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_addObjectsFromArray__0269d540,local_100);
              puVar4 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
              uVar5 = *(undefined8 *)(local_c0 + 0x10);
              *(undefined **)(local_c0 + 0x10) = puVar4;
              (*(code *)PTR__objc_release_02578630)(uVar5);
              _objc_storeStrong(&local_160,0);
            }
            _objc_storeStrong(&local_100,0);
          }
          if ((local_f1 & 1) == 0) {
            uVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_extractFeaturesFromPlugin__026af620,
                       *(undefined8 *)(param_1 + 0x40));
            _objc_retainAutoreleasedReturnValue();
            local_170[0] = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_mergeExtractedPluginTitles_forPl_026af628,uVar2,
                       *(undefined8 *)(param_1 + 0x20));
            _objc_storeStrong(local_170,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_applySupplementIndexTitlesForPlu_026af600,
                     *(undefined8 *)(param_1 + 0x20));
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_loadedPluginClassSet_026af5f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_loadPluginsOneByOne_atIndex__026af580,
                     *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x38) + 1);
          _objc_storeStrong(&local_e8,0);
          local_c4 = 0;
        }
        _objc_storeStrong(local_e0,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_applySupplementIndexTitlesForPlu_026af600,
                   *(undefined8 *)(param_1 + 0x20));
        uVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_loadedPluginClassSet_026af5f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_loadPluginsOneByOne_atIndex__026af580,
                   *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x38) + 1);
        local_c4 = 1;
      }
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

