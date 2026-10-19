// reset @0xadac4

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewControllerTransitioning::reset(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_b0;
  
  _objc_msgSend_setImage_(param_1);
  _objc_msgSend_setToView_(param_1,local_b0,0);
  _objc_msgSend_setFromView_(param_1,local_b0,0);
  puVar1 = PTR__CGRectZero_001108d8;
  _objc_msgSend_setFromFrame_
            (*(undefined8 *)PTR__CGRectZero_001108d8,*(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
             *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),param_1,local_b0);
  _objc_msgSend_setToFrame_
            (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18),param_1,local_b0);
  _objc_msgSend_setPrepareForTransitionHandler_(param_1,local_b0,0);
  return;
}

