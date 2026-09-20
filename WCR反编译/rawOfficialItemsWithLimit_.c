// rawOfficialItemsWithLimit: @ 01f141e8

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoStore::rawOfficialItemsWithLimit_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_60;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scheduleManager_026c8208);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    IVar1 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    local_18 = IVar1;
  }
  else {
    local_48 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_scheduleItemsWithLimit__026c8210);
    if ((param_1 & 1) == 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_scheduleItems_026c8218);
      if ((IVar1 & 1) != 0) {
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scheduleItems_026c8218);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_48;
        local_48 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
    }
    else {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_scheduleItemsWithLimit__026c8210,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_48;
      local_48 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    IVar1 = local_48;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((IVar1 & 1) == 0) {
      local_60 = *(ID *)PTR____NSArray0___02578280;
    }
    else {
      local_60 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

