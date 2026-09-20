// _WCRChatAttachmentReorderEnabledItems @ 00ec0ad0

void _WCRChatAttachmentReorderEnabledItems(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_3b8;
  undefined *local_3b0;
  void *local_358;
  void *local_350;
  ulong local_300;
  ulong local_2f8;
  ulong local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  ulong local_290;
  undefined *local_288;
  ulong local_280;
  ulong local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  long local_228;
  long local_220;
  undefined4 local_214;
  long local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_1b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = puVar2;
  _memset(auStack_208,0,0x40);
  uVar7 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_2f8 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
  if (local_2f8 != 0) {
    lVar5 = *local_1f8;
    local_300 = 0;
    do {
      do {
        if (*local_1f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1f8 - lVar5,uVar7);
        }
        lVar6 = *(long *)(local_200 + local_300 * 8);
        local_1c8 = lVar6;
        FUN_00ec135c();
        _objc_retainAutoreleasedReturnValue();
        local_210 = lVar6;
        if (lVar6 == 0) {
          local_214 = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_mutableCopy_0269d8a0);
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_220 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_220,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_enabled);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          lVar6 = local_220;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_220,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_1c0;
          local_228 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_containsObject__0269cbb8,lVar6);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_228);
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_220);
            local_214 = 0;
          }
          else {
            local_214 = 3;
          }
          _objc_storeStrong(&local_228);
          _objc_storeStrong(&local_220,0);
        }
        _objc_storeStrong(&local_210,0);
        local_300 = local_300 + 1;
      } while (local_300 < local_2f8);
      local_2f8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10);
      local_300 = 0;
    } while (local_2f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar7);
  pvVar3 = _memset(auStack_270,0,0x40);
  _WCRChatAttachmentRefreshItems();
  _objc_retainAutoreleasedReturnValue();
  local_350 = pvVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_350 != (void *)0x0) {
    lVar5 = *local_260;
    local_358 = (void *)0x0;
    do {
      do {
        if (*local_260 - lVar5 != 0) {
          _objc_enumerationMutation(*local_260 - lVar5,pvVar3);
        }
        uVar7 = *(ulong *)(local_268 + (long)local_358 * 8);
        local_230 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_1c0;
        local_278 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_containsObject__0269cbb8,uVar7);
        if (((ulong)puVar1 & 1) == 0) {
          uVar7 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_mutableCopy_0269d8a0);
          local_280 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar4 & 1) != 0) {
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_280,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_enabled);
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_280);
          _objc_storeStrong(&local_280,0);
          local_214 = 0;
        }
        else {
          local_214 = 5;
        }
        _objc_storeStrong(&local_278,0);
        local_358 = (void *)((long)local_358 + 1);
      } while (local_358 < local_350);
      local_350 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10
                );
      local_358 = (void *)0x0;
    } while (local_350 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar3);
  FUN_00ebf3fc(local_1b8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_288 = puVar1;
  _memset(auStack_2d0,0,0x40);
  puVar1 = local_1b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_3b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_1a8,0x10);
  if (local_3b0 != (undefined *)0x0) {
    lVar5 = *local_2c0;
    local_3b8 = (undefined *)0x0;
    do {
      do {
        if (*local_2c0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_2c0 - lVar5,puVar1);
        }
        uVar7 = *(ulong *)(local_2c8 + (long)local_3b8 * 8);
        local_290 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_2d8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar7 & 1) != 0) &&
           (uVar7 = local_2d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_length_0269cca0), uVar7 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_addObject__0269d180,local_2d8);
        }
        _objc_storeStrong(&local_2d8,0);
        local_3b8 = local_3b8 + 1;
      } while (local_3b8 < local_3b0);
      local_3b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_1a8,0x10
                );
      local_3b8 = (undefined *)0x0;
    } while (local_3b0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _WCRChatAttachmentNotifyChanged();
  _objc_storeStrong(&local_288);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

