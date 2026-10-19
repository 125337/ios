// ___56-[WCMCacheController_tableView:didSelectRowAtIndexPath:]_block_invoke @0x2eb14

void ___56__WCMCacheController_tableView_didSelectRowAtIndexPath___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_msgSend_root(*(undefined8 *)(param_1 + 0x28),local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_lastPathComponent(uVar2,local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringByAppendingString_(&cf_WCMomentsCacheLimit_,local_48);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setObject_forKey_(uVar1,local_48,uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_root(*(undefined8 *)(param_1 + 0x28),local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _TrimCache();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_tableView(*(undefined8 *)(param_1 + 0x28),local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_reloadData(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

