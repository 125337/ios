// isCompositeItem: @ 010a6100

/* Function Stack Size: 0x18 bytes */

bool WCRefineMessageRepositoryStore::isCompositeItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  byte local_60;
  ulong local_58;
  ulong local_48;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar5 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_60 = 0;
  if ((uVar5 & 1) != 0) {
    local_38 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type)
    ;
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_48 = local_38;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = 0;
    if ((uVar5 & 1) != 0) {
      local_58 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_messages);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      uVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_60 = (byte)uVar5;
    }
  }
  local_11 = local_60 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

