// FUN_004f0b90 @ 004f0b90

void FUN_004f0b90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_428;
  undefined *local_420;
  ulong local_2f0;
  ulong local_2e8;
  undefined *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined *local_208;
  undefined *local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  ulong local_180;
  int local_174;
  undefined *local_170;
  undefined *local_168 [3];
  undefined *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_148 = param_4;
  local_140 = param_3;
  local_138 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_150 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_168[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = local_130;
  local_170 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
  uVar4 = local_130;
  if (uVar9 == 0) {
    if (local_138 != (undefined8 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *local_138;
      *local_138 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_140 != (undefined8 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *local_140;
      *local_140 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_148 != (undefined8 *)0x0) {
      _objc_storeStrong(local_148,*(undefined8 *)PTR____NSDictionary0___02578288);
    }
    local_174 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_1c8,0,0x40);
    uVar4 = local_180;
    (*(code *)PTR__objc_retain_02578638)();
    local_2e8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
    if (local_2e8 != 0) {
      lVar8 = *local_1b8;
      local_2f0 = 0;
      do {
        do {
          if (*local_1b8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar8,uVar4);
          }
          uVar9 = *(ulong *)(local_1c0 + local_2f0 * 8);
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_188 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = uVar9;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar9 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
          if (uVar9 == 0) {
            local_174 = 3;
          }
          else {
            uVar9 = local_1d0;
            puVar1 = PTR_s_rangeOfString__0269d838;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d0,PTR_s_rangeOfString__0269d838,&cf__chatroom_);
            local_1e0 = uVar9;
            local_1d8 = puVar1;
            if (uVar9 != 0x7fffffffffffffff) {
              pcVar5 = &cf__chatroom;
              (*(code *)PTR__objc_msgSend_02578628)(&cf__chatroom,PTR_s_length_0269cca0);
              uVar9 = (long)&pcVar5->field0_0x0 + uVar9;
              uVar6 = local_1d0;
              local_1e8 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0);
              if (uVar9 < uVar6) {
                uVar9 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_substringToIndex__0269d6c0,local_1e8);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                           PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                _objc_retainAutoreleasedReturnValue();
                local_1f0 = uVar6;
                (*(code *)PTR__objc_release_02578630)(puVar1);
                (*(code *)PTR__objc_release_02578630)(uVar9);
                uVar9 = local_1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_substringFromIndex__0269d120,local_1e8 + 1);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                           PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                _objc_retainAutoreleasedReturnValue();
                local_1f8 = uVar6;
                (*(code *)PTR__objc_release_02578630)(puVar1);
                (*(code *)PTR__objc_release_02578630)(uVar9);
                uVar9 = local_1f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
                if ((uVar9 == 0) ||
                   (uVar9 = local_1f8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_length_0269cca0),
                   uVar9 == 0)) {
                  local_174 = 0;
                }
                else {
                  puVar1 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_objectForKeyedSubscript__0269d098,local_1f0);
                  _objc_retainAutoreleasedReturnValue();
                  local_200 = puVar1;
                  if (puVar1 == (undefined *)0x0) {
                    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = local_200;
                    local_200 = puVar2;
                    (*(code *)PTR__objc_release_02578630)(puVar1);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_200,
                               local_1f0);
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_200,PTR_s_addObject__0269d180,local_1f8);
                  local_174 = 3;
                  _objc_storeStrong(&local_200,0);
                }
                _objc_storeStrong(&local_1f8);
                _objc_storeStrong(&local_1f0,0);
                if (local_174 != 0) goto LAB_004f158c;
              }
            }
            uVar9 = local_1d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_hasSuffix__0269d018,&cf__chatroom)
            ;
            if ((uVar9 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1d0);
              local_174 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_168[0],PTR_s_addObject__0269d180,local_1d0);
              local_174 = 3;
            }
          }
LAB_004f158c:
          _objc_storeStrong(&local_1d0,0);
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10
                  );
        local_2f0 = 0;
      } while (local_2e8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    puVar2 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dictionaryWithCapacity__026a1ad0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_208 = puVar1;
    _memset(auStack_250,0,0x40);
    puVar1 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_420 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,0x10);
    if (local_420 != (undefined *)0x0) {
      lVar8 = *local_240;
      local_428 = (undefined *)0x0;
      do {
        do {
          if (*local_240 - lVar8 != 0) {
            _objc_enumerationMutation(*local_240 - lVar8,puVar1);
          }
          local_210 = *(undefined8 *)(local_248 + (long)local_428 * 8);
          puVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_objectForKeyedSubscript__0269d098,local_210);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_258 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_count_0269cfe0);
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_208,PTR_s_setObject_forKeyedSubscript__0269d248,local_258,local_210);
          }
          _objc_storeStrong(&local_258,0);
          local_428 = local_428 + 1;
        } while (local_428 < local_420);
        local_420 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,
                   0x10);
        local_428 = (undefined *)0x0;
      } while (local_420 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_138 != (undefined8 *)0x0) {
      puVar1 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
      uVar3 = *local_138;
      *local_138 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_140 != (undefined8 *)0x0) {
      puVar1 = local_168[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_copy_0269d150);
      uVar3 = *local_140;
      *local_140 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_148 != (undefined8 *)0x0) {
      puVar1 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_copy_0269d150);
      uVar3 = *local_148;
      *local_148 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    _objc_storeStrong(&local_208);
    _objc_storeStrong(&local_180,0);
    local_174 = 0;
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(local_168,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

