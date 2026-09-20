// FUN_00eeb044 @ 00eeb044

void FUN_00eeb044(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_1a0;
  ulong local_198;
  ulong local_168;
  long local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  ulong local_f8;
  ulong local_f0;
  byte local_e1;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c4;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_00eeb5a8();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    local_b0 = puVar2;
  }
  else {
    FUN_00eeae68();
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    local_d0 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       (uVar1 & 1) == 0)) {
      local_168 = 0;
    }
    else {
      local_168 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getContactByName__0269d178,local_c0);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_168;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_168;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    uVar1 = local_d8;
    FUN_00eeb684(local_d8,&cf_m_nsChatRoomMemList);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar1;
    FUN_00eeb5a8();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_c4 = 1;
      local_b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_100 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar3;
      _memset(auStack_150,0,0x40);
      uVar1 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_108);
      _objc_retainAutoreleasedReturnValue();
      local_198 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_198 != 0) {
        lVar5 = *local_140;
        local_1a0 = 0;
        do {
          do {
            if (*local_140 - lVar5 != 0) {
              _objc_enumerationMutation(*local_140 - lVar5,uVar1);
            }
            lVar6 = *(long *)(local_148 + local_1a0 * 8);
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            local_110 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar6;
            FUN_00eeb5a8();
            _objc_retainAutoreleasedReturnValue();
            local_158 = lVar4;
            (*(code *)PTR__objc_release_02578630)(lVar6);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            lVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
            if ((lVar4 != 0) &&
               (puVar2 = local_100,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_100,PTR_s_containsObject__0269cbb8,local_158),
               ((ulong)puVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_158);
            }
            _objc_storeStrong(&local_158,0);
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1a0 = 0;
        } while (local_198 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_copy_0269d150);
      local_c4 = 1;
      local_b0 = puVar2;
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

