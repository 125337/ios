// ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke_3.100 @0x7a06c

void ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_3_100(long param_1)

{
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  local_30 = _objc_loadWeakRetained(param_1 + 0x28);
  if (local_30 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_20);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

