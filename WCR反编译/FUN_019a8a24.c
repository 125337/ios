// FUN_019a8a24 @ 019a8a24

void FUN_019a8a24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  cfstringStruct *local_268;
  ulong local_220;
  ulong local_218;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 auStack_188 [8];
  byte local_180;
  undefined *local_178;
  undefined *local_170;
  bool local_161;
  cfstringStruct *local_160;
  byte local_151;
  cfstringStruct *local_150;
  byte local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  int local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRFileExport___);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)();
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar10 = param_1 + 0x38;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar10);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_d0,1,0);
  local_d1 = 1;
  _memset(auStack_120,0,0x40);
  uVar4 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_218 != 0) {
    lVar10 = *local_110;
    local_220 = 0;
    do {
      do {
        if (*local_110 - lVar10 != 0) {
          _objc_enumerationMutation(*local_110 - lVar10,uVar4);
        }
        local_e0 = *(undefined8 *)(local_118 + local_220 * 8);
        uVar5 = *(ulong *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
        puVar3 = local_d0;
        if ((uVar5 & 1) != 0) {
          local_d1 = 0;
          local_124 = 2;
          goto LAB_019a8e84;
        }
        uVar8 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_130 = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        puVar3 = (undefined *)(param_1 + 0x38);
        _objc_loadWeakRetained();
        puVar2 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_130;
        local_130 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar5 = param_1 + 0x38;
        _objc_loadWeakRetained();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar6 & 1) == 0) {
          local_d1 = 0;
          local_124 = 2;
        }
        else {
          local_124 = 0;
        }
        _objc_storeStrong(&local_130,0);
        if (local_124 != 0) goto LAB_019a8e84;
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  local_124 = 0;
LAB_019a8e84:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  lVar10 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_count_0269cfe0);
  local_141 = 0;
  local_151 = 0;
  local_161 = false;
  if (lVar10 != 1) {
    local_268 = &cf_W;
  }
  else {
    local_268 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_141 = 1;
    local_140 = local_268;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = local_268;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_160 = local_268;
  }
  local_161 = lVar10 == 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_268;
  if ((local_161 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  pcVar7 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
  if (pcVar7 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_138,&cf__Q);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____zip);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar3;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  lVar10 = param_1 + 0x38;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar10);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeItemAtPath_error__0269f910,local_178,0)
  ;
  if ((local_d1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isCancelled_026a1c20);
    if ((uVar4 & 1) == 0) {
      puVar3 = PTR_WCRefineFrameZipCreator_026cf080;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFrameZipCreator_026cf080,
                 PTR_s_createZipFileAtPath_withContents_026ae420,local_178,local_d0);
      local_d1 = (byte)puVar3;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeItemAtPath_error__0269f910,local_d0,0);
  uVar4 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isCancelled_026a1c20);
  if (((uVar4 & 1) != 0) || ((local_d1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_removeItemAtPath_error__0269f910,local_178,0);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = PTR___NSConcreteStackBlock_02578660;
  local_1c0 = 0xc2000000;
  local_1bc = 0;
  local_1b8 = FUN_019a9418;
  local_1b0 = &DAT_0258a608;
  _objc_copyWeak(auStack_188,param_1 + 0x38);
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_178;
  local_1a8 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = puVar1;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = local_d1 & 1;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  local_198 = uVar8;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = uVar9;
  _dispatch_async(puVar3,&local_1c8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_1a8,0);
  _objc_destroyWeak(auStack_188);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

