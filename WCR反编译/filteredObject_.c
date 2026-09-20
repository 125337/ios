// filteredObject: @ 01112088

/* Function Stack Size: 0x18 bytes */

ID WCRefinePrivateFriendManager::filteredObject_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  FUN_01112028();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_shouldConcealUsername__0269fef8,local_30);
    if ((IVar1 & 1) != 0) {
      local_38 = 0;
      goto LAB_01112120;
    }
  }
  local_38 = local_28;
LAB_01112120:
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return local_38;
}

