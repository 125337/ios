// applyCornerRadius:spacing: @ 0177eb48

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginGroupPillControl::applyCornerRadius_spacing_
               (ID param_1,SEL param_2,double param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  double local_b0;
  double local_88;
  double local_80;
  
  local_80 = param_3;
  if (param_3 <= 0.0) {
    local_80 = 0.0;
  }
  *(double *)(param_1 + (long)_cornerRadius) = local_80;
  local_88 = param_4;
  if (param_4 <= 0.0) {
    local_88 = 0.0;
  }
  *(double *)(param_1 + (long)_itemSpacing) = local_88;
  uVar3 = *(undefined8 *)(param_1 + (long)_cornerRadius);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_b0 = *(double *)(param_1 + (long)_cornerRadius) - *(double *)(param_1 + (long)_itemSpacing);
  if (local_b0 <= 0.0) {
    local_b0 = 0.0;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedBackgroundView_0269e620);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setNeedsLayout_0269deb8);
  return;
}

