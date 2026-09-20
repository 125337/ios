// FUN_00516074 @ 00516074

long FUN_00516074(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1d0;
  ulong local_1c8;
  int local_134;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar1 = local_b8;
  FUN_00513618();
  if ((((uVar1 & 1) == 0) &&
      (lVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
      lVar4 != 0)) &&
     (uVar1 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_commentUsers_026a4730),
     (uVar1 & 1) != 0)) {
    FUN_0050ed60();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,
                   PTR_s_deleteCommentWithDataItem_commen_026a4798), (uVar1 & 1) == 0)) {
      local_b0 = 0;
      local_d0 = 1;
    }
    else {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_commentUsers_026a4730);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_e0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_b0 = 0;
      }
      else {
        local_e8 = 0;
        _memset(auStack_130,0,0x40);
        uVar1 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1c8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        if (local_1c8 != 0) {
          lVar4 = *local_120;
          local_1d0 = 0;
          do {
            do {
              if (*local_120 - lVar4 != 0) {
                _objc_enumerationMutation(*local_120 - lVar4,uVar1);
              }
              uVar5 = *(ulong *)(local_128 + local_1d0 * 8);
              local_134 = 0;
              local_f0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8);
              if ((uVar5 & 1) != 0) {
                uVar5 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_type_0269e6f8);
                local_134 = (int)uVar5;
              }
              if (local_134 == 2) {
                uVar5 = local_f0;
                FUN_0050e284(0,local_f0,&cf_username);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                if (((uVar3 & 1) != 0) &&
                   (uVar5 = local_d8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_d8,PTR_s_deleteCommentWithDataItem_commen_026a4798,local_b8,
                              local_f0), (uVar5 & 1) != 0)) {
                  local_e8 = local_e8 + 1;
                }
              }
              local_1d0 = local_1d0 + 1;
            } while (local_1d0 < local_1c8);
            local_1c8 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                       0x10);
            local_1d0 = 0;
          } while (local_1c8 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_b0 = local_e8;
      }
      local_d0 = 1;
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  else {
    local_b0 = 0;
    local_d0 = 1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

