// traverseViewsAndSetDeleteButtonColor: @ 01d6e8e4

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameLibraryViewController::traverseViewsAndSetDeleteButtonColor_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  uint local_c4;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar3 = local_c0;
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_c0;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf_Rd_j_g);
      uVar3 = local_d0;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,DAT_023241f8,DAT_023241f0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTitleColor_forState__026caac0,puVar2,0)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      local_c4 = (uint)bVar1;
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      if (local_c4 != 0) goto LAB_01d6ec8c;
    }
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_subviews_026cab40);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_performSelector__026ca7b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = uVar3;
      _memset(auStack_128,0,0x40);
      uVar3 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_178 != 0) {
        lVar5 = *local_118;
        local_180 = 0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,uVar3);
            }
            local_e8 = *(undefined8 *)(local_120 + local_180 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_traverseViewsAndSetDeleteButtonC_026c4a30,local_e8);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_e0,0);
    }
    local_c4 = 0;
  }
LAB_01d6ec8c:
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

