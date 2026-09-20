// FUN_01e51aa8 @ 01e51aa8

void FUN_01e51aa8(double param_1,long param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *local_78;
  double local_48;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &cf___;
  uVar1 = *(ulong *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getTextFieldText_0269fb40);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(cfstringStruct **)(param_2 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getTextFieldText_0269fb40);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    _objc_storeStrong(&local_28,local_78);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((param_1 < 12.0) || (local_48 = param_1, 20.0 < param_1)) {
    local_48 = 17.0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__V_);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  lVar4 = param_2 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_2);
  _objc_storeStrong(&local_28,0);
  return;
}

