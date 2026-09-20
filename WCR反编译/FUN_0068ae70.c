// FUN_0068ae70 @ 0068ae70

void FUN_0068ae70(undefined8 param_1)

{
  cfstringStruct **ppcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1e0;
  undefined *local_1d8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_198;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  cfstringStruct **local_130;
  undefined4 local_128;
  cfstringStruct **local_118;
  cfstringStruct *local_110;
  cfstringStruct **local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppcVar1 = &local_110;
  local_110 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar1,param_1);
  FUN_006854ec();
  _objc_retainAutoreleasedReturnValue();
  local_118 = ppcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(ppcVar1,PTR_s_count_0269cfe0);
  if (ppcVar1 == (cfstringStruct **)0x0) {
    local_38 = &cf_remark;
    if (local_110 == (cfstringStruct *)0x0) {
      local_198 = &cf___;
    }
    else {
      local_198 = local_110;
    }
    local_30 = local_198;
    ppcVar1 = (cfstringStruct **)PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_128 = 1;
    local_108 = ppcVar1;
  }
  else {
    ppcVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
    if (local_110 == (cfstringStruct *)0x0) {
      local_1b8 = &cf___;
    }
    else {
      local_1b8 = local_110;
    }
    local_130 = ppcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (ppcVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,&cf_remark);
    _memset(auStack_178,0,0x40);
    local_100 = &cf_sid;
    local_f8 = &cf_v;
    local_f0 = &cf_errcode;
    local_e8 = &cf_errmsg;
    local_e0 = &cf_msg;
    local_d8 = &cf_env;
    local_d0 = &cf_graphid;
    local_c8 = &cf_hint;
    local_c0 = &cf_time;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_100,
               9);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1d8 != (undefined *)0x0) {
      lVar3 = *local_168;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_168 - lVar3 != 0) {
            _objc_enumerationMutation(*local_168 - lVar3,puVar2);
          }
          local_138 = *(undefined8 *)(local_170 + (long)local_1e0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_removeObjectForKey__0269d700,local_138);
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_b8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    ppcVar1 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = ppcVar1;
    local_128 = 1;
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_108);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

