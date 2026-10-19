// setDisableRotationButtons: @0xc51b0

/* Function Stack Size: 0x14 bytes */

void WCMTOCropToolbar::setDisableRotationButtons_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_30;
  
  if ((*(byte *)(param_1 + (long)_disableRotationButtons) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_disableRotationButtons) = (byte)param_3 & 1;
    _objc_msgSend_setEnabled_
              (*(undefined8 *)(param_1 + (long)_rotateClockwiseButton),local_30,
               (param_3 & 0xff ^ 1) & 1);
    _objc_msgSend_setEnabled_
              (*(undefined8 *)(param_1 + (long)_rotateCounterclockwiseButton),local_30,
               (param_3 & 0xff ^ 1) & 1);
  }
  return;
}

