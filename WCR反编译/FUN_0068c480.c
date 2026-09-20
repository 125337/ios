// FUN_0068c480 @ 0068c480

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0068c480(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_280;
  undefined *local_278;
  undefined *local_208;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  long local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  lVar5 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_d0 = (undefined *)0x0;
    local_e8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_d8,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_f0;
    if (((ulong)puVar2 & 1) == 0) {
      local_d0 = (undefined *)0x0;
      local_e8 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_108 = (undefined *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_100 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((((ulong)puVar3 & 1) == 0) ||
         (puVar3 = local_100, (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0)
         , puVar3 == (undefined *)0x0)) {
        puVar3 = local_100;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_storeStrong(&local_108,local_100);
        }
      }
      else {
        puVar3 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        local_121 = 0;
        local_110 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        if (puVar3 == (undefined *)0x0) {
          local_208 = (undefined *)0x0;
        }
        else {
          local_208 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                     PTR_s_JSONObjectWithData_options_error_026ca480,local_110,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_121 = 1;
          local_120 = local_208;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_208;
        if ((local_121 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        puVar3 = local_118;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_storeStrong(&local_108,local_118);
        }
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
      }
      puVar3 = local_f8;
      if (local_108 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = puVar3;
        local_e8 = 1;
      }
      else {
        puVar3 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_mutableCopy_0269d8a0);
        local_130 = puVar3;
        _memset(auStack_178,0,0x40);
        local_c8 = &cf_errcode;
        local_c0 = &cf_errmsg;
        local_b8 = &cf_sid;
        local_b0 = &cf_v;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_c8,4);
        _objc_retainAutoreleasedReturnValue();
        local_278 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_278 != (undefined *)0x0) {
          lVar5 = *local_168;
          local_280 = (undefined *)0x0;
          do {
            do {
              if (*local_168 - lVar5 != 0) {
                _objc_enumerationMutation(*local_168 - lVar5,puVar3);
              }
              local_138 = *(undefined8 *)(local_170 + (long)local_280 * 8);
              puVar2 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_objectForKeyedSubscript__0269d098,local_138);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = false;
              if (puVar2 == (undefined *)0x0) {
                puVar4 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_objectForKeyedSubscript__0269d098,local_138);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = puVar4 != (undefined *)0x0;
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (bVar1) {
                puVar2 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_objectForKeyedSubscript__0269d098,local_138);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_138);
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
              local_280 = local_280 + 1;
            } while (local_280 < local_278);
            local_278 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8
                       ,0x10);
            local_280 = (undefined *)0x0;
          } while (local_278 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_130;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = puVar3;
        local_e8 = 1;
        _objc_storeStrong(&local_130,0);
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_d0);
  return;
}

