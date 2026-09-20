// FUN_00fbe588 @ 00fbe588

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fbe588(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint local_3dc;
  cfstringStruct *local_3a0;
  cfstringStruct *local_398;
  undefined *local_320;
  undefined *local_318;
  cfstringStruct *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  cfstringStruct *local_200;
  cfstringStruct *local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined *local_1a0;
  long local_198 [6];
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  uint local_154;
  long local_150;
  long local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_1);
  lVar11 = local_148;
  FUN_00fbe464();
  _objc_retainAutoreleasedReturnValue();
  local_150 = lVar11;
  (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
  if (lVar11 == 0) {
    local_140 = (cfstringStruct *)0x0;
    local_154 = 1;
    goto LAB_00fbf204;
  }
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "CContactMgr";
  _objc_getClass("CContactMgr");
  pcVar4 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_160 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_160 == (cfstringStruct *)0x0) {
    local_140 = (cfstringStruct *)0x0;
    local_154 = 1;
  }
  else {
    local_168 = (cfstringStruct *)0x0;
    pcVar4 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_getContactByName__0269d178,local_150);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_168;
      local_168 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if ((local_168 == (cfstringStruct *)0x0) &&
       (pcVar4 = local_160,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_160,PTR_s_respondsToSelector__026ca818,
                  PTR_s_getContactForSearchByName__0269f828), ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_getContactForSearchByName__0269f828,local_150);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_168;
      local_168 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if ((local_168 == (cfstringStruct *)0x0) &&
       (pcVar4 = local_160,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_160,PTR_s_respondsToSelector__026ca818,PTR_s_getContactFromDic__0269fef0),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_getContactFromDic__0269fef0,local_150);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_168;
      local_168 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if ((local_168 == (cfstringStruct *)0x0) &&
       (pcVar4 = local_160,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_160,PTR_s_respondsToSelector__026ca818,
                  PTR_s_getContactList_contactType__026a2fc8), ((ulong)pcVar4 & 1) != 0)) {
      lVar11 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_198[0] = lVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _memset(auStack_1e8,0,0x40);
      puVar6 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_318 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_b8,0x10)
      ;
      if (local_318 != (undefined *)0x0) {
        lVar11 = *local_1d8;
        local_320 = (undefined *)0x0;
        do {
          do {
            if (*local_1d8 - lVar11 != 0) {
              _objc_enumerationMutation(*local_1d8 - lVar11,puVar6);
            }
            pcVar5 = local_160;
            puVar7 = PTR_s_getContactList_contactType__026a2fc8;
            uVar13 = *(ulong *)(local_1e0 + (long)local_320 * 8);
            local_1f0 = (cfstringStruct *)0x0;
            local_1a8 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_unsignedIntValue_0269db10);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar7,uVar13 & 0xffffffff,0);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_1f0;
            local_1f0 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_1f0;
            puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar7);
            if (((ulong)pcVar4 & 1) == 0) {
              local_154 = 6;
            }
            else {
              _memset(auStack_240,0,0x40);
              pcVar4 = local_1f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_398 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                         auStack_138,0x10);
              if (local_398 != (cfstringStruct *)0x0) {
                lVar12 = *local_230;
                local_3a0 = (cfstringStruct *)0x0;
                do {
                  do {
                    if (*local_230 - lVar12 != 0) {
                      _objc_enumerationMutation(*local_230 - lVar12,pcVar4);
                    }
                    local_200 = *(cfstringStruct **)(local_238 + (long)local_3a0 * 8);
                    (*(code *)PTR__objc_retain_02578638)();
                    local_248 = &cf___;
                    pcVar9 = local_200;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_200,PTR_s_valueForKey__0269d128,&cf_m_nsAliasName);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar10 = pcVar9;
                    FUN_00fbe464();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = local_248;
                    local_248 = pcVar10;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    (*(code *)PTR__objc_release_02578630)(pcVar9);
                    pcVar5 = local_248;
                    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                    local_3dc = 0;
                    if (pcVar5 != (cfstringStruct *)0x0) {
                      pcVar5 = local_248;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_248,PTR_s_lowercaseString_0269d9c0);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar9 = pcVar5;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_3dc = (uint)pcVar9;
                      (*(code *)PTR__objc_release_02578630)(pcVar5);
                    }
                    pcVar5 = local_200;
                    bVar1 = (local_3dc & 1) != 0;
                    if (bVar1) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_140 = pcVar5;
                    }
                    local_154 = (uint)bVar1;
                    _objc_storeStrong(&local_248,0);
                    if (local_154 != 0) goto LAB_00fbf088;
                    local_3a0 = (cfstringStruct *)((long)&local_3a0->field0_0x0 + 1);
                  } while (local_3a0 < local_398);
                  local_398 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                             auStack_138,0x10);
                  local_3a0 = (cfstringStruct *)0x0;
                } while (local_398 != (cfstringStruct *)0x0);
              }
              local_154 = 0;
LAB_00fbf088:
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              if (local_154 == 0) {
                local_154 = 0;
              }
            }
            _objc_storeStrong(&local_1f0,0);
            if ((local_154 != 0) && (local_154 != 6)) goto LAB_00fbf154;
            local_320 = local_320 + 1;
          } while (local_320 < local_318);
          local_318 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_b8,
                     0x10);
          local_320 = (undefined *)0x0;
        } while (local_318 != (undefined *)0x0);
      }
      local_154 = 0;
LAB_00fbf154:
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (local_154 == 0) {
        local_154 = 0;
      }
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(local_198,0);
      if (local_154 == 0) goto LAB_00fbf1b4;
    }
    else {
LAB_00fbf1b4:
      pcVar4 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = pcVar4;
      local_154 = 1;
    }
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_160,0);
LAB_00fbf204:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_140);
  return;
}

