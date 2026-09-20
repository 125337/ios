// FUN_00956b08 @ 00956b08

byte FUN_00956b08(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  byte local_c9;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 == 0) {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_images_026ca698);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (uVar3 == 0) {
        uVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_hasImages_026aac00);
        if (((uVar1 & 1) == 0) ||
           (uVar1 = local_b8,
           (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasImages_026aac00),
           (uVar1 & 1) == 0)) {
          _memset(auStack_118,0,0x40);
          uVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pasteboardTypes_026aac08);
          _objc_retainAutoreleasedReturnValue();
          local_160 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_160 != 0) {
            lVar2 = *local_108;
            local_168 = 0;
            do {
              do {
                if (*local_108 - lVar2 != 0) {
                  _objc_enumerationMutation(*local_108 - lVar2,uVar1);
                }
                uVar3 = *(ulong *)(local_110 + local_168 * 8);
                local_d8 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_containsString__0269d0b0,&cf_image);
                if (((((uVar3 & 1) != 0) ||
                     (uVar3 = local_d8,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_public_png),
                     (uVar3 & 1) != 0)) ||
                    (uVar3 = local_d8,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_public_jpeg),
                    (uVar3 & 1) != 0)) ||
                   (uVar3 = local_d8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_com_apple_uikit_image),
                   (uVar3 & 1) != 0)) {
                  local_a9 = 1;
                  local_bc = 1;
                  goto LAB_00956f48;
                }
                local_168 = local_168 + 1;
              } while (local_168 < local_160);
              local_160 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,
                         auStack_a8,0x10);
              local_168 = 0;
            } while (local_160 != 0);
          }
          local_bc = 0;
LAB_00956f48:
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if (local_bc == 0) {
            local_a9 = 0;
            local_bc = 1;
          }
        }
        else {
          uVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          local_c9 = 0;
          local_a9 = true;
          if (uVar1 == 0) {
            uVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_images_026ca698);
            _objc_retainAutoreleasedReturnValue();
            local_c9 = 1;
            local_c8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_a9 = uVar3 != 0;
          }
          if ((local_c9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c8);
          }
          (*(code *)PTR__objc_release_02578630)(uVar1);
          local_bc = 1;
        }
      }
      else {
        local_a9 = 1;
        local_bc = 1;
      }
    }
    else {
      local_a9 = 1;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

