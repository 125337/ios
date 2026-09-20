// FUN_019958d4 @ 019958d4

void FUN_019958d4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_1a0;
  ulong local_198;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  byte local_128;
  long local_120;
  int local_114;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  byte local_c1;
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
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,*(undefined8 *)(param_1 + 0x20),
             1,0);
  local_c1 = 1;
  _memset(auStack_110,0,0x40);
  uVar2 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar9 = *local_100;
    local_1a0 = 0;
    do {
      do {
        if (*local_100 - lVar9 != 0) {
          _objc_enumerationMutation(*local_100 - lVar9,uVar2);
        }
        local_d0 = *(undefined8 *)(local_108 + local_1a0 * 8);
        uVar3 = *(ulong *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isCancelled_026a1c20);
        if ((uVar3 & 1) != 0) {
          local_c1 = 0;
          local_114 = 2;
          goto LAB_01995c0c;
        }
        lVar4 = param_1 + 0x48;
        _objc_loadWeakRetained();
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_uniqueDestinationForPath__026ba378);
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar5;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        uVar3 = param_1 + 0x48;
        _objc_loadWeakRetained();
        uVar6 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((uVar6 & 1) == 0) {
          local_c1 = 0;
          local_114 = 2;
        }
        else {
          local_114 = 0;
        }
        _objc_storeStrong(&local_120,0);
        if (local_114 != 0) goto LAB_01995c0c;
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  local_114 = 0;
LAB_01995c0c:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((local_c1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isCancelled_026a1c20);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_WCRefineFrameZipCreator_026cf080;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFrameZipCreator_026cf080,
                 PTR_s_createZipFileAtPath_withContents_026ae420,*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x20));
      local_c1 = (byte)puVar1;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_removeItemAtPath_error__0269f910,*(undefined8 *)(param_1 + 0x20),0);
  uVar2 = *(ulong *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isCancelled_026a1c20);
  if (((uVar2 & 1) != 0) || ((local_c1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_removeItemAtPath_error__0269f910,*(undefined8 *)(param_1 + 0x38),0);
  }
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_170 = PTR___NSConcreteStackBlock_02578660;
  local_168 = 0xc2000000;
  local_164 = 0;
  local_160 = FUN_01995ec8;
  local_158 = &DAT_0258a608;
  _objc_copyWeak(auStack_130,param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  local_150 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_148 = uVar8;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = local_c1 & 1;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  local_140 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar8;
  _dispatch_async(puVar1,&local_170);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_150,0);
  _objc_destroyWeak(auStack_130);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

