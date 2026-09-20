// FUN_00edc218 @ 00edc218

void FUN_00edc218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  undefined *local_130;
  undefined4 local_124;
  long local_120;
  undefined8 local_118;
  ulong local_110;
  ulong local_108;
  long local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  local_100 = param_1;
  _objc_storeStrong(&local_108);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_3);
  uVar1 = local_110;
  local_120 = param_1;
  local_118 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
  if (uVar1 < 2) {
    local_124 = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if ((lVar2 == 0) ||
       (uVar1 = local_108,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_108,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20)),
       (uVar1 & 1) == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar3;
      _memset(auStack_178,0,0x40);
      uVar1 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
      if (local_1b0 != 0) {
        lVar2 = *local_168;
        local_1b8 = 0;
        do {
          do {
            if (*local_168 - lVar2 != 0) {
              _objc_enumerationMutation(*local_168 - lVar2,uVar1);
            }
            puVar3 = local_130;
            local_138 = *(undefined8 *)(local_170 + local_1b8 * 8);
            uVar4 = *(undefined8 *)(param_1 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_displayNameForRoom__0269ece0,local_138);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_1b8 = 0;
        } while (local_1b0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_108;
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      local_f8 = &cf_user;
      local_d0 = local_108;
      local_f0 = &cf_name;
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_displayNameForUser_inRoom__0269ecd0,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = &cf_rooms;
      uVar1 = local_110;
      local_c8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_copy_0269d150);
      local_e0 = &cf_roomNames;
      puVar3 = local_130;
      local_c0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
      local_d8 = &cf_roomSizes;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      local_b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_copy_0269d150);
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      _objc_storeStrong(&local_130,0);
      local_124 = 0;
    }
    else {
      local_124 = 1;
    }
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

