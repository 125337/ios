// FUN_00f105d0 @ 00f105d0

void FUN_00f105d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_39;
  long local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_39 = false;
  if (((local_30 == 0) && (local_39 = true, local_20 != 200)) && (local_39 = true, local_20 != 0xcc)
     ) {
    local_39 = local_20 == 0x194;
  }
  bVar1 = (bool)local_39 == false;
  local_38 = param_1;
  if (bVar1) {
    local_78 = *(cfstringStruct **)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_describeHTTPError_status_body__026abba0,local_30,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_78;
  }
  else {
    local_78 = &cf__Rd;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_78;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_39 & 1,local_48)
    ;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

