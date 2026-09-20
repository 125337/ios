// allContactUserNames: @ 01a91fd0

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupDataProvider::allContactUserNames_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    uVar2 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = uVar2;
  }
  else {
    uVar2 = local_30;
    FUN_01a91e98(local_30,PTR_s_getAllContactUserNameFromCache_026ab758);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar2 & 1) == 0) ||
       (uVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
       uVar2 = local_40, uVar4 == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_dicContacts);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allKeys_0269ef58);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_48,0);
      if (local_34 == 0) {
        uVar2 = *(ulong *)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_34 = 1;
        local_18 = uVar2;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

