// respondsToTapDouble: @0x6e600

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::respondsToTapDouble_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined8 local_a8;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_yb_isRotating(local_18,local_a8);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_hideTailoringImageView(local_18,local_a8);
    _objc_msgSend_imageScrollView(local_18,local_a8);
    local_38 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_viewForZoomingInScrollView_(local_18,local_a8,local_38);
    local_40 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_locationInView_(local_28,local_a8,local_40);
    uVar8 = in_d1;
    uVar5 = _objc_msgSend_bounds(local_40,local_a8);
    uVar3 = _CGRectContainsPoint(uVar5,uVar8,in_d2,in_d3,uVar4,in_d1);
    if ((uVar3 & 1) == 0) {
      local_2c = 1;
    }
    else {
      dVar6 = (double)_objc_msgSend_zoomScale(local_38,local_a8);
      dVar7 = (double)_objc_msgSend_maximumZoomScale(local_38,local_a8);
      uVar8 = local_38;
      if (dVar6 == dVar7) {
        _objc_msgSend_setZoomScale_animated_(0x3ff0000000000000,local_38,local_a8,1);
      }
      else {
        uVar9 = 0x3ff0000000000000;
        uVar5 = 0x3ff0000000000000;
        uVar4 = _CGRectMake(uVar4);
        _objc_msgSend_zoomToRect_animated_(uVar4,in_d1,uVar5,uVar9,uVar8,local_a8,1);
      }
      local_2c = 0;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

