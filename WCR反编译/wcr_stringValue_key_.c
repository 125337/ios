// wcr_stringValue:key: @ 00ed16e4

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomKickHelper::wcr_stringValue_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_30 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    local_48 = 0;
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,local_38);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    local_48 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = pcVar3;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

