// FUN_014b222c @ 014b222c

void FUN_014b222c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsContent_0269d0a0),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_48 = &cf___;
    }
    else {
      local_48 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_48;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

