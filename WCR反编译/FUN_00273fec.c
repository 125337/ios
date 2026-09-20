// FUN_00273fec @ 00273fec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00273fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_360;
  ulong local_358;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  byte local_1e1;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  ulong local_168;
  int local_160;
  long local_150;
  long local_148;
  undefined8 local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_3);
  lVar4 = local_148;
  local_150 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    uVar1 = local_138;
    FUN_00278348();
    _objc_retainAutoreleasedReturnValue();
    local_160 = 1;
    local_130 = uVar1;
  }
  else {
    uVar1 = local_138;
    FUN_002786a0(local_138,local_140);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar1;
    _memset(auStack_1b0,0,0x40);
    uVar1 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
    if (local_2b8 != 0) {
      lVar4 = *local_1a0;
      local_2c0 = 0;
      do {
        do {
          if (*local_1a0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar4,uVar1);
          }
          uVar6 = *(ulong *)(local_1a8 + local_2c0 * 8);
          local_170 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_138;
            FUN_00278ee8(local_138,local_170);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            if ((uVar2 == 0) ||
               (uVar6 = local_138, FUN_00274fd4(local_138,local_1b8), uVar2 = local_1b8,
               (uVar6 & 1) != 0)) {
              local_160 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar2;
              local_160 = 1;
            }
            _objc_storeStrong(&local_1b8,0);
            if (local_160 != 0) goto LAB_00274404;
          }
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        local_2c0 = 0;
      } while (local_2b8 != 0);
    }
    local_160 = 0;
LAB_00274404:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_160 == 0) {
      if (local_150 == 0) {
        local_130 = 0;
        local_160 = 1;
      }
      else {
        uVar1 = local_138;
        FUN_002790c8(local_138,local_148);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = uVar1;
        FUN_00279750();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_1c0;
        local_1c8 = uVar1;
        FUN_00279828();
        uVar1 = local_1c8;
        local_1d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_130 = 0;
          local_160 = 1;
        }
        else {
          local_1d8 = 0;
          local_1e0 = 0;
          local_1e1 = 1;
          _memset(auStack_230,0,0x40);
          uVar1 = local_168;
          (*(code *)PTR__objc_retain_02578638)();
          local_358 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,
                     0x10);
          if (local_358 != 0) {
            lVar4 = *local_220;
            local_360 = 0;
            do {
              do {
                if (*local_220 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_220 - lVar4,uVar1);
                }
                local_1f0 = *(undefined8 *)(local_228 + local_360 * 8);
                uVar2 = local_138;
                FUN_00278ee8(local_138,local_1f0);
                _objc_retainAutoreleasedReturnValue();
                local_238 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
                if ((uVar2 == 0) ||
                   (uVar2 = local_138, FUN_00274fd4(local_138,local_238), (uVar2 & 1) != 0)) {
                  local_160 = 5;
                }
                else {
                  uVar2 = local_138;
                  FUN_002798dc(local_138,local_238);
                  _objc_retainAutoreleasedReturnValue();
                  local_240 = uVar2;
                  FUN_00279750();
                  _objc_retainAutoreleasedReturnValue();
                  local_248 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_isEqualToString__0269ccc8,local_1c8);
                  if ((uVar2 & 1) == 0) {
                    local_160 = 5;
                  }
                  else {
                    uVar2 = local_240;
                    FUN_00279828();
                    lVar5 = local_150 + -1;
                    if ((lVar5 == 0) && (lVar5 = uVar2 - local_1d0, uVar2 < local_1d0)) {
                      local_160 = 5;
                    }
                    else {
                      uVar3 = local_238;
                      FUN_00279ffc(lVar5);
                      uVar6 = 0;
                      if (((local_1d8 == 0) ||
                          (uVar6 = uVar2 - local_1e0, local_1e0 <= uVar2 && uVar6 != 0)) ||
                         (((uVar2 == local_1e0 && ((local_1e1 & 1) != 0)) &&
                          (uVar6 = uVar3 & 0xff, (uVar3 & 1) == 0)))) {
                        _objc_storeStrong(uVar6,&local_1d8,local_238);
                        local_1e1 = (byte)uVar3 & 1;
                        local_1e0 = uVar2;
                      }
                      local_160 = 0;
                    }
                  }
                  _objc_storeStrong(&local_248);
                  _objc_storeStrong(&local_240,0);
                }
                _objc_storeStrong(&local_238,0);
                local_360 = local_360 + 1;
              } while (local_360 < local_358);
              local_358 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                         auStack_128,0x10);
              local_360 = 0;
            } while (local_358 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_1d8;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = uVar1;
          local_160 = 1;
          _objc_storeStrong(&local_1d8,0);
        }
        _objc_storeStrong(&local_1c8);
        _objc_storeStrong(&local_1c0,0);
      }
    }
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

