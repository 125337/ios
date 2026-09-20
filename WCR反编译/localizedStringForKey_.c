// localizedStringForKey: @ 00fc52f4

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::localizedStringForKey_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_58;
  cfstringStruct *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar2 = "MMLanguageMgr";
    _objc_getClass();
    local_40 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_34 = 1;
    }
    else {
      pcVar2 = "MMServiceCenter";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_getService_;
      local_48 = pcVar2;
      _NSSelectorFromString();
      pcVar2 = local_48;
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        local_18 = (char *)0x0;
        local_34 = 1;
      }
      else {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_performSelector_withObject__026ca7c0,local_50,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_18 = (char *)0x0;
        }
        else {
          pcVar3 = &cf_getStringForCurLanguage_;
          _NSSelectorFromString();
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar3);
          if (((ulong)pcVar2 & 1) == 0) {
            local_18 = (char *)0x0;
          }
          else {
            pcVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_performSelector_withObject__026ca7c0,pcVar3,local_30);
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar2;
          }
        }
        local_34 = 1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

