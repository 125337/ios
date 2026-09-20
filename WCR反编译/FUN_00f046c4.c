// FUN_00f046c4 @ 00f046c4

void FUN_00f046c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  byte local_49;
  long local_48;
  byte local_39;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_49 = 0;
  bVar1 = false;
  local_38 = param_1;
  if (local_20 == 200) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar2 == 200;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar1) {
    local_80 = &cf_O;
  }
  else {
    if (local_30 == (cfstringStruct *)0x0) {
      local_90 = &cf_O;
    }
    else {
      local_90 = local_30;
    }
    local_80 = local_90;
  }
  local_39 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_80;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_rememberStatus_upload_download__026abb18,
               local_80,0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
             *(undefined8 *)(param_1 + 0x20),local_39 & 1,local_58);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

