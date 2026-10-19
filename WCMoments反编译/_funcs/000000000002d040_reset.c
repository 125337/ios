// reset @0x2d040

/* Function Stack Size: 0x10 bytes */

void WCMHeaderSizeController::reset(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  _objc_msgSend_slider(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setValue_(0x3f800000,uVar1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_changed(param_1,local_28);
  return;
}

