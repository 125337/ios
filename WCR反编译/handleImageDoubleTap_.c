// handleImageDoubleTap: @ 0196d024

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerPreviewViewController::handleImageDoubleTap_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double in_d2;
  double in_d3;
  ID local_f0;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageScrollView_026ba150);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = IVar2;
  if (IVar2 == 0) {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gifContentView_026ba148);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_f0;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_40 != 0) && (local_48 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_zoomScale_026a12e0);
    dVar4 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_minimumZoomScale_026ba158);
    IVar1 = local_40;
    if (in_d0 <= dVar4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_48);
      dVar3 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_maximumZoomScale_026ba168);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      in_d2 = in_d2 / (dVar3 * 0.5);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      IVar1 = local_40;
      in_d3 = in_d3 / (dVar3 * 0.5);
      in_d0 = in_d0 - in_d2 / 2.0;
      dVar4 = dVar4 - in_d3 / 2.0;
      FUN_0196d370();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,dVar4,in_d2,in_d3,IVar1,PTR_s_zoomToRect_animated__026ba170,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_minimumZoomScale_026ba158);
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setZoomScale_animated__026ba160,1);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

