// FUN_008f94e4 @ 008f94e4

void FUN_008f94e4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_148;
  cfstringStruct *local_b0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50 [3];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_b0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (pcVar2 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_38,&cf__);
  }
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_008fa0bc();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsToUsr_0269d090);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_008fa0bc();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_50[0]);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_58);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_60;
  FUN_008fa634();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_60;
  FUN_008ee758();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_60;
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_148 = &cf_mp3;
  }
  else {
    local_148 = local_30;
    FUN_008e5574(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_148;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_148;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByAppendingPathExtension__026a4580,local_68);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_60;
    local_60 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

