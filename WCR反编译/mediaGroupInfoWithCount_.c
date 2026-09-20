// mediaGroupInfoWithCount: @ 01001798

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::mediaGroupInfoWithCount_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if (param_3 < 2) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = &cf_MessageGroupInfo;
    _NSClassFromString(param_3 - 2);
    local_40 = PTR_s_mediaGroupWithCount__026a4160;
    local_38 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_mediaGroupWithCount__026a4160),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

