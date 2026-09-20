// updateChipSelection @ 01ed6c78

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRToDoAdjustmentFloatingPanel::updateChipSelection(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1e0;
  undefined *local_1d0;
  ulong local_1a0;
  ulong local_198;
  undefined *local_148;
  undefined *local_138;
  undefined *local_128;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar1 = DAT_0232c670;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentController_026b8148);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_c0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,DAT_023243c8,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar4;
  _memset(auStack_110,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_chipScroll_026b29f8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_198 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar7 = *local_100;
    local_1a0 = 0;
    do {
      do {
        if (*local_100 - lVar7 != 0) {
          _objc_enumerationMutation(*local_100 - lVar7,IVar5);
        }
        uVar8 = *(ulong *)(local_108 + local_1a0 * 8);
        puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_d0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar6 = local_d0;
        if ((uVar8 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tag_026cab98);
          bVar2 = uVar6 - 0x1db0 != local_c0;
          if (bVar2) {
            local_1d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3fe0000000000000,DAT_02323cc0,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_1d0;
          }
          else {
            local_1d0 = local_c8;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_setBackgroundColor__026ca888,local_1d0);
          uVar6 = local_118;
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_128);
            uVar6 = local_118;
            local_1e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
            _objc_retainAutoreleasedReturnValue();
            local_148 = local_1e0;
          }
          else {
            local_1e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
            _objc_retainAutoreleasedReturnValue();
            local_138 = local_1e0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_setTitleColor_forState__026caac0,local_1e0,0);
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          _objc_storeStrong(&local_118,0);
        }
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

