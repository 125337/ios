// FUN_002b7184 @ 002b7184

void FUN_002b7184(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_1d8;
  ulong local_1d0;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  long local_e8;
  byte local_d9;
  ulong local_d8;
  undefined4 local_bc;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (local_b0 == 0) {
    local_bc = 1;
    lVar6 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_bc = 1;
      lVar6 = 1;
    }
    else {
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if ((uVar5 & 1) == 0) {
        local_bc = 1;
        lVar6 = 1;
      }
      else {
        local_d9 = 0;
        uVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (uVar4 == 0) {
          uVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          bVar1 = uVar5 == 0;
          local_d8 = uVar5;
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if (bVar1) {
          local_bc = 1;
          lVar6 = 1;
        }
        else {
          FUN_002b8558(local_b0);
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOpaque__026ca9f8,0);
          FUN_002b8b18(local_b0);
          local_e8 = 0;
          _memset(auStack_130,0,0x40);
          uVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_1d0 != 0) {
            lVar6 = *local_120;
            local_1d8 = 0;
            do {
              do {
                if (*local_120 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_120 - lVar6,uVar4);
                }
                local_f0 = *(undefined8 *)(local_128 + local_1d8 * 8);
                uVar5 = local_b0;
                FUN_002b8ccc(local_b0,local_f0,local_b8);
                if ((uVar5 & 1) != 0) {
                  local_e8 = local_e8 + 1;
                }
                local_1d8 = local_1d8 + 1;
              } while (local_1d8 < local_1d0);
              local_1d0 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                         auStack_a8,0x10);
              local_1d8 = 0;
            } while (local_1d0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_bc = 0;
          lVar6 = local_e8;
        }
      }
    }
  }
  _objc_storeStrong(lVar6,&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

