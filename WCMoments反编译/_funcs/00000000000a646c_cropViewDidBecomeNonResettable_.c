// cropViewDidBecomeNonResettable: @0xa646c

/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewController::cropViewDidBecomeNonResettable_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_toolbar(local_18,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setResetButtonEnabled_(uVar1,local_48,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

