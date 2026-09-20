// FUN_002be5d4 @ 002be5d4

void FUN_002be5d4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_440;
  ulong local_438;
  ulong local_360;
  ulong local_358;
  ulong local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  undefined1 auStack_2a0 [48];
  undefined1 auStack_270 [56];
  ulong local_238;
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
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
  if (local_130 == 0) {
    local_134 = 1;
  }
  else {
    FUN_002bf3a4(local_130);
    uVar1 = local_130;
    FUN_002acd8c(local_130,0x24f754);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_130;
    local_150[0] = uVar1;
    FUN_0029ded4(local_130,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_130;
    local_158 = uVar4;
    FUN_0029ded4(local_130,0x24f74a);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_130;
    local_160 = uVar1;
    FUN_0029ded4(local_130,0x24f74b);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_130;
    local_168 = uVar4;
    FUN_0029ded4(local_130,0x24f757);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_130;
    local_170 = uVar1;
    FUN_002acd8c(local_130,0x24f750);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_130;
    local_178 = uVar4;
    _objc_getAssociatedObject(local_130,&DAT_028c9820);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar1;
    FUN_002bf438(local_158);
    FUN_002bf438(local_168);
    FUN_002bf438(local_170);
    if (local_180 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_removeGestureRecognizer__026ca808,local_180);
    }
    _objc_setAssociatedObject(local_130,&DAT_028c9820,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028c9610,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028c9611,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028c9612,0,1);
    _objc_setAssociatedObject(local_130,&DAT_028c9613,0,1);
    FUN_002bf5c8(local_130,&cf_reset);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_removeFromSuperview_026ca800);
    FUN_002bf6dc(local_130);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setClipsToBounds__026ca8c8,0);
    uVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_1c8,0,0x40);
    uVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_358 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_358 != 0) {
      lVar3 = *local_1b8;
      local_360 = 0;
      do {
        do {
          if (*local_1b8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_1c0 + local_360 * 8);
          local_188 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_isEqualToString__0269ccc8,&cf__UIBarBackground);
          if (((uVar4 & 1) == 0) &&
             (uVar6 = local_1d0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1d0,PTR_s_isEqualToString__0269ccc8,&cf_UIView), uVar4 = local_188,
             (uVar6 & 1) == 0)) {
            puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar4 & 1) != 0) goto LAB_002bebcc;
          }
          else {
LAB_002bebcc:
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setHidden__026ca970,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_188,PTR_s_setAlpha__026ca860);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,PTR_s_setUserInteractionEnabled__026caad8,1);
          }
          uVar4 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_isEqualToString__0269ccc8,&cf_MMTabBarItemView);
          if ((uVar4 & 1) != 0) {
            _memcpy(auStack_200,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar4 = local_188;
            _memcpy(auStack_230,auStack_200,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_230);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_188,PTR_s_setAlpha__026ca860);
            uVar4 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,PTR_s_valueForKey__0269d128,&cf__textLabel);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            local_238 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setHidden__026ca970,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,local_238,PTR_s_setAlpha__026ca860);
            }
            _objc_storeStrong(&local_238,0);
          }
          uVar4 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_isEqualToString__0269ccc8,&cf_UITabBarButton);
          if ((uVar4 & 1) != 0) {
            _memcpy(auStack_270,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar4 = local_188;
            _memcpy(auStack_2a0,auStack_270,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_2a0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_188,PTR_s_setAlpha__026ca860);
            _memset(auStack_2e8,0,0x40);
            uVar4 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_438 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_438 != 0) {
              lVar5 = *local_2d8;
              local_440 = 0;
              do {
                do {
                  if (*local_2d8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_2d8 - lVar5,uVar4);
                  }
                  uVar6 = *(ulong *)(local_2e0 + local_440 * 8);
                  local_2a8 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
                  _NSStringFromClass();
                  _objc_retainAutoreleasedReturnValue();
                  local_2f0 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_isEqualToString__0269ccc8,&cf_UITabBarButtonLabel);
                  if (((uVar6 & 1) != 0) ||
                     (uVar6 = local_2f0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_2f0,PTR_s_containsString__0269d0b0,&cf_TabBarButtonLabel),
                     (uVar6 & 1) != 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setHidden__026ca970,0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (0x3ff0000000000000,local_2a8,PTR_s_setAlpha__026ca860);
                  }
                  _objc_storeStrong(&local_2f0,0);
                  local_440 = local_440 + 1;
                } while (local_440 < local_438);
                local_438 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                           auStack_128,0x10);
                local_440 = 0;
              } while (local_438 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          _objc_storeStrong(&local_1d0,0);
          local_360 = local_360 + 1;
        } while (local_360 < local_358);
        local_358 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10
                  );
        local_360 = 0;
      } while (local_358 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(local_150,0);
    local_134 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

