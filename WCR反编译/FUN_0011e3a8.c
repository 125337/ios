// FUN_0011e3a8 @ 0011e3a8

void FUN_0011e3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_190;
  long *local_160;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  char *local_100;
  cfstringStruct *local_a8;
  char *local_a0;
  char *local_98;
  cfstringStruct *local_90;
  bool local_81;
  char *local_80;
  char *local_78 [3];
  char *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_100 = "CContactMgr";
  _objc_getClass();
  FUN_0010f1e0();
  _objc_retainAutoreleasedReturnValue();
  local_81 = false;
  bVar1 = local_100 == (char *)0x0;
  local_60 = local_100;
  if (bVar1) {
    local_100 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_getContactByName__0269d178,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_100;
  }
  local_81 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78[0] = local_100;
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_48 == (cfstringStruct *)0x0) {
      local_128 = &cf___;
    }
    else {
      local_128 = local_48;
    }
    local_118 = local_128;
  }
  else {
    local_118 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_118;
  pcVar3 = local_78[0];
  FUN_0010dca0(local_78[0],&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  if (pcVar3 == (char *)0x0) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_160 = (long *)&local_90;
    }
    else {
      local_160 = (long *)&local_48;
    }
    _objc_storeStrong(&local_98,(cfstringStruct *)*local_160);
  }
  pcVar3 = local_78[0];
  FUN_0010dca0(local_78[0],&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (pcVar3 == (char *)0x0) {
    _objc_storeStrong(&local_a0,local_98);
  }
  if (local_28 == (cfstringStruct *)0x0) {
    local_190 = &cf___;
  }
  else {
    local_190 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_a8;
  local_a8 = local_190;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar5 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_98);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_a8;
  local_a8 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar5 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_98);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_a8;
  local_a8 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar5 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_90);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_a8;
  local_a8 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_a8;
  FUN_0011cff8(local_a8,local_30,local_38,local_40,local_48,local_90,local_58,&cf___);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(local_78,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

