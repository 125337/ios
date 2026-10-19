// touchesBegan:withEvent: @0x88044

/* Function Stack Size: 0x20 bytes */

void WCMYBIBSheetView::touchesBegan_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_78;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_anyObject(local_28,local_78);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_locationInView_(uVar2,local_78,local_18);
  uVar5 = in_d1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_tableView(local_18,local_78);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_frame(uVar2,local_78);
  uVar1 = _CGRectContainsPoint(uVar4,uVar5,in_d2,in_d3,uVar3,in_d1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_hideWithAnimation_(local_18,local_78,1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

