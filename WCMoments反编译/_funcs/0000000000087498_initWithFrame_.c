// initWithFrame: @0x87498

/* Function Stack Size: 0x30 bytes */

ID WCMYBIBSheetView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_70;
  ID local_50;
  class_t *local_48;
  SEL local_40;
  long local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  local_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_38 = 0;
  local_48 = &objc::class_t::WCMYBIBSheetView;
  local_50 = param_1;
  local_40 = param_2;
  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");
  _objc_storeStrong(&local_38);
  if (local_38 != 0) {
    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cancel(uVar2,local_70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(local_38 + _cancelText);
    *(undefined8 *)(local_38 + _cancelText) = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    *(undefined8 *)(local_38 + _maxHeightScale) = 0x3fe6666666666666;
    *(undefined8 *)(local_38 + _showDuration) = 0x3fc999999999999a;
    *(undefined8 *)(local_38 + _hideDuration) = 0x3fb999999999999a;
    *(undefined8 *)(local_38 + _cellHeight) = 0x4049000000000000;
    *(undefined8 *)(local_38 + _backAlpha) = 0x3fd3333333333333;
    _objc_msgSend_array(&_OBJC_CLASS___NSMutableArray,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(local_38 + _actions);
    *(undefined8 *)(local_38 + _actions) = uVar2;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    lVar1 = local_38;
    _objc_msgSend_tableView(local_38,local_70);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(lVar1,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar5 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  return IVar5;
}

