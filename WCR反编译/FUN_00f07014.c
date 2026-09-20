// FUN_00f07014 @ 00f07014

void FUN_00f07014(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_e0;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  long local_a8;
  byte local_99;
  long local_98;
  long local_90;
  undefined4 local_84;
  long local_80;
  long local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_1;
  _objc_storeStrong(&local_78);
  lVar1 = local_78;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    local_99 = 0;
    if (lVar1 == 0) {
      local_e0 = *(long *)(param_1 + 0x40);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_normalizedRemotePath_026abb08);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_e0;
    }
    else {
      local_e0 = *(long *)(param_1 + 0x20);
    }
    local_99 = lVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_e0;
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    lVar1 = local_90;
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_alphanumericCharacterSet_026a2e60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByAddingPercentEncodingWit_0269d900);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = lVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      _objc_storeStrong(&local_a8,local_90);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    local_68 = &cf_File_Path;
    local_48 = local_a8;
    local_60 = &cf_As_Task;
    local_40 = &cf_false;
    local_58 = &cf_Content_Type;
    local_38 = &cf_application_octet_stream;
    local_50 = &cf_Content_Length;
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x30),PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__lu);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_00f07454;
    local_b8 = &DAT_02582408;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_openListRequest_path_token_json__026abb20,&cf_PUT,&cf__api_fs_put,uVar6,0
               ,uVar7,puVar3,&local_d0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,local_78);
    }
    local_84 = 1;
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

