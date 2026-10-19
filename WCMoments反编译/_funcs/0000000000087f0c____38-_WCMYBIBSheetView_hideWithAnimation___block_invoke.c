// ___38-[WCMYBIBSheetView_hideWithAnimation:]_block_invoke @0x87f0c

void ___38__WCMYBIBSheetView_hideWithAnimation___block_invoke(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYBIBSheetView::_tableHideFrame);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uVar6 = puVar1[3];
  uVar4 = puVar1[2];
  _objc_msgSend_tableView(*(undefined8 *)(param_1 + 0x20));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar3,uVar5,uVar4,uVar6,uVar2,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_colorWithAlphaComponent_(0,uVar2,local_80);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + 0x20),local_80);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

