// FUN_018e03f0 @ 018e03f0

void FUN_018e03f0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long local_238;
  ulong local_190;
  ulong local_188;
  long local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined4 local_10c;
  long local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  lVar2 = 0;
  _WCRChatToolbarRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b8 = lVar5;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _memset(auStack_100,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_188 != 0) {
    lVar5 = *local_f0;
    local_190 = 0;
    do {
      do {
        if (*local_f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar5,uVar1);
        }
        lVar2 = *(long *)(local_f8 + local_190 * 8);
        local_c0 = lVar2;
        _WCRChatToolbarContactAction();
        _objc_retainAutoreleasedReturnValue();
        local_108 = lVar2;
        if (lVar2 == 0) {
          local_10c = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar2,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = local_b8;
          local_148 = PTR___NSConcreteGlobalBlock_02578658;
          local_140 = 0xd0800000;
          local_13c = 0;
          local_138 = FUN_018e0ab4;
          local_130 = &DAT_02581d20;
          local_118 = lVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar3,PTR_s_indexOfObjectPassingTest__026a27f8,&local_148);
          local_120 = lVar3;
          if (lVar3 != 0x7fffffffffffffff) {
            lVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,lVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_150 = lVar3;
            (*(code *)PTR__objc_release_02578630)(lVar2);
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                       _WCRChatToolbarEnabledKey);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            lVar2 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectForKeyedSubscript__0269d098,
                       _WCRChatToolbarCustomTitleKey);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar2);
            if (lVar3 == 0) {
              lVar2 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarTitleKey);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,lVar2,
                         _WCRChatToolbarTitleKey);
              (*(code *)PTR__objc_release_02578630)(lVar2);
            }
            lVar2 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectForKeyedSubscript__0269d098,
                       _WCRChatToolbarCustomIconKey);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar2);
            if (lVar3 == 0) {
              lVar2 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarIconKey);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,lVar2,
                         _WCRChatToolbarIconKey);
              (*(code *)PTR__objc_release_02578630)(lVar2);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_removeObjectAtIndex__0269d530,local_120);
            _objc_storeStrong(&local_108,local_150);
            _objc_storeStrong(&local_150,0);
          }
          local_238 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_indexOfObjectPassingTest__026a27f8,
                     &PTR___NSConcreteGlobalBlock_0258a108);
          lVar3 = local_b8;
          lVar2 = local_108;
          if (local_238 == 0x7fffffffffffffff) {
            local_238 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar3,PTR_s_insertObject_atIndex__0269eac0,lVar2,local_238);
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_118,0);
          local_10c = 0;
        }
        _objc_storeStrong(&local_108,0);
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_190 = 0;
    } while (local_188 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  FUN_018ca37c();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

