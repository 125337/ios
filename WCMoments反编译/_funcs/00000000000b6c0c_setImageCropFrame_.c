// setImageCropFrame: @0xb6c0c

/* Function Stack Size: 0x30 bytes */

void WCMTOCropView::setImageCropFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ulong uVar1;
  undefined8 local_88;
  
  uVar1 = _objc_msgSend_initialSetupPerformed(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_setRestoreImageCropFrame_
              (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8,param_1,local_88);
  }
  else {
    _objc_msgSend_updateToImageCropFrame_
              (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8,param_1,local_88);
  }
  return;
}

