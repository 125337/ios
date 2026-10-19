// startAnimation @0x7e5d8

/* Function Stack Size: 0x10 bytes */

void WCMYBIBToastView::startAnimation(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double in_d2;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined1 local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_39 = 0;
  bVar2 = false;
  uVar1 = *(long *)(param_1 + (long)_shapeLayer) != 0;
  local_30 = param_2;
  local_28 = param_1;
  if ((bool)uVar1) {
    _objc_msgSend_superlayer(*(undefined8 *)(param_1 + (long)_shapeLayer),local_108);
    local_38 = _objc_retainAutoreleasedReturnValue();
    bVar2 = local_38 != 0;
    local_39 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_38);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  if (bVar2) {
    _objc_msgSend_removeFromSuperlayer(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108);
  }
  _objc_msgSend_layer(&_OBJC_CLASS___CAShapeLayer,local_108);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(local_28 + (long)_shapeLayer);
  *(undefined8 *)(local_28 + (long)_shapeLayer) = uVar3;
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_108);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar4 = _objc_msgSend_CGColor(uVar3,local_108);
  _objc_msgSend_setStrokeColor_(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108,uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_108);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar4 = _objc_msgSend_CGColor(uVar3,local_108);
  _objc_msgSend_setFillColor_(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108,uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_setLineWidth_
            (0x4014000000000000,*(undefined8 *)(local_28 + (long)_shapeLayer),local_108);
  _objc_msgSend_setLineCap_(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108);
  _objc_msgSend_setLineJoin_(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108,&cf_round);
  _objc_msgSend_setStrokeStart_(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108);
  _objc_msgSend_setStrokeEnd_(0,*(undefined8 *)(local_28 + (long)_shapeLayer),local_108);
  _objc_msgSend_bezierPath(&_OBJC_CLASS___UIBezierPath,local_108);
  local_48 = _objc_retainAutoreleasedReturnValue();
  local_50 = 13.0;
  local_78 = _objc_msgSend_bounds(local_28,local_108);
  uVar3 = local_48;
  local_58 = in_d2 / 2.0;
  local_80 = 38.0;
  if (*(long *)(local_28 + (long)_type) == 1) {
    uVar4 = 0x4043000000000000;
    local_90 = _CGPointMake((local_58 - local_50) - local_50 / 2.0);
    local_88 = uVar4;
    _objc_msgSend_moveToPoint_(local_90,uVar4,uVar3,local_108);
    uVar3 = local_48;
    dVar5 = local_80 + local_50;
    local_a0 = _CGPointMake(local_58 - local_50 / 2.0);
    local_98 = dVar5;
    _objc_msgSend_addLineToPoint_(local_a0,dVar5,uVar3,local_108);
    uVar3 = local_48;
    dVar5 = local_80 - local_50;
    local_b0 = _CGPointMake((local_58 + local_50 * 2.0) - local_50 / 2.0);
    local_a8 = dVar5;
    _objc_msgSend_addLineToPoint_(local_b0,dVar5,uVar3,local_108);
  }
  else if (*(long *)(local_28 + (long)_type) == 2) {
    dVar5 = 38.0 - local_50;
    local_c0 = _CGPointMake(local_58 - local_50);
    local_b8 = dVar5;
    _objc_msgSend_moveToPoint_(local_c0,dVar5,uVar3,local_108);
    uVar3 = local_48;
    dVar5 = local_80 + local_50;
    local_d0 = _CGPointMake(local_58 + local_50);
    local_c8 = dVar5;
    _objc_msgSend_addLineToPoint_(local_d0,dVar5,uVar3,local_108);
    uVar3 = local_48;
    dVar5 = local_80 + local_50;
    local_e0 = _CGPointMake(local_58 - local_50);
    local_d8 = dVar5;
    _objc_msgSend_moveToPoint_(local_e0,dVar5,uVar3,local_108);
    uVar3 = local_48;
    dVar5 = local_80 - local_50;
    local_f0 = _CGPointMake(local_58 + local_50);
    local_e8 = dVar5;
    _objc_msgSend_addLineToPoint_(local_f0,dVar5,uVar3,local_108);
  }
  _objc_msgSend_animationWithKeyPath_(&_OBJC_CLASS___CABasicAnimation,local_108);
  local_f8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFromValue_(local_f8,local_108,&PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f468)
  ;
  _objc_msgSend_setToValue_(local_f8,local_108,&PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f478);
  _objc_msgSend_setDuration_(0x3fd3333333333333,local_f8,local_108);
  _objc_msgSend_setRemovedOnCompletion_(local_f8,local_108,0);
  _objc_msgSend_setFillMode_(local_f8,local_108,*(undefined8 *)PTR__kCAFillModeBoth_001101e0);
  uVar3 = local_48;
  _objc_retainAutorelease();
  uVar3 = _objc_msgSend_CGPath(uVar3,local_108);
  _objc_msgSend_setPath_(*(undefined8 *)(local_28 + (long)_shapeLayer),local_108,uVar3);
  _objc_msgSend_layer(local_28,local_108);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSublayer_(uVar3,local_108,*(undefined8 *)(local_28 + (long)_shapeLayer));
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_addAnimation_forKey_
            (*(undefined8 *)(local_28 + (long)_shapeLayer),local_108,local_f8,&cf_strokeEnd);
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_48,0);
  return;
}

