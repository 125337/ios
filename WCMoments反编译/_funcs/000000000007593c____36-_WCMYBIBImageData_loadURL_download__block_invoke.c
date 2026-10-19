// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke @0x7593c

void ___36__WCMYBIBImageData_loadURL_download__block_invoke(long param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_48;
  long local_38;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  _objc_msgSend_requestModifier(*(undefined8 *)(param_1 + 0x20),local_60);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    local_70 = local_28;
  }
  else {
    _objc_msgSend_requestModifier(*(undefined8 *)(param_1 + 0x20),local_60);
    local_38 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(local_38 + 0x10))(local_38,*(undefined8 *)(param_1 + 0x20),local_28);
    local_70 = _objc_retainAutoreleasedReturnValue();
    local_48 = local_70;
  }
  local_18 = (*(code *)PTR__objc_retain_00110460)(local_70);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_00110458)(local_48);
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

