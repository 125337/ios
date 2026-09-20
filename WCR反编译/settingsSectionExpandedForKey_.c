// settingsSectionExpandedForKey: @ 01613bd0

/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatProfileStore::settingsSectionExpandedForKey_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_currentValueForKey__026b1898,&cf_settingsSectionExpanded);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((IVar2 & 1) == 0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if ((IVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        IVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540);
        local_11 = (byte)IVar2 & 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

