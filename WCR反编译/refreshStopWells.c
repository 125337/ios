// refreshStopWells @ 01a8d90c

/* Function Stack Size: 0x10 bytes */

void WCRefineGradientPalettePickerViewController::refreshStopWells(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_160;
  ulong local_158;
  ulong local_118;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar1 = PTR_WCRefineGradientPalette_026ce910;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewStops_026bd978);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_normalizedHexStops__026acc78);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  _memset(auStack_108,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stopStack_026bd908);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_158 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar6 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,IVar3);
        }
        uVar7 = *(ulong *)(local_100 + local_160 * 8);
        puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_c8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar4 = local_c8;
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_viewWithTag__026cabe0,100);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = local_110;
          local_118 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_tag_026cab98);
          if ((-1 < (long)uVar7) &&
             (puVar5 = local_c0,
             (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
             puVar1 = PTR_WCRefineGradientPalette_026ce910, (long)uVar7 < (long)puVar5)) {
            puVar5 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,uVar7);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_colorFromHex__026acc68);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          _objc_storeStrong(&local_118);
          _objc_storeStrong(&local_110,0);
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

