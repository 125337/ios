// FUN_00740154 @ 00740154

void FUN_00740154(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_1b8;
  undefined *local_1b0;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  ulong local_f8 [3];
  char *local_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  if (local_d0 == 0) {
    local_c8 = 0;
    local_d4 = 1;
    goto LAB_007406b0;
  }
  pcVar1 = "CContact";
  _objc_getClass();
  local_e0 = pcVar1;
  if (((pcVar1 != (char *)0x0) &&
      (uVar6 = local_d0,
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isKindOfClass__0269cd68,pcVar1),
      (uVar6 & 1) != 0)) &&
     (uVar6 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
     (uVar6 & 1) != 0)) {
    uVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_f8[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar6 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) == 0) {
LAB_0074033c:
      local_d4 = 0;
    }
    else {
      uVar4 = local_f8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_length_0269cca0);
      uVar2 = local_f8[0];
      uVar6 = 0;
      if (uVar4 == 0) goto LAB_0074033c;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = uVar2;
      uVar6 = 1;
      local_d4 = 1;
    }
    _objc_storeStrong(uVar6,local_f8,0);
    if (local_d4 != 0) goto LAB_007406b0;
  }
  _memset(auStack_140,0,0x40);
  local_c0 = &cf_m_nsUsrName;
  local_b8 = &cf_m_nsUserName;
  local_b0 = &cf_username;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1b0 != (undefined *)0x0) {
    lVar7 = *local_130;
    local_1b8 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar7 != 0) {
          _objc_enumerationMutation(*local_130 - lVar7,puVar3);
        }
        local_100 = *(undefined8 *)(local_138 + (long)local_1b8 * 8);
        uVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_100);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar6 = uVar2 & 0xffffffff;
        if ((uVar2 & 1) == 0) {
LAB_00740590:
          local_d4 = 0;
        }
        else {
          uVar4 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
          uVar2 = local_148;
          uVar6 = 0;
          if (uVar4 == 0) goto LAB_00740590;
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = uVar2;
          uVar6 = 1;
          local_d4 = 1;
        }
        _objc_storeStrong(uVar6,&local_148,0);
        if (local_d4 != 0) goto LAB_00740624;
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
      local_1b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_1b8 = (undefined *)0x0;
    } while (local_1b0 != (undefined *)0x0);
  }
  local_d4 = 0;
LAB_00740624:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_d4 == 0) {
    local_c8 = 0;
    local_d4 = 1;
  }
LAB_007406b0:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

