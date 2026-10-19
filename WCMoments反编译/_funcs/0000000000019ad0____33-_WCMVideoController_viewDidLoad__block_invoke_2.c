// ___33-[WCMVideoController_viewDidLoad]_block_invoke_2 @0x19ad0

void ___33__WCMVideoController_viewDidLoad__block_invoke_2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(uVar1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = 0x4020000000000000;
  uVar4 = 0x4028000000000000;
  uVar3 = 0x4028000000000000;
  uVar1 = _CGRectMake(0x4020000000000000);
  _objc_msgSend_bezierPathWithOvalInRect_
            (uVar1,uVar2,uVar3,uVar4,&_OBJC_CLASS___UIBezierPath,local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_fill(uVar1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

