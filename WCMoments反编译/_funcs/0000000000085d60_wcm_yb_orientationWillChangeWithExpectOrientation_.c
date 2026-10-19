// wcm_yb_orientationWillChangeWithExpectOrientation: @0x85d60

/* Function Stack Size: 0x18 bytes */

void WCMYBIBToolViewHandler::wcm_yb_orientationWillChangeWithExpectOrientation_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _objc_msgSend_sheetView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_hideWithAnimation_(uVar1,local_38,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

