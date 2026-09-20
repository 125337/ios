// selfContactUsername @ 00eb2110

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFramePageOverlayHelper::selfContactUsername(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
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
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    if (IVar2 == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_48;
      local_48 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar2 = local_48;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((IVar2 & 1) == 0) ||
         (IVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
         local_18 = local_48, IVar2 == 0)) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

