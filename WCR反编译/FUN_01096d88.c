// FUN_01096d88 @ 01096d88

/* WARNING: Type propagation algorithm not settling */

void FUN_01096d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_298;
  ulong local_290;
  ulong local_260;
  undefined *local_228;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  long local_178;
  int local_170;
  byte local_169;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  long local_150;
  undefined8 local_148;
  ulong local_140 [3];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140[1] = 0;
  local_140[2] = param_1;
  _objc_storeStrong(local_140 + 1);
  local_140[0] = 0;
  _objc_storeStrong(local_140,param_3);
  uVar2 = local_140[0];
  local_158 = 0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_150 = param_1;
  local_148 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar5 = local_140[0];
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar5 & 1) != 0) {
      uVar2 = local_140[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_objectForKey__0269e048,&cf_md5);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 0;
      local_260 = uVar2;
      if (uVar2 == 0) {
        local_260 = local_140[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_objectForKey__0269e048,&cf_list);
        _objc_retainAutoreleasedReturnValue();
        local_168 = local_260;
      }
      local_169 = uVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = local_260;
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_160;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_158,local_160);
      }
      _objc_storeStrong(&local_160,0);
    }
  }
  else {
    _objc_storeStrong(&local_158,local_140[0]);
  }
  uVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
  if (uVar2 < 3) {
    local_170 = 1;
  }
  else {
    local_178 = 0;
    _memset(auStack_1c0,0,0x40);
    uVar2 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
    if (local_290 != 0) {
      lVar3 = *local_1b0;
      local_298 = 0;
      do {
        do {
          if (*local_1b0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_1b8 + local_298 * 8);
          local_1c8 = 0;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_180 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar5 = local_180;
          if ((uVar4 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar5 & 1) != 0) {
              uVar4 = local_180;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_180,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_1c8;
              local_1c8 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar5);
            }
          }
          else {
            _objc_storeStrong(&local_1c8,local_180);
          }
          uVar5 = local_1c8;
          FUN_0107bd28();
          if ((uVar5 & 1) != 0) {
            local_178 = local_178 + 1;
          }
          _objc_storeStrong(&local_1c8,0);
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
                  );
        local_298 = 0;
      } while (local_290 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_178 < 3) {
      local_170 = 1;
    }
    else {
      _memset(auStack_210,0,0x40);
      uVar2 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_2e0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10)
      ;
      if (local_2e0 != 0) {
        lVar3 = *local_200;
        local_2e8 = 0;
        do {
          do {
            if (*local_200 - lVar3 != 0) {
              _objc_enumerationMutation(*local_200 - lVar3,uVar2);
            }
            uVar5 = *(ulong *)(local_208 + local_2e8 * 8);
            local_218 = 0;
            local_220 = 0;
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1d0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((uVar5 & 1) == 0) || (uVar5 = local_1d0, FUN_0107bd28(), (uVar5 & 1) == 0)) {
              uVar5 = local_1d0;
              puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar5 & 1) != 0) {
                uVar4 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_218;
                local_218 = uVar4;
                (*(code *)PTR__objc_release_02578630)(uVar5);
                uVar4 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_220;
                local_220 = uVar4;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
            }
            else {
              uVar4 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_218;
              local_218 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar5);
            }
            uVar5 = local_218;
            FUN_0107bd28();
            if ((uVar5 & 1) == 0) {
              local_170 = 5;
            }
            else {
              puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_218;
              local_228 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_228,PTR_s_setObject_forKeyedSubscript__0269d248,uVar5,&cf_md5);
              (*(code *)PTR__objc_release_02578630)(uVar5);
              uVar5 = local_220;
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = local_220,
                 (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0), uVar5 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_setObject_forKeyedSubscript__0269d248,local_220,&cf_url);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_228);
              _objc_storeStrong(&local_228,0);
              local_170 = 0;
            }
            _objc_storeStrong(&local_220);
            _objc_storeStrong(&local_218,0);
            local_2e8 = local_2e8 + 1;
          } while (local_2e8 < local_2e0);
          local_2e0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,
                     0x10);
          local_2e8 = 0;
        } while (local_2e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_170 = 0;
    }
  }
  _objc_storeStrong(&local_158,0);
  if (local_170 == 0) {
    local_170 = 0;
  }
  _objc_storeStrong(local_140);
  _objc_storeStrong(local_140 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

