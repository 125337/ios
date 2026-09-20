// FUN_0021b5ec @ 0021b5ec

void FUN_0021b5ec(double param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_330;
  undefined *local_328;
  uint local_2f4;
  uint local_2f0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  byte local_1d9;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined1 local_189;
  undefined *local_188;
  ulong local_180;
  undefined *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_148;
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
    pcVar3 = &cf_WCImageView;
    _NSClassFromString();
    pcVar4 = &cf_WCPuzzleImageView;
    local_148 = pcVar3;
    _NSClassFromString();
    local_160 = pcVar4;
    FUN_001d1c14();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_168 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    lVar6 = local_138;
    local_170 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    local_180 = 0;
    while (puVar2 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0)
          , local_130 = local_170, puVar2 != (undefined *)0x0 && local_180 < 0x50) {
      puVar2 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_removeObjectAtIndex__0269d530,0);
      local_180 = local_180 + 1;
      puVar2 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isHidden_026ca768);
      bVar1 = true;
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_alpha_026ca4d8);
        bVar1 = param_1 <= DAT_02323cd0;
      }
      local_189 = bVar1;
      if (((bool)local_189 == false) || ((local_139 & 1) != 0)) {
        if (local_148 == (cfstringStruct *)0x0) {
LAB_0021bb0c:
          local_2f4 = 0;
          if (local_160 != (cfstringStruct *)0x0) {
            puVar2 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_160)
            ;
            local_2f4 = (uint)puVar2;
          }
          local_2f0 = local_2f4;
        }
        else {
          puVar2 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,local_148);
          local_2f0 = 1;
          if (((ulong)puVar2 & 1) == 0) goto LAB_0021bb0c;
        }
        local_1d9 = (byte)local_2f0 & 1;
        if (((local_2f0 & 1) == 0) || (puVar2 = local_188, FUN_001dfa0c(), ((ulong)puVar2 & 1) == 0)
           ) {
          if ((local_168 == (cfstringStruct *)0x0) ||
             (((puVar2 = local_188,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_188,PTR_s_isKindOfClass__0269cd68,local_168),
               ((ulong)puVar2 & 1) == 0 ||
               (puVar2 = local_188, FUN_001dfa0c(), ((ulong)puVar2 & 1) == 0)) ||
              (puVar2 = local_188, FUN_001d3428(), ((ulong)puVar2 & 1) == 0)))) {
            _memset(auStack_228,0,0x40);
            puVar2 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_328 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_328 != (undefined *)0x0) {
              lVar6 = *local_218;
              local_330 = (undefined *)0x0;
              do {
                do {
                  if (*local_218 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_218 - lVar6,puVar2);
                  }
                  local_1e8 = *(undefined8 *)(local_220 + (long)local_330 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_addObject__0269d180,local_1e8);
                  local_330 = local_330 + 1;
                } while (local_330 < local_328);
                local_328 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                           auStack_128,0x10);
                local_330 = (undefined *)0x0;
              } while (local_328 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_140 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_188);
            local_140 = 2;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_188);
          local_140 = 2;
        }
      }
      else {
        _memset(auStack_1d8,0,0x40);
        puVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2c0 != (undefined *)0x0) {
          lVar6 = *local_1c8;
          local_2c8 = (undefined *)0x0;
          do {
            do {
              if (*local_1c8 - lVar6 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar6,puVar2);
              }
              local_198 = *(undefined8 *)(local_1d0 + (long)local_2c8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addObject__0269d180,local_198);
              local_2c8 = local_2c8 + 1;
            } while (local_2c8 < local_2c0);
            local_2c0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8
                       ,0x10);
            local_2c8 = (undefined *)0x0;
          } while (local_2c0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_140 = 2;
      }
      _objc_storeStrong(&local_188,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = 1;
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

