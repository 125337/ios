// persistRegistrySnapshot @ 0177109c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefinePluginHubManager::persistRegistrySnapshot
          (WCRefinePluginHubManager *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_218;
  cfstringStruct *local_1e8;
  ulong local_1b0;
  ulong local_1a8;
  undefined *local_160;
  undefined4 local_154;
  undefined *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  cfstringStruct *local_108;
  undefined *local_100 [3];
  ID local_e8 [2];
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = param_1;
  _CFAbsoluteTimeGetCurrent();
  IVar1 = local_d0;
  local_e8[0] = 0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar1);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_plugins_026b43a8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar4 = local_e8[0];
  local_e8[0] = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_sync_exit(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  IVar4 = local_e8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,IVar4);
  _objc_retainAutoreleasedReturnValue();
  local_100[0] = puVar5;
  _memset(auStack_148,0,0x40);
  IVar4 = local_e8[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1a8 != 0) {
    lVar9 = *local_138;
    local_1b0 = 0;
    do {
      do {
        if (*local_138 - lVar9 != 0) {
          _objc_enumerationMutation(*local_138 - lVar9,IVar4);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        pcVar10 = *(cfstringStruct **)(local_140 + local_1b0 * 8);
        local_c8 = &cf_isController;
        local_108 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isController_026b1a20);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithBool__0269ce60,pcVar10);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = &cf_title;
        pcVar10 = local_108;
        local_b8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = pcVar10;
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_1e8 = &::cf___;
        }
        local_b0 = local_1e8;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_150 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar10 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isController_026b1a20);
        if (((ulong)pcVar10 & 1) == 0) {
          pcVar10 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_key_026a7380);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar10);
          if (pcVar8 != (cfstringStruct *)0x0) {
            pcVar10 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_key_026a7380);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar10,&cf_key);
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            goto LAB_01771604;
          }
          local_154 = 5;
        }
        else {
          pcVar10 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_controller_0269cff8);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar10);
          if (pcVar8 == (cfstringStruct *)0x0) {
            local_154 = 5;
          }
          else {
            pcVar10 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_controller_0269cff8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar10,&cf_controller)
            ;
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            pcVar10 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_version_026b43b0);
            _objc_retainAutoreleasedReturnValue();
            local_218 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              local_218 = &::cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_218,&cf_version);
            (*(code *)PTR__objc_release_02578630)(pcVar10);
LAB_01771604:
            (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_addObject__0269d180,local_150);
            local_154 = 0;
          }
        }
        _objc_storeStrong(&local_150,0);
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      local_1b0 = 0;
    } while (local_1a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_100[0];
  local_160 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_count_0269cfe0);
  if (puVar6 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_removeObjectForKey__0269d700,&cf_WCRPluginHubRegistrySnapshot);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_100[0],
               &cf_WCRPluginHubRegistrySnapshot);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_160);
  _objc_storeStrong(&local_160);
  _objc_storeStrong(local_100,0);
  _objc_storeStrong(local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

