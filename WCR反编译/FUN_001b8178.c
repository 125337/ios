// FUN_001b8178 @ 001b8178

void FUN_001b8178(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *local_c8;
  char *local_68;
  undefined *local_60;
  char *local_58;
  undefined4 local_50;
  undefined *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = "MMContext";
    _objc_getClass();
    pcVar2 = "MMLanguageMgr";
    local_28 = pcVar1;
    _objc_getClass();
    local_30 = pcVar2;
    if (((local_28 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = PTR_s_getService__0269d170;
      local_38 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
        local_18 = (char *)0x0;
        local_50 = 1;
      }
      else {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_60 = PTR_s_getStringForCurLanguage__0269f768;
        local_58 = pcVar1;
        if ((pcVar1 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_respondsToSelector__026ca818,
                       PTR_s_getStringForCurLanguage__0269f768), pcVar2 = local_58,
           puVar4 = local_60, ((ulong)pcVar1 & 1) == 0)) {
          local_18 = (char *)0x0;
          local_50 = 1;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                     local_20);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar1 = local_68;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)pcVar1 & 1) == 0) {
            local_c8 = (char *)0x0;
          }
          else {
            local_c8 = local_68;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_c8;
          local_50 = 1;
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

