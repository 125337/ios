// wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation: @0x68204

/* Function Stack Size: 0x38 bytes */

double WCMYBIBImageLayout::wcm_yb_maximumZoomScaleWithContainerSize_imageSize_orientation_
                 (ID param_1,SEL param_2,CGSize param_3,CGSize param_4,long_long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double local_d0;
  double local_c8;
  undefined8 local_a8;
  double local_70;
  double local_18;
  
  dVar3 = (double)_objc_msgSend_maxZoomScale(param_1);
  if (1.0 <= dVar3) {
    local_18 = (double)_objc_msgSend_maxZoomScale(param_1,local_a8);
  }
  else if ((param_3.field0_0x0 <= 0.0) || (param_3.field1_0x8 <= 0.0)) {
    local_18 = 0.0;
  }
  else {
    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_a8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar3 = (double)_objc_msgSend_scale(uVar1,local_a8);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (0.0 < dVar3) {
      local_c8 = (param_4.field0_0x0 / dVar3) / param_3.field0_0x0;
      dVar3 = (param_4.field1_0x8 / dVar3) / param_3.field1_0x8;
      lVar2 = _objc_msgSend_fillTypeByOrientation_(param_1,local_a8,param_5);
      local_70 = local_c8;
      if (lVar2 != 0) {
        if (lVar2 != 1) {
          return 0.0;
        }
        if (local_c8 < dVar3) {
          local_c8 = dVar3;
        }
        local_70 = local_c8;
      }
      if (1.0 <= local_70) {
        local_d0 = local_70;
      }
      else {
        local_d0 = 1.0;
      }
      local_18 = (double)_objc_msgSend_zoomScaleSurplus(param_1,local_a8);
      local_18 = local_d0 * local_18;
    }
    else {
      local_18 = 0.0;
    }
  }
  return local_18;
}

