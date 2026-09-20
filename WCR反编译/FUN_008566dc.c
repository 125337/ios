// FUN_008566dc @ 008566dc

void FUN_008566dc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong local_338;
  ulong local_330;
  ulong local_2d8;
  ulong local_2d0;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150 [3];
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  uVar2 = local_130;
  if (local_130 == 0) {
    local_134 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_130;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_150[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stopAnimating_026cab28);
      (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_setAnimationImages__026a04d0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_setImage__026ca978,0);
      _objc_storeStrong(local_150,0);
    }
    uVar3 = local_130;
    _objc_getAssociatedObject(local_130,&DAT_028cd4b0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_158 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_158;
    if ((uVar3 & 1) != 0) {
      pcVar4 = &cf_stopPlayer;
      _NSSelectorFromString();
      FUN_008570cc(uVar2,pcVar4);
      uVar2 = local_158;
      pcVar4 = &cf_clearPlayer;
      _NSSelectorFromString();
      FUN_008570cc(uVar2,pcVar4);
      uVar2 = local_158;
      pcVar4 = &cf_removeTimeObserver;
      _NSSelectorFromString();
      FUN_008570cc(uVar2,pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeFromSuperview_026ca800);
    }
    uVar2 = local_130;
    _objc_getAssociatedObject(local_130,&DAT_028cd4b1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___AVPlayer_026ce308;
    local_160 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_pause_0269f2d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_replaceCurrentItemWithPlayerItem_026a0580,0);
    }
    uVar2 = local_130;
    FUN_008571ec();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      FUN_008575ac(local_168);
    }
    _objc_setAssociatedObject(local_130,&DAT_028cd1d0,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b2,0,3);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b3,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b0,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b1,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b4,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028cd0d1,0,3);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b5,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028cd4b6,0,1);
    _memset(auStack_1b0,0,0x40);
    uVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_2d0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
    if (local_2d0 != 0) {
      lVar6 = *local_1a0;
      local_2d8 = 0;
      do {
        do {
          if (*local_1a0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar6,uVar3);
          }
          local_170 = *(undefined8 *)(local_1a8 + local_2d8 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_removeFromSuperview_026ca800);
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10
                  );
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _memset(auStack_1f8,0,0x40);
    uVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_330 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10);
    if (local_330 != 0) {
      lVar6 = *local_1e8;
      local_338 = 0;
      do {
        do {
          if (*local_1e8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar6,uVar5);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + local_338 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_removeFromSuperlayer_026ca7f8);
          local_338 = local_338 + 1;
        } while (local_338 < local_330);
        local_330 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        local_338 = 0;
      } while (local_330 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    local_134 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

