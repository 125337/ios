// FUN_0067915c @ 0067915c

void FUN_0067915c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50 [2];
  cfstringStruct *local_40;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_serverId_026a37f0);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_serverId_026a37f0),
       local_40 = pcVar1, (long)pcVar1 < 1)) {
      pcVar2 = local_20;
      FUN_00678108(local_20,PTR_s_contentId_026a37d0);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      pcVar1 = local_50[0];
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_createTime_0269f088);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar1 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_createTime_0269f088),
           pcVar1 == (cfstringStruct *)0x0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        else {
          pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_ct__llu);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_24 = 1;
      _objc_storeStrong(local_50,0);
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_svr__lld);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

