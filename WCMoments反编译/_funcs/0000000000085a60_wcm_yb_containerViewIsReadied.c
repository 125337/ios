// wcm_yb_containerViewIsReadied @0x85a60

/* Function Stack Size: 0x10 bytes */

void WCMYBIBToolViewHandler::wcm_yb_containerViewIsReadied(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  
  _objc_msgSend_wcm_yb_containerView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_topView(param_1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSubview_(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_wcm_yb_currentOrientation(param_1,local_38);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = (**(code **)(lVar3 + 0x10))();
  _objc_msgSend_layoutWithExpectOrientation_(param_1,local_38,uVar1);
  (*(code *)PTR__objc_release_00110458)(lVar3);
  return;
}

