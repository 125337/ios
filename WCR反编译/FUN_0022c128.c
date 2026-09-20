// FUN_0022c128 @ 0022c128

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0022c128(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_228;
  ulong local_220;
  long local_1e8;
  long *local_1c8;
  byte local_17b;
  byte local_17a;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  byte local_129;
  undefined *local_128;
  long *local_120;
  long *local_118;
  bool local_109;
  long local_108;
  long local_100;
  byte local_f1;
  long *local_f0;
  long *local_e8;
  ulong local_e0;
  undefined4 local_d8;
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar3 = local_b8;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
    uVar3 = local_c8;
    FUN_0022d684();
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    local_e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_1c8 = (long *)0x0;
    }
    else {
      local_1c8 = (long *)PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
                 local_e0,1,0);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_1c8;
    }
    plVar4 = local_1c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_1c8;
    if ((local_f1 & 1) != 0) {
      plVar4 = local_f0;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_e8 == (long *)0x0) && (local_c0 != 0)) {
      local_1e8 = local_c0;
      FUN_0022dbf0();
      _objc_retainAutoreleasedReturnValue();
      local_109 = false;
      bVar1 = local_1e8 == 0;
      local_100 = local_1e8;
      if (bVar1) {
        local_1e8 = 0;
      }
      else {
        _UIImageJPEGRepresentation(DAT_02323e70);
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_1e8;
      }
      local_109 = !bVar1;
      _objc_storeStrong(&local_e8,local_1e8);
      if ((local_109 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      plVar4 = &local_100;
      _objc_storeStrong(plVar4,0);
    }
    if (local_e8 == (long *)0x0) {
      local_a9 = 0;
      local_d8 = 1;
    }
    else {
      FUN_0022e3e0();
      _objc_retainAutoreleasedReturnValue();
      local_118 = plVar4;
      if (plVar4 == (long *)0x0) {
        local_a9 = 0;
        local_d8 = 1;
      }
      else {
        FUN_0022e5e4();
        _objc_retainAutoreleasedReturnValue();
        local_120 = plVar4;
        FUN_0022e864(plVar4,local_c8,local_e8);
        if (((ulong)plVar4 & 1) == 0) {
          FUN_0022ed84(local_120,local_c8);
          local_128 = PTR_s_saveUsrImgToLocal_withData_forCa_026a09f8;
          local_129 = 0;
          _memset(auStack_178,0,0x40);
          uVar3 = local_c8;
          FUN_0022ef6c();
          _objc_retainAutoreleasedReturnValue();
          local_220 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_220 != 0) {
            lVar5 = *local_168;
            local_228 = 0;
            do {
              do {
                if (*local_168 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_168 - lVar5,uVar3);
                }
                uVar6 = *(undefined8 *)(local_170 + local_228 * 8);
                local_138 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_unsignedCharValue_026a0a00);
                uVar2 = (undefined1)uVar6;
                local_17a = 0;
                local_17b = 0;
                plVar4 = local_118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_respondsToSelector__026ca818,local_128);
                if (((ulong)plVar4 & 1) != 0) {
                  plVar4 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_118,local_128,local_c8,local_e8,uVar2,0,1,0);
                  local_17a = (byte)plVar4;
                  plVar4 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_118,local_128,local_c8,local_e8,uVar2,1,1,0);
                  local_17b = (byte)plVar4;
                }
                if (((((local_17a & 1) != 0) || ((local_17b & 1) != 0)) &&
                    (local_129 = 1, local_120 != (long *)0x0)) &&
                   (plVar4 = local_120,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_120,PTR_s_respondsToSelector__026ca818,
                              PTR_s_loadImageFromLocal_withCategory__026a0a08),
                   ((ulong)plVar4 & 1) != 0)) {
                  plVar4 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_loadImageFromLocal_withCategory__026a0a08,local_c8,
                             uVar2,0);
                  _objc_unsafeClaimAutoreleasedReturnValue(plVar4);
                  plVar4 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_loadImageFromLocal_withCategory__026a0a08,local_c8,
                             uVar2,1);
                  _objc_unsafeClaimAutoreleasedReturnValue(plVar4);
                }
                local_228 = local_228 + 1;
              } while (local_228 < local_220);
              local_220 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,
                         auStack_a8,0x10);
              local_228 = 0;
            } while (local_220 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_a9 = local_129 & 1;
        }
        else {
          local_a9 = 1;
        }
        local_d8 = 1;
        _objc_storeStrong(&local_120,0);
      }
      _objc_storeStrong(&local_118,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

