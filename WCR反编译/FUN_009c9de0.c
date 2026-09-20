// FUN_009c9de0 @ 009c9de0

void FUN_009c9de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_dataWithJSONObject_options_error_026a64a8,local_30,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x405e000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
               PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_20,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHTTPBody__026a64b8,local_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
               &cf_Content_Type);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setValue_forHTTPHeaderField__026a16e8,
               &cf_application_json_text_event_stream,&cf_Accept);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    puVar1 = local_50;
    if (lVar2 != 0) {
      pcVar3 = &cf_Bearer;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_Bearer,PTR_s_stringByAppendingString__0269d398,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar3,&cf_Authorization);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    puVar1 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

