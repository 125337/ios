// wcrPickPersonaInCategory:field:title: @ 017e5414

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineAISettingsViewController::wcrPickPersonaInCategory_field_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_258;
  undefined *local_250;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  ID local_1c8;
  undefined1 auStack_1c0 [15];
  undefined1 local_1b1;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined1 auStack_190 [15];
  undefined1 local_181;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  ulong local_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  ulong local_148 [3];
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined1 auStack_e8 [8];
  undefined *local_e0;
  ID local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulong local_c0;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcrPromptForField__026b54f0,local_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar2;
  _objc_initWeak(auStack_e8,local_b0);
  _memset(auStack_130,0,0x40);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_250 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_250 != (undefined *)0x0) {
    lVar8 = *local_120;
    local_258 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar8 != 0) {
          _objc_enumerationMutation(*local_120 - lVar8,puVar3);
        }
        uVar9 = *(ulong *)(local_128 + (long)local_258 * 8);
        local_f0 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_category);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar9);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_b0;
          puVar2 = local_e0;
          uVar9 = local_f0;
          local_148[0] = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          IVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_isEqualToString__0269ccc8,local_148[0]);
          local_180 = PTR___NSConcreteStackBlock_02578660;
          local_178 = 0xc2000000;
          local_174 = 0;
          local_170 = FUN_017e5dec;
          local_168 = &DAT_0257c978;
          _objc_copyWeak(auStack_150,auStack_e8);
          uVar4 = local_148[0];
          local_181 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          uVar5 = local_c8;
          local_160 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_actionWithTitle_highlighted_bloc_026b5310,uVar9,IVar7 & 0xffffffff,
                     &local_180);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          local_181 = 0;
          (*(code *)PTR__objc_release_02578630)(IVar1);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_160,0);
          _objc_destroyWeak(auStack_150);
          _objc_storeStrong(local_148,0);
        }
        local_258 = local_258 + 1;
      } while (local_258 < local_250);
      local_250 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      local_258 = (undefined *)0x0;
    } while (local_250 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_isEqualToString__0269ccc8,_WCRAICustomPersonaCategory);
  IVar1 = local_b0;
  puVar2 = local_e0;
  if ((uVar4 & 1) != 0) {
    local_1b0 = PTR___NSConcreteStackBlock_02578660;
    local_1a8 = 0xc2000000;
    local_1a4 = 0;
    local_1a0 = FUN_017e5e54;
    local_198 = &DAT_0257be28;
    _objc_copyWeak(auStack_190,auStack_e8);
    local_1b1 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_actionWithTitle_block__026b5340,&cf__tN__,&local_1b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    local_1b1 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_destroyWeak(auStack_190);
  }
  IVar1 = local_b0;
  puVar2 = local_e0;
  local_1f8 = PTR___NSConcreteStackBlock_02578660;
  local_1f0 = 0xc2000000;
  local_1ec = 0;
  local_1e8 = FUN_017e5ea4;
  local_1e0 = &DAT_02588b00;
  _objc_copyWeak(auStack_1c0,auStack_e8);
  uVar5 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = local_d0;
  local_1d8 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  IVar7 = local_d8;
  local_1d0 = uVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_actionWithTitle_block__026b5340,&cf__IN__,&local_1f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showSheetTitle_actions__026b5348,puVar2,local_e0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

