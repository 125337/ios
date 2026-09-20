// FUN_009d1524 @ 009d1524

void FUN_009d1524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  puVar3 = local_40;
  local_78 = PTR___NSConcreteGlobalBlock_02578658;
  local_70 = 0xd0800000;
  local_6c = 0;
  local_68 = FUN_009d39d8;
  local_60 = &DAT_0257e9f8;
  local_48 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_48;
  local_58 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_78);
  puVar2 = local_48;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendData__026a9df8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x405e000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
             PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_28,1);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHTTPBody__026a64b8,local_48);
  puVar2 = local_80;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_multipart_form_data_boundary___);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar3,&cf_Content_Type);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept);
  lVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  puVar2 = local_80;
  if (lVar5 != 0) {
    pcVar6 = &cf_Bearer;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_Bearer,PTR_s_stringByAppendingString__0269d398,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar6,&cf_Authorization);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  puVar2 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

