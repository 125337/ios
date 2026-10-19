// ___29+[WCMTOCropToolbar_doneImage]_block_invoke @0xc3544

void ___29__WCMTOCropToolbar_doneImage__block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = param_1;
  _objc_msgSend_bezierPath(&_OBJC_CLASS___UIBezierPath,local_80);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x401c000000000000;
  local_30 = uVar1;
  uVar2 = _CGPointMake();
  _objc_msgSend_moveToPoint_(uVar2,uVar3,uVar1,local_80);
  uVar1 = local_30;
  uVar3 = 0x4028000000000000;
  uVar2 = _CGPointMake(0x4018000000000000);
  _objc_msgSend_addLineToPoint_(uVar2,uVar3,uVar1,local_80);
  uVar1 = local_30;
  uVar3 = 0x3ff0000000000000;
  uVar2 = _CGPointMake(0x4030000000000000);
  _objc_msgSend_addLineToPoint_(uVar2,uVar3,uVar1,local_80);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_80);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setStroke(uVar1,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setLineWidth_(0x4000000000000000,local_30,local_80);
  _objc_msgSend_stroke(local_30,local_80);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

