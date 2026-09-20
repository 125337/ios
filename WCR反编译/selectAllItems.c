// selectAllItems @ 01eede74

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::selectAllItems(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_160;
  ulong local_138;
  ulong local_130;
  cfstringStruct *local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIds_026c7e78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _memset(auStack_100,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar4 = *local_f0;
    local_138 = 0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,IVar1);
        }
        pcVar5 = *(cfstringStruct **)(local_f8 + local_138 * 8);
        local_c0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_160 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_160 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_108 = local_160;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
        if (pcVar5 != (cfstringStruct *)0x0) {
          IVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedIds_026c7e78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        _objc_storeStrong(&local_108,0);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedIds_026c7e78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTitle__0269cef0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

