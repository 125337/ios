// autoDownloadGroupOnlySessionsFromArray: @ 01a56828

/* Function Stack Size: 0x18 bytes */

ID WCRefineGeneralFunctionViewController::autoDownloadGroupOnlySessionsFromArray_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar3 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_160 * 8);
          local_e0 = uVar4;
          FUN_01a08fe8();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
          if (uVar4 == 0) {
            local_cc = 3;
          }
          else {
            uVar4 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasSuffix__0269d018,&cf__chatroom);
            if (((uVar4 & 1) != 0) ||
               (uVar4 = local_130,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_130,PTR_s_hasSuffix__0269d018,&cf__im_chatroom), (uVar4 & 1) != 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
            }
            _objc_storeStrong(&local_130,0);
            local_cc = 0;
          }
          _objc_storeStrong(&local_128,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_cc = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

