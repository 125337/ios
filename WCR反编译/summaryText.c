// summaryText @ 01805824

/* Function Stack Size: 0x10 bytes */

ID WCRefineAutoAcceptTransferTierEditorViewController::summaryText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_inviteChatRoom_026b5ba0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&::cf__);
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_replyText_026b5ba8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_e_g);
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repositoryCode_026b0ba8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_N_);
  }
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_78 = &cf__gn_;
  }
  else {
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_78;
  if (pcVar1 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

