// ___51-[WCMYBIBImageData_setOriginImageAndLoadWithImage:]_block_invoke @0x7ae88

void ___51__WCMYBIBImageData_setOriginImageAndLoadWithImage___block_invoke(long param_1)

{
  undefined8 local_48;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_30 != 0) {
    _objc_msgSend_setOriginImage_(local_30,local_48,local_20);
    _objc_msgSend_loadOriginImage(local_30,local_48);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

