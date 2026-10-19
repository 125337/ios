// rotateCWImage @0xc3ed8

/* WARNING: Removing unreachable block (ram,0x000c3f88) */
/* Function Stack Size: 0x10 bytes */

ID WCMTOCropToolbar::rotateCWImage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_90;
  
  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_90,6);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_systemImageNamed_withConfiguration_
            (&_OBJC_CLASS___UIImage,local_90,&cf_rotate_right_fill);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageWithBaselineOffsetFromBottom_(0x4010000000000000,uVar2,local_90);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}

