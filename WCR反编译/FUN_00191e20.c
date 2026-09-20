// FUN_00191e20 @ 00191e20

byte FUN_00191e20(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  ulong local_f0 [3];
  int local_d4;
  long local_d0;
  ulong local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = param_2;
  if ((local_c8 == 0) || (param_2 < 0)) {
    local_b9 = 0;
    local_d4 = 1;
  }
  else {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_HasEnterpriseBrandGroup_0269fce8);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_HasEnterpriseBrandGroup_0269fce8),
       (uVar1 & 1) == 0)) {
      local_b9 = 0;
      local_d4 = 1;
    }
    else {
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_tableView_titleForHeaderInSectio_0269f990);
      if ((uVar1 & 1) == 0) {
        local_b9 = 0;
        local_d4 = 1;
      }
      else {
        local_f0[0] = 0;
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_tableView_titleForHeaderInSectio_0269f990,0,local_d0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_f0[0];
        local_f0[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar2 = local_f0[0];
        FUN_00184b18();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_f0[0];
        local_f0[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_f0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_b9 = 0;
          local_d4 = 1;
        }
        else {
          local_b0 = &DAT_028c89a8;
          local_b8 = 0;
          _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0257aad0);
          if (*local_b0 + 1 != 0) {
            _dispatch_once(*local_b0 + 1,local_b0,local_b8);
          }
          _objc_storeStrong(&local_b8,0);
          _memset(auStack_140,0,0x40);
          uVar1 = DAT_028c89a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          if (local_1b0 != 0) {
            lVar3 = *local_130;
            local_1b8 = 0;
            do {
              do {
                if (*local_130 - lVar3 != 0) {
                  _objc_enumerationMutation(*local_130 - lVar3,uVar1);
                }
                local_100 = *(undefined8 *)(local_138 + local_1b8 * 8);
                uVar2 = local_f0[0];
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0[0],PTR_s_caseInsensitiveCompare__0269db48,local_100);
                if (uVar2 == 0) {
                  local_b9 = 1;
                  local_d4 = 1;
                  goto LAB_001922c0;
                }
                local_1b8 = local_1b8 + 1;
              } while (local_1b8 < local_1b0);
              local_1b0 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,
                         auStack_a8,0x10);
              local_1b8 = 0;
            } while (local_1b0 != 0);
          }
          local_d4 = 0;
LAB_001922c0:
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if (local_d4 == 0) {
            local_b9 = 0;
            local_d4 = 1;
          }
        }
        _objc_storeStrong(local_f0,0);
      }
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

