// ___43-[WCMYBIBSheetView_showToView:orientation:]_block_invoke @0x87c40

void ___43__WCMYBIBSheetView_showToView_orientation___block_invoke(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  
  _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_colorWithAlphaComponent_
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYBIBSheetView::_backAlpha),uVar2,
             local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + 0x20),local_70);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYBIBSheetView::_tableShowFrame);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uVar6 = puVar1[3];
  uVar4 = puVar1[2];
  _objc_msgSend_tableView(*(undefined8 *)(param_1 + 0x20),local_70);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar3,uVar5,uVar4,uVar6,uVar2,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

