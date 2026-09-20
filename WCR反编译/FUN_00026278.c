// FUN_00026278 @ 00026278

void FUN_00026278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_238;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  int local_164;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined *local_108 [3];
  undefined *local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = 0;
  local_c8 = param_4;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  puVar4 = PTR_WCRefineAIStore_026ce048;
  local_e8 = param_8;
  local_e0 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_clampedReplyMaxChars__0269d3b8,param_7);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_108[0] = puVar5;
  if (local_e8 < 2) {
    puVar4 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_limitedReplyText_maxChars__0269cec8,local_b0,
               local_f0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
    if (puVar4 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_addObject__0269d180,local_110);
    }
    _objc_storeStrong(&local_110,0);
  }
  else {
    _memset(auStack_158,0,0x40);
    if (local_b0 == (cfstringStruct *)0x0) {
      local_238 = &cf___;
    }
    else {
      local_238 = local_b0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,PTR_s_componentsSeparatedByString__0269d3c0,&cf____);
    _objc_retainAutoreleasedReturnValue();
    local_258 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_258 != (cfstringStruct *)0x0) {
      lVar7 = *local_148;
      local_260 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,local_238);
          }
          local_118 = *(undefined8 *)(local_150 + (long)local_260 * 8);
          puVar4 = PTR_WCRefineAIStore_026ce048;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAIStore_026ce048,PTR_s_limitedReplyText_maxChars__0269cec8,
                     local_118,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_160 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_addObject__0269d180,local_160);
          }
          puVar4 = local_108[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_count_0269cfe0);
          lVar8 = (long)puVar4 - local_e8;
          if ((long)puVar4 < local_e8) {
            local_164 = 0;
          }
          else {
            lVar8 = 2;
            local_164 = 2;
          }
          _objc_storeStrong(lVar8,&local_160,0);
          if (local_164 != 0) goto LAB_0002670c;
          local_260 = (cfstringStruct *)((long)&local_260->field0_0x0 + 1);
        } while (local_260 < local_258);
        local_258 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_238,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_260 = (cfstringStruct *)0x0;
      } while (local_258 != (cfstringStruct *)0x0);
    }
    local_164 = 0;
LAB_0002670c:
    (*(code *)PTR__objc_release_02578630)(local_238);
    puVar4 = local_108[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_count_0269cfe0);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAIStore_026ce048,PTR_s_limitedReplyText_maxChars__0269cec8,local_b0,
                 local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      if (puVar4 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_addObject__0269d180,local_170);
      }
      _objc_storeStrong(&local_170,0);
    }
  }
  puVar4 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_unescapedReplyAffix__0269d3c8,local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_WCRefineAIStore_026ce048;
  local_178 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_unescapedReplyAffix__0269d3c8,local_d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_108[0];
  puVar5 = local_178;
  local_1c8 = PTR___NSConcreteGlobalBlock_02578658;
  local_1c0 = 0xd0800000;
  local_1bc = 0;
  local_1b8 = FUN_00026c48;
  local_1b0 = &DAT_02579030;
  local_180 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  puVar4 = local_180;
  local_1a8 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_b8;
  local_1a0 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_c0;
  local_198 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar2;
  local_188 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_1c8);
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(local_108,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

