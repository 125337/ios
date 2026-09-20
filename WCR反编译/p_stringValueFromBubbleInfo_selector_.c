// p_stringValueFromBubbleInfo:selector: @ 00ebbd18

/* Function Stack Size: 0x20 bytes */

ID WCRefineBubbleCut::p_stringValueFromBubbleInfo_selector_
             (ID param_1,SEL param_2,ID param_3,SEL param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_60;
  ulong local_48;
  undefined4 local_3c;
  SEL local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  if (((local_30 == 0) || (param_4 == 0)) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,param_4),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_60 = 0;
    }
    else {
      local_60 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

