// annotateStrokeLayerSupportsStyle: @ 0164e2dc

/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatCropViewController::annotateStrokeLayerSupportsStyle_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_028c6008);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_strokeColor_026a0398);
      if (uVar1 == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_strokeColor_026a0398);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
        _CGColorEqualToColor(uVar1,puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((uVar1 & 1) == 0) {
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

