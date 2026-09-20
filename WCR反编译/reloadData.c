// reloadData @ 01b7cd98

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRLongPressMenuPickerViewController::reloadData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ulong uVar2;
  void *pvVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *local_290;
  void *local_288;
  undefined *local_230;
  undefined *local_228;
  long local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  long local_1a0;
  undefined *local_198;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_disabledLongPressEntries_026bfbf8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setDisabledItems__026bfc00);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  _memset(auStack_188,0,0x40);
  puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_enabledLongPressEntries_026bfb88);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_228 != (undefined *)0x0) {
    lVar5 = *local_178;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_178 - lVar5 != 0) {
          _objc_enumerationMutation(*local_178 - lVar5,puVar1);
        }
        uVar7 = *(ulong *)(local_180 + (long)local_230 * 8);
        local_148 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,_kWCRefinePluginIconIDKey);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        _WCRLongPressMenuItemIsCustom();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_objectForKeyedSubscript__0269d098,
                     _kWCRefineLongPressCustomKindKey);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar7 & 1) != 0) {
            uVar2 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148,PTR_s_objectForKeyedSubscript__0269d098,
                       _kWCRefineLongPressCustomPayloadKey);
            _objc_retainAutoreleasedReturnValue();
            local_190 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            if (uVar2 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_190);
            }
            _objc_storeStrong(&local_190,0);
          }
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10)
      ;
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar1;
  pvVar3 = _memset(auStack_1e0,0,0x40);
  FUN_01b7d3d8();
  _objc_retainAutoreleasedReturnValue();
  local_288 = pvVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_288 != (void *)0x0) {
    lVar5 = *local_1d0;
    local_290 = (void *)0x0;
    do {
      do {
        if (*local_1d0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar5,pvVar3);
        }
        lVar6 = *(long *)(local_1d8 + (long)local_290 * 8);
        local_1a0 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_className);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        if (((lVar6 != 0) && (lVar6 = local_1e8, _NSClassFromString(), lVar6 != 0)) &&
           (puVar1 = local_140,
           (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_containsObject__0269cbb8,local_1e8)
           , ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_addObject__0269d180,local_1a0);
        }
        _objc_storeStrong(&local_1e8,0);
        local_290 = (void *)((long)local_290 + 1);
      } while (local_290 < local_288);
      local_288 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10
                );
      local_290 = (void *)0x0;
    } while (local_288 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setPluginPages__026b7070,local_198);
  IVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

