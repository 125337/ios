// wcrPickPersonaInCategory: @ 017d0794

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineAISessionSettingsViewController::wcrPickPersonaInCategory_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined1 auStack_178 [15];
  undefined1 local_169;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  ulong local_148;
  undefined1 auStack_140 [8];
  ulong local_138 [3];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  ID local_c8 [2];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[1] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_c8 + 1,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_wcrString_fallback__026b50a0,_WCRAISessionPreset,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8[0] = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _objc_initWeak(auStack_d8,local_b0);
  _memset(auStack_120,0,0x40);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_1d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1d8 != (undefined *)0x0) {
    lVar6 = *local_110;
    local_1e0 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,puVar3);
        }
        uVar7 = *(ulong *)(local_118 + (long)local_1e0 * 8);
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_category);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_b0;
          puVar2 = local_d0;
          uVar7 = local_e0;
          local_138[0] = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_c8[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8[0],PTR_s_isEqualToString__0269ccc8,local_138[0]);
          local_168 = PTR___NSConcreteStackBlock_02578660;
          local_160 = 0xc2000000;
          local_15c = 0;
          local_158 = FUN_017d0ed8;
          local_150 = &DAT_02579c60;
          _objc_copyWeak(auStack_140,auStack_d8);
          uVar4 = local_138[0];
          local_169 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcrAction_highlighted_block__026b5128,uVar7,IVar5 & 0xffffffff,
                     &local_168);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          local_169 = 0;
          (*(code *)PTR__objc_release_02578630)(IVar1);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          _objc_storeStrong(&local_148);
          _objc_destroyWeak(auStack_140);
          _objc_storeStrong(local_138,0);
        }
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_1d8);
      local_1d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_1e0 = (undefined *)0x0;
    } while (local_1d8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar1 = local_b0;
  puVar2 = local_d0;
  local_198 = PTR___NSConcreteStackBlock_02578660;
  local_190 = 0xc2000000;
  local_18c = 0;
  local_188 = FUN_017d0f7c;
  local_180 = &DAT_0257be28;
  _objc_copyWeak(auStack_178,auStack_d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcrAction_highlighted_block__026b5128,&cf__INN,0,&local_198);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_VYBl);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcrShowSheetTitle_actions__026b4f88,puVar2,local_d0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_d8);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(local_c8,0);
  _objc_storeStrong(local_c8 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

