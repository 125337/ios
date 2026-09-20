// FUN_0107c72c @ 0107c72c

void FUN_0107c72c(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_40;
  undefined *local_38;
  char *local_30;
  int local_24;
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
    pcVar2 = "CBaseFile";
    _objc_getClass();
    local_38 = PTR_s_GetDataMD5__026ac140;
    local_30 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetDataMD5__026ac140),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38,local_20);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((((ulong)pcVar2 & 1) == 0) ||
         (pcVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         pcVar2 == (char *)0x0)) {
        local_24 = 0;
      }
      else {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_24 = 1;
        local_18 = pcVar2;
      }
      _objc_storeStrong(&local_40,0);
      if (local_24 != 0) goto LAB_0107c8b8;
    }
    local_18 = (char *)0x0;
    local_24 = 1;
  }
LAB_0107c8b8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

