// ___34+[WCMTOCropToolbar_rotateCCWImage]_block_invoke @0xc3b50

void ___34__WCMTOCropToolbar_rotateCCWImage__block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_120;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  uVar2 = 0x4022000000000000;
  uVar7 = 0x4028000000000000;
  uVar3 = 0x4028000000000000;
  local_38 = param_1;
  local_60 = _CGRectMake();
  local_58 = uVar2;
  local_50 = uVar3;
  local_48 = uVar7;
  _objc_msgSend_bezierPathWithRect_
            (local_60,uVar2,uVar3,uVar7,&_OBJC_CLASS___UIBezierPath,local_120);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_120);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(uVar2,local_120);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_fill(local_40,local_120);
  _objc_msgSend_bezierPath(&_OBJC_CLASS___UIBezierPath,local_120);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4008000000000000;
  local_68 = uVar2;
  local_78 = _CGPointMake();
  local_70 = uVar3;
  _objc_msgSend_moveToPoint_(local_78,uVar3,uVar2,local_120);
  uVar2 = local_68;
  uVar3 = 0x4018000000000000;
  local_88 = _CGPointMake();
  local_80 = uVar3;
  _objc_msgSend_addLineToPoint_(local_88,uVar3,uVar2,local_120);
  uVar2 = local_68;
  uVar3 = 0;
  local_98 = _CGPointMake(0x4024000000000000);
  local_90 = uVar3;
  _objc_msgSend_addLineToPoint_(local_98,uVar3,uVar2,local_120);
  uVar2 = local_68;
  uVar3 = 0x4008000000000000;
  local_a8 = _CGPointMake(0x4014000000000000);
  local_a0 = uVar3;
  _objc_msgSend_addLineToPoint_(local_a8,uVar3,uVar2,local_120);
  _objc_msgSend_closePath(local_68,local_120);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_120);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(uVar2,local_120);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_fill(local_68,local_120);
  _objc_msgSend_bezierPath(&_OBJC_CLASS___UIBezierPath,local_120);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x4008000000000000;
  local_b0 = uVar2;
  uVar3 = _CGPointMake(0x4024000000000000);
  _objc_msgSend_moveToPoint_(uVar3,uVar7,uVar2,local_120);
  uVar2 = local_b0;
  uVar4 = 0x4026000000000000;
  uVar3 = _CGPointMake();
  uVar5 = 0x4008000000000000;
  uVar7 = _CGPointMake(0x402e000000000000);
  uVar6 = 0x4017a3d70a3d70a4;
  uVar1 = _CGPointMake(0x4031800000000000);
  _objc_msgSend_addCurveToPoint_controlPoint1_controlPoint2_
            (uVar3,uVar4,uVar7,uVar5,uVar1,uVar6,uVar2,local_120);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_120);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStroke(uVar2,local_120);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setLineWidth_(0x3ff0000000000000,local_b0,local_120);
  _objc_msgSend_stroke(local_b0,local_120);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

