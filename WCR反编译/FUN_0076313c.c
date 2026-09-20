// FUN_0076313c @ 0076313c

void FUN_0076313c(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_60;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    pcVar2 = "MMContext";
    _objc_getClass();
    pcVar3 = "MMLanguageMgr";
    local_30 = pcVar2;
    _objc_getClass();
    local_38 = pcVar3;
    if ((local_30 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
      local_18 = (char *)0x0;
      local_24 = 1;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
      if (((ulong)pcVar2 & 1) == 0) {
        local_18 = (char *)0x0;
        local_24 = 1;
      }
      else {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar2;
        if ((pcVar2 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar2 & 1) == 0)) {
          local_18 = (char *)0x0;
          local_24 = 1;
        }
        else {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,
                     PTR_s_getStringForCurLanguage__0269f768);
          if (((ulong)pcVar2 & 1) == 0) {
            local_18 = (char *)0x0;
            local_24 = 1;
          }
          else {
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_getStringForCurLanguage__0269f768,local_20);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_50 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((((ulong)pcVar2 & 1) == 0) ||
               (pcVar2 = local_50,
               (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
               pcVar2 == (char *)0x0)) {
              local_60 = (char *)0x0;
            }
            else {
              local_60 = local_50;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_60;
            local_24 = 1;
            _objc_storeStrong(&local_50,0);
          }
          _objc_storeStrong(&local_48,0);
        }
        _objc_storeStrong(&local_40,0);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

