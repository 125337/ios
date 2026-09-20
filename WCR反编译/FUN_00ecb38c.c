// FUN_00ecb38c @ 00ecb38c

void FUN_00ecb38c(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  char *local_78;
  char *local_20;
  cfstringStruct *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (char *)0x0) ||
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_selAction_026ab540),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceMethod();
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      _method_copyReturnType();
      bVar1 = false;
      if (pcVar2 != (char *)0x0) {
        bVar1 = *pcVar2 == ':';
      }
      _free(pcVar2);
      if (bVar1) {
        local_78 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selAction_026ab540);
        if (local_78 == (char *)0x0) {
          local_78 = (char *)0x0;
        }
        else {
          _sel_getName();
        }
        if ((local_78 == (char *)0x0) || (*local_78 == '\0')) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        else {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
                     local_78);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_90 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_90;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

