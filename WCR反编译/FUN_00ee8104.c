// FUN_00ee8104 @ 00ee8104

void FUN_00ee8104(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_1a0;
  undefined *local_198;
  cfstringStruct *local_168 [4];
  undefined8 local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  uint local_e4;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e0,param_1);
  pcVar3 = local_e0;
  if (local_e0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = &cf___;
    local_e4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      local_50 = &cf_m_nsUsrName;
      local_48 = &cf_m_nsUserName;
      local_40 = &cf_username;
      local_38 = &cf_userName;
      local_30 = &cf_getContactUserName;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar2;
      _memset(auStack_138,0,0x40);
      puVar2 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_d0,0x10)
      ;
      if (local_198 != (undefined *)0x0) {
        lVar5 = *local_128;
        local_1a0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,puVar2);
            }
            uVar6 = *(undefined8 *)(local_130 + (long)local_1a0 * 8);
            local_140 = (cfstringStruct *)0x0;
            local_f8 = uVar6;
            _NSSelectorFromString();
            pcVar3 = local_e0;
            local_148 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar6)
            ;
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar4 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f8);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_140;
              local_140 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            else {
              pcVar4 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_148);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_140;
              local_140 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            pcVar4 = local_140;
            FUN_00eeb5a8();
            _objc_retainAutoreleasedReturnValue();
            local_168[0] = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
            pcVar3 = local_168[0];
            bVar1 = pcVar4 != (cfstringStruct *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_d8 = pcVar3;
            }
            local_e4 = (uint)bVar1;
            _objc_storeStrong(bVar1,local_168);
            _objc_storeStrong(&local_140,0);
            if (local_e4 != 0) goto LAB_00ee8540;
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_d0,
                     0x10);
          local_1a0 = (undefined *)0x0;
        } while (local_198 != (undefined *)0x0);
      }
      local_e4 = 0;
LAB_00ee8540:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_e4 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = &cf___;
        local_e4 = 1;
      }
      _objc_storeStrong(&local_f0,0);
    }
    else {
      pcVar3 = local_e0;
      FUN_00eeb5a8();
      _objc_retainAutoreleasedReturnValue();
      local_e4 = 1;
      local_d8 = pcVar3;
    }
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

