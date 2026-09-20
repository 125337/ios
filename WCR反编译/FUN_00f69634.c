// FUN_00f69634 @ 00f69634

void FUN_00f69634(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_1e8;
  undefined *local_1e0;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_e0;
  uint local_d4;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  pcVar2 = "CContactMgr";
  _objc_getClass();
  FUN_00f71024();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = (cfstringStruct *)pcVar2;
  if (((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
    goto LAB_00f69b90;
  }
  local_e0 = (cfstringStruct *)0x0;
  pcVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getContactByName__0269d178,local_c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_e0;
  local_e0 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if (local_e0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
  }
  else {
    pcVar4 = &cf_getContactDisplayName;
    _NSSelectorFromString();
    pcVar3 = local_e0;
    local_100 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar4;
      FUN_00f694c4();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar4 = local_108;
        FUN_00f694c4(pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar4;
      }
      local_d4 = (uint)(pcVar3 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_108,0);
      if (local_d4 != 0) goto LAB_00f69b80;
    }
    _memset(auStack_158,0,0x40);
    local_b8 = &cf_m_nsRemark;
    local_b0 = &cf_m_nsNickName;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1e0 != (undefined *)0x0) {
      lVar6 = *local_148;
      local_1e8 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar6 != 0) {
            _objc_enumerationMutation(*local_148 - lVar6,puVar5);
          }
          local_118 = *(undefined8 *)(local_150 + (long)local_1e8 * 8);
          pcVar4 = local_e0;
          FUN_00f711c0(local_e0,local_118);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar4;
          FUN_00f694c4();
          _objc_retainAutoreleasedReturnValue();
          local_160 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar3 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
          pcVar4 = local_160;
          bVar1 = pcVar3 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = pcVar4;
          }
          local_d4 = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_160,0);
          if (local_d4 != 0) goto LAB_00f69b34;
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_1e8 = (undefined *)0x0;
      } while (local_1e0 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_00f69b34:
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (local_d4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = &cf___;
      local_d4 = 1;
    }
  }
LAB_00f69b80:
  _objc_storeStrong(&local_e0,0);
LAB_00f69b90:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

