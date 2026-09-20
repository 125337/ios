// historySanitizedCandidateText: @ 01b2ae14

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historySanitizedCandidateText_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_50;
  SEL local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_50 = (undefined *)0x0;
  local_48 = param_2;
  local_40 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_50,param_3);
  puVar1 = local_50;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &::cf___;
  }
  else {
    puVar1 = local_58;
    puVar2 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_rangeOfString_options__0269d118,&cf_<_wc_custom_link_,1);
    local_70 = puVar1;
    local_68 = puVar2;
    if (puVar1 != (undefined *)0x7fffffffffffffff) {
      local_78 = 0;
      local_88 = 0;
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,
                 &cf_<_wc_custom_link_[_>__>_____<__wc_custom_link_>,9,&local_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_78,local_88);
      puVar1 = local_58;
      local_80 = puVar2;
      if ((local_78 == 0) && (puVar2 != (undefined *)0x0)) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        local_28 = 0;
        local_20 = 0;
        local_30 = puVar3;
        local_18 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringByReplacingMatchesInString_0269ef30,puVar1,0,0,puVar3,&cf__1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_58;
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_historyNormalizedXMLText__026bee38,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar4;
  }
  local_5c = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

