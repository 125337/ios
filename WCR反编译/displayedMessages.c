// displayedMessages @ 01bad904

/* Function Stack Size: 0x10 bytes */

ID WCRefineMessageRepositoryViewController::displayedMessages(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_1a8;
  undefined *local_180;
  undefined *local_178;
  cfstringStruct *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  cfstringStruct *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  SEL local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_2;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_messagesArray_026c03b8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if ((undefined *)param_1 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_c0 = puVar1;
  }
  else {
    IVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_selectedFilterType_026ae518);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = local_d8;
    if ((IVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = &DAT_028e4598;
      local_b8 = 0;
      local_e8 = puVar1;
      _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0258b520);
      if (*local_b0 + 1 != 0) {
        _dispatch_once(*local_b0 + 1,local_b0,local_b8);
      }
      _objc_storeStrong(&local_b8,0);
      _memset(auStack_130,0,0x40);
      puVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      if (local_178 != (undefined *)0x0) {
        lVar5 = *local_120;
        local_180 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,puVar1);
            }
            pcVar6 = *(cfstringStruct **)(local_128 + (long)local_180 * 8);
            local_f0 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
            _objc_retainAutoreleasedReturnValue();
            local_1a8 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_1a8 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = local_1a8;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            IVar2 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_selectedFilterType_026ae518);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar2);
            pcVar6 = local_138;
            if ((IVar3 & 1) == 0) {
              IVar2 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_selectedFilterType_026ae518);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isEqualToString__0269ccc8);
              (*(code *)PTR__objc_release_02578630)(IVar2);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
              }
              local_dc = 0;
            }
            else {
              uVar4 = DAT_028e4590;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028e4590,PTR_s_containsObject__0269cbb8,local_138);
              if ((uVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
              }
              local_dc = 3;
            }
            _objc_storeStrong(&local_138,0);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_180 = (undefined *)0x0;
        } while (local_178 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = puVar1;
      local_dc = 1;
      _objc_storeStrong(&local_e8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = puVar1;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_c0;
}

