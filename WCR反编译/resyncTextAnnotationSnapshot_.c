// resyncTextAnnotationSnapshot: @ 0164fbb0

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::resyncTextAnnotationSnapshot_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 in_d2;
  undefined8 in_d3;
  long local_78 [8];
  long local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0164fd1c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      _UIGraphicsBeginImageContextWithOptions(in_d2,in_d3,0,0);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      _UIGraphicsGetCurrentContext();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_renderInContext__0269e300,lVar3);
      (*(code *)PTR__objc_release_02578630)();
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_78[0] = lVar2;
      _UIGraphicsEndImageContext();
      FUN_0164fe20(local_28,local_78[0]);
      _objc_storeStrong(local_78,0);
    }
    local_2c = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

