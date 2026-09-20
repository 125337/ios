// avatarURLForUsername @ 0183c3d4

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::avatarURLForUsername(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
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
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     IVar3 = local_30, puVar1 = PTR_s_getContactByName__0269d178, (param_1 & 1) == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_40 == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_48;
      local_48 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (IVar3 == 0) {
        IVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_48;
        local_48 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      IVar3 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar3;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

