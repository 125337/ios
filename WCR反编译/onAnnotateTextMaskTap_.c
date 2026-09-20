// onAnnotateTextMaskTap: @ 0165ad60

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onAnnotateTextMaskTap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textInputOverlay_026b1e18);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar3 = local_28;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textInputOverlay_026b1e18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_locationInView__026ca798);
  uVar3 = in_d0;
  uVar4 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_30 != 0) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    _CGRectContainsPoint(uVar3,uVar4,in_d2,in_d3,in_d0,in_d1);
    if ((IVar1 & 1) != 0) goto LAB_0165aed0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onAnnotateTextCancel_026b2280);
LAB_0165aed0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

