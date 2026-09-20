// chooseGroupForPlugin: @ 01c7d2f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubGroupManagerViewController::chooseGroupForPlugin_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined *local_158;
  cfstringStruct *local_150;
  undefined8 local_148;
  undefined1 auStack_140 [8];
  cfstringStruct *local_138 [3];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _objc_initWeak(auStack_d8,local_b0);
  _memset(auStack_120,0,0x40);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1a8 != (undefined *)0x0) {
    lVar7 = *local_110;
    local_1b0 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar7 != 0) {
          _objc_enumerationMutation(*local_110 - lVar7,puVar1);
        }
        pcVar8 = *(cfstringStruct **)(local_118 + (long)local_1b0 * 8);
        local_e0 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_c8;
        local_138[0] = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_groupIdentifierForPlugin__026b4470,local_c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          pcVar8 = &::cf__;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&::cf__,PTR_s_stringByAppendingString__0269d398,local_138[0]);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_138[0];
          local_138[0] = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        IVar6 = local_b0;
        puVar2 = local_d0;
        pcVar8 = local_138[0];
        local_178 = PTR___NSConcreteStackBlock_02578660;
        local_170 = 0xc2000000;
        local_16c = 0;
        local_168 = FUN_01c7d920;
        local_160 = &DAT_02588b00;
        puVar3 = local_c8;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar4 = local_e0;
        local_158 = puVar3;
        (*(code *)PTR__objc_retain_02578638)();
        uVar5 = local_c0;
        local_150 = pcVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = uVar5;
        _objc_copyWeak(auStack_140,auStack_d8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_menuActionWithTitle_block__026c27a8,pcVar8,&local_178);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        _objc_destroyWeak(auStack_140);
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_158,0);
        _objc_storeStrong(local_138,0);
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_1b0 = (undefined *)0x0;
    } while (local_1a8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar6 = local_b0;
  puVar1 = local_d0;
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_displayTitleForPlugin__026b1a30,local_c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_showNativeActions_title__026c27c0,puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

