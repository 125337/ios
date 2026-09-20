// refreshDirectionChips @ 01a8e940

/* Function Stack Size: 0x10 bytes */

void WCRefineGradientPalettePickerViewController::refreshDirectionChips(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint local_33c;
  ulong local_320;
  ulong local_318;
  ulong local_280;
  ulong local_278;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  undefined8 local_1c0;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  byte local_191;
  ID local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ID local_148;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewStops_026bd978);
  _objc_retainAutoreleasedReturnValue();
  local_140 = param_1;
  _memset(auStack_188,0,0x40);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_directionStack_026bd890);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_278 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_278 != 0) {
    lVar6 = *local_178;
    local_280 = 0;
    do {
      do {
        if (*local_178 - lVar6 != 0) {
          _objc_enumerationMutation(*local_178 - lVar6,IVar2);
        }
        uVar7 = *(ID *)(local_180 + local_280 * 8);
        puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_148 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        IVar1 = local_148;
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_tag_026cab98);
          IVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_direction_026a5bb0);
          local_191 = IVar1 == IVar4;
          uVar10 = 0x4000000000000000;
          if (!(bool)local_191) {
            uVar10 = 0x3fe0000000000000;
          }
          IVar1 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar10);
          (*(code *)PTR__objc_release_02578630)(IVar1);
          local_1a1 = 0;
          local_1b1 = 0;
          if ((local_191 & 1) == 0) {
            uVar10 = 0x3fe6666666666666;
            uVar11 = 0x3fe0000000000000;
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
            _objc_retainAutoreleasedReturnValue();
            local_1b1 = 1;
            local_1b0 = puVar3;
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
          }
          else {
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            uVar10 = DAT_02332e78;
            uVar11 = DAT_02332e70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            local_1a1 = 1;
            local_1a0 = puVar3;
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
          }
          IVar1 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar1);
          if ((local_1b1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          if ((local_1a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          local_1c0 = 0;
          _memset(auStack_208,0,0x40);
          IVar1 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(IVar1);
          local_318 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                     0x10);
          if (local_318 != 0) {
            lVar8 = *local_1f8;
            local_320 = 0;
            do {
              do {
                if (*local_1f8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1f8 - lVar8,IVar4);
                }
                uVar9 = *(ulong *)(local_200 + local_320 * 8);
                local_1c8 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_name_0269d828);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                uVar7 = local_1c8;
                local_33c = 0;
                if ((uVar5 & 1) != 0) {
                  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                  local_33c = (uint)uVar7;
                }
                (*(code *)PTR__objc_release_02578630)(uVar9);
                if ((local_33c & 1) != 0) {
                  _objc_storeStrong(&local_1c0,local_1c8);
                  goto LAB_01a8efa0;
                }
                local_320 = local_320 + 1;
              } while (local_320 < local_318);
              local_318 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                         auStack_128,0x10);
              local_320 = 0;
            } while (local_318 != 0);
          }
LAB_01a8efa0:
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar11,local_1c0,PTR_s_setFrame__026ca960);
          IVar1 = local_140;
          uVar10 = local_1c0;
          puVar3 = PTR_WCRefineGradientPalette_026ce910;
          IVar4 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_tag_026cab98);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_configureLayer_hexStops_directio_026bd830,uVar10,IVar1,IVar4);
          _objc_storeStrong(&local_1c0);
          _objc_storeStrong(&local_190,0);
        }
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_280 = 0;
    } while (local_278 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

