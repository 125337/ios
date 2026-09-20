// FUN_01a77848 @ 01a77848

void FUN_01a77848(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_98;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "MMLanguageMgr";
  local_20 = pcVar1;
  _objc_getClass();
  pcVar1 = local_20;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if ((((ulong)pcVar1 & 1) == 0) || (local_28 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_40 = 1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768);
      if (((ulong)pcVar1 & 1) == 0) {
        local_18 = (char *)0x0;
        local_40 = 1;
      }
      else {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_getStringForCurLanguage__0269f768,&cf_Contacts_Tag_Group_Setting);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_50 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0)
           , pcVar1 == (char *)0x0)) {
          local_98 = (char *)0x0;
        }
        else {
          local_98 = local_50;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_98;
        local_40 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

