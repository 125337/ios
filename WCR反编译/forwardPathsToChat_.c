// forwardPathsToChat: @ 019a96c0

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::forwardPathsToChat_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ID IVar8;
  dispatch_queue_t pdVar9;
  long lVar10;
  ulong local_1b0;
  ulong local_1a8;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined1 *local_160;
  ID local_158;
  ID local_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  ID local_138;
  ID local_130;
  undefined4 local_128;
  byte local_121;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  byte local_d1;
  undefined1 *local_d0;
  undefined *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d1 = 0;
  local_d0 = puVar6;
  _memset(auStack_120,0,0x40);
  uVar4 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1a8 != 0) {
    lVar10 = *local_110;
    local_1b0 = 0;
    do {
      do {
        if (*local_110 - lVar10 != 0) {
          _objc_enumerationMutation(*local_110 - lVar10,uVar4);
        }
        local_e0 = *(undefined8 *)(local_118 + local_1b0 * 8);
        local_121 = 0;
        puVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_e0,&local_121);
        if ((((ulong)puVar5 & 1) != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_e0),
           (local_121 & 1) != 0)) {
          local_d1 = 1;
        }
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1b0 = 0;
    } while (local_1a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar7 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  IVar8 = local_b0;
  if (puVar7 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_NX__W);
    local_128 = 1;
  }
  else {
    puVar7 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    bVar2 = 0;
    if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      bVar2 = local_d1 ^ 1;
    }
    pcVar1 = &cf_ck_WS_;
    if ((bVar2 & 1) == 0) {
      pcVar1 = &cf_ck_WSbS_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_beginFileOperationWithText__026ba5f8,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_d0;
    local_130 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    IVar8 = local_b0;
    if ((puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) && ((local_d1 & 1) == 0)) {
      puVar7 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar8,PTR_s_forwardFileAtPath_cleanupAfterSe_026ba788,puVar7,0,local_130);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_128 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_activeOperationToast_026ba600);
      _objc_retainAutoreleasedReturnValue();
      local_138 = IVar8;
      _objc_initWeak(auStack_140,local_b0);
      pdVar9 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      local_188 = PTR___NSConcreteStackBlock_02578660;
      local_180 = 0xc2000000;
      local_17c = 0;
      local_178 = FUN_019a9ca0;
      local_170 = &DAT_02585f70;
      _objc_copyWeak(auStack_148,auStack_140);
      puVar5 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      puVar7 = local_d0;
      local_168 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_130;
      local_160 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      IVar8 = local_138;
      local_158 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = IVar8;
      _dispatch_async(pdVar9,&local_188);
      (*(code *)PTR__objc_release_02578630)(pdVar9);
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_168,0);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_140);
      _objc_storeStrong(&local_138,0);
      local_128 = 0;
    }
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

