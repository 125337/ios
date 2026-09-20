// FUN_015d5370 @ 015d5370

void FUN_015d5370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double local_288;
  double local_280;
  double local_248;
  double local_240;
  undefined *local_1f0;
  undefined *local_1e8;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  long local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_1;
  _objc_storeStrong(&local_c8);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_3);
  uVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_e0 = param_1;
  local_d8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_d0;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      _memset(auStack_138,0,0x40);
      local_b8 = &cf_day;
      local_b0 = &cf_night;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1e8 != (undefined *)0x0) {
        lVar4 = *local_128;
        local_1f0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,puVar1);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1f0 * 8);
            uVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar3;
            FUN_015d5afc();
            _objc_retainAutoreleasedReturnValue();
            local_140 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
            if (uVar3 != 0) {
              uVar3 = *(ulong *)(param_1 + 0x28);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_isSupportedFileName__026b0fd0,local_140);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,local_140,local_f8);
              }
            }
            _objc_storeStrong(&local_140,0);
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1f0 = (undefined *)0x0;
        } while (local_1e8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if ((uVar2 & 1) != 0) {
        local_240 = 0.0;
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_240 <= 0.0) {
          local_240 = 0.0;
        }
        if (local_240 <= 1.0) {
          local_248 = local_240;
        }
        else {
          local_248 = 1.0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_248,puVar1,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_opacity);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      uVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_blur);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if ((uVar2 & 1) != 0) {
        local_280 = 0.0;
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_blur);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_280 <= 0.0) {
          local_280 = 0.0;
        }
        if (local_280 <= 1.0) {
          local_288 = local_280;
        }
        else {
          local_288 = 1.0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_288,puVar1,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_blur);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                   local_f0,local_c8);
      }
      _objc_storeStrong(&local_f0,0);
      local_e4 = 0;
      goto LAB_015d5ab0;
    }
  }
  local_e4 = 1;
LAB_015d5ab0:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

