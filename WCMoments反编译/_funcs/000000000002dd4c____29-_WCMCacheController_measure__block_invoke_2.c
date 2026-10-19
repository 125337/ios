// ___29-[WCMCacheController_measure]_block_invoke_2 @0x2dd4c

void ___29__WCMCacheController_measure__block_invoke_2(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_setBytes_(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_msgSend_tableView(*(undefined8 *)(param_1 + 0x20),local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_reloadData(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

