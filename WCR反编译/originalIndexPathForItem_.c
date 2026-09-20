// originalIndexPathForItem: @ 00365794

/* Function Stack Size: 0x18 bytes */

ID WCRGroupingSessionListViewController::originalIndexPathForItem_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  uint local_6c;
  ID local_50;
  byte local_41;
  ID local_40;
  cfstringStruct *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = &cf_indexPathOfSessionUserName_;
  _NSSelectorFromString();
  IVar3 = local_30;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_41 = 0;
  local_6c = 0;
  if (IVar4 != 0) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mainFrame_026a2610);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)IVar4;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((local_6c & 1) != 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mainFrame_026a2610);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_50;
    puVar6 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
    IVar4 = local_50;
    bVar1 = (IVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar4;
    }
    _objc_storeStrong(&local_50,0);
    if (bVar1) goto LAB_00365ab4;
  }
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_originalIndexPath_026a27d8);
  _objc_retainAutoreleasedReturnValue();
  local_18 = IVar3;
LAB_00365ab4:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

