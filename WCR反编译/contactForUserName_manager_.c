// contactForUserName:manager: @ 01a92290

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroupDataProvider::contactForUserName_manager_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_68 [4];
  undefined *local_48;
  uint local_3c;
  ulong local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_38 == 0)) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    local_48 = PTR_s_getContactByName__0269d178;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_dicContacts);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_68[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        uVar3 = local_68[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68[0],PTR_s_objectForKeyedSubscript__0269d098,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar3;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(local_68,0);
      if (local_3c == 0) {
        local_18 = 0;
        local_3c = 1;
      }
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_48,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = uVar3;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

