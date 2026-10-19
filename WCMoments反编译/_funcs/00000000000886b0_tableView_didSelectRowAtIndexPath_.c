// tableView:didSelectRowAtIndexPath: @0x886b0

/* Function Stack Size: 0x20 bytes */

void WCMYBIBSheetView::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 local_38;
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
  lVar1 = _objc_msgSend_section(local_30,local_40);
  if (lVar1 == 0) {
    _objc_msgSend_actions(local_18,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_row(local_30,local_40);
    _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_40,uVar3);
    local_38 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_action(local_38,local_40);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar1 != 0) {
      _objc_msgSend_action(local_38,local_40);
      lVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_currentdata(local_18,local_40);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      (*(code *)PTR__objc_release_00110458)(uVar2);
      (*(code *)PTR__objc_release_00110458)(lVar4);
      (*(code *)PTR__objc_release_00110458)(lVar1);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    _objc_msgSend_hideWithAnimation_(local_18,local_40,1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

