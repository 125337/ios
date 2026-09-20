// FUN_01e708e8 @ 01e708e8

void FUN_01e708e8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1a8;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  int local_128;
  bool local_121;
  undefined1 *local_120;
  undefined1 *local_118;
  bool local_109;
  undefined1 *local_108;
  undefined1 *local_100;
  byte local_f1;
  undefined1 *local_f0;
  byte local_e1;
  undefined1 *local_e0;
  undefined1 *local_d8;
  byte local_c9;
  undefined1 *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (undefined1 *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  local_1a8 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_count_0269cfe0);
  local_c9 = (undefined1 *)((long)&MACH_HEADER.magic + 1) < local_1a8;
  local_e1 = 0;
  local_f1 = 0;
  if ((bool)local_c9) {
    local_1a8 = local_b8;
    FUN_01e6dc70();
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_1a8;
  }
  else {
    FUN_01e6df84();
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_1a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_1a8;
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  local_109 = false;
  bVar1 = (local_c9 & 1) == 0;
  if (bVar1) {
    local_1b8 = local_b8;
  }
  else {
    local_1b8 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = local_1b8;
  }
  local_109 = !bVar1;
  FUN_01e6dc70();
  _objc_retainAutoreleasedReturnValue();
  local_100 = local_1b8;
  if ((local_109 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  local_121 = false;
  bVar1 = (local_c9 & 1) == 0;
  if (bVar1) {
    local_1c0 = local_c0;
  }
  else {
    local_1c0 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_120 = local_1c0;
  }
  local_121 = !bVar1;
  FUN_01e6dc70();
  _objc_retainAutoreleasedReturnValue();
  local_118 = local_1c0;
  if ((local_121 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  puVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined1 *)0x0) ||
     (puVar2 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
     puVar2 == (undefined1 *)0x0)) {
    local_b0 = (undefined1 *)0x0;
    local_128 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_d8;
    local_130 = puVar3;
    FUN_01e9bcfc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_stringByAppendingPathComponent__026cab30,local_118);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar2;
    if (((local_c9 & 1) == 0) &&
       (puVar4 = local_130,
       (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fileExistsAtPath__026ca630,puVar2),
       ((ulong)puVar4 & 1) == 0)) {
      FUN_01e9c080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_138;
      local_138 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_stringByAppendingPathComponent__026cab30,local_118);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_140;
      local_140 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fileExistsAtPath__026ca630,local_140);
    puVar2 = local_140;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar2;
      _memset(auStack_190,0,0x40);
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_138,0);
      _objc_retainAutoreleasedReturnValue();
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_210 != (undefined1 *)0x0) {
        lVar7 = *local_180;
        local_218 = (undefined1 *)0x0;
        do {
          do {
            if (*local_180 - lVar7 != 0) {
              _objc_enumerationMutation(*local_180 - lVar7,puVar2);
            }
            uVar8 = *(ulong *)(local_188 + (long)local_218 * 8);
            local_150 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_stringByDeletingPathExtension_0269fd18);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if ((uVar6 & 1) != 0) {
              puVar4 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_stringByAppendingPathComponent__026cab30,local_150);
              _objc_retainAutoreleasedReturnValue();
              local_128 = 1;
              local_b0 = puVar4;
              goto LAB_01e70fd4;
            }
            local_218 = local_218 + 1;
          } while (local_218 < local_210);
          local_210 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                     0x10);
          local_218 = (undefined1 *)0x0;
        } while (local_210 != (undefined1 *)0x0);
      }
      local_128 = 0;
LAB_01e70fd4:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_128 == 0) {
        local_b0 = (undefined1 *)0x0;
        local_128 = 1;
      }
      _objc_storeStrong(&local_148,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_128 = 1;
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

