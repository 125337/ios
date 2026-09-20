// scrollViewDidZoom: @ 01d5cf74

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::scrollViewDidZoom_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  double dVar2;
  double dVar3;
  double in_d2;
  double in_d3;
  double local_140;
  double local_130;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  dVar2 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
  local_130 = (in_d2 - dVar2) * 0.5;
  if (local_130 < 0.0) {
    local_130 = 0.0;
  }
  dVar2 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
  local_140 = (in_d3 - dVar2) * 0.5;
  if (local_140 < 0.0) {
    local_140 = 0.0;
  }
  dVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
  dVar3 = 0.5;
  local_130 = local_130 + dVar2 * 0.5;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
  local_140 = local_140 + dVar3 * 0.5;
  FUN_01d47748();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_130,local_140);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_38,0);
  return;
}

