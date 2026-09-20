// copyVideoToPermanentLocation: @ 010b24a8

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsDraftManager::copyVideoToPermanentLocation_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined8 local_198;
  undefined1 local_189;
  undefined8 local_188;
  ID local_180;
  undefined *local_178;
  ulong local_170;
  undefined *local_168;
  ID local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined8 local_108;
  undefined *local_100;
  long local_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  uint local_d8;
  undefined1 local_d1;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d1 = 0;
  bVar2 = true;
  uVar1 = local_c8 != 0;
  if ((bool)uVar1) {
    uVar7 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_draftItemVideoPath_026ae5f8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar7 == 0;
    local_d1 = uVar1;
    local_d0 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    uVar1 = local_d1;
  }
  local_d1 = uVar1;
  if (bVar2) {
    local_a9 = 0;
    local_d8 = 1;
    goto LAB_010b2be8;
  }
  uVar7 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_draftItemVideoPath_026ae5f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_e0 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileExistsAtPath__026ca630,local_e0);
  if (((ulong)puVar3 & 1) == 0) {
    uVar7 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_e8;
    local_f0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_fileExistsAtPath__026ca630,uVar7);
    if (((ulong)puVar3 & 1) != 0) {
      local_f8 = 0;
      local_108 = 0;
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_f0,&local_108);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_f8,local_108);
      local_100 = puVar3;
      if ((local_f8 == 0) && (puVar3 != (undefined *)0x0)) {
        _memset(auStack_150,0,0x40);
        puVar3 = local_100;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        if (local_1d0 != (undefined *)0x0) {
          lVar6 = *local_140;
          local_1d8 = (undefined *)0x0;
          do {
            do {
              if (*local_140 - lVar6 != 0) {
                _objc_enumerationMutation(*local_140 - lVar6,puVar3);
              }
              uVar7 = *(ulong *)(local_148 + (long)local_1d8 * 8);
              local_110 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_containsString__0269d0b0,&cf__mp4);
              if (((uVar7 & 1) != 0) ||
                 (uVar7 = local_110,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_110,PTR_s_containsString__0269d0b0,&cf__mov), (uVar7 & 1) != 0)) {
                uVar7 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_110);
                _objc_retainAutoreleasedReturnValue();
                local_158 = uVar7;
                _objc_storeStrong(&local_e0,uVar7);
                local_d8 = 2;
                _objc_storeStrong(&local_158,0);
                goto LAB_010b2890;
              }
              local_1d8 = local_1d8 + 1;
            } while (local_1d8 < local_1d0);
            local_1d0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8
                       ,0x10);
            local_1d8 = (undefined *)0x0;
          } while (local_1d0 != (undefined *)0x0);
        }
        local_d8 = 0;
LAB_010b2890:
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
    puVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_fileExistsAtPath__026ca630,local_e0);
    bVar2 = ((ulong)puVar3 & 1) == 0;
    if (bVar2) {
      local_a9 = 0;
    }
    local_d8 = (uint)bVar2;
    _objc_storeStrong(&local_f0,0);
    if (local_d8 == 0) goto LAB_010b293c;
  }
  else {
LAB_010b293c:
    IVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_permanentVideoDirectory_026ae5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = local_e0;
    local_160 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_hasPrefix__0269d320,IVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((uVar7 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar7 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_170 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_draft______);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_160;
      local_178 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_stringByAppendingPathComponent__026cab30,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_188 = 0;
      local_198 = 0;
      puVar3 = local_e8;
      local_180 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_e0,IVar4,&local_198);
      _objc_storeStrong(&local_188,local_198);
      local_189 = SUB81(puVar3,0);
      bVar2 = ((ulong)puVar3 & 1) != 0;
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_setDraftItemVideoPath__026a4df0,local_180);
      }
      local_d8 = 1;
      local_a9 = bVar2;
      _objc_storeStrong(&local_188);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
    }
    else {
      local_a9 = 1;
      local_d8 = 1;
    }
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
LAB_010b2be8:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

