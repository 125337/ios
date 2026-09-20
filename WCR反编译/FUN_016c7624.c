// FUN_016c7624 @ 016c7624

long FUN_016c7624(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_2a0;
  ulong local_298;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  long local_138;
  undefined *local_130;
  ulong local_128;
  ulong local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [3];
  ulong local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar2 = local_b8;
  local_d8 = param_5;
  local_d0 = param_4;
  local_c8 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar7;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_e0;
  FUN_016bdfb0();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_zip);
    if ((uVar2 & 1) == 0) {
      local_b0 = 0;
      local_114 = 1;
    }
    else {
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_wcr_font_zip___);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_120 = uVar7;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_stringByAppendingPathComponent__026cab30,&cf_extracted);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_128 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_120,1,0);
      local_138 = 0;
      uVar2 = local_b8;
      FUN_016c8d60(local_b8,local_128);
      if ((uVar2 & 1) != 0) {
        _memset(auStack_180,0,0x40);
        uVar2 = local_128;
        FUN_016c9208();
        _objc_retainAutoreleasedReturnValue();
        local_298 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_298 != 0) {
          lVar6 = *local_170;
          local_2a0 = 0;
          do {
            do {
              if (*local_170 - lVar6 != 0) {
                _objc_enumerationMutation(*local_170 - lVar6,uVar2);
              }
              uVar7 = *(ulong *)(local_178 + local_2a0 * 8);
              local_188 = 0;
              local_190 = 0;
              local_198 = 0;
              local_1a0 = 0;
              local_140 = uVar7;
              FUN_016c865c(uVar7,0,&local_198,&local_1a0);
              _objc_storeStrong(&local_188,local_198);
              _objc_storeStrong(&local_190,local_1a0);
              uVar1 = local_188;
              if ((uVar7 & 1) != 0) {
                local_138 = local_138 + 1;
                if (local_c8 != (undefined8 *)0x0) {
                  _objc_retainAutorelease();
                  *local_c8 = uVar1;
                }
                uVar1 = local_190;
                if (local_d0 != (undefined8 *)0x0) {
                  _objc_retainAutorelease();
                  *local_d0 = uVar1;
                }
              }
              _objc_storeStrong(&local_190);
              _objc_storeStrong(&local_188,0);
              local_2a0 = local_2a0 + 1;
            } while (local_2a0 < local_298);
            local_298 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                       0x10);
            local_2a0 = 0;
          } while (local_298 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_removeItemAtPath_error__0269f910,local_120,0);
      local_b0 = local_138;
      local_114 = 1;
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
    }
  }
  else {
    local_f8[0] = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    uVar2 = local_b8;
    FUN_016c865c(local_b8,local_c0,&local_108,&local_110,local_d8);
    _objc_storeStrong(local_f8,local_108);
    _objc_storeStrong(&local_100,local_110);
    uVar1 = local_f8[0];
    if ((uVar2 & 1) == 0) {
      local_b0 = 0;
    }
    else {
      if (local_c8 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_c8 = uVar1;
      }
      uVar1 = local_100;
      if (local_d0 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_d0 = uVar1;
      }
      local_b0 = 1;
    }
    local_114 = 1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

