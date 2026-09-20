// incomingTimeLimitSummary: @ 0180d19c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAutoParseLinkSettingsViewController::incomingTimeLimitSummary_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined **ppuVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  cfstringStruct *local_a0;
  undefined **local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  undefined **local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR___NSConcreteGlobalBlock_02589758;
  local_38 = pcVar1;
  _objc_retainBlock();
  pcVar1 = local_38;
  local_40 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  ppuVar5 = local_40;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar1 < (cfstringStruct *)0x2) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &cf_5;
    }
    (*(code *)ppuVar5[2])(ppuVar5,local_a0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = ppuVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar5[2])();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = local_40;
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar4[2])();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(ppuVar2,PTR_s_stringWithFormat__0269cca8,&cf_yJ);
    _objc_retainAutoreleasedReturnValue();
    local_18 = ppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

