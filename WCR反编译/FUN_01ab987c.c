// FUN_01ab987c @ 01ab987c

void FUN_01ab987c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined *local_228;
  char *local_1f8;
  char *local_1f0;
  char *local_188;
  char *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  char *local_130 [2];
  char *local_120;
  cfstringStruct *local_118;
  char *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined **local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ChatBoxMgr";
  _objc_getClass();
  FUN_01aad60c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_b0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &local_e8;
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_01ace518;
  local_d0 = &DAT_025819a0;
  local_b8 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = puVar2;
  _objc_retainBlock();
  pcVar4 = &cf_chatBoxSessionCount;
  local_c0 = ppuVar3;
  _NSSelectorFromString();
  local_f8 = (char *)0x0;
  pcVar1 = local_b0;
  local_f0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_respondsToSelector__026ca818,pcVar4);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_f0);
    local_f8 = pcVar1;
  }
  pcVar4 = &cf_getSessionAtIndex_;
  _NSSelectorFromString();
  local_118 = pcVar4;
  if ((local_f8 != (char *)0x0) &&
     (pcVar1 = local_b0,
     (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_respondsToSelector__026ca818,pcVar4),
     ((ulong)pcVar1 & 1) != 0)) {
    for (local_120 = (char *)0x0; ppuVar3 = local_c0, local_120 < local_f8;
        local_120 = local_120 + 1) {
      pcVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_118,local_120);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar3[2])();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  pcVar1 = local_b0;
  FUN_01a9c404(local_b0,&cf_chatBoxSessions);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_130[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) != 0) {
    _memset(auStack_178,0,0x40);
    pcVar1 = local_130[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_1f0 != (char *)0x0) {
      lVar6 = *local_168;
      local_1f8 = (char *)0x0;
      do {
        do {
          if (*local_168 - lVar6 != 0) {
            _objc_enumerationMutation(*local_168 - lVar6,pcVar1);
          }
          local_138 = *(undefined8 *)(local_170 + (long)local_1f8 * 8);
          (*(code *)local_c0[2])(local_c0,local_138);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                   0x10);
        local_1f8 = (char *)0x0;
      } while (local_1f0 != (char *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_b0;
  FUN_01a9c404(local_b0,&cf_sessionEnumerator);
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_nextObject_026a2c88);
  if (((ulong)pcVar1 & 1) != 0) {
    local_188 = (char *)0x0;
    while( true ) {
      pcVar5 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_nextObject_026a2c88);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_188;
      local_188 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (pcVar5 == (char *)0x0) break;
      (*(code *)local_c0[2])(local_c0,local_188);
    }
    _objc_storeStrong(&local_188,0);
  }
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_228 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_180);
  _objc_storeStrong(local_130,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_228);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

