// isSelfieEmoticonMessageWrap: @ 00f3232c

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isSelfieEmoticonMessageWrap_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  ID IVar2;
  ID local_50;
  undefined *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = "CEmoticonMgr";
    _objc_getClass();
    local_48 = PTR_s_isSelfieEmoticonWithWrap__026abfd8;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSelfieEmoticonWithWrap__026abfd8);
    if (((ulong)pcVar1 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_m_nsActivityId);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_hasPrefix__0269d320,&cf_Selfie_);
      local_11 = (byte)IVar2 & 1;
      local_34 = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_30);
      local_11 = (byte)pcVar1 & 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

