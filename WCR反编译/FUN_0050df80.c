// FUN_0050df80 @ 0050df80

void FUN_0050df80(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_b8;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_44;
  char *local_40;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "MMLanguageMgr";
  local_28 = pcVar1;
  _objc_getClass();
  local_40 = pcVar2;
  if ((local_28 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
    local_44 = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) {
      local_18 = (char *)0x0;
      local_44 = 1;
    }
    else {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768);
      if (((ulong)pcVar1 & 1) == 0) {
        local_18 = (char *)0x0;
        local_44 = 1;
      }
      else {
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_getStringForCurLanguage__0269f768,local_20);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_60 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_b8 = (char *)0x0;
        }
        else {
          local_b8 = local_60;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_b8;
        local_44 = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

