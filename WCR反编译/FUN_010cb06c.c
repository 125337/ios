// FUN_010cb06c @ 010cb06c

void FUN_010cb06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_258;
  ulong local_218;
  ulong local_210;
  undefined *local_1e8;
  undefined8 local_1a0;
  bool local_191;
  cfstringStruct *local_190;
  byte local_181;
  ulong local_180;
  cfstringStruct *local_178;
  undefined4 local_16c;
  undefined *local_168;
  ulong local_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  ulong local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = (undefined *)0x0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  puVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_e0 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_f1 = 0;
  local_101 = 0;
  if (((ulong)puVar3 & 1) == 0) {
    local_1e8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = local_1e8;
  }
  else {
    local_1e8 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
    local_f1 = 1;
    local_f0 = local_1e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_1e8;
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  _memset(auStack_150,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
  if (local_210 != 0) {
    lVar7 = *local_140;
    local_218 = 0;
    do {
      do {
        if (*local_140 - lVar7 != 0) {
          _objc_enumerationMutation(*local_140 - lVar7,uVar1);
        }
        uVar8 = *(undefined8 *)(local_148 + local_218 * 8);
        local_110 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_b0;
        local_158 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_e8;
        local_160 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_158);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_168 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((((ulong)puVar3 & 1) == 0) ||
            (puVar3 = local_168,
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0),
            puVar3 == (undefined *)0x0)) ||
           (uVar4 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_d8,PTR_s_fileExistsAtPath__026ca630,local_168), (uVar4 & 1) == 0)) {
          uVar4 = local_160;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((((uVar4 & 1) == 0) ||
              (uVar4 = local_160,
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0), uVar4 == 0))
             || (uVar4 = local_d8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_fileExistsAtPath__026ca630,local_160), (uVar4 & 1) == 0))
          {
            local_16c = 3;
          }
          else {
            uVar4 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_181 = 0;
            local_191 = false;
            if (uVar5 == 0) {
              local_258 = &cf___;
            }
            else {
              uVar6 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              local_181 = 1;
              local_258 = &cf__;
              local_180 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398);
              _objc_retainAutoreleasedReturnValue();
              local_190 = local_258;
            }
            local_191 = uVar5 != 0;
            (*(code *)PTR__objc_retain_02578638)();
            local_178 = local_258;
            if ((local_191 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_190);
            }
            if ((local_181 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_180);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar8 = local_c8;
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf________);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = uVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            uVar4 = local_160;
            FUN_010cb9d8(local_160,local_1a0,local_d8);
            if (((uVar4 & 1) != 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,local_1a0,local_158)
               , local_e0 != (undefined1 *)0x0)) {
              *local_e0 = 1;
            }
            _objc_storeStrong(&local_1a0);
            _objc_storeStrong(&local_178,0);
            local_16c = 0;
          }
        }
        else {
          local_16c = 3;
        }
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_160,0);
        _objc_storeStrong(&local_158,0);
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      local_218 = 0;
    } while (local_210 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_16c = 1;
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

