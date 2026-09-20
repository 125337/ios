// messageManager @ 01f1c8d0

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoStore::messageManager(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_58;
  bool local_49;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  pcVar2 = "CMessageMgr";
  local_30 = pcVar1;
  _objc_getClass();
  local_38 = pcVar2;
  if ((local_30 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    local_58 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = local_58 == (char *)0x0;
    local_40 = local_58;
    if (local_49) {
      local_58 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_58;
    }
    local_49 = !local_49;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

