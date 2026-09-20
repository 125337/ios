// FUN_001e0964 @ 001e0964

void FUN_001e0964(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong local_288;
  ulong local_280;
  undefined *local_1c8;
  ulong local_1c0;
  undefined *local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  ulong local_140;
  byte local_131;
  ulong local_130;
  int local_128;
  ulong local_118;
  undefined8 local_110;
  long local_108;
  ulong local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [128];
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  _objc_storeStrong(&local_100,param_1);
  local_110 = 0;
  local_108 = param_2;
  _objc_storeStrong(&local_110,param_3);
  uVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  local_118 = uVar3;
  if (uVar3 == 0) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = 1;
    local_f8 = puVar4;
  }
  else {
    local_131 = 0;
    bVar2 = false;
    if ((local_108 == 5) && (bVar2 = false, 1 < uVar3)) {
      uVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_131 = 1;
      local_130 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = uVar3 == 3;
    }
    if ((local_131 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    if (bVar2) {
      uVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_100;
      local_38 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_128 = 1;
    }
    else if (((local_108 == 7) || (local_108 == 8)) && (2 < local_118)) {
      local_e8 = 0;
      local_f0 = 2;
      local_e0 = 0;
      local_d8 = 2;
      local_150 = 0;
      local_148 = 2;
      uVar3 = local_100;
      FUN_001e2be0(local_100,0,2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_100;
      local_140 = uVar3;
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_objectAtIndexedSubscript__0269cc78,2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_40 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_128 = 1;
      _objc_storeStrong(&local_140,0);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar4;
      _memset(auStack_1a0,0,0x40);
      uVar3 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_c8,0x10);
      if (local_280 != 0) {
        lVar6 = *local_190;
        local_288 = 0;
        do {
          do {
            if (*local_190 - lVar6 != 0) {
              _objc_enumerationMutation(*local_190 - lVar6,uVar3);
            }
            local_160 = *(undefined8 *)(local_198 + local_288 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_addObjectsFromArray__0269d540,local_160);
            local_288 = local_288 + 1;
          } while (local_288 < local_280);
          local_280 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_c8,
                     0x10);
          local_288 = 0;
        } while (local_280 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar4 = local_158;
      FUN_001e2ea4(local_158,local_110);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = 0;
        local_1a8 = puVar4;
        while (puVar1 = local_1a8, puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088,
              local_1b0 < local_118) {
          uVar3 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_objectAtIndexedSubscript__0269cc78,local_1b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithArray__0269eab8);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_1c0 = local_1b0 + 1;
          do {
            if (local_118 <= local_1c0) break;
            puVar4 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_mutableCopy_0269d8a0);
            uVar3 = local_100;
            local_1c8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_objectAtIndexedSubscript__0269cc78,local_1c0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            puVar4 = local_1c8;
            FUN_001e2ea4(local_1c8,local_110);
            if (((ulong)puVar4 & 1) == 0) {
              local_128 = 7;
            }
            else {
              _objc_storeStrong(&local_1b8,local_1c8);
              local_1c0 = local_1c0 + 1;
              local_128 = 0;
            }
            _objc_storeStrong(&local_1c8,0);
          } while (local_128 == 0);
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_addObject__0269d180,local_1b8);
          local_1b0 = local_1c0;
          _objc_storeStrong(&local_1b8,0);
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f8 = puVar1;
        local_128 = 1;
        _objc_storeStrong(&local_1a8,0);
      }
      else {
        local_d0 = local_158;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_d0,1);
        _objc_retainAutoreleasedReturnValue();
        local_128 = 1;
        local_f8 = puVar4;
      }
      _objc_storeStrong(&local_158,0);
    }
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_f8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

