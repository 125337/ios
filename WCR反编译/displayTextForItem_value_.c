// displayTextForItem:value: @ 018d27f0

/* Function Stack Size: 0x20 bytes */

ID WCRChatToolbarAdjustmentViewController::displayTextForItem_value_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_suffix)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_018cc1ac(param_4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

