// ___31+[WCMTOCropToolbar_cancelImage]_block_invoke @0xc37d0

void ___31__WCMTOCropToolbar_cancelImage__block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
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
  local_38 = param_1;
  _objc_msgSend_bezierPath(&_OBJC_CLASS___UIBezierPath,local_b0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x402e000000000000;
  local_40 = uVar1;
  local_50 = _CGPointMake(0x402e000000000000);
  local_48 = uVar2;
  _objc_msgSend_moveToPoint_(local_50,uVar2,uVar1,local_b0);
  uVar1 = local_40;
  uVar2 = 0x3ff0000000000000;
  local_60 = _CGPointMake(0x3ff0000000000000);
  local_58 = uVar2;
  _objc_msgSend_addLineToPoint_(local_60,uVar2,uVar1,local_b0);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStroke(uVar1,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setLineWidth_(local_40,local_b0);
  _objc_msgSend_stroke(local_40,local_b0);
  _objc_msgSend_bezierPath(&_OBJC_CLASS___UIBezierPath,local_b0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x402e000000000000;
  local_68 = uVar1;
  uVar2 = _CGPointMake(0x3ff0000000000000);
  _objc_msgSend_moveToPoint_(uVar2,uVar3,uVar1,local_b0);
  uVar1 = local_68;
  uVar3 = 0x3ff0000000000000;
  uVar2 = _CGPointMake(0x402e000000000000);
  _objc_msgSend_addLineToPoint_(uVar2,uVar3,uVar1,local_b0);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStroke(uVar1,local_b0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setLineWidth_(0x4000000000000000,local_68,local_b0);
  _objc_msgSend_stroke(local_68,local_b0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

