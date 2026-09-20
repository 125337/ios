// selfContactAvatarURL @ 00eb2358

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFramePageOverlayHelper::selfContactAvatarURL(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_a0;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     (param_1 & 1) == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    if (IVar1 == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_48;
      local_48 = IVar1;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar1 = local_48;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((IVar1 & 1) == 0) ||
         (IVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
         IVar1 == 0)) {
        IVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_48;
        local_48 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      IVar1 = local_48;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((IVar1 & 1) == 0) ||
         (IVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
         IVar1 == 0)) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a0;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

