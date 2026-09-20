// updateSaturationBrightnessBackground @ 01905f14

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::updateSaturationBrightnessBackground(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 in_d0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar13;
  ulong local_290;
  ulong local_288;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ID local_e0;
  SEL local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e0 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _memset(auStack_128,0,0x40);
  IVar1 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_288 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_288 != 0) {
    lVar8 = *local_118;
    local_290 = 0;
    do {
      do {
        if (*local_118 - lVar8 != 0) {
          _objc_enumerationMutation(*local_118 - lVar8,IVar1);
        }
        uVar9 = *(ulong *)(local_120 + local_290 * 8);
        puVar4 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
        local_e8 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar9 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeFromSuperlayer_026ca7f8);
        }
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_290 = 0;
    } while (local_288 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar4 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_d0;
  local_130 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3,local_130,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar12 = 0;
  uVar10 = 0;
  FUN_019051e4();
  local_190 = uVar10;
  uStack_188 = uVar12;
  local_180 = uVar10;
  uStack_178 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar12,local_130,PTR_s_setStartPoint__026caa70);
  uVar10 = 0;
  uVar11 = 0x3ff0000000000000;
  FUN_019051e4();
  local_1b0 = uVar11;
  uStack_1a8 = uVar10;
  local_1a0 = uVar11;
  uStack_198 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,uVar10,local_130,PTR_s_setEndPoint__026ca940);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_currentHue_026b8948);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_colorWithHue_saturation_brightne_026b8910);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_1b8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_currentHue_026b8948);
  uVar13 = 0x3ff0000000000000;
  uVar10 = uVar13;
  uVar12 = uVar13;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_colorWithHue_saturation_brightne_026b8910);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_1b8;
  local_1c0 = puVar5;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
  puVar4 = local_1c0;
  local_b8 = puVar6;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setColors__026ca8d0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar4 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_d0;
  local_1c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar11,uVar13,uVar10,uVar12,local_1c8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar12 = 0x3ff0000000000000;
  uVar10 = 0;
  FUN_019051e4();
  (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar12,local_1c8,PTR_s_setStartPoint__026caa70);
  uVar12 = 0;
  uVar10 = uVar12;
  FUN_019051e4();
  (*(code *)PTR__objc_msgSend_02578628)(uVar12,uVar10,local_1c8,PTR_s_setEndPoint__026ca940);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_c8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar5 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setColors__026ca8d0);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

