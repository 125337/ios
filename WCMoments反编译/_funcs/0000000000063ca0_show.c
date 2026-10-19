// show @0x63ca0

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::show(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_keyWindow(uVar1,local_40);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_showToView_(param_1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

