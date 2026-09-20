// isActionAvailableForGroupContact:actionID: @ 01cc7844

/* Function Stack Size: 0x1c bytes */

bool WCRefineProfileCardActionCatalog::isActionAvailableForGroupContact_actionID_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  undefined8 local_38;
  byte local_29;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_29 = (byte)param_3;
  local_38 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCustomPageActionID__026b0670,local_38);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_entryMap_026aed30);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scope);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if ((IVar1 == 0) ||
       (IVar1 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_both),
       (IVar1 & 1) != 0)) {
      local_11 = 1;
    }
    else if ((local_29 & 1) == 0) {
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_friend);
      local_11 = (byte)IVar1 & 1;
    }
    else {
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_group);
      local_11 = (byte)IVar1 & 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

