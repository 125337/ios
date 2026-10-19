// ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke_3 @0x7418c

void ___34__WCMYBIBImageData_loadImageBlock__block_invoke_3(long param_1)

{
  undefined8 local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + 0x28);
  if (local_28 != 0) {
    _objc_msgSend_setLoadingStatus_(local_28,local_40,0);
    _objc_msgSend_setOriginImageAndLoadWithImage_
              (local_28,local_40,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

