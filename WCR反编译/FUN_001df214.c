// FUN_001df214 @ 001df214

void FUN_001df214(double param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined *local_298;
  undefined *local_290;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined1 local_171;
  undefined *local_170;
  ulong local_168;
  undefined *local_160 [3];
  undefined *local_148;
  undefined4 local_140;
  byte local_139;
  long local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  local_139 = param_3;
  if (local_138 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = 1;
    local_130 = puVar2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    lVar4 = local_138;
    local_148 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_160[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    local_168 = 0;
    while (puVar2 = local_160[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_count_0269cfe0),
          local_130 = local_148, puVar2 != (undefined *)0x0 && local_168 < 0x50) {
      puVar2 = local_160[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_removeObjectAtIndex__0269d530,0);
      local_168 = local_168 + 1;
      puVar2 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_isHidden_026ca768);
      bVar1 = true;
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_alpha_026ca4d8);
        bVar1 = param_1 <= DAT_02323cd0;
      }
      local_171 = bVar1;
      if (((bool)local_171 == false) || ((local_139 & 1) != 0)) {
        puVar2 = local_170;
        FUN_001d2ddc();
        if ((((ulong)puVar2 & 1) == 0) &&
           (puVar2 = local_170, FUN_001da12c(local_170,local_138), ((ulong)puVar2 & 1) == 0)) {
          puVar2 = local_170;
          FUN_001de258(local_170,local_138);
          if ((((ulong)puVar2 & 1) != 0) &&
             (puVar2 = local_170, FUN_001dfa0c(), ((ulong)puVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_170);
          }
          _memset(auStack_208,0,0x40);
          puVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_2e8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_2e8 != (undefined *)0x0) {
            lVar4 = *local_1f8;
            local_2f0 = (undefined *)0x0;
            do {
              do {
                if (*local_1f8 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_1f8 - lVar4,puVar2);
                }
                local_1c8 = *(undefined8 *)(local_200 + (long)local_2f0 * 8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160[0],PTR_s_addObject__0269d180,local_1c8);
                local_2f0 = local_2f0 + 1;
              } while (local_2f0 < local_2e8);
              local_2e8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                         auStack_128,0x10);
              local_2f0 = (undefined *)0x0;
            } while (local_2e8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_140 = 0;
        }
        else {
          local_140 = 2;
        }
      }
      else {
        _memset(auStack_1c0,0,0x40);
        puVar2 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_290 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_290 != (undefined *)0x0) {
          lVar4 = *local_1b0;
          local_298 = (undefined *)0x0;
          do {
            do {
              if (*local_1b0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1b0 - lVar4,puVar2);
              }
              local_180 = *(undefined8 *)(local_1b8 + (long)local_298 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160[0],PTR_s_addObject__0269d180,local_180);
              local_298 = local_298 + 1;
            } while (local_298 < local_290);
            local_290 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8
                       ,0x10);
            local_298 = (undefined *)0x0;
          } while (local_290 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_140 = 2;
      }
      _objc_storeStrong(&local_170,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = 1;
    _objc_storeStrong(local_160);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

