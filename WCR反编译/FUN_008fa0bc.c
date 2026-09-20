// FUN_008fa0bc @ 008fa0bc

void FUN_008fa0bc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  uint local_f0;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  pcVar2 = local_d8;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &cf__gw;
    local_f0 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_008f3348();
    _objc_retainAutoreleasedReturnValue();
    local_100 = (cfstringStruct *)0x0;
    local_f8 = (cfstringStruct *)pcVar3;
    if (((cfstringStruct *)pcVar3 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar4 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_getContactByName__0269d178,local_e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_100;
      local_100 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _memset(auStack_148,0,0x40);
    local_c8 = &cf_getContactDisplayName;
    local_c0 = &cf_getDisplayName;
    local_b8 = &cf_m_nsRemark;
    local_b0 = &cf_m_nsNickName;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != (undefined *)0x0) {
      lVar6 = *local_138;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar6 != 0) {
            _objc_enumerationMutation(*local_138 - lVar6,puVar5);
          }
          pcVar2 = local_100;
          uVar7 = *(undefined8 *)(local_140 + (long)local_1b0 * 8);
          local_108 = uVar7;
          _NSSelectorFromString();
          FUN_008e6088(pcVar2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar2;
          FUN_008e5574();
          _objc_retainAutoreleasedReturnValue();
          local_150 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
          pcVar2 = local_150;
          bVar1 = pcVar4 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = pcVar2;
          }
          local_f0 = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_150,0);
          if (local_f0 != 0) goto LAB_008fa518;
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    local_f0 = 0;
LAB_008fa518:
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_e0;
    if (local_f0 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = pcVar2;
      local_f0 = 1;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

