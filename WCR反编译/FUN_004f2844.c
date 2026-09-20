// FUN_004f2844 @ 004f2844

void FUN_004f2844(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_d0;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  char *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  local_20 = (cfstringStruct *)pcVar1;
  if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = (cfstringStruct *)pcVar1;
    if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_3c = 1;
    }
    else {
      pcVar1 = "CContactMgr";
      _objc_getClass();
      local_48 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_3c = 1;
      }
      else {
        pcVar2 = local_38[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38[0],PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170
                   ,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
          local_3c = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf___;
            local_3c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_d0 = &cf___;
            }
            local_60 = pcVar2;
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_d0;
            local_3c = 1;
            _objc_storeStrong(&local_60,0);
          }
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(&local_50,0);
      }
    }
    _objc_storeStrong(local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

