// FUN_002e8078 @ 002e8078

void FUN_002e8078(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_340;
  ulong local_338;
  ulong local_2d8;
  ulong local_2d0;
  cfstringStruct *local_288;
  undefined *local_250;
  cfstringStruct *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  byte local_1a1;
  ulong local_1a0;
  ulong local_198;
  byte local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  cfstringStruct **local_158;
  cfstringStruct *local_150;
  uint local_148;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  uVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_configuration_026a1de8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_138 == 0) {
    local_148 = 1;
  }
  else {
    local_158 = &local_150;
    local_150 = (cfstringStruct *)0x0;
    local_178 = PTR___NSConcreteGlobalBlock_02578658;
    local_170 = 0xd0800000;
    local_16c = 0;
    local_168 = FUN_002eac28;
    local_160 = &DAT_0257bb68;
    _dispatch_sync(DAT_028c9870,&local_178);
    local_189 = 0;
    pcVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_288 = &cf___;
    }
    else {
      local_288 = local_150;
      FUN_002e98f0(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_189 = 1;
      local_188 = local_288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = local_288;
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    uVar1 = local_130;
    _objc_getAssociatedObject(local_130,DAT_026dfd88);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_180;
    local_198 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       (uVar1 = local_198,
       (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_isEqualToString__0269ccc8,local_180),
       (uVar1 & 1) == 0)) {
      uVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_userScripts_026a1db8);
      _objc_retainAutoreleasedReturnValue();
      local_1a1 = 0;
      local_1a0 = uVar1;
      _memset(auStack_1f0,0,0x40);
      uVar1 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2d0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10);
      if (local_2d0 != 0) {
        lVar5 = *local_1e0;
        local_2d8 = 0;
        do {
          do {
            if (*local_1e0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar5,uVar1);
            }
            uVar6 = *(ulong *)(local_1e8 + local_2d8 * 8);
            local_1b0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_source_026a1dc0);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((uVar2 & 1) != 0) {
              local_1a1 = 1;
              local_148 = 2;
              goto LAB_002e8578;
            }
            local_2d8 = local_2d8 + 1;
          } while (local_2d8 < local_2d0);
          local_2d0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,
                     0x10);
          local_2d8 = 0;
        } while (local_2d0 != 0);
      }
      local_148 = 0;
LAB_002e8578:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_1a1 & 1) != 0) {
        uVar1 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
        local_1f8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_removeAllUserScripts_026a1df0);
        _memset(auStack_240,0,0x40);
        uVar1 = local_1f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_338 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        if (local_338 != 0) {
          lVar5 = *local_230;
          local_340 = 0;
          do {
            do {
              if (*local_230 - lVar5 != 0) {
                _objc_enumerationMutation(*local_230 - lVar5,uVar1);
              }
              uVar6 = *(ulong *)(local_238 + local_340 * 8);
              local_200 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_source_026a1dc0);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((uVar2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_addUserScript__026a1dd0,local_200);
              }
              local_340 = local_340 + 1;
            } while (local_340 < local_338);
            local_338 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128
                       ,0x10);
            local_340 = 0;
          } while (local_338 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _objc_storeStrong(&local_1f8,0);
      }
      pcVar3 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        _objc_setAssociatedObject(local_130,DAT_026dfd88,&cf___,3);
        local_148 = 1;
      }
      else {
        pcVar3 = local_150;
        FUN_002eac8c(local_150,local_180);
        _objc_retainAutoreleasedReturnValue();
        local_248 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          puVar4 = PTR__OBJC_CLASS___WKUserScript_026ce508;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithSource_injectionTime_for_026a1dc8,local_248,0,0);
          local_250 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addUserScript__026a1dd0,puVar4);
          _objc_setAssociatedObject(local_130,DAT_026dfd88,local_180,3);
          _objc_storeStrong(&local_250,0);
        }
        local_148 = (uint)(pcVar3 == (cfstringStruct *)0x0);
        _objc_storeStrong(&local_248,0);
      }
      _objc_storeStrong(&local_1a0,0);
    }
    else {
      local_148 = 1;
    }
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_138,0);
  if (local_148 == 0) {
    local_148 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

