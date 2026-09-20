// FUN_0172f6e4 @ 0172f6e4

void FUN_0172f6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  cfstringStruct *local_98;
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
  if (local_28 == (cfstringStruct *)0x0) {
    local_98 = &cf___;
  }
  else {
    local_98 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  if (local_98 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_58,&cf_b_N_OzzbN);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_b8 = &cf___;
  }
  else {
    local_b8 = local_30;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_38 == (cfstringStruct *)0x0) {
    local_d0 = &cf___;
  }
  else {
    local_d0 = local_38;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_d0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_40 == (cfstringStruct *)0x0) {
    local_e8 = &cf___;
  }
  else {
    local_e8 = local_40;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_e8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_48 == (cfstringStruct *)0x0) {
    local_100 = &cf___;
  }
  else {
    local_100 = local_48;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__wxid_,local_100);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_50 == (cfstringStruct *)0x0) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_50;
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_118);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

