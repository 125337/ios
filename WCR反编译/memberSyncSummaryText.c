// memberSyncSummaryText @ 01aab578

/* Function Stack Size: 0x10 bytes */

ID WCRGroupCreateViewController::memberSyncSummaryText(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_memberSyncChatRoomsDraft_026bdbc8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_20;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_memberSyncTagsDraft_026bdbd0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_38 = IVar1;
  if ((local_30 == 0) && (IVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__g__;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    if (local_38 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_h__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar3 = local_40;
    if (local_30 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

