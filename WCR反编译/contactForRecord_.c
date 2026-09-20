// contactForRecord: @ 01b0ef0c

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryCardViewController::contactForRecord_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_01b0f0fc();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_3c = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "CContactMgr";
    local_48 = pcVar3;
    _objc_getClass();
    local_50 = pcVar4;
    if ((local_48 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      local_18 = (char *)0x0;
      local_3c = 1;
    }
    else {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,local_50);
      if (((ulong)pcVar3 & 1) == 0) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactByName__0269d178,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar3;
      }
      local_3c = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

