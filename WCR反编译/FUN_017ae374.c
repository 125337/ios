// FUN_017ae374 @ 017ae374

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_017ae374(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint local_268;
  undefined *local_220;
  undefined *local_218;
  uint local_1a8;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8;
  byte local_e9;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  uint local_c8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar6 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar6 & 1) == 0) {
    local_a9 = 0;
    local_c8 = 1;
  }
  else {
    uVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar6;
    _NSHomeDirectory();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    uVar3 = local_d0;
    local_e0 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,uVar6);
    uVar6 = local_d0;
    local_1a8 = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasPrefix__0269d320);
      local_1a8 = (uint)uVar6;
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_1a8 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_f8;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         (puVar2 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0),
         puVar2 == (undefined *)0x0)) {
        local_a9 = 0;
        local_c8 = 1;
      }
      else {
        _memset(auStack_140,0,0x40);
        puVar2 = local_f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_218 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        if (local_218 != (undefined *)0x0) {
          lVar5 = *local_130;
          local_220 = (undefined *)0x0;
          do {
            do {
              if (*local_130 - lVar5 != 0) {
                _objc_enumerationMutation(*local_130 - lVar5,puVar2);
              }
              uVar6 = *(ulong *)(local_138 + (long)local_220 * 8);
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_100 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = local_100,
                 (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0), uVar6 != 0)
                 ) {
                uVar6 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_d0;
                local_148 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0,PTR_s_isEqualToString__0269ccc8,uVar6);
                uVar6 = local_d0;
                local_268 = 1;
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_stringByAppendingString__0269d398,&cf__);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasPrefix__0269d320);
                  local_268 = (uint)uVar6;
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                }
                bVar1 = (local_268 & 1) != 0;
                if (bVar1) {
                  local_a9 = 1;
                }
                local_c8 = (uint)bVar1;
                _objc_storeStrong(&local_148,0);
                if (local_c8 != 0) goto LAB_017aebd8;
              }
              local_220 = local_220 + 1;
            } while (local_220 < local_218);
            local_218 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_220 = (undefined *)0x0;
          } while (local_218 != (undefined *)0x0);
        }
        local_c8 = 0;
LAB_017aebd8:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_c8 == 0) {
          local_a9 = 0;
          local_c8 = 1;
        }
      }
      _objc_storeStrong(&local_f8,0);
    }
    else {
      local_a9 = 1;
      local_c8 = 1;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

