// ___56-[WCMCacheController_tableView:didSelectRowAtIndexPath:]_block_invoke.1570 @0x2ed68

void ___56__WCMCacheController_tableView_didSelectRowAtIndexPath___block_invoke_1570(long param_1)

{
  long lVar1;
  undefined8 local_60;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  _objc_msgSend_clearImages(*(undefined8 *)(param_1 + 0x20),local_60);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_clearImages(*(undefined8 *)(param_1 + 0x20),local_60);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    local_50 = PTR___NSConcreteStackBlock_001104f0;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = ___56__WCMCacheController_tableView_didSelectRowAtIndexPath___block_invoke_2;
    local_38 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_30 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(lVar1 + 0x10))(lVar1,&local_50);
    (*(code *)PTR__objc_release_00110458)(lVar1);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

