// FUN_00f04cbc @ 00f04cbc

void FUN_00f04cbc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  local_41 = local_38 == (cfstringStruct *)0x0 && (local_20 == 200 || local_20 == 0x194);
  bVar2 = false;
  bVar1 = false;
  local_40 = param_1;
  if (local_38 == (cfstringStruct *)0x0 && (local_20 == 200 || local_20 == 0x194)) {
    local_98 = &cf_W;
  }
  else {
    local_58 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    bVar1 = local_58 == (cfstringStruct *)0x0;
    local_a8 = local_58;
    if (bVar1) {
      local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_HTTP_ld);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_68;
    }
    local_98 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_98;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_rememberStatus_upload_download__026abb18,
               local_50,0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
             *(undefined8 *)(param_1 + 0x20),local_41 & 1,local_50);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

