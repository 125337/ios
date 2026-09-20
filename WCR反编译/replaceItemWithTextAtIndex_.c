// replaceItemWithTextAtIndex: @ 01a0c1e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordMultiReplyEditorViewController::replaceItemWithTextAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_240;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1e0;
  cfstringStruct *local_1b8;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined1 auStack_168 [8];
  undefined *local_160;
  undefined1 auStack_158 [8];
  cfstringStruct *local_150;
  int local_144;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  byte local_e2;
  bool local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)param_3;
  local_b8 = param_2;
  local_b0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingItemIndex__026bb6b0,param_3);
  pcVar1 = local_c0;
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d1 = 0;
  local_e1 = false;
  if (pcVar3 <= pcVar1) {
    local_1b8 = &::cf___;
  }
  else {
    local_1b8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1b8;
  }
  local_e1 = pcVar3 > pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1b8;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_e2 = 0;
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_1e0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_1e0;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _memset(auStack_138,0,0x40);
  puVar4 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_208 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_208 != (undefined *)0x0) {
    lVar7 = *local_128;
    local_210 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar7 != 0) {
          _objc_enumerationMutation(*local_128 - lVar7,puVar4);
        }
        uVar8 = *(ulong *)(local_130 + (long)local_210 * 8);
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_f8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar8 & 1) != 0) {
          uVar8 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          FUN_01a08fe8();
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar8 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isEqualToString__0269ccc8,local_c8);
          if ((uVar8 & 1) == 0) {
            local_144 = 0;
          }
          else {
            local_e2 = 1;
            local_144 = 2;
          }
          _objc_storeStrong(&local_140,0);
          if (local_144 != 0) goto LAB_01a0c698;
        }
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_210 = (undefined *)0x0;
    } while (local_208 != (undefined *)0x0);
  }
  local_144 = 0;
LAB_01a0c698:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_e2 & 1) == 0) {
    local_240 = local_c8;
  }
  else {
    local_240 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_240;
  _objc_initWeak(auStack_158,local_b0);
  pcVar1 = local_150;
  puVar4 = PTR_WCRefineHelper_026ce000;
  local_188 = PTR___NSConcreteStackBlock_02578660;
  local_180 = 0xc2000000;
  local_17c = 0;
  local_178 = FUN_01a0c8c0;
  local_170 = &DAT_02589100;
  _objc_copyWeak(auStack_168,auStack_158);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar4,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_fbc_Ne_g,&cf_tek_O_N,
             &cf_eQb_4RVYe_g_,pcVar1,&local_188);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_160);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

