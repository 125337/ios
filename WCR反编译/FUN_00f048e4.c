// FUN_00f048e4 @ 00f048e4

void FUN_00f048e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_85;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = param_1;
  if ((local_30 == 0x195) || (local_30 == 0x1f5)) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00f04cbc;
    local_68 = &DAT_02582258;
    local_58 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_performMethod_url_headers_body_k_026abb38,&cf_GET,uVar5,uVar6,0,0,
               &local_80);
    local_84 = 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_85 = false;
    if ((local_48 == (cfstringStruct *)0x0) &&
       ((local_85 = true, local_30 != 200 && (local_85 = true, local_30 != 0xcc)))) {
      local_85 = local_30 == 0x194;
    }
    bVar2 = false;
    bVar1 = false;
    if ((bool)local_85 == false) {
      local_98 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_98 == (cfstringStruct *)0x0;
      local_130 = local_98;
      if (bVar1) {
        local_a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_HTTP_ld)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_130 = local_a8;
      }
      local_120 = local_130;
    }
    else {
      local_120 = &cf_W;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_120;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_85 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_rememberStatus_upload_download__026abb18,
                 local_90,0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_finish_success_message__026abb10,
               *(undefined8 *)(param_1 + 0x30),local_85 & 1,local_90);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

