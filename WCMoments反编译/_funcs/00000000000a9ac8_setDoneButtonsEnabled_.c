// setDoneButtonsEnabled: @0xa9ac8

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setDoneButtonsEnabled_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  
  _objc_msgSend_toolbar(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_doneTextButton(uVar1,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setEnabled_(uVar2,local_48,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_toolbar(param_1,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_doneIconButton(uVar1,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setEnabled_(uVar2,local_48,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

