// ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_3 @0x7bdf0

void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_3
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    if (local_20 == 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_20);
    }
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

