// layoutAttributesForItemAtIndexPath: @ 01b07658

/* Function Stack Size: 0x18 bytes */

ID WCRefineCardPageFlowLayout::layoutAttributesForItemAtIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_item_026a1890);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_attributesCache_026be860);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (lVar1 < (long)IVar3) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_attributesCache_026be860);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_item_026a1890);
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

