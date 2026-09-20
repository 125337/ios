// reloadEditorData @ 01c7ee20

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubOrderViewController::reloadEditorData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined *local_260;
  undefined *local_258;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined *local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setGroups__026abf30);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setGroupPlugins__026c2818);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_orderedPluginsIncludingHidden__026b1a18,1);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  _memset(auStack_190,0,0x40);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  local_218 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_218 != 0) {
    lVar7 = *local_180;
    local_220 = 0;
    do {
      do {
        if (*local_180 - lVar7 != 0) {
          _objc_enumerationMutation(*local_180 - lVar7,IVar3);
        }
        local_150 = *(undefined8 *)(local_188 + local_220 * 8);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_198 = puVar1;
        _memset(auStack_1e0,0,0x40);
        puVar1 = local_148;
        (*(code *)PTR__objc_retain_02578638)();
        local_258 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                   0x10);
        if (local_258 != (undefined *)0x0) {
          lVar8 = *local_1d0;
          local_260 = (undefined *)0x0;
          do {
            do {
              if (*local_1d0 - lVar8 != 0) {
                _objc_enumerationMutation(*local_1d0 - lVar8,puVar1);
              }
              local_1a0 = *(undefined8 *)(local_1d8 + (long)local_260 * 8);
              puVar2 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_groupIdentifierForPlugin__026b4470,local_1a0);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8);
              (*(code *)PTR__objc_release_02578630)(uVar4);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (((ulong)puVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_1a0)
                ;
              }
              local_260 = local_260 + 1;
            } while (local_260 < local_258);
            local_258 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                       auStack_128,0x10);
            local_260 = (undefined *)0x0;
          } while (local_258 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        IVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_groupPlugins_026c2820);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar6);
        _objc_storeStrong(&local_198,0);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

