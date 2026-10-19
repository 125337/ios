// ___35-[WCMYBIBToolViewHandler_sheetView]_block_invoke @0x863f0

void ___35__WCMYBIBToolViewHandler_sheetView__block_invoke(long param_1)

{
  long lVar1;
  undefined8 local_48;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = param_1;
  local_20 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    _objc_msgSend_wcm_yb_currentData(local_30,local_48);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    local_18 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

