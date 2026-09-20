// wcr_contactForUsr: @ 01da2664

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsBoardView::wcr_contactForUsr_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *local_98;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined4 local_58;
  bool local_51;
  cfstringStruct *local_50;
  byte local_41;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_98 = local_30;
  local_41 = 0;
  local_51 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_98 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_98;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_98;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_18 = (char *)0x0;
    local_58 = 1;
  }
  else {
    pcVar4 = "CContactMgr";
    _objc_getClass();
    local_68 = (char *)0x0;
    pcVar5 = "MMContext";
    local_60 = pcVar4;
    _objc_getClass();
    local_70 = pcVar5;
    if ((pcVar5 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar5 & 1) != 0)) {
      pcVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar4;
      if ((pcVar4 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar4 & 1) != 0)) {
        pcVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getService__0269d170,local_60);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_68;
        local_68 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      _objc_storeStrong(&local_78,0);
    }
    if (local_68 == (char *)0x0) {
      pcVar4 = "MMServiceCenter";
      _objc_getClass();
      local_80 = pcVar4;
      if ((pcVar4 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar4 & 1) != 0)) {
        pcVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar4;
        if ((pcVar4 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar4 & 1) != 0)) {
          pcVar5 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_getService__0269d170,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_68;
          local_68 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    if ((local_68 == (char *)0x0) ||
       (pcVar4 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar4 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
    local_58 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

