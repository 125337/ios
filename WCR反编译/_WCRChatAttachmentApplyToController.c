// _WCRChatAttachmentApplyToController @ 00ec4c70

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void _WCRChatAttachmentApplyToController(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *pcVar9;
  uint local_3a0;
  uint local_384;
  cfstringStruct *local_380;
  ulong local_330;
  ulong local_328;
  ulong local_2d8;
  ulong local_2d0;
  ulong local_2a0;
  cfstringStruct *local_280;
  undefined *local_278;
  byte local_26a;
  byte local_269;
  cfstringStruct *local_268;
  byte local_259;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  cfstringStruct *local_200;
  long local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  ulong local_190;
  undefined *local_188;
  undefined1 local_179;
  ulong local_178;
  ulong local_170;
  bool local_161;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_134 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_134 = 1;
    }
    else {
      uVar4 = local_130;
      FUN_00ec489c();
      _objc_retainAutoreleasedReturnValue();
      local_140 = uVar4;
      if (uVar4 == 0) {
        uVar4 = local_130;
        _object_getClass();
        local_150 = 0;
        local_148 = uVar4;
        while (local_148 != 0 && local_150 == 0) {
          uVar4 = local_148;
          _class_getInstanceVariable(local_148,"_arrAttachementObjectItems");
          local_150 = uVar4;
          if (uVar4 == 0) {
            uVar4 = local_148;
            _class_getInstanceVariable(local_148,"arrAttachementObjectItems");
            local_150 = uVar4;
          }
          _class_getSuperclass();
        }
        local_161 = false;
        bVar1 = local_150 == 0;
        if (bVar1) {
          local_2a0 = 0;
        }
        else {
          local_2a0 = local_130;
          _object_getIvar(local_130,local_150);
          _objc_retainAutoreleasedReturnValue();
          local_160 = local_2a0;
        }
        local_161 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_158 = local_2a0;
        if ((local_161 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        local_134 = 1;
        _objc_storeStrong(&local_158,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_copy_0269d150);
        local_170 = uVar4;
        FUN_00ebdc88();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        FUN_00ebdfa4();
        _objc_retainAutoreleasedReturnValue();
        local_178 = uVar8;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_179 = 0;
        uVar8 = local_178;
        FUN_00ebee14(local_178,&local_179);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_178;
        local_178 = uVar8;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        FUN_00ebf3fc(local_178);
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_170;
        local_188 = puVar2;
        FUN_00ec599c();
        _objc_retainAutoreleasedReturnValue();
        local_190 = uVar4;
        _memset(auStack_1d8,0,0x40);
        uVar4 = local_170;
        (*(code *)PTR__objc_retain_02578638)();
        local_2d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10
                  );
        if (local_2d0 != 0) {
          lVar7 = *local_1c8;
          local_2d8 = 0;
          do {
            do {
              if (*local_1c8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar7,uVar4);
              }
              uVar8 = *(ulong *)(local_1d0 + local_2d8 * 8);
              local_198 = uVar8;
              FUN_00ec5d9c(uVar8,local_190);
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
              if ((uVar8 == 0) || (uVar8 = local_1e0, FUN_00ec61c8(), (uVar8 & 1) != 0)) {
                local_134 = 9;
              }
              else {
                puVar2 = local_188;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_objectForKeyedSubscript__0269d098,local_1e0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                if (puVar2 == (undefined *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,
                             local_1e0);
                }
                local_134 = 0;
              }
              _objc_storeStrong(&local_1e0,0);
              local_2d8 = local_2d8 + 1;
            } while (local_2d8 < local_2d0);
            local_2d0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                       0x10);
            local_2d8 = 0;
          } while (local_2d0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_1e8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = 0;
        local_1f0 = puVar3;
        _memset(auStack_240,0,0x40);
        uVar4 = local_178;
        (*(code *)PTR__objc_retain_02578638)();
        local_328 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        if (local_328 != 0) {
          lVar7 = *local_230;
          local_330 = 0;
          do {
            do {
              if (*local_230 - lVar7 != 0) {
                _objc_enumerationMutation(*local_230 - lVar7,uVar4);
              }
              pcVar9 = *(cfstringStruct **)(local_238 + local_330 * 8);
              local_200 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar9);
              if (((ulong)pcVar5 & 1) == 0) {
                pcVar5 = local_200;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_200,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
                _objc_retainAutoreleasedReturnValue();
                pcVar9 = pcVar5;
                FUN_00ebd790();
                _objc_retainAutoreleasedReturnValue();
                local_248 = pcVar9;
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                pcVar5 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                if (pcVar5 == (cfstringStruct *)0x0) {
                  pcVar9 = local_200;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_200,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar6 = pcVar9;
                  FUN_00ebd790();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar5 = local_248;
                  local_248 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  (*(code *)PTR__objc_release_02578630)(pcVar9);
                }
                pcVar5 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                if (pcVar5 == (cfstringStruct *)0x0) {
                  pcVar9 = local_200;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_200,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar6 = pcVar9;
                  FUN_00ebd790();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar5 = local_248;
                  local_248 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  (*(code *)PTR__objc_release_02578630)(pcVar9);
                }
                pcVar5 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                if (pcVar5 != (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_addObject__0269d180,local_248);
                }
                local_134 = 0xb;
                _objc_storeStrong(&local_248,0);
              }
              else {
                pcVar5 = local_200;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_200,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
                _objc_retainAutoreleasedReturnValue();
                local_380 = pcVar5;
                if (pcVar5 == (cfstringStruct *)0x0) {
                  local_380 = &cf_native;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_250 = local_380;
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                pcVar5 = local_200;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_200,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                pcVar9 = local_250;
                local_258 = pcVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,PTR_s_isEqualToString__0269ccc8,&cf_plugin);
                pcVar5 = local_258;
                local_269 = 0;
                local_384 = 1;
                if (((ulong)pcVar9 & 1) == 0) {
                  pcVar9 = &cf_wcr_attach_;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,&cf_plugin_);
                  _objc_retainAutoreleasedReturnValue();
                  local_269 = 1;
                  local_268 = pcVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_hasPrefix__0269d320);
                  local_384 = (uint)pcVar5;
                }
                if ((local_269 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_268);
                }
                local_259 = (byte)local_384 & 1;
                local_3a0 = 1;
                if ((local_384 & 1) == 0) {
                  pcVar5 = local_250;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_250,PTR_s_isEqualToString__0269ccc8,&cf_toolbar);
                  local_3a0 = 1;
                  if (((ulong)pcVar5 & 1) == 0) {
                    pcVar5 = local_250;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_250,PTR_s_isEqualToString__0269ccc8,&cf_custom);
                    local_3a0 = 1;
                    if (((ulong)pcVar5 & 1) == 0) {
                      pcVar5 = local_258;
                      FUN_00ec61c8();
                      local_3a0 = (uint)pcVar5;
                    }
                  }
                }
                local_26a = (byte)local_3a0 & 1;
                if ((local_3a0 & 1) == 0) {
                  puVar2 = local_188;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_188,PTR_s_objectForKeyedSubscript__0269d098,local_258);
                  _objc_retainAutoreleasedReturnValue();
                  local_278 = puVar2;
                  if (puVar2 != (undefined *)0x0) {
                    FUN_00ec6234(puVar2,local_200);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e8,PTR_s_addObject__0269d180,local_278);
                  }
                  local_134 = 0xb;
                  _objc_storeStrong(&local_278,0);
                }
                else if (((local_259 & 1) == 0) ||
                        (pcVar5 = local_258, FUN_00ec6648(local_258,local_130),
                        ((ulong)pcVar5 & 1) != 0)) {
                  local_1f8 = local_1f8 + 1;
                  pcVar5 = local_200;
                  FUN_00ec6858();
                  _objc_retainAutoreleasedReturnValue();
                  local_280 = pcVar5;
                  if (pcVar5 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e8,PTR_s_addObject__0269d180,pcVar5);
                  }
                  _objc_storeStrong(&local_280,0);
                  local_134 = 0;
                }
                else {
                  local_134 = 0xb;
                }
                _objc_storeStrong(&local_258);
                _objc_storeStrong(&local_250,0);
              }
              local_330 = local_330 + 1;
            } while (local_330 < local_328);
            local_328 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128
                       ,0x10);
            local_330 = 0;
          } while (local_328 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_removeAllObjects_0269d508);
        puVar2 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
        if (puVar2 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_addObjectsFromArray__0269d540,local_1e8);
        }
        puVar2 = local_1e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
        DAT_028e2a08 = puVar2;
        _objc_storeStrong(&local_1f0);
        _objc_storeStrong(&local_1e8,0);
        _objc_storeStrong(&local_190,0);
        _objc_storeStrong(&local_188,0);
        _objc_storeStrong(&local_178,0);
        _objc_storeStrong(&local_170,0);
        local_134 = 0;
      }
      _objc_storeStrong(&local_140,0);
    }
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

