// firstMatchedKeywordInText:keywords: @ 00ed09bc

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomKickHelper::firstMatchedKeywordInText_keywords_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ID local_1f0;
  ulong local_1a0;
  ulong local_198;
  ID local_170;
  ID local_148;
  byte local_13a;
  byte local_139;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ID local_e8;
  int local_dc;
  ID local_d8;
  ulong local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (uVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    IVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = IVar1;
    if (IVar1 == 0) {
      local_170 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_170;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _memset(auStack_130,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar5 = *local_120;
      local_1a0 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,uVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + local_1a0 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_139 = 0;
          local_13a = 0;
          local_138 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_hasPrefix__0269d320,&::cf__);
          IVar1 = local_b8;
          if ((IVar3 & 1) == 0) {
            IVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&::cf__);
            IVar1 = local_b8;
            if ((IVar3 & 1) != 0) {
              local_13a = 1;
              IVar4 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_substringFromIndex__0269d120,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_trimmedString__0269ec98);
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_138;
              local_138 = IVar1;
              (*(code *)PTR__objc_release_02578630)(IVar3);
              (*(code *)PTR__objc_release_02578630)(IVar4);
            }
          }
          else {
            local_139 = 1;
            IVar4 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_substringFromIndex__0269d120,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_trimmedString__0269ec98);
            _objc_retainAutoreleasedReturnValue();
            IVar3 = local_138;
            local_138 = IVar1;
            (*(code *)PTR__objc_release_02578630)(IVar3);
            (*(code *)PTR__objc_release_02578630)(IVar4);
          }
          IVar1 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
          if (IVar1 == 0) {
            local_dc = 3;
          }
          else if ((local_139 & 1) == 0) {
            IVar1 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = IVar1;
            if (IVar1 == 0) {
              local_1f0 = local_138;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = local_1f0;
            (*(code *)PTR__objc_release_02578630)(IVar1);
            if ((local_13a & 1) == 0) {
              IVar3 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_rangeOfString_options__0269d118,local_138,1);
              IVar1 = local_138;
              if (IVar3 == 0x7fffffffffffffff) {
                local_dc = 0;
                uVar6 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = IVar1;
                uVar6 = 1;
                local_dc = 1;
              }
            }
            else {
              IVar3 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,local_148);
              IVar1 = local_138;
              if ((IVar3 & 1) == 0) {
                uVar6 = 3;
                local_dc = 3;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = IVar1;
                uVar6 = 1;
                local_dc = 1;
              }
            }
            _objc_storeStrong(uVar6,&local_148,0);
          }
          else {
            IVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_isEqualToString__0269ccc8,local_138);
            IVar1 = local_138;
            if ((IVar3 & 1) == 0) {
              local_dc = 3;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = IVar1;
              local_dc = 1;
            }
          }
          _objc_storeStrong(&local_138,0);
          if ((local_dc != 0) && (local_dc != 3)) goto LAB_00ed0fb8;
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    local_dc = 0;
LAB_00ed0fb8:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_dc == 0) {
      local_b0 = 0;
      local_dc = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

