// FUN_003d1e44 @ 003d1e44

byte FUN_003d1e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte local_1b4;
  ulong local_198;
  ulong local_190;
  ulong local_158;
  ulong local_150;
  byte local_141;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  char *local_e8;
  long local_e0;
  undefined8 local_d8;
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  if ((local_b8 == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    _CACurrentMediaTime();
    local_e0 = 0;
    pcVar2 = "FakeMainFrameCell";
    local_d8 = param_1;
    _objc_getClass();
    local_e8 = pcVar2;
    _memset(auStack_130,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar5 = *local_120;
      local_198 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,uVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + local_198 * 8);
          uVar3 = local_b8;
          FUN_003cccac(local_b8,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = uVar3;
          if (uVar3 == 0) {
            local_a9 = 0;
            local_cc = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_nativePassthrough_026a2e00);
            if ((uVar3 & 1) == 0) {
              uVar3 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_cellForRowAtIndexPath__0269fd40,local_f0);
              _objc_retainAutoreleasedReturnValue();
              local_140 = uVar3;
              if (uVar3 == 0) {
                local_a9 = 0;
                local_cc = 1;
              }
              else {
                local_1b4 = 0;
                if (local_e8 != (char *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar3,PTR_s_isKindOfClass__0269cd68,local_e8);
                  local_1b4 = (byte)uVar3;
                }
                local_141 = local_1b4 & 1;
                uVar3 = local_140;
                _objc_getAssociatedObject();
                _objc_retainAutoreleasedReturnValue();
                local_150 = uVar3;
                FUN_0039e980(local_140,local_138,local_c0,local_141 & 1,local_f0);
                uVar3 = local_140;
                _objc_getAssociatedObject(local_140,&DAT_028ca2d0);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_150;
                local_158 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_isEqualToString__0269ccc8,uVar3);
                if ((uVar4 & 1) == 0) {
                  local_e0 = local_e0 + 1;
                }
                _objc_storeStrong(&local_158);
                _objc_storeStrong(&local_150,0);
                local_cc = 0;
              }
              _objc_storeStrong(&local_140,0);
            }
            else {
              local_cc = 3;
            }
          }
          _objc_storeStrong(&local_138,0);
          if ((local_cc != 0) && (local_cc != 3)) goto LAB_003d221c;
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_cc = 0;
LAB_003d221c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      local_a9 = 1;
      local_cc = 1;
    }
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

