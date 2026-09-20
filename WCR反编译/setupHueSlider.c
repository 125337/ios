// setupHueSlider @ 01904dcc

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::setupHueSlider(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  int local_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar5 = 0;
  local_38 = puVar1;
  FUN_019051e4();
  local_60 = uVar5;
  uStack_58 = uVar6;
  local_48 = uVar5;
  uStack_40 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,local_38,PTR_s_setStartPoint__026caa70);
  uVar5 = 0;
  uVar6 = 0x3ff0000000000000;
  FUN_019051e4();
  local_80 = uVar5;
  uStack_78 = uVar6;
  local_70 = uVar5;
  uStack_68 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,local_38,PTR_s_setEndPoint__026ca940);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar1;
  for (local_8c = 0; local_8c < 0x169; local_8c = local_8c + 0x1e) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              ((double)(long)local_8c / 360.0,0x3ff0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithHue_saturation_brightne_026b8910);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_88;
    local_98 = puVar2;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,puVar2);
    _objc_storeStrong(&local_98,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setColors__026ca8d0,local_88);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = local_28;
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = local_28;
  local_a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_38,0);
  return;
}

