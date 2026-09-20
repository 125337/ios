// copyEmoticonTransportFieldsFrom:onto: @ 00f4a40c

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::copyEmoticonTransportFieldsFrom_onto_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined *local_1a8;
  undefined *local_1a0;
  ID local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined4 local_104;
  long local_100;
  long local_f8;
  SEL local_f0;
  ID local_e8;
  undefined1 auStack_e0 [128];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_storeStrong(&local_f8,param_3);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_4);
  if ((local_f8 == 0) || (local_100 == 0)) {
    local_104 = 1;
  }
  else {
    local_60 = &cf_m_cdnUrlString;
    local_58 = &cf_m_encryptUrlString;
    local_50 = &cf_m_aesKey;
    local_48 = &cf_m_nsExternUrl;
    local_40 = &cf_m_nsExternMd5;
    local_38 = &cf_m_tpUrlString;
    local_30 = &cf_m_authkey;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar1;
    _memset(auStack_158,0,0x40);
    puVar1 = local_110;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_e0,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar3 = *local_148;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar3 != 0) {
            _objc_enumerationMutation(*local_148 - lVar3,puVar1);
          }
          local_118 = *(undefined8 *)(local_150 + (long)local_1a8 * 8);
          IVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_stringValueFromObject_key__026abfe0,local_f8,local_118);
          _objc_retainAutoreleasedReturnValue();
          local_160 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
          if (IVar2 == 0) {
            local_104 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_setValue_forKey__0269d300,local_160,local_118);
            local_104 = 0;
          }
          _objc_storeStrong(&local_160,0);
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_e0,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_110,0);
    local_104 = 0;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

