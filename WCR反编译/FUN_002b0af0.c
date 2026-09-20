// FUN_002b0af0 @ 002b0af0

void FUN_002b0af0(double param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_290;
  undefined *local_230;
  undefined *local_228;
  undefined *local_200;
  cfstringStruct *local_198;
  long local_178;
  ulong local_170;
  byte local_161;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  int local_f4;
  ulong local_f0;
  double local_e8;
  byte local_d9;
  cfstringStruct *local_d8 [3];
  cfstringStruct *local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_floatingTabBarBackgroundMediaFol_026a1a50);
  _objc_retainAutoreleasedReturnValue();
  local_198 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_198 = &cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8[0] = local_198;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  uVar2 = local_b8;
  FUN_002b13fc();
  local_d9 = (byte)uVar2;
  _CFAbsoluteTimeGetCurrent();
  local_e8 = param_1;
  FUN_002b1a10();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((((DAT_028c95e0 == 0) ||
       (uVar2 = DAT_028c95e0,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028c95e0,PTR_s_isEqualToString__0269ccc8,local_f0),
       local_b0 = DAT_028c95e8, (uVar2 & 1) == 0)) || ((DAT_028c97f1 & 1) != (local_d9 & 1))) ||
     (2.0 <= local_e8 - DAT_028c97f8)) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_200 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_200;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_108 = 0;
    local_110 = 0;
    _memset(auStack_158,0,0x40);
    puVar4 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_228 != (undefined *)0x0) {
      lVar7 = *local_148;
      local_230 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,puVar4);
          }
          lVar8 = *(long *)(local_150 + (long)local_230 * 8);
          local_118 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar8;
          FUN_002b1d4c();
          _objc_retainAutoreleasedReturnValue();
          local_160 = lVar6;
          (*(code *)PTR__objc_release_02578630)(lVar8);
          lVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
          if (lVar6 == 0) {
            local_f4 = 3;
          }
          else {
            lVar6 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_containsString__0269d0b0,&cf__dark);
            local_161 = (byte)lVar6;
            uVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_118);
            _objc_retainAutoreleasedReturnValue();
            local_170 = uVar2;
            if ((local_d9 & 1) == (local_161 & 1)) {
              _objc_storeStrong(0,&local_110,uVar2);
              local_f4 = 2;
            }
            else {
              if (local_108 == 0) {
                _objc_storeStrong(&local_108,uVar2);
              }
              local_f4 = 0;
            }
            _objc_storeStrong(&local_170,0);
          }
          _objc_storeStrong(&local_160,0);
          if ((local_f4 != 0) && (local_f4 != 3)) goto LAB_002b1188;
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_230 = (undefined *)0x0;
      } while (local_228 != (undefined *)0x0);
    }
    local_f4 = 0;
LAB_002b1188:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_110 == 0) {
      local_290 = &local_108;
    }
    else {
      local_290 = &local_110;
    }
    lVar7 = *local_290;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_f0;
    local_178 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    uVar2 = DAT_028c95e0;
    DAT_028c95e0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    DAT_028c97f1 = local_d9 & 1;
    lVar6 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_copy_0269d150);
    lVar7 = DAT_028c95e8;
    DAT_028c95e8 = lVar6;
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar7 = local_178;
    DAT_028c97f8 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar7;
    local_f4 = 1;
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f4 = 1;
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(local_d8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

