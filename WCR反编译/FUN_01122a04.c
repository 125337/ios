// FUN_01122a04 @ 01122a04

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_01122a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint local_224;
  ulong local_208;
  ulong local_200;
  ulong local_1b0;
  ulong local_1a0;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined *local_108;
  bool local_f9;
  ulong local_f8;
  ulong local_f0;
  int local_e8;
  bool local_e1;
  ulong local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_e1 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_1a0 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_1a0 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1a0;
  }
  local_e1 = !bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setWithArray__0269d9a0,local_1a0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar5;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar5 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (puVar5 == (undefined *)0x0) {
    local_a9 = 0;
    local_e8 = 1;
  }
  else {
    uVar2 = local_c0;
    FUN_01124ca8(local_c0,local_c8,local_d8,local_d0);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayNames);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_f9 = false;
      bVar1 = (uVar4 & 1) == 0;
      if (bVar1) {
        local_1b0 = *(ulong *)PTR____NSDictionary0___02578288;
      }
      else {
        local_1b0 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayNames);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_1b0;
      }
      local_f9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_1b0;
      if ((local_f9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar6 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subtitle_026af150);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar5;
      (*(code *)PTR__objc_release_02578630)(uVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _memset(auStack_150,0,0x40);
      uVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      local_200 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_200 != 0) {
        lVar11 = *local_140;
        local_208 = 0;
        do {
          do {
            if (*local_140 - lVar11 != 0) {
              _objc_enumerationMutation(*local_140 - lVar11,uVar2);
            }
            lVar12 = *(long *)(local_148 + local_208 * 8);
            local_110 = lVar12;
            FUN_0110d24c();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar12;
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar5 = local_108;
            local_224 = 0;
            if (lVar10 != 0) {
              lVar10 = local_110;
              FUN_0110d24c();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_containsString__0269d0b0);
              local_224 = (uint)puVar5;
              (*(code *)PTR__objc_release_02578630)(lVar10);
            }
            (*(code *)PTR__objc_release_02578630)(lVar12);
            if ((local_224 & 1) != 0) {
              local_a9 = 1;
              local_e8 = 1;
              goto LAB_011230a0;
            }
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_208 = 0;
        } while (local_200 != 0);
      }
      local_e8 = 0;
LAB_011230a0:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_e8 == 0) {
        local_a9 = 0;
        local_e8 = 1;
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_f0,0);
    }
    else {
      local_a9 = 1;
      local_e8 = 1;
    }
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

