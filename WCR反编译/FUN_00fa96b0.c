// FUN_00fa96b0 @ 00fa96b0

void FUN_00fa96b0(void)

{
  int iVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  void *local_28;
  size_t local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  iVar1 = _sysctlbyname("hw.machine",(void *)0x0,&local_20,(void *)0x0,0);
  if ((iVar1 == 0) && (local_20 != 0)) {
    local_28 = _calloc(1,local_20);
    if (local_28 == (void *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      iVar1 = _sysctlbyname("hw.machine",local_28,&local_20,(void *)0x0,0);
      if (iVar1 == 0) {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,local_28
                  );
        _objc_retainAutoreleasedReturnValue();
        local_30 = pcVar2;
        _free(local_28);
        if (local_30 == (cfstringStruct *)0x0) {
          local_58 = &cf___;
        }
        else {
          local_58 = local_30;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_58;
        _objc_storeStrong(&local_30,0);
      }
      else {
        _free(local_28);
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

