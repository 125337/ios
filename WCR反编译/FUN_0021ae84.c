// FUN_0021ae84 @ 0021ae84

void FUN_0021ae84(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_1f8;
  undefined *local_1f0;
  uint local_1bc;
  uint local_1b8;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  byte local_101;
  undefined *local_100;
  long local_f8;
  ulong local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  long local_c8;
  undefined4 local_c0;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_c0 = 1;
  }
  else {
    FUN_001d3fac();
    if ((uVar1 & 1) == 0) {
      FUN_001da6a8(local_b0);
      pcVar3 = &cf_WCImageView;
      _NSClassFromString();
      pcVar4 = &cf_WCPuzzleImageView;
      local_d0 = pcVar3;
      _NSClassFromString();
      local_d8 = pcVar4;
      FUN_001d1c14();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      lVar6 = local_b0;
      local_e0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithArray__0269eab8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      local_f0 = 0;
      local_f8 = 0;
      while (puVar5 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0)
            , puVar5 != (undefined *)0x0 && local_f0 < 0x50) {
        puVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeObjectAtIndex__0269d530,0);
        local_f0 = local_f0 + 1;
        if (local_d0 == (cfstringStruct *)0x0) {
LAB_0021b184:
          local_1bc = 0;
          if (local_d8 != (cfstringStruct *)0x0) {
            puVar5 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isKindOfClass__0269cd68,local_d8);
            local_1bc = (uint)puVar5;
          }
          local_1b8 = local_1bc;
        }
        else {
          puVar5 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isKindOfClass__0269cd68,local_d0);
          local_1b8 = 1;
          if (((ulong)puVar5 & 1) == 0) goto LAB_0021b184;
        }
        local_101 = (byte)local_1b8 & 1;
        if ((local_1b8 & 1) == 0) {
          if ((((local_e0 == (cfstringStruct *)0x0) ||
               (puVar5 = local_100,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_100,PTR_s_isKindOfClass__0269cd68,local_e0),
               ((ulong)puVar5 & 1) == 0)) ||
              (puVar5 = local_100, FUN_001dfa0c(), ((ulong)puVar5 & 1) == 0)) ||
             (puVar5 = local_100, FUN_001d3428(), ((ulong)puVar5 & 1) == 0)) {
            _memset(auStack_150,0,0x40);
            puVar5 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_1f0 != (undefined *)0x0) {
              lVar6 = *local_140;
              local_1f8 = (undefined *)0x0;
              do {
                do {
                  if (*local_140 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_140 - lVar6,puVar5);
                  }
                  local_110 = *(undefined8 *)(local_148 + (long)local_1f8 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_addObject__0269d180,local_110);
                  local_1f8 = local_1f8 + 1;
                } while (local_1f8 < local_1f0);
                local_1f0 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,
                           auStack_a8,0x10);
                local_1f8 = (undefined *)0x0;
              } while (local_1f0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_c0 = 0;
          }
          else {
            FUN_001d9428(local_100);
            FUN_001d031c(local_100);
            local_f8 = local_f8 + 1;
            local_c0 = 2;
          }
        }
        else {
          FUN_001d0ac4(local_100);
          local_f8 = local_f8 + 1;
          local_c0 = 2;
        }
        _objc_storeStrong(&local_100,0);
      }
      if (local_f8 == 0) {
        FUN_001d0ac4(local_b0);
      }
      _objc_storeStrong(&local_e8,0);
      local_c0 = 0;
    }
    else {
      FUN_001dd0f4(local_b0);
      lVar6 = local_b0;
      FUN_0021b568();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_count_0269cfe0);
      if (lVar6 != 0) {
        FUN_001dd748(lVar6,local_c8,local_b0);
      }
      local_c0 = 1;
      _objc_storeStrong(&local_c8,0);
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

