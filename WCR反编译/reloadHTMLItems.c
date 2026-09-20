// reloadHTMLItems @ 01d03ad8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::reloadHTMLItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  uint local_204;
  cfstringStruct *local_200;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_178;
  undefined *local_158;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_158 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHtmlAllItems__026c3cd8,local_158);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_searchText_026ba710);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_178 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_178;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_htmlAllItems_026c3ce0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHtmlItems__026c3ce8);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  else {
    pcVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_c8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    _memset(auStack_118,0,0x40);
    pcVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_htmlAllItems_026c3ce0);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != (cfstringStruct *)0x0) {
      lVar6 = *local_108;
      local_1b0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,pcVar3);
          }
          pcVar7 = *(cfstringStruct **)(local_110 + (long)local_1b0 * 8);
          local_d8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_1e0 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_1e0;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_200 = pcVar7;
          if (pcVar7 == (cfstringStruct *)0x0) {
            local_200 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_200;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_204 = 1;
          if (((ulong)pcVar7 & 1) == 0) {
            pcVar7 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_204 = (uint)pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if ((local_204 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
          local_1b0 = (cfstringStruct *)((long)&local_1b0->field0_0x0 + 1);
        } while (local_1b0 < local_1a8);
        local_1a8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_1b0 = (cfstringStruct *)0x0;
      } while (local_1a8 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHtmlItems__026c3ce8,local_d0);
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  pcVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_htmlAllItems_026c3ce0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__PgN__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTitle__0269cef0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

