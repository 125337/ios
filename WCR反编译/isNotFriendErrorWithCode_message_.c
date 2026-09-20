// isNotFriendErrorWithCode:message: @ 00f7ffc4

/* Function Stack Size: 0x20 bytes */

bool WCRefineFriendRelationStore::isNotFriendErrorWithCode_message_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  ulong local_108;
  int local_fc;
  ulong local_f8;
  long_long local_f0;
  SEL local_e8;
  ID local_e0;
  byte local_d1;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_3;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f8,param_4);
  if (local_f0 - 0x10010401 == 0) {
    local_d1 = 1;
    local_fc = 1;
  }
  else {
    uVar1 = local_f8;
    FUN_00f7e630(local_f0 - 0x10010401);
    _objc_retainAutoreleasedReturnValue();
    local_108 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_d1 = 0;
      local_fc = 1;
    }
    else {
      local_50 = &cf_N_f6e>ke_YS;
      local_48 = &cf__emR_O_N_YS;
      local_40 = &cf_N_f_Ov_YS;
      local_38 = &cf_N_f_YS;
      local_30 = &cf___YS;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar2;
      _memset(auStack_158,0,0x40);
      puVar2 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_d0,0x10)
      ;
      if (local_178 != (undefined *)0x0) {
        lVar3 = *local_148;
        local_180 = (undefined *)0x0;
        do {
          do {
            if (*local_148 - lVar3 != 0) {
              _objc_enumerationMutation(*local_148 - lVar3,puVar2);
            }
            local_118 = *(undefined8 *)(local_150 + (long)local_180 * 8);
            uVar1 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_containsString__0269d0b0,local_118);
            if ((uVar1 & 1) != 0) {
              local_d1 = 1;
              local_fc = 1;
              goto LAB_00f80250;
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_d0,
                     0x10);
          local_180 = (undefined *)0x0;
        } while (local_178 != (undefined *)0x0);
      }
      local_fc = 0;
LAB_00f80250:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_fc == 0) {
        local_d1 = 0;
        local_fc = 1;
      }
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

