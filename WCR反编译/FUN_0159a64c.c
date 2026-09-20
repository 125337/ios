// FUN_0159a64c @ 0159a64c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0159a64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *local_348;
  uint local_324;
  cfstringStruct *local_300;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_268;
  cfstringStruct *local_248;
  bool local_1e9;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  byte local_1d1;
  cfstringStruct *local_1d0;
  byte local_1c1;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  cfstringStruct *local_180;
  undefined *local_178;
  byte local_169;
  cfstringStruct *local_168;
  byte local_159;
  cfstringStruct *local_158;
  byte local_149;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  bool local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  int local_cc;
  long local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_c8 = param_1;
  if (local_c0 == 0) {
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e1 = 0;
    if (((ulong)pcVar5 & 1) == 0) {
      local_248 = (cfstringStruct *)0xc8;
    }
    else {
      local_248 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_d8 = local_248;
    local_f1 = 0;
    local_101 = 0;
    bVar1 = false;
    if (local_248 != (cfstringStruct *)0xc8) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_voices);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      bVar1 = false;
      local_f0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        bVar1 = pcVar2 == (cfstringStruct *)0x0;
        local_100 = pcVar2;
      }
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if (bVar1) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_119 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_268 = &cf_gRzb_;
      }
      else {
        local_268 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
        _objc_retainAutoreleasedReturnValue();
        local_118 = local_268;
      }
      local_119 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = local_268;
      if ((local_119 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      lVar7 = *(long *)(param_1 + 0x28);
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_NzvU_);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_cc = 1;
      _objc_storeStrong(&local_110,0);
    }
    else {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      pcVar5 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_131 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_2a0 = local_b8;
      }
      else {
        local_2a0 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
        _objc_retainAutoreleasedReturnValue();
        local_130 = local_2a0;
      }
      local_131 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = local_2a0;
      if ((local_131 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_130);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_voices);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      pcVar5 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_149 = 0;
      local_159 = 0;
      local_169 = 0;
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_items);
        _objc_retainAutoreleasedReturnValue();
        local_159 = 1;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_158 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar5 & 1) == 0) {
          local_2c8 = (cfstringStruct *)0x0;
        }
        else {
          local_2c8 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_items);
          _objc_retainAutoreleasedReturnValue();
          local_169 = 1;
          local_168 = local_2c8;
        }
        local_2b8 = local_2c8;
      }
      else {
        local_2b8 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_voices);
        _objc_retainAutoreleasedReturnValue();
        local_149 = 1;
        local_148 = local_2b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = local_2b8;
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      if ((local_149 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_140;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,&cf_NzvU_V<h_);
        local_cc = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_178 = puVar3;
        _memset(auStack_1c0,0,0x40);
        pcVar2 = local_140;
        (*(code *)PTR__objc_retain_02578638)();
        local_2f8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                   0x10);
        if (local_2f8 != (cfstringStruct *)0x0) {
          lVar7 = *local_1b0;
          local_300 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_1b0 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1b0 - lVar7,pcVar2);
              }
              pcVar5 = *(cfstringStruct **)(local_1b8 + (long)local_300 * 8);
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_180 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((ulong)pcVar5 & 1) != 0) {
                pcVar5 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1d1 = 0;
                local_324 = 1;
                if (((ulong)pcVar4 & 1) != 0) {
                  pcVar4 = local_180;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
                  _objc_retainAutoreleasedReturnValue();
                  local_1d1 = 1;
                  local_1d0 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_324 = (uint)pcVar4;
                }
                if ((local_1d1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_1d0);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                local_1c1 = (byte)local_324 & 1;
                if ((local_324 & 1) != 0) {
                  pcVar5 = local_180;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  pcVar4 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  local_1e9 = ((ulong)pcVar4 & 1) == 0;
                  if (local_1e9) {
                    local_348 = &cf___;
                  }
                  else {
                    local_348 = local_180;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
                    _objc_retainAutoreleasedReturnValue();
                    local_1e8 = local_348;
                  }
                  local_1e9 = !local_1e9;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1e0 = local_348;
                  if (local_1e9) {
                    (*(code *)PTR__objc_release_02578630)(local_1e8);
                  }
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  lVar6 = *(long *)(param_1 + 0x20);
                  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
                  if ((lVar6 == 0) ||
                     (pcVar5 = local_1e0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_1e0,PTR_s_isEqualToString__0269ccc8,
                                *(undefined8 *)(param_1 + 0x20)), ((ulong)pcVar5 & 1) != 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_178,PTR_s_addObject__0269d180,local_180);
                    local_cc = 0;
                  }
                  else {
                    local_cc = 3;
                  }
                  _objc_storeStrong(&local_1e0,0);
                }
              }
              local_300 = (cfstringStruct *)((long)&local_300->field0_0x0 + 1);
            } while (local_300 < local_2f8);
            local_2f8 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8
                       ,0x10);
            local_300 = (cfstringStruct *)0x0;
          } while (local_2f8 != (cfstringStruct *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_178);
        _objc_storeStrong(&local_178,0);
        local_cc = 0;
      }
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_128,0);
      if (local_cc == 0) {
        local_cc = 0;
      }
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_code_026ae1d0);
    lVar7 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_NzvU_);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    local_cc = 1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

