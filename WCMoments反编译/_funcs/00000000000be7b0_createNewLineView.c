// createNewLineView @0xbe7b0

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropOverlayView::createNewLineView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  local_28 = _objc_msgSend_initWithFrame_
                       (*(undefined8 *)PTR__CGRectZero_001108d8,
                        *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
                        *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_40);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(local_28,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_addSubview_(local_18,local_40,local_28);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

