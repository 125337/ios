// FUN_0069445c @ 0069445c

void FUN_0069445c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_c8;
  cfstringStruct *local_a8;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_HTTPBody_026a64f0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_c8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_c8;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_58[0];
  FUN_0068bef8();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_allHTTPHeaderFields_026a64f8);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_description_026ca5f8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0068be8c(&cf__net_headers);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar1 != (cfstringStruct *)0x0) {
    FUN_0068be8c(pcVar1,&cf__net_body,local_60);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

