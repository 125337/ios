// addCustomEntryFromInput:errorMessage: @ 017797ec

/* Function Stack Size: 0x20 bytes */

bool WCRefinePluginHubManager::addCustomEntryFromInput_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  ID *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_parsedCustomEntryFromInput_error_026b4490,local_30,param_4);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if (IVar1 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_customEntry_conflictsWithExistin_026b4480,IVar1,0x7fffffffffffffff);
    if ((IVar2 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customEntryDefinitions_026b4448);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_persistCustomEntryDefinitions__026b4498,local_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_registerPluginForCustomEntry__026b44a0,local_40);
      local_11 = 1;
      local_44 = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      if (local_38 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_38 = (ID)&cf_c6RhVb;
      }
      local_11 = 0;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

