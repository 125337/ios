// FUN_01090784 @ 01090784

void FUN_01090784(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_188;
  undefined *local_180;
  undefined *local_158;
  ulong local_128;
  byte local_119;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  int local_bc;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_bc = param_3;
  if ((param_3 < 5) &&
     (lVar6 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
     lVar6 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_158 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_158;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_110,0,0x40);
    puVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar6 = *local_100;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar6 != 0) {
            _objc_enumerationMutation(*local_100 - lVar6,puVar1);
          }
          uVar7 = *(ulong *)(local_108 + (long)local_188 * 8);
          local_d0 = uVar7;
          FUN_0107d2f4();
          if ((uVar7 & 1) == 0) {
            lVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_stringByAppendingPathComponent__026cab30,local_d0);
            _objc_retainAutoreleasedReturnValue();
            local_119 = 0;
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_118 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (((ulong)puVar4 & 1) == 0) {
              local_c0 = 3;
            }
            else if ((local_119 & 1) == 0) {
              uVar7 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_128 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar7);
              uVar7 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_isEqualToString__0269ccc8,&cf_txt);
              if (((((uVar7 & 1) != 0) ||
                   (uVar7 = local_128,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_128,PTR_s_isEqualToString__0269ccc8,&cf_text), (uVar7 & 1) != 0)
                   ) || (uVar7 = local_128,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_128,PTR_s_isEqualToString__0269ccc8,&cf_csv),
                        (uVar7 & 1) != 0)) &&
                 (uVar7 = local_b8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_b8,PTR_s_containsObject__0269cbb8,local_118), (uVar7 & 1) == 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_118);
              }
              _objc_storeStrong(&local_128,0);
              local_c0 = 0;
            }
            else {
              FUN_01090784(local_118,local_b8,local_bc + 1);
              local_c0 = 3;
            }
            _objc_storeStrong(&local_118,0);
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_c8,0);
    local_c0 = 0;
  }
  else {
    local_c0 = 1;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

