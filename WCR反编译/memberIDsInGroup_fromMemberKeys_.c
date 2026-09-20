// memberIDsInGroup:fromMemberKeys: @ 009bba50

/* Function Stack Size: 0x20 bytes */

ID WCRefineAIStore::memberIDsInGroup_fromMemberKeys_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  ulong local_e8;
  undefined4 local_dc;
  ulong local_d8;
  undefined8 local_d0;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar1 = local_c8;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_d8,
     (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar1 & 1) == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar2;
  }
  else {
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sanitizedUserNames__026aad80,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar4 = *local_128;
      local_178 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,IVar3);
          }
          uVar5 = *(ulong *)(local_130 + local_178 * 8);
          local_f8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasPrefix__0269d320,local_e8);
          uVar1 = local_f8;
          if ((uVar5 & 1) != 0) {
            uVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,uVar5);
            _objc_retainAutoreleasedReturnValue();
            local_140 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
            if (uVar1 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_140);
            }
            _objc_storeStrong(&local_140,0);
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    local_dc = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

