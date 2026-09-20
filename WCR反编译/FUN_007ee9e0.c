// FUN_007ee9e0 @ 007ee9e0

void FUN_007ee9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_198;
  cfstringStruct *local_178;
  cfstringStruct *local_158;
  cfstringStruct *local_138;
  cfstringStruct *local_118;
  cfstringStruct *local_f8;
  cfstringStruct *local_b8;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
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
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_7);
  if (local_28 == (cfstringStruct *)0x0) {
    local_b8 = &cf___;
  }
  else {
    local_b8 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (local_b8 == (cfstringStruct *)0x0) {
    FUN_007eefa4();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_60;
    local_60 = local_b8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_30;
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__ID_,local_f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_38 == (cfstringStruct *)0x0) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_38;
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_118);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_40 == (cfstringStruct *)0x0) {
    local_138 = &cf___;
  }
  else {
    local_138 = local_40;
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_138);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_48 == (cfstringStruct *)0x0) {
    local_158 = &cf___;
  }
  else {
    local_158 = local_48;
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_158);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_50 == (cfstringStruct *)0x0) {
    local_178 = &cf___;
  }
  else {
    local_178 = local_50;
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_178);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_58 == (cfstringStruct *)0x0) {
    local_198 = &cf___;
  }
  else {
    local_198 = local_58;
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_198);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

