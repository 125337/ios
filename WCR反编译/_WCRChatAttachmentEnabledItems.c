// _WCRChatAttachmentEnabledItems @ 00ebf67c

void _WCRChatAttachmentEnabledItems(void)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *local_120;
  void *local_118;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar1;
  pvVar2 = _memset(auStack_f8,0,0x40);
  _WCRChatAttachmentRefreshItems();
  _objc_retainAutoreleasedReturnValue();
  local_118 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_118 != (void *)0x0) {
    lVar4 = *local_e8;
    local_120 = (void *)0x0;
    do {
      do {
        if (*local_e8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar4,pvVar2);
        }
        uVar5 = *(ulong *)(local_f0 + (long)local_120 * 8);
        local_b8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addObject__0269d180,local_b8);
        }
        local_120 = (void *)((long)local_120 + 1);
      } while (local_120 < local_118);
      local_118 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_120 = (void *)0x0;
    } while (local_118 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  puVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

