// wcr_relayoutChipsIfNeeded @ 0169675c

/* Function Stack Size: 0x10 bytes */

void WCRWordSegPickerController::wcr_relayoutChipsIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  undefined8 in_d1;
  double dVar8;
  double dVar9;
  undefined8 in_d2;
  double dVar10;
  undefined8 in_d3;
  double dVar11;
  double local_340;
  double local_330;
  ulong local_2b0;
  ulong local_2a8;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_d0;
  SEL local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chipScroll_026b29f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((1.0 <= in_d0) &&
     (dVar8 = in_d0, local_d0 = in_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastChipWidth_026b2a00),
     0.5 <= ABS(in_d0 - dVar8))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_c0,PTR_s_setLastChipWidth__026b29e8);
    dVar8 = 16.0;
    local_108 = 0x4030000000000000;
    local_110 = 0x4010000000000000;
    local_118 = 0x4014000000000000;
    local_120 = 0x4028000000000000;
    local_128 = 0x401c000000000000;
    local_130 = 16.0;
    local_138 = 2.0;
    local_140 = 0.0;
    local_330 = local_d0 - 16.0;
    local_148 = local_330;
    _memset(auStack_190,0,0x40);
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chipViews_026b29c8);
    _objc_retainAutoreleasedReturnValue();
    local_2a8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a8 != 0) {
      lVar4 = *local_180;
      local_2b0 = 0;
      do {
        do {
          if (*local_180 - lVar4 != 0) {
            _objc_enumerationMutation(*local_180 - lVar4,IVar1);
          }
          uVar5 = *(undefined8 *)(local_188 + local_2b0 * 8);
          local_150 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
          uVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_font_0269ea00);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_sizeWithAttributes__026cab08);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          dVar6 = (double)(long)local_330 + 24.0;
          dVar8 = (double)(long)dVar8 + 14.0;
          if ((local_148 < local_130 + dVar6) && (16.0 < local_130)) {
            local_130 = 16.0;
            local_138 = local_138 + local_140 + 5.0;
            local_140 = 0.0;
          }
          dVar7 = local_130;
          dVar9 = local_138;
          dVar10 = dVar6;
          dVar11 = dVar8;
          FUN_01696f30();
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar7,dVar9,dVar10,dVar11,local_150,PTR_s_setFrame__026ca960);
          local_130 = local_130 + dVar6 + 4.0;
          local_330 = dVar8;
          if (dVar8 <= local_140) {
            local_330 = local_140;
          }
          local_140 = local_330;
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_2b0 = 0;
      } while (local_2a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_340 = local_138 + local_140 + 8.0;
    if (local_340 < 80.0) {
      local_340 = 80.0;
    }
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chipHostHeight_026b29b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_340);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    dVar8 = local_d0;
    FUN_01696f7c();
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_chipScroll_026b29f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar8,local_340);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

