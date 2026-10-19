// setDoneButtonColor: @0xaa180

/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewController::setDoneButtonColor_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_msgSend_toolbar(local_18,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDoneButtonColor_(uVar2,local_50,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

