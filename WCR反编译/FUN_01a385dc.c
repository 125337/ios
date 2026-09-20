// FUN_01a385dc @ 01a385dc

void FUN_01a385dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_c0;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  int local_5c;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar2 != 0)) {
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setPaymentLinkNumber__026a6470,local_58);
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_paymentLinkTemplate_026a6450);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_c0 = &cf___;
    }
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_c0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58;
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (((lVar2 != 0) &&
        (pcVar4 = local_70,
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasPrefix__0269d320,&cf__),
        ((ulong)pcVar4 & 1) != 0)) &&
       (pcVar4 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0),
       (cfstringStruct *)((long)&MACH_HEADER.magic + 2) < pcVar4)) {
      pcVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_mutableCopy_0269d8a0);
      lVar2 = local_58;
      pcVar5 = pcVar4;
      local_80 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_setObject_atIndexedSubscript__0269e970,lVar2,
                 (undefined1 *)((long)&pcVar5[-1].field3_0x18 + 7));
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_componentsJoinedByString__0269d140,&cf__)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPaymentLinkTemplate__026a6460);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      _objc_storeStrong(&local_80,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((uVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissWithAnimated__0269e420,1);
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__SSkXpeW_OY);
    local_5c = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (local_5c == 0) {
    local_5c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

