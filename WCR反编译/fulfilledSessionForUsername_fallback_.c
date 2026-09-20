// fulfilledSessionForUsername:fallback: @ 01a94f30

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroupDataProvider::fulfilledSessionForUsername_fallback_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_58;
  cfstringStruct *local_50;
  char *local_48;
  uint local_3c;
  char *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (char *)0x0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar2 = local_38;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_3c = 1;
    goto LAB_01a9511c;
  }
  pcVar2 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_01a91a80();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_GetSessionByUserName_;
  local_48 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = local_48;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_01a950e4:
    pcVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_3c = 1;
  }
  else {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_3c = (uint)(pcVar2 != (char *)0x0);
    _objc_storeStrong(&local_58,0);
    if (local_3c == 0) goto LAB_01a950e4;
  }
  _objc_storeStrong(&local_48,0);
LAB_01a9511c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

