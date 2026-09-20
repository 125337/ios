// _WCRSuperFloatUnregisterAction @ 016182f8

void _WCRSuperFloatUnregisterAction(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_80;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  undefined4 local_1c;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  pcVar2 = local_18;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar1 = &cf_wcr_sf_reg_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wcr_sf_reg_,PTR_s_stringByAppendingString__0269d398,local_18);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_28;
      local_28 = pcVar1;
      (*(code *)PTR__objc_release_02578630)();
    }
    FUN_01617b78();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_80 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_mutableCopy_0269d8a0);
    local_30 = local_80;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_28;
    puVar4 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01618628;
    local_40 = &DAT_02587780;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_predicateWithBlock__026ab6e0,&local_58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_filterUsingPredicate__026ab6e8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _WCRSuperFloatNotifySettingsChanged();
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

