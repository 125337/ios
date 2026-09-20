// stableKeyForSession:wrap: @ 00eadf20

/* Function Stack Size: 0x20 bytes */

ID WCRefineAutoDownloadQuotaHelper::stableKeyForSession_wrap_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_220;
  undefined *local_218;
  cfstringStruct *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  cfstringStruct *local_138 [4];
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  uint local_104;
  long local_100;
  cfstringStruct *local_f8;
  long local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  local_f8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f8,param_4);
  lVar6 = local_f0;
  FUN_00eae708();
  _objc_retainAutoreleasedReturnValue();
  local_100 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if ((lVar6 == 0) || (local_f8 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = &::cf___;
    local_104 = 1;
  }
  else {
    local_110 = (cfstringStruct *)0x0;
    pcVar2 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_valueForKey__0269d128,&cf_m_n64MesSvrID);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_longLongValue_0269d5e0);
      local_110 = pcVar2;
    }
    _objc_storeStrong(&local_118,0);
    if ((long)local_110 < 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_138[0] = &::cf___;
      pcVar3 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_00eae708();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_138[0];
      local_138[0] = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _memset(auStack_188,0,0x40);
      local_d0 = &cf_md5;
      local_c8 = &cf_aeskey;
      local_c0 = &cf_attachid;
      local_b8 = &cf_tpurl;
      local_b0 = &cf_cdnthumburl;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_218 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_218 != (undefined *)0x0) {
        lVar6 = *local_178;
        local_220 = (undefined *)0x0;
        do {
          do {
            if (*local_178 - lVar6 != 0) {
              _objc_enumerationMutation(*local_178 - lVar6,puVar5);
            }
            local_148 = *(undefined8 *)(local_180 + (long)local_220 * 8);
            pcVar2 = local_138[0];
            FUN_00eae82c(local_138[0],local_148);
            _objc_retainAutoreleasedReturnValue();
            local_190 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
            bVar1 = pcVar2 != (cfstringStruct *)0x0;
            if (bVar1) {
              pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf____x_____);
              _objc_retainAutoreleasedReturnValue();
              local_d8 = pcVar2;
            }
            local_104 = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_190,0);
            if (local_104 != 0) goto LAB_00eae458;
            local_220 = local_220 + 1;
          } while (local_220 < local_218);
          local_218 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                     0x10);
          local_220 = (undefined *)0x0;
        } while (local_218 != (undefined *)0x0);
      }
      local_104 = 0;
LAB_00eae458:
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_104 == 0) {
        pcVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_valueForKey__0269d128,&cf_m_uiMesLocalID);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_valueForKey__0269d128,&cf_m_uiCreateTime);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____l_u_t_u_y_u);
        _objc_retainAutoreleasedReturnValue();
        local_104 = 1;
        local_d8 = pcVar2;
      }
      _objc_storeStrong(local_138,0);
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____s_lld);
      _objc_retainAutoreleasedReturnValue();
      local_104 = 1;
      local_d8 = pcVar2;
    }
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_d8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

