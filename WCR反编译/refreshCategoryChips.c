// refreshCategoryChips @ 01a8f1c0

/* Function Stack Size: 0x10 bytes */

void WCRefineGradientPalettePickerViewController::refreshCategoryChips(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  uint local_184;
  ulong local_160;
  ulong local_158;
  ID local_128;
  undefined *local_118;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_categoryNames_026bd948);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  _memset(auStack_108,0,0x40);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_categoryStack_026bd940);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_158 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar7 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar7,IVar5);
        }
        uVar8 = *(ulong *)(local_100 + local_160 * 8);
        puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_c8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar8 & 1) != 0) {
          uVar8 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98);
          bVar2 = false;
          bVar1 = false;
          local_184 = 0;
          if (-1 < (long)uVar8) {
            uVar8 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98);
            puVar6 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
            puVar3 = local_c0;
            local_184 = 0;
            if ((long)uVar8 < (long)puVar6) {
              uVar8 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98);
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar8);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = true;
              local_128 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentCategory_026bd858);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              puVar6 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8);
              local_184 = (uint)puVar6;
              local_118 = puVar3;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
          uVar8 = local_c8;
          if ((local_184 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            uVar8 = local_c8;
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          else {
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_02323ee8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemFillColor_026ad200);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            uVar8 = local_c8;
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

