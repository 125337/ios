// FUN_01092608 @ 01092608

void FUN_01092608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_198;
  undefined *local_190;
  undefined *local_168;
  undefined *local_138;
  ulong local_130;
  byte local_121;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  int local_c4;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = param_3;
  if (((param_3 < 4) &&
      (uVar6 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
      uVar6 != 0)) && (local_b8 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_168 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_168;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_118,0,0x40);
    puVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar5 = *local_108;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,puVar1);
          }
          uVar6 = *(ulong *)(local_110 + (long)local_198 * 8);
          local_d8 = uVar6;
          FUN_0107d2f4();
          if ((uVar6 & 1) == 0) {
            uVar6 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
            _objc_retainAutoreleasedReturnValue();
            local_121 = 0;
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_120 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (((ulong)puVar3 & 1) == 0) {
              local_c4 = 3;
            }
            else {
              if ((local_121 & 1) == 0) {
                uVar6 = local_120;
                FUN_01092c58();
                if ((uVar6 & 1) != 0) {
                  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_138 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  puVar2 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_unsignedLongLongValue_0269d6b8);
                  if (puVar2 < (undefined *)0x2000001) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_b8,PTR_s_addObject__0269d180,local_120);
                    local_c4 = 0;
                  }
                  else {
                    local_c4 = 3;
                  }
                  _objc_storeStrong(&local_138,0);
                  goto joined_r0x01092b50;
                }
              }
              else {
                uVar6 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                local_130 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8,&cf_msg)
                ;
                if (((((uVar6 & 1) == 0) &&
                     (uVar6 = local_130,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_130,PTR_s_isEqualToString__0269ccc8,&cf_audio),
                     (uVar6 & 1) == 0)) &&
                    ((uVar6 = local_130,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_130,PTR_s_isEqualToString__0269ccc8,&cf_img), (uVar6 & 1) == 0
                     && ((uVar6 = local_130,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_130,PTR_s_isEqualToString__0269ccc8,&cf_video),
                         (uVar6 & 1) == 0 &&
                         (uVar6 = local_130,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_130,PTR_s_isEqualToString__0269ccc8,&cf_openlive),
                         (uVar6 & 1) == 0)))))) &&
                   (uVar6 = local_130,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_130,PTR_s_hasPrefix__0269d320,&cf_wxanew), (uVar6 & 1) == 0)) {
                  FUN_01092608(local_120,local_b8,local_c0 + 1);
                  local_c4 = 0;
                }
                else {
                  local_c4 = 3;
                }
                _objc_storeStrong(&local_130,0);
joined_r0x01092b50:
                if (local_c4 != 0) goto LAB_01092b68;
              }
              local_c4 = 0;
            }
LAB_01092b68:
            _objc_storeStrong(&local_120,0);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  else {
    local_c4 = 1;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

