// drawRing:color: @0x7c14

/* Function Stack Size: 0x20 bytes */

void WCMQQRefreshControl::drawRing_color_(ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double local_118;
  double local_110;
  undefined8 local_a8;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = 0x4026000000000000;
  uVar2 = _CGPointMake(0x4026000000000000);
  _objc_msgSend_bezierPathWithArcCenter_radius_startAngle_endAngle_clockwise_
            (uVar2,uVar3,0x4022000000000000,0xbff921fb54442d18,0x4012d97c7f3321d2,
             &_OBJC_CLASS___UIBezierPath,local_a8,1);
  local_48 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_a8);
  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_a8,1);
  uVar2 = local_48;
  _objc_retainAutorelease();
  uVar2 = _objc_msgSend_CGPath(uVar2,local_a8);
  _objc_msgSend_qqRingLayer(local_28,local_a8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setPath_(uVar3,local_a8,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar3 = _objc_msgSend_CGColor(uVar2,local_a8);
  _objc_msgSend_qqRingLayer(local_28,local_a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFillColor_(uVar1,local_a8,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = local_40;
  _objc_retainAutorelease();
  uVar2 = _objc_msgSend_CGColor(uVar2,local_a8);
  _objc_msgSend_qqRingLayer(local_28,local_a8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStrokeColor_(uVar3,local_a8,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_qqRingLayer(local_28,local_a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setLineWidth_(0x4004000000000000,uVar2,local_a8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = *(undefined8 *)PTR__kCALineCapRound_001101f8;
  _objc_msgSend_qqRingLayer(local_28,local_a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setLineCap_(uVar2,local_a8,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (local_38 <= 1.0) {
    local_110 = local_38;
  }
  else {
    local_110 = 1.0;
  }
  if (local_110 <= 0.03) {
    local_118 = 0.03;
  }
  else {
    local_118 = local_110;
  }
  _objc_msgSend_qqRingLayer(local_28,local_a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStrokeEnd_(local_118,uVar2,local_a8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_a8);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

