// currentUserWxid @ 010b0824

/* Function Stack Size: 0x10 bytes */

ID WCRefineMessageSyncRule::currentUserWxid(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "CContactMgr";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  FUN_010b0934();
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)pcVar1;
  if (((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    FUN_010b0a38(pcVar2,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

