// wcr_orderedTypeKeys: @ 014f8d7c

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsEngine::wcr_orderedTypeKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_30 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_sortedArrayUsingComparator__0269fae8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

