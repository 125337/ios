// FUN_0011138c @ 0011138c

void FUN_0011138c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *local_4e0;
  undefined *local_4d8;
  cfstringStruct *local_4b8;
  cfstringStruct *local_4a8;
  cfstringStruct *local_498;
  cfstringStruct *local_428;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined *local_398;
  undefined *local_390;
  cfstringStruct *local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2e0;
  uint local_2d8;
  byte local_2d1;
  cfstringStruct *local_2d0;
  byte local_2c1;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  cfstringStruct *local_218 [3];
  undefined *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [128];
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e0,param_1);
  local_1e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e8,param_2);
  local_1f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1f0,param_3);
  local_1f8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1f8,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_1f0;
  local_200 = puVar2;
  FUN_001162bc();
  _objc_retainAutoreleasedReturnValue();
  local_218[0] = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_218[0]);
  }
  _memset(auStack_260,0,0x40);
  local_b8 = &cf_username;
  local_b0 = &cf_from;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_390 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_390 != (undefined *)0x0) {
    lVar5 = *local_250;
    local_398 = (undefined *)0x0;
    do {
      do {
        if (*local_250 - lVar5 != 0) {
          _objc_enumerationMutation(*local_250 - lVar5,puVar2);
        }
        local_220 = *(undefined8 *)(local_258 + (long)local_398 * 8);
        puVar4 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_containsObject__0269cbb8,local_220);
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_220);
        }
        local_398 = local_398 + 1;
      } while (local_398 < local_390);
      local_390 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,0x10)
      ;
      local_398 = (undefined *)0x0;
    } while (local_390 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_2a8,0,0x40);
  puVar2 = local_200;
  (*(code *)PTR__objc_retain_02578638)();
  local_3e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_138,0x10);
  if (local_3e0 != (undefined *)0x0) {
    lVar5 = *local_298;
    local_3e8 = (undefined *)0x0;
    do {
      do {
        if (*local_298 - lVar5 != 0) {
          _objc_enumerationMutation(*local_298 - lVar5,puVar2);
        }
        local_268 = *(undefined8 *)(local_2a0 + (long)local_3e8 * 8);
        pcVar3 = local_1e8;
        FUN_00110854(local_1e8,local_268);
        _objc_retainAutoreleasedReturnValue();
        local_2c1 = 0;
        local_2d1 = 0;
        local_2b0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_428 = &cf___;
        }
        else {
          local_428 = local_2b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_2c1 = 1;
          local_2c0 = local_428;
          FUN_001165dc();
          _objc_retainAutoreleasedReturnValue();
          local_2d1 = 1;
          local_2d0 = local_428;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_2b8 = local_428;
        if ((local_2d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2d0);
        }
        if ((local_2c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2c0);
        }
        pcVar6 = local_2b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_length_0269cca0);
        pcVar3 = local_2b8;
        bVar1 = pcVar6 != (cfstringStruct *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1d8 = pcVar3;
        }
        local_2d8 = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_2b8);
        _objc_storeStrong(&local_2b0,0);
        if (local_2d8 != 0) goto LAB_00111a60;
        local_3e8 = local_3e8 + 1;
      } while (local_3e8 < local_3e0);
      local_3e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_138,0x10
                );
      local_3e8 = (undefined *)0x0;
    } while (local_3e0 != (undefined *)0x0);
  }
  local_2d8 = 0;
LAB_00111a60:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_2d8 == 0) {
    pcVar3 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_containsString__0269d0b0,&cf__O);
    if ((((ulong)pcVar3 & 1) != 0) ||
       (pcVar3 = local_1f8,
       (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_containsString__0269d0b0,&cf__O),
       ((ulong)pcVar3 & 1) != 0)) {
      FUN_0010ef9c();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar3;
      FUN_00116ae8();
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar6 = local_2e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
      pcVar3 = local_2e0;
      bVar1 = pcVar6 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = pcVar3;
      }
      local_2d8 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_2e0,0);
      if (local_2d8 != 0) goto LAB_00111f8c;
    }
    pcVar3 = local_1e8;
    FUN_001158dc(local_1e8,&cf_plain);
    _objc_retainAutoreleasedReturnValue();
    local_2e8 = pcVar3;
    _memset(auStack_330,0,0x40);
    if (local_1f8 == (cfstringStruct *)0x0) {
      local_498 = &cf___;
    }
    else {
      local_498 = local_1f8;
    }
    local_1d0 = local_498;
    if (local_2e8 == (cfstringStruct *)0x0) {
      local_4a8 = &cf___;
    }
    else {
      local_4a8 = local_2e8;
    }
    local_1c8 = local_4a8;
    if (local_1f0 == (cfstringStruct *)0x0) {
      local_4b8 = &cf___;
    }
    else {
      local_4b8 = local_1f0;
    }
    local_1c0 = local_4b8;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1d0,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_4d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_4d8 != (undefined *)0x0) {
      lVar5 = *local_320;
      local_4e0 = (undefined *)0x0;
      do {
        do {
          if (*local_320 - lVar5 != 0) {
            _objc_enumerationMutation(*local_320 - lVar5,puVar2);
          }
          pcVar6 = *(cfstringStruct **)(local_328 + (long)local_4e0 * 8);
          local_2f0 = pcVar6;
          FUN_00116ee4();
          _objc_retainAutoreleasedReturnValue();
          local_338 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
          pcVar3 = local_338;
          bVar1 = pcVar6 != (cfstringStruct *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1d8 = pcVar3;
          }
          local_2d8 = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_338,0);
          if (local_2d8 != 0) goto LAB_00111f0c;
          local_4e0 = local_4e0 + 1;
        } while (local_4e0 < local_4d8);
        local_4d8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_1b8,
                   0x10);
        local_4e0 = (undefined *)0x0;
      } while (local_4d8 != (undefined *)0x0);
    }
    local_2d8 = 0;
LAB_00111f0c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_2d8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = &cf___;
      local_2d8 = 1;
    }
    _objc_storeStrong(&local_2e8,0);
  }
LAB_00111f8c:
  _objc_storeStrong(local_218);
  _objc_storeStrong(&local_200,0);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

