// cancelImage @0xc36a4

/* WARNING: Removing unreachable block (ram,0x000c372c) */
/* Function Stack Size: 0x10 bytes */

ID WCMTOCropToolbar::cancelImage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_60;
  
  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_60,6);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_systemImageNamed_withConfiguration_(&_OBJC_CLASS___UIImage,local_60,&cf_xmark);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

