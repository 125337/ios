// emoticonMD5FromMessageWrap: @ 00f3206c

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::emoticonMD5FromMessageWrap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_a8;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsEmoticonMD5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_valueForKey__0269d128,&cf_m_nsEmoticonMD5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_40 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(local_58,0);
    }
    uVar3 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_a8 = 0;
    }
    else {
      local_a8 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a8;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

