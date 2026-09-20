// FUN_006489f4 @ 006489f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006489f4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_310;
  ulong local_308;
  ulong local_2a0;
  ulong local_298;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  byte local_191;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  undefined4 local_168;
  ulong local_158;
  undefined8 local_150;
  ulong local_148;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  ulong local_40 [4];
  
  local_40[3] = *(ulong *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  local_150 = param_2;
  local_148 = param_1;
  _objc_storeStrong(&local_158,param_3);
  uVar3 = local_148;
  (*DAT_028cbb40)(local_148,local_150,local_158);
  uVar1 = (uint)uVar3;
  FUN_0064cd38();
  if ((uVar1 & 1) == 0) {
    local_168 = 1;
  }
  else {
    uVar3 = local_158;
    FUN_00655814();
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar3;
    FUN_00655b28();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_148;
    local_178 = uVar3;
    FUN_0064f9ac();
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      uVar2 = local_170;
      FUN_00661db0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_180;
      local_180 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
    if (uVar3 != 0) {
      local_40[1] = _UNK_02324248;
      local_40[0] = _DAT_02324240;
      for (local_188 = 0; local_188 < 2; local_188 = local_188 + 1) {
        uVar3 = local_40[local_188];
        local_190 = uVar3;
        FUN_0064d8b4();
        if (((uVar3 & 1) != 0) &&
           (uVar3 = local_170, FUN_0065c0c8(local_170,local_158,local_190), (uVar3 & 1) != 0)) {
          uVar3 = local_148;
          FUN_00654a24(local_148,local_190);
          if ((uVar3 & 1) != 0) {
            local_191 = 0;
            _memset(auStack_1e0,0,0x40);
            uVar3 = local_148;
            FUN_0064f7f4(local_148,local_190);
            _objc_retainAutoreleasedReturnValue();
            local_298 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_298 != 0) {
              lVar4 = *local_1d0;
              local_2a0 = 0;
              do {
                do {
                  if (*local_1d0 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_1d0 - lVar4,uVar3);
                  }
                  uVar5 = *(ulong *)(local_1d8 + local_2a0 * 8);
                  local_1a0 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  if ((uVar2 & 1) != 0) {
                    local_191 = 1;
                    local_168 = 5;
                    goto LAB_00648e40;
                  }
                  local_2a0 = local_2a0 + 1;
                } while (local_2a0 < local_298);
                local_298 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                           auStack_c0,0x10);
                local_2a0 = 0;
              } while (local_298 != 0);
            }
            local_168 = 0;
LAB_00648e40:
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if ((local_191 & 1) != 0) goto LAB_00649184;
          }
          uVar3 = local_148;
          FUN_0064fac4(local_148,local_190);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          FUN_0064fc7c(local_190,local_180,local_178);
          uVar3 = local_148;
          FUN_0064f7f4(local_148,local_190);
          _objc_retainAutoreleasedReturnValue();
          local_1e8 = uVar3;
          _memset(auStack_230,0,0x40);
          uVar3 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_copy_0269d150);
          local_308 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_140,
                     0x10);
          if (local_308 != 0) {
            lVar4 = *local_220;
            local_310 = 0;
            do {
              do {
                if (*local_220 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_220 - lVar4,uVar3);
                }
                uVar5 = *(ulong *)(local_228 + local_310 * 8);
                local_1f0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                if ((uVar2 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_removeObject__0269d678,local_1f0);
                }
                local_310 = local_310 + 1;
              } while (local_310 < local_308);
              local_308 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                         auStack_140,0x10);
              local_310 = 0;
            } while (local_308 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          FUN_0065020c(local_190,local_180);
          _objc_storeStrong(&local_1e8,0);
        }
LAB_00649184:
      }
    }
    FUN_00660e04(DAT_02323c88,local_148);
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    local_168 = 0;
  }
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_40[3] != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_40[3]);
  }
  return;
}

