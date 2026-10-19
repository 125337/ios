// tableView:cellForRowAtIndexPath: @0x88400

/* Function Stack Size: 0x20 bytes */

ID WCMYBIBSheetView::tableView_cellForRowAtIndexPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_48;
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
  uVar4 = local_28;
  _objc_opt_self(&objc::class_t::WCMYBIBSheetCell);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _NSStringFromClass();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dequeueReusableCellWithIdentifier_(uVar4,local_48);
  local_38 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  lVar3 = _objc_msgSend_section(local_30,local_48);
  if (lVar3 == 0) {
    _objc_msgSend_line(local_38,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar4,local_48,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_actions(local_18,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend_row(local_30,local_48);
    _objc_msgSend_objectAtIndexedSubscript_(uVar4,local_48,uVar1);
    local_40 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_name(local_40,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_titleLabel(local_38,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar1,local_48,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_storeStrong(&local_40,0);
  }
  else {
    _objc_msgSend_line(local_38,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar4,local_48,1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_cancelText(local_18,local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_titleLabel(local_38,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar1,local_48,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  uVar4 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}

