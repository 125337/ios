// JSONObjectFromDouyinEmbeddedText: @ 0101c430

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::JSONObjectFromDouyinEmbeddedText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ID local_b8;
  ID local_68;
  ulong local_60;
  ulong local_58;
  ID local_50;
  long local_48;
  ulong local_40;
  int local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  uVar2 = local_30;
  if (uVar5 == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_0101c8f0;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  for (local_48 = 0; local_48 < 3; local_48 = local_48 + 1) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_JSONObjectFromString__026adcc0,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    IVar4 = local_50;
    if ((IVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      IVar3 = local_50;
      if ((IVar4 & 1) != 0) goto LAB_0101c5c4;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((IVar3 & 1) == 0) ||
         (IVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
         IVar4 == 0)) {
        local_58 = 0;
        uVar5 = *(ulong *)PTR__kCFAllocatorDefault_02578298;
        _CFURLCreateStringByReplacingPercentEscapes(uVar5,local_40,&::cf___);
        uVar2 = local_58;
        local_60 = uVar5;
        if (uVar5 != 0) {
          local_58 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          uVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_stringByRemovingPercentEncoding_0269d840);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_58;
          local_58 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if ((uVar2 == 0) ||
           (uVar2 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_40),
           (uVar2 & 1) != 0)) {
          local_34 = 2;
        }
        else {
          _objc_storeStrong(&local_40,local_58);
          local_34 = 0;
        }
        _objc_storeStrong(&local_58,0);
      }
      else {
        _objc_storeStrong(IVar4,&local_40,local_50);
        local_34 = 4;
      }
    }
    else {
LAB_0101c5c4:
      IVar4 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar4;
      local_34 = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (local_34 != 0) {
      if (local_34 == 2) break;
      if (local_34 != 4) goto LAB_0101c8e0;
    }
  }
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_JSONObjectFromString__026adcc0,local_40);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_68 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  IVar4 = local_68;
  if ((IVar3 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((IVar4 & 1) != 0) goto LAB_0101c894;
    local_b8 = 0;
  }
  else {
LAB_0101c894:
    local_b8 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_b8;
  local_34 = 1;
  _objc_storeStrong(&local_68,0);
LAB_0101c8e0:
  _objc_storeStrong(&local_40,0);
LAB_0101c8f0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

