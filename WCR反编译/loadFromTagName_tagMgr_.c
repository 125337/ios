// loadFromTagName:tagMgr: @ 019fc7f4

/* Function Stack Size: 0x20 bytes */

void WCRefineFriendRelationCheckViewController::loadFromTagName_tagMgr_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  ulong local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_getContactsForTagName_;
  local_38 = puVar2;
  _NSSelectorFromString();
  uVar4 = local_30;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
  if ((uVar4 & 1) != 0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObjectsFromArray__0269d540,local_48);
    }
    _objc_storeStrong(&local_48,0);
  }
  IVar1 = local_18;
  puVar2 = local_38;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_h___);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_applyUserNames_sourceTitle_toast_026bb4e8,puVar2,puVar5,&::cf__);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

