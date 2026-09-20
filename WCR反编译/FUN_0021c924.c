// FUN_0021c924 @ 0021c924

void FUN_0021c924(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong uVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    uVar2 = local_b0;
    FUN_0021bf24();
    uVar1 = (uint)uVar2;
    FUN_0021c430();
    if ((uVar1 & 1) == 0) {
      local_b4 = 1;
    }
    else {
      FUN_0021c4cc();
      uVar2 = local_b0;
      local_d0 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_thumbImageView_026a0850);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar2;
      if (uVar2 != 0) {
        uVar6 = local_d0;
        FUN_001d5a74(uVar2);
        uVar2 = local_d8;
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_playerView_026a0858);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar2;
      if (uVar2 == 0) {
        _memset(auStack_138,0,0x40);
        uVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1e0 != 0) {
          lVar4 = *local_128;
          local_1e8 = 0;
          do {
            do {
              if (*local_128 - lVar4 != 0) {
                _objc_enumerationMutation(*local_128 - lVar4,uVar2);
              }
              uVar5 = *(ulong *)(local_130 + local_1e8 * 8);
              pcVar3 = &cf_WCPlayerView;
              local_f8 = uVar5;
              _NSClassFromString();
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
              if ((uVar5 & 1) != 0) {
                uVar6 = local_d0;
                FUN_001d5a74(local_f8);
                uVar5 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar6);
                (*(code *)PTR__objc_release_02578630)(uVar5);
                uVar5 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              local_1e8 = local_1e8 + 1;
            } while (local_1e8 < local_1e0);
            local_1e0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            local_1e8 = 0;
          } while (local_1e0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        uVar6 = local_d0;
        FUN_001d5a74(uVar2);
        uVar2 = local_e8;
        local_f0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_d8,0);
      local_b4 = 0;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

