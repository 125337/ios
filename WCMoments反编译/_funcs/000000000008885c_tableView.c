// tableView @0x8885c

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBSheetView::tableView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (*(long *)(param_1 + (long)_tableView) == 0) {
    uVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);
    uVar1 = _objc_msgSend_initWithFrame_style_
                      (*(undefined8 *)PTR__CGRectZero_001108d8,
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_38,1);
    uVar2 = *(undefined8 *)(local_18 + (long)_tableView);
    *(undefined8 *)(local_18 + (long)_tableView) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setDelegate_(*(undefined8 *)(local_18 + (long)_tableView),local_38,local_18);
    _objc_msgSend_setDataSource_(*(undefined8 *)(local_18 + (long)_tableView),local_38,local_18);
    _objc_msgSend_setEstimatedRowHeight_
              (0x4046000000000000,*(undefined8 *)(local_18 + (long)_tableView),local_38);
    _objc_msgSend_setEstimatedSectionFooterHeight_
              (*(undefined8 *)(local_18 + (long)_tableView),local_38);
    _objc_msgSend_setEstimatedSectionHeaderHeight_
              (0,*(undefined8 *)(local_18 + (long)_tableView),local_38);
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(local_18 + (long)_tableView),local_38);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setAlwaysBounceVertical_(*(undefined8 *)(local_18 + (long)_tableView),local_38,0);
    _objc_msgSend_setSeparatorStyle_(*(undefined8 *)(local_18 + (long)_tableView),local_38,0);
    _objc_msgSend_setContentInsetAdjustmentBehavior_
              (*(undefined8 *)(local_18 + (long)_tableView),local_38,2);
    local_28 = _objc_opt_new(&_OBJC_CLASS___UIView);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_28,local_38);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setTableFooterView_
              (*(undefined8 *)(local_18 + (long)_tableView),local_38,local_28);
    uVar5 = *(undefined8 *)(local_18 + (long)_tableView);
    _objc_opt_self(&objc::class_t::WCMYBIBSheetCell);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_opt_self(&objc::class_t::WCMYBIBSheetCell);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _NSStringFromClass();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_registerClass_forCellReuseIdentifier_(uVar5,local_38,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_storeStrong(&local_28,0);
  }
  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + (long)_tableView));
  return IVar4;
}

