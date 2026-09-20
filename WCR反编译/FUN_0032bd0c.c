// FUN_0032bd0c @ 0032bd0c

void FUN_0032bd0c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_288;
  ulong local_280;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  byte local_156;
  byte local_155;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  if (local_130 == 0) {
    local_13c = 1;
  }
  else {
    uVar1 = local_138;
    FUN_0032baec();
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar1;
    FUN_0032cb94();
    local_155 = (byte)uVar1;
    uVar1 = local_148;
    FUN_0032cc98();
    local_156 = (byte)uVar1;
    if (((local_155 & 1) == 0) && ((uVar1 & 1) == 0)) {
      local_13c = 1;
    }
    else {
      _memset(auStack_1a0,0,0x40);
      uVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_228 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_228 != 0) {
        lVar3 = *local_190;
        local_230 = 0;
        do {
          do {
            if (*local_190 - lVar3 != 0) {
              _objc_enumerationMutation(*local_190 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_198 + local_230 * 8);
            puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_160 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isMemberOfClass__026a2030,puVar2);
            if ((uVar4 & 1) != 0) {
              if ((local_155 & 1) != 0) {
                FUN_0031bdd8(local_160);
              }
              if ((local_156 & 1) != 0) {
                _memset(auStack_1e8,0,0x40);
                uVar4 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                local_280 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (local_280 != 0) {
                  lVar5 = *local_1d8;
                  local_288 = 0;
                  do {
                    do {
                      if (*local_1d8 - lVar5 != 0) {
                        _objc_enumerationMutation(*local_1d8 - lVar5,uVar4);
                      }
                      uVar6 = *(ulong *)(local_1e0 + local_288 * 8);
                      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
                      local_1a8 = uVar6;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar6,PTR_s_isMemberOfClass__026a2030,puVar2);
                      if ((uVar6 & 1) != 0) {
                        FUN_0031bdd8(local_1a8);
                      }
                      local_288 = local_288 + 1;
                    } while (local_288 < local_280);
                    local_280 = uVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                               auStack_128,0x10);
                    local_288 = 0;
                  } while (local_280 != 0);
                }
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
            }
            local_230 = local_230 + 1;
          } while (local_230 < local_228);
          local_228 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_230 = 0;
        } while (local_228 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_13c = 0;
    }
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

