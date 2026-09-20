// FUN_004f3b44 @ 004f3b44

void FUN_004f3b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_140;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78 [3];
  cfstringStruct *local_60;
  undefined8 local_58;
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
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  pcVar1 = local_28;
  FUN_004f9290();
  _objc_retainAutoreleasedReturnValue();
  if (local_30 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_30;
  }
  local_60 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78[0] = local_f8;
  if (local_40 == (cfstringStruct *)0x0) {
    local_110 = &cf___;
  }
  else {
    local_110 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_110;
  if (local_48 == (cfstringStruct *)0x0) {
    local_128 = &cf___;
  }
  else {
    local_128 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_128;
  if (local_50 == (cfstringStruct *)0x0) {
    local_140 = &cf___;
  }
  else {
    local_140 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_140;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_d_O_u7b_);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_dVe_);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_a0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_dVQ__);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_60;
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_98);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_78[0]);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_80);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_88);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_90);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(local_78,0);
  _objc_storeStrong(&local_60,0);
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

