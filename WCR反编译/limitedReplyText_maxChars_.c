// limitedReplyText:maxChars: @ 009bf7dc

/* Function Stack Size: 0x20 bytes */

ID WCRefineAIStore::limitedReplyText_maxChars_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_40;
  long_long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_plainTextByStrippingMarkdown__0269d258,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_clampedReplyMaxChars__0269d3b8,local_38);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  IVar1 = local_40;
  if (IVar2 < IVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_rangeOfComposedCharacterSequence_026aadc0,IVar2);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,IVar1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

