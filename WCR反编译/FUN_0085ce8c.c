// FUN_0085ce8c @ 0085ce8c

void FUN_0085ce8c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8;
  ulong local_d0 [3];
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
    if (uVar1 == 0x24f6dc) {
      uVar2 = local_b0;
      _objc_getAssociatedObject(0,local_b0,&DAT_028cd4b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_d0[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar1 = local_d0[0];
      if ((uVar2 & 1) != 0) {
        pcVar4 = &cf_pause;
        _NSSelectorFromString();
        FUN_008570cc(uVar1,pcVar4);
        uVar1 = local_d0[0];
        pcVar4 = &cf_pauseVideo;
        _NSSelectorFromString();
        FUN_008570cc(uVar1,pcVar4);
        uVar1 = local_d0[0];
        pcVar4 = &cf_stopAutoPlay;
        _NSSelectorFromString();
        FUN_008570cc(uVar1,pcVar4);
      }
      uVar1 = local_b0;
      _objc_getAssociatedObject(local_b0,&DAT_028cd4b1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___AVPlayer_026ce308;
      local_d8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_pause_0269f2d8);
      }
      FUN_0085ec00(local_b0,0);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(local_d0,0);
    }
    _memset(auStack_120,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c0 != 0) {
      lVar5 = *local_110;
      local_1c8 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + local_1c8 * 8);
          FUN_0085ce8c(local_e0);
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

