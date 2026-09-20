// wcrPickPersonaForField:title:allowFollowGlobal: @ 017e4774

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

void WCRefineAISettingsViewController::wcrPickPersonaForField_title_allowFollowGlobal_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID IVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_318;
  undefined *local_310;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  ID local_1f8;
  undefined1 auStack_1f0 [15];
  undefined1 local_1e1;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [12];
  undefined4 local_19c;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  undefined1 local_139;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [8];
  undefined *local_f0;
  undefined *local_e8;
  ID local_e0;
  ID local_d8;
  byte local_c9;
  undefined8 local_c8;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_c9 = (byte)param_5;
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcrPromptForField__026b54f0,local_c0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_b0;
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcrPersonaCategoryForPrompt__026b54f8,IVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar5;
  _objc_initWeak(auStack_f8,local_b0);
  IVar2 = local_b0;
  puVar4 = local_e8;
  if ((local_c9 & 1) != 0) {
    IVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_017e52d0;
    local_120 = &DAT_02579c60;
    _objc_copyWeak(auStack_110,auStack_f8);
    uVar9 = local_c0;
    local_139 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_actionWithTitle_highlighted_bloc_026b5310,&cf_hQ__,IVar3 == 0,&local_138)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    local_139 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_118,0);
    _objc_destroyWeak(auStack_110);
  }
  puVar4 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_personaPresets_026aac50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_148 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_148;
  puVar5 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _memset(auStack_190,0,0x40);
  puVar4 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_310 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_310 != (undefined *)0x0) {
    lVar12 = *local_180;
    local_318 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar12 != 0) {
          _objc_enumerationMutation(*local_180 - lVar12,puVar4);
        }
        uVar13 = *(ulong *)(local_188 + (long)local_318 * 8);
        local_150 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_category);
        _objc_retainAutoreleasedReturnValue();
        local_198 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_length_0269cca0);
        if ((uVar13 == 0) ||
           (puVar5 = local_f0,
           (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_containsObject__0269cbb8,local_198),
           ((ulong)puVar5 & 1) != 0)) {
          local_19c = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_198);
          IVar2 = local_b0;
          puVar5 = local_e8;
          uVar13 = local_198;
          uVar7 = local_198;
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isEqualToString__0269ccc8,local_e0);
          local_1e0 = PTR___NSConcreteStackBlock_02578660;
          local_1d8 = 0xc2000000;
          local_1d4 = 0;
          local_1d0 = FUN_017e533c;
          local_1c8 = &DAT_02588b00;
          _objc_copyWeak(auStack_1a8,auStack_f8);
          local_1e1 = 1;
          uVar8 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          uVar9 = local_c0;
          local_1c0 = uVar8;
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = local_c8;
          local_1b8 = uVar9;
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_actionWithTitle_highlighted_bloc_026b5310,uVar13,uVar7 & 0xffffffff
                     ,&local_1e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_1e1 = 0;
          (*(code *)PTR__objc_release_02578630)(IVar2);
          _objc_storeStrong(&local_1b0);
          _objc_storeStrong(&local_1b8,0);
          _objc_storeStrong(&local_1c0,0);
          _objc_destroyWeak(auStack_1a8);
          local_19c = 0;
        }
        _objc_storeStrong(&local_198,0);
        local_318 = local_318 + 1;
      } while (local_318 < local_310);
      local_310 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_318 = (undefined *)0x0;
    } while (local_310 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar2 = local_b0;
  puVar4 = local_e8;
  IVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  bVar1 = local_e0 == 0;
  local_228 = PTR___NSConcreteStackBlock_02578660;
  local_220 = 0xc2000000;
  local_21c = 0;
  local_218 = FUN_017e53a8;
  local_210 = &DAT_02588b00;
  _objc_copyWeak(auStack_1f0,auStack_f8);
  uVar9 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  uVar10 = local_c8;
  local_208 = uVar9;
  (*(code *)PTR__objc_retain_02578638)();
  IVar11 = local_d8;
  local_200 = uVar10;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f8 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_actionWithTitle_highlighted_bloc_026b5310,&cf__IN__,IVar3 != 0 && bVar1,
             &local_228);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_showSheetTitle_actions__026b5348,local_c8,local_e8);
  _objc_storeStrong(&local_1f8);
  _objc_storeStrong(&local_200,0);
  _objc_storeStrong(&local_208,0);
  _objc_destroyWeak(auStack_1f0);
  _objc_storeStrong(&local_148,0);
  _objc_destroyWeak(auStack_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

