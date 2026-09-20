// FUN_019f54c4 @ 019f54c4

void FUN_019f54c4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_1d8;
  ulong local_1d0;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  long local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long local_158;
  long local_150;
  undefined4 local_148;
  byte local_141;
  long local_140;
  undefined8 local_138;
  undefined *local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar2 = param_1;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_autoreleasePoolPush();
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_120,0,0x40);
  uVar4 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_1d0 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1d0 != 0) {
    lVar8 = *local_110;
    local_1d8 = 0;
    do {
      do {
        uVar5 = local_1d0;
        if (*local_110 - lVar8 != 0) {
          uVar5 = uVar4;
          _objc_enumerationMutation(*local_110 - lVar8);
        }
        local_e0 = *(undefined8 *)(local_118 + local_1d8 * 8);
        _objc_autoreleasePoolPush();
        local_128 = 0;
        local_138 = 0;
        puVar3 = PTR_WCRiFontConverter_026cedf8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRiFontConverter_026cedf8,PTR_s_convertFontAtPath_options_error__026bb3c0,
                   local_e0,*(undefined8 *)(param_1 + 0x30),&local_138);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_128,local_138);
        local_130 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined *)0x0) {
          local_c8 = local_c8 + 1;
          local_141 = 0;
          bVar1 = false;
          if (local_d8 == 0) {
            lVar7 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_localizedDescription_0269ced0);
            _objc_retainAutoreleasedReturnValue();
            local_141 = 1;
            local_140 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = lVar7 != 0;
          }
          if ((local_141 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if (bVar1) {
            lVar6 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_localizedDescription_0269ced0);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = local_d8;
            local_d8 = lVar6;
            (*(code *)PTR__objc_release_02578630)(lVar7);
          }
          local_148 = 3;
        }
        else {
          local_c0 = local_c0 + 1;
          lVar7 = *(long *)(param_1 + 0x38);
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_saveConvertResults_toDirectory__026bb3c8,local_130,
                     *(undefined8 *)(param_1 + 0x20));
          local_d0 = local_d0 + lVar7;
          local_148 = 0;
        }
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_128,0);
        _objc_autoreleasePoolPop(uVar5);
        local_1d8 = local_1d8 + 1;
      } while (local_1d8 < local_1d0);
      local_1d0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1d8 = 0;
    } while (local_1d0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_190 = PTR___NSConcreteStackBlock_02578660;
  local_188 = 0xc2000000;
  local_184 = 0;
  local_180 = FUN_019f59e4;
  local_178 = &DAT_0258aab0;
  _objc_copyWeak(auStack_168,param_1 + 0x40);
  lVar8 = local_d8;
  local_160 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = lVar8;
  local_158 = local_c8;
  local_150 = local_d0;
  _dispatch_async(puVar3,&local_190);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_170);
  _objc_destroyWeak(auStack_168);
  _objc_storeStrong(&local_d8,0);
  _objc_autoreleasePoolPop(lVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

