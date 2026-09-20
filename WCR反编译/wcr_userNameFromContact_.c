// wcr_userNameFromContact: @ 00eddcf4

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomMuteHelper::wcr_userNameFromContact_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined *local_198;
  undefined *local_190;
  cfstringStruct *local_160 [4];
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  uint local_ec;
  ulong local_e8;
  SEL local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_e8,param_3);
  uVar3 = local_e8;
  if (local_e8 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &::cf___;
    local_ec = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      _memset(auStack_138,0,0x40);
      local_c8 = &cf_m_nsUsrName;
      local_c0 = &cf_m_nsUserName;
      local_b8 = &cf_username;
      local_b0 = &cf_userName;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != (undefined *)0x0) {
        lVar7 = *local_128;
        local_198 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar7 != 0) {
              _objc_enumerationMutation(*local_128 - lVar7,puVar2);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_198 * 8);
            local_140 = 0;
            uVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,local_f8);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_140;
            local_140 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            pcVar6 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_trimmedString__0269ec98,local_140);
            _objc_retainAutoreleasedReturnValue();
            local_160[0] = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
            pcVar4 = local_160[0];
            bVar1 = pcVar6 != (cfstringStruct *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = pcVar4;
            }
            local_ec = (uint)bVar1;
            _objc_storeStrong(bVar1,local_160);
            _objc_storeStrong(&local_140,0);
            if (local_ec != 0) goto LAB_00ede0b0;
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_198 = (undefined *)0x0;
        } while (local_190 != (undefined *)0x0);
      }
      local_ec = 0;
LAB_00ede0b0:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_ec == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = &::cf___;
        local_ec = 1;
      }
    }
    else {
      pcVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_trimmedString__0269ec98,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_ec = 1;
      local_d0 = pcVar4;
    }
  }
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

