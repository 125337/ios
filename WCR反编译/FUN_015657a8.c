// FUN_015657a8 @ 015657a8

void FUN_015657a8(undefined8 param_1,undefined8 param_2,byte param_3,ulong *param_4,ulong *param_5)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  byte local_e9;
  ulong local_e8;
  cfstringStruct *local_e0;
  int local_d4;
  ulong *local_d0;
  ulong *local_c8;
  byte local_b9;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_d0 = param_5;
  local_c8 = param_4;
  local_b9 = param_3;
  if ((local_b0 == 0) || ((param_4 != (ulong *)0x0 && (*param_4 != 0)))) {
    local_d4 = 1;
  }
  else {
    pcVar1 = &cf_CommonMessageCellView;
    _NSClassFromString();
    local_e0 = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       (uVar2 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) != 0)) {
      uVar2 = local_b0;
      FUN_01565bcc();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_b0;
      local_e8 = uVar2;
      FUN_01565f68();
      local_e9 = (byte)uVar3;
      lVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      if ((lVar4 == 0) ||
         (uVar3 = local_e8,
         (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_b8),
         uVar2 = local_b0, (uVar3 & 1) == 0)) {
        uVar2 = local_b0;
        if ((local_d0 != (ulong *)0x0) && ((*local_d0 == 0 && ((local_e9 & 1) == (local_b9 & 1)))))
        {
          _objc_retainAutorelease(0);
          *local_d0 = uVar2;
        }
        local_d4 = 0;
      }
      else {
        if (local_c8 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_c8 = uVar2;
        }
        local_d4 = 1;
      }
      _objc_storeStrong(&local_e8,0);
      if (local_d4 != 0) goto LAB_01565b3c;
    }
    _memset(auStack_138,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_190 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar4 = *local_128;
      local_198 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,uVar2);
          }
          local_f8 = *(undefined8 *)(local_130 + local_198 * 8);
          FUN_015657a8(local_f8,local_b8,local_b9 & 1,local_c8,local_d0);
          if ((local_c8 != (ulong *)0x0) && (*local_c8 != 0)) {
            local_d4 = 1;
            goto LAB_01565b14;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_d4 = 0;
LAB_01565b14:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d4 == 0) {
      local_d4 = 0;
    }
  }
LAB_01565b3c:
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

