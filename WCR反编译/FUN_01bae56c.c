// FUN_01bae56c @ 01bae56c

void FUN_01bae56c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_90;
  cfstringStruct *local_60;
  undefined *local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = param_1 + 0x20;
  local_38 = param_1;
  _objc_loadWeakRetained();
  pcVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_90 = local_20;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_90 = &cf___;
  }
  else {
    local_50 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Q_N_Nzz);
  }
  else {
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((cfstringStruct *)0xfa0 < pcVar4) {
      pcVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,4000);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_48;
      local_48 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_commitPlainTextRepositoryItem__026c03f8,local_48);
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((uVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

