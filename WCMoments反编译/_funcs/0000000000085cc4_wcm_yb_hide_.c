// wcm_yb_hide: @0x85cc4

/* Function Stack Size: 0x14 bytes */

void WCMYBIBToolViewHandler::wcm_yb_hide_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _objc_msgSend_topView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_38,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_sheetView(param_1,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_hideWithAnimation_(uVar1,local_38,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

