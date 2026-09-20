// FUN_003b1b64 @ 003b1b64

void FUN_003b1b64(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_1c0;
  undefined *local_1b8;
  char *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  char *local_108 [2];
  int local_f8;
  char *local_e8;
  cfstringStruct *local_e0;
  char *local_d8;
  char *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = &cf_currentUserName;
  local_d8 = pcVar1;
  _NSSelectorFromString();
  pcVar1 = local_d8;
  local_e0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_e0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_e8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar6 = (ulong)pcVar1 & 0xffffffff;
    if (((ulong)pcVar1 & 1) == 0) {
LAB_003b1cc8:
      local_f8 = 0;
    }
    else {
      pcVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      pcVar1 = local_e8;
      uVar6 = 0;
      if (pcVar4 == (char *)0x0) goto LAB_003b1cc8;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = pcVar1;
      uVar6 = 1;
      local_f8 = 1;
    }
    _objc_storeStrong(uVar6,&local_e8,0);
    if (local_f8 != 0) goto LAB_003b1fe8;
  }
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1;
  FUN_003612b8();
  _objc_retainAutoreleasedReturnValue();
  local_108[0] = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _memset(auStack_150,0,0x40);
  local_c8 = &cf_m_nsUsrName;
  local_c0 = &cf_m_nsUserName;
  local_b8 = &cf_username;
  local_b0 = &cf_userName;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1b8 != (undefined *)0x0) {
    lVar7 = *local_140;
    local_1c0 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar7 != 0) {
          _objc_enumerationMutation(*local_140 - lVar7,puVar3);
        }
        local_110 = *(undefined8 *)(local_148 + (long)local_1c0 * 8);
        pcVar1 = local_108[0];
        FUN_003612b8(local_108[0],local_110);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_158 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar4 = local_158,
           (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
           pcVar1 = local_158, pcVar4 == (char *)0x0)) {
          local_f8 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = pcVar1;
          local_f8 = 1;
        }
        _objc_storeStrong(&local_158,0);
        if (local_f8 != 0) goto LAB_003b1fa8;
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      local_1c0 = (undefined *)0x0;
    } while (local_1b8 != (undefined *)0x0);
  }
  local_f8 = 0;
LAB_003b1fa8:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_f8 == 0) {
    local_d0 = (char *)0x0;
    local_f8 = 1;
  }
  _objc_storeStrong(local_108,0);
LAB_003b1fe8:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

