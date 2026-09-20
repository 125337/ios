// autoReplyNormalizedMultiItems: @ 00fa62f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::autoReplyNormalizedMultiItems_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_30;
    if ((uVar3 & 1) == 0) {
      IVar4 = *(ID *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
      local_18 = IVar4;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        IVar4 = *(ID *)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_34 = 1;
        local_18 = IVar4;
      }
      else {
        uVar3 = local_40;
        puVar1 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&::cf__);
        IVar4 = local_20;
        uVar2 = local_40;
        local_50 = uVar3;
        local_48 = puVar1;
        if (uVar3 == 0x7fffffffffffffff) {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          IVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_autoReplySanitizedMultiItems__026a3620,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_34 = 1;
          local_18 = IVar4;
          _objc_storeStrong(&local_58,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_autoReplySanitizedMultiItems__026a3620);
          _objc_retainAutoreleasedReturnValue();
          local_18 = IVar4;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_34 = 1;
        }
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_autoReplySanitizedMultiItems__026a3620,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar4;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

