// FUN_00f078fc @ 00f078fc

/* WARNING: Type propagation algorithm not settling */

void FUN_00f078fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  long lVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_50;
  long local_38 [4];
  long local_18;
  
  local_38[2] = 0;
  local_38[3] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  bVar1 = false;
  if ((local_38[0] == 0) && (bVar1 = false, 199 < local_38[3])) {
    bVar1 = local_38[3] < 300;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (bVar1 == false) {
      local_88 = *(cfstringStruct **)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_describeHTTPError_status_body__026abba0,local_38[0],local_38[3],
                 local_38[2]);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    else {
      local_88 = &cf__YN0R;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,bVar1,local_88);
    if (bVar1 == false) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

