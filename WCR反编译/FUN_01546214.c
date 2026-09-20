// FUN_01546214 @ 01546214

void FUN_01546214(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1e8;
  byte local_1b4;
  undefined *local_198;
  undefined *local_190;
  undefined *local_140;
  undefined1 local_132;
  byte local_131;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  byte local_c5;
  undefined4 local_c4;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_b0 = (undefined *)0x0;
    local_c4 = 1;
  }
  else {
    local_c5 = 0;
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_b0 = local_c0;
    if (((ulong)puVar2 & 1) == 0) {
      local_b0 = (undefined *)0x0;
      local_c4 = 1;
    }
    else if ((local_c5 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_d8 = (undefined *)0x0;
      local_e0 = (undefined *)0x0;
      _memset(auStack_128,0,0x40);
      puVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_190 != (undefined *)0x0) {
        lVar4 = *local_118;
        local_198 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,puVar1);
            }
            uVar5 = *(ulong *)(local_120 + (long)local_198 * 8);
            local_e8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isEqualToString__0269ccc8,&cf_png)
            ;
            local_1b4 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
              local_1b4 = 1;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
                local_1b4 = 1;
                if ((uVar3 & 1) == 0) {
                  uVar3 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_isEqualToString__0269ccc8,&cf_gif);
                  local_1b4 = 1;
                  if ((uVar3 & 1) == 0) {
                    uVar3 = local_130;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_130,PTR_s_isEqualToString__0269ccc8,&cf_webp);
                    local_1b4 = 1;
                    if ((uVar3 & 1) == 0) {
                      uVar3 = local_130;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_130,PTR_s_isEqualToString__0269ccc8,&cf_bmp);
                      local_1b4 = (byte)uVar3;
                    }
                  }
                }
              }
            }
            local_131 = local_1b4 & 1;
            uVar3 = local_130;
            FUN_01548960();
            local_132 = (undefined1)uVar3;
            if (((local_131 & 1) == 0) && ((uVar3 & 1) == 0)) {
              local_c4 = 3;
            }
            else {
              puVar2 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_e8;
              local_140 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if ((uVar5 & 1) == 0) {
                if (local_d8 == (undefined *)0x0) {
                  _objc_storeStrong(&local_d8,local_140);
                }
              }
              else if (local_e0 == (undefined *)0x0) {
                _objc_storeStrong(&local_e0,local_140);
              }
              _objc_storeStrong(&local_140,0);
              local_c4 = 0;
            }
            _objc_storeStrong(&local_130,0);
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_198 = (undefined *)0x0;
        } while (local_190 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((local_b1 & 1) == 0) ||
         (puVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
         puVar1 = local_e0, puVar2 == (undefined *)0x0)) {
        if (local_d8 == (undefined *)0x0) {
          local_1e8 = local_e0;
        }
        else {
          local_1e8 = local_d8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_1e8;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar1;
      }
      local_c4 = 1;
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

