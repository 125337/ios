// FUN_00f05244 @ 00f05244

/* WARNING: Type propagation algorithm not settling */

void FUN_00f05244(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_39;
  long local_38;
  long local_30 [3];
  long local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  local_39 = false;
  if ((((local_30[0] == 0) && (local_39 = true, local_30[2] != 0xcf)) &&
      (local_39 = true, local_30[2] != 200)) &&
     ((local_39 = true, local_30[2] != 0x12d && (local_39 = true, local_30[2] != 0x12e)))) {
    local_39 = local_30[2] == 0x194;
  }
  bVar1 = (bool)local_39 == false;
  local_38 = param_1;
  if (bVar1) {
    local_78 = *(cfstringStruct **)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_describeHTTPError_status__026abb48,local_30[0],local_30[2]);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_78;
  }
  else {
    local_78 = &cf_W;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_78;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (local_30[2] == 0x191) {
    _objc_storeStrong(0,&local_48,&cf_W);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_rememberStatus_upload_download__026abb18,
               local_48,0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
             *(undefined8 *)(param_1 + 0x20),local_39 & 1,local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

