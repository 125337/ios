// setImageCropFrame: @0xab298

/* Function Stack Size: 0x30 bytes */

void WCMTOCropViewController::setImageCropFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  undefined8 local_90;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImageCropFrame_
            (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8,uVar1,local_90);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

