// resolvedAssetNameFromBubbleInfo: @ 00ebbe68

/* Function Stack Size: 0x18 bytes */

ID WCRefineBubbleCut::resolvedAssetNameFromBubbleInfo_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_b0;
  ID local_50;
  ID local_48;
  ID local_40;
  int local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_00ebc178;
  }
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_p_stringValueFromBubbleInfo_sele_026ab4e8,local_30,
             PTR_s_bubbleName_026ab4e0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatBubbleAssetName__026a8c90,IVar1);
  IVar1 = local_40;
  if ((IVar2 & 1) == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_p_stringValueFromBubbleInfo_sele_026ab4e8,local_30,
               PTR_s_bubbleNameHL_026ab4f0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_20;
    local_48 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatBubbleAssetName__026a8c90,IVar1);
    IVar1 = local_48;
    if ((IVar2 & 1) == 0) {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_bubbleName);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((IVar1 & 1) == 0) {
LAB_00ebc0b0:
        local_34 = 0;
      }
      else {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isChatBubbleAssetName__026a8c90,local_50);
        IVar1 = local_50;
        if ((IVar2 & 1) == 0) goto LAB_00ebc0b0;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar1;
        local_34 = 1;
      }
      _objc_storeStrong(&local_50,0);
      if (local_34 == 0) {
        if (local_40 == 0) {
          local_b0 = local_48;
        }
        else {
          local_b0 = local_40;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_b0;
        local_34 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_40,0);
LAB_00ebc178:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

