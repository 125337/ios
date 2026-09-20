// FUN_00112074 @ 00112074

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00112074(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  cfstringStruct *local_270;
  cfstringStruct *local_248;
  ulong local_1c0;
  ulong local_1b8;
  undefined8 local_198;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  long local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_4;
  _objc_storeStrong(&local_c8,param_5);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_6);
  local_d8 = param_1;
  if (local_c0 == 1) {
    local_198 = local_b0;
    FUN_0011855c(local_b0,local_b8);
  }
  else {
    local_198 = 0;
  }
  local_e0 = local_198;
  _memset(auStack_138,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar3 = *local_128;
    local_1c0 = 0;
    do {
      do {
        if (*local_128 - lVar3 != 0) {
          _objc_enumerationMutation(*local_128 - lVar3,uVar1);
        }
        uVar4 = *(ulong *)(local_130 + local_1c0 * 8);
        local_f8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_userId);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_140 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_148 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        if ((((uVar2 != 0) ||
             (uVar2 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0), uVar2 != 0)) &&
            (uVar2 = local_140, FUN_00115578(), (uVar2 & 1) == 0)) &&
           (uVar2 = local_148, FUN_00115578(), (uVar2 & 1) == 0)) {
          if (local_c0 == 1) {
            if (local_d0 == (cfstringStruct *)0x0) {
              local_248 = &cf___;
            }
            else {
              local_248 = local_d0;
            }
            FUN_001134f0(local_d8,local_b0,local_140,local_148,local_248,local_e0);
          }
          else {
            local_270 = local_c8;
            if (local_c8 == (cfstringStruct *)0x0) {
              local_270 = &cf___;
            }
            FUN_00118bc0(local_d8,local_b0,local_140,local_148,local_270);
          }
        }
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_140,0);
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

