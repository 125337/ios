// FUN_0015cca8 @ 0015cca8

void FUN_0015cca8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_250;
  ulong local_210;
  ulong local_208;
  ulong local_190;
  ulong local_178;
  cfstringStruct *local_170;
  ulong local_168;
  byte local_159;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  cfstringStruct *local_f8 [2];
  ulong local_e8;
  undefined4 local_e0;
  byte local_d9;
  ulong local_d8;
  ulong local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_d9 = 0;
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_tipsNewNavBar_0269f658);
  if ((uVar1 & 1) == 0) {
    local_190 = 0;
  }
  else {
    local_190 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tipsNewNavBar_0269f658);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_190;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_190;
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if (local_c0 == 0) {
    local_b0 = (cfstringStruct *)0x0;
    local_e0 = 1;
  }
  else {
    local_e8 = 0;
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_tipsBarInMixedList_0269f6d8);
    if ((uVar1 & 1) == 0) {
      uVar5 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_valueForKey__0269d128,&cf_tipsBarInMixedList);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_e8;
      local_e8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      uVar5 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tipsBarInMixedList_0269f6d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_e8;
      local_e8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_e8;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0),
       uVar1 == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_e0 = 1;
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f8[0] = pcVar3;
      _memset(auStack_140,0,0x40);
      uVar1 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      if (local_208 != 0) {
        lVar4 = *local_130;
        local_210 = 0;
        do {
          do {
            if (*local_130 - lVar4 != 0) {
              _objc_enumerationMutation(*local_130 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_138 + local_210 * 8);
            local_148 = 0;
            local_100 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_bizType_0269f6e0);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_bizType_0269f6e0);
              local_148 = uVar5;
            }
            if (local_148 == 1) {
              local_159 = 0;
              uVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_userData_0269f6e8);
              if ((uVar5 & 1) == 0) {
                local_250 = 0;
              }
              else {
                local_250 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_userData_0269f6e8);
                _objc_retainAutoreleasedReturnValue();
                local_159 = 1;
                local_158 = local_250;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = local_250;
              if ((local_159 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              uVar5 = local_150;
              FUN_0015ecd4();
              local_168 = uVar5;
              (*(code *)PTR__objc_retain_02578638)();
              local_170 = &cf___;
              uVar5 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_respondsToSelector__026ca818,PTR_s_msgSummary_0269f6d0);
              if ((uVar5 & 1) != 0) {
                uVar5 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_msgSummary_0269f6d0);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_178 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((uVar5 & 1) != 0) {
                  _objc_storeStrong(&local_170,local_178);
                }
                _objc_storeStrong(&local_178,0);
              }
              pcVar3 = local_f8[0];
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf__llu___);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              _objc_storeStrong(&local_170);
              _objc_storeStrong(&local_150,0);
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_210 = 0;
        } while (local_208 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      pcVar3 = local_f8[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8[0],PTR_s_componentsJoinedByString__0269d140,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = 1;
      local_b0 = pcVar3;
      _objc_storeStrong(local_f8,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

