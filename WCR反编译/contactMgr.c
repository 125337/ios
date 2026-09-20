// contactMgr @ 0185064c

/* Function Stack Size: 0x10 bytes */

ID WCRefineBatchDeleteFriendHistoryViewController::contactMgr(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar2 = "MMServiceCenter";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_getService__0269d170;
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar3 = "CContactMgr";
      _objc_getClass("CContactMgr");
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

