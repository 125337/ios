// FUN_019a9ca0 @ 019a9ca0

void FUN_019a9ca0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  cfstringStruct *local_250;
  ulong local_208;
  ulong local_200;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined *local_190;
  cfstringStruct *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  byte local_168;
  byte local_161;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  bool local_149;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  int local_11c;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRFileForward___);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)();
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar13 = param_1 + 0x40;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar13);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createDirectoryAtPath_withInterm_0269e230,
             local_c8,1,0);
  local_c9 = 1;
  _memset(auStack_118,0,0x40);
  uVar4 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_200 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_200 != 0) {
    lVar13 = *local_108;
    local_208 = 0;
    do {
      do {
        if (*local_108 - lVar13 != 0) {
          _objc_enumerationMutation(*local_108 - lVar13,uVar4);
        }
        local_d8 = *(undefined8 *)(local_110 + local_208 * 8);
        uVar5 = *(ulong *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
        puVar3 = local_c8;
        if ((uVar5 & 1) != 0) {
          local_c9 = 0;
          local_11c = 2;
          goto LAB_019aa0dc;
        }
        uVar11 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_128 = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar11);
        puVar3 = (undefined *)(param_1 + 0x40);
        _objc_loadWeakRetained();
        puVar2 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_128;
        local_128 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar5 = param_1 + 0x40;
        _objc_loadWeakRetained();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar6 & 1) == 0) {
          local_c9 = 0;
          local_11c = 2;
        }
        else {
          local_11c = 0;
        }
        _objc_storeStrong(&local_128,0);
        if (local_11c != 0) goto LAB_019aa0dc;
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_208 = 0;
    } while (local_200 != 0);
  }
  local_11c = 0;
LAB_019aa0dc:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  lVar13 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar13,PTR_s_count_0269cfe0);
  local_139 = 0;
  local_149 = false;
  if (lVar13 != 1) {
    local_250 = &cf_W;
  }
  else {
    local_250 = *(cfstringStruct **)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_148 = local_250;
  }
  local_149 = lVar13 == 1;
  pcVar7 = local_250;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_250;
  if ((local_149 & 1U) != 0) {
    pcVar7 = local_148;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_139 & 1) != 0) {
    pcVar7 = local_138;
    (*(code *)PTR__objc_release_02578630)();
  }
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_161 = 0;
  if (pcVar9 != (cfstringStruct *)0x0) {
    pcVar10 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_160 = pcVar10;
  }
  local_161 = pcVar9 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_______zip);
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_158 = pcVar9;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  lVar13 = param_1 + 0x40;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar13);
  if ((local_c9 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isCancelled_026a1c20);
    if ((uVar4 & 1) == 0) {
      puVar3 = PTR_WCRefineFrameZipCreator_026cf080;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFrameZipCreator_026cf080,
                 PTR_s_createZipFileAtPath_withContents_026ae420,local_158,local_c8);
      local_c9 = (byte)puVar3;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeItemAtPath_error__0269f910,local_c8,0);
  uVar4 = *(ulong *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isCancelled_026a1c20);
  if (((uVar4 & 1) != 0) || ((local_c9 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeItemAtPath_error__0269f910,local_158,0);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = PTR___NSConcreteStackBlock_02578660;
  local_1a8 = 0xc2000000;
  local_1a4 = 0;
  local_1a0 = FUN_019aa710;
  local_198 = &DAT_0258a608;
  _objc_copyWeak(auStack_170,param_1 + 0x40);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar7 = local_158;
  local_190 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = pcVar7;
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_c9 & 1;
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  local_180 = uVar11;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = uVar12;
  _dispatch_async(puVar3,&local_1b0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_190,0);
  _objc_destroyWeak(auStack_170);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

