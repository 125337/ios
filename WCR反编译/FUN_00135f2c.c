// FUN_00135f2c @ 00135f2c

void FUN_00135f2c(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_1c8;
  ulong local_178;
  ulong local_170;
  long local_138;
  bool local_129;
  undefined *local_128;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_170 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar12 = *local_f0;
    local_178 = 0;
    do {
      do {
        if (*local_f0 - lVar12 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar12,uVar4);
        }
        uVar13 = *(ulong *)(local_f8 + local_178 * 8);
        puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_c0 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar3 = local_c0;
        if ((uVar13 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118[0] = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_tag_026cab98);
          local_129 = (*(byte *)(param_1 + 0x38) & 1) == 0;
          if (local_129) {
            local_1c8 = *(undefined **)(param_1 + 0x28);
          }
          else {
            local_1c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_1c8;
          }
          local_129 = !local_129;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118[0],PTR_s_setBackgroundColor__026ca888,local_1c8);
          if (local_129) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_setTintColor__026caab0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          uVar13 = local_118[0];
          puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar13,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          bVar2 = false;
          bVar1 = false;
          if (((*(byte *)(param_1 + 0x39) & 1) != 0) && (bVar1 = false, -1 < (long)uVar3)) {
            local_138 = *(long *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_actions_0269f150);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            lVar6 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = (long)uVar3 < lVar6;
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          uVar3 = local_118[0];
          if (bVar1) {
            uVar7 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_actions_0269f150);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_attachmentController_0269f148);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_inputToolView_0269d0e8);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar8;
            _WCRChatToolbarImage(*(undefined8 *)(param_1 + 0x30),uVar8,uVar9);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setImage_forState__0269cc60,uVar11,0);
            (*(code *)PTR__objc_release_02578630)(uVar11);
            (*(code *)PTR__objc_release_02578630)(uVar10);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          _objc_storeStrong(local_118,0);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

