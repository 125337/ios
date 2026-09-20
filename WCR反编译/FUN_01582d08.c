// FUN_01582d08 @ 01582d08

void FUN_01582d08(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  uint local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)&local_20;
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(pcVar1,param_1);
  local_29 = 0;
  local_64 = 1;
  if (local_20 != (cfstringStruct *)0x0) {
    pcVar1 = local_20;
    FUN_01564574();
    local_64 = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      FUN_01532090();
      _objc_retainAutoreleasedReturnValue();
      local_29 = 1;
      local_28 = pcVar1;
      FUN_01564574();
      local_64 = (uint)pcVar1 ^ 1;
    }
  }
  if ((local_29 & 1) != 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_64 & 1) == 0) {
    FUN_01569d5c();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_nameForHeadImageLongPressed_;
    local_38 = pcVar1;
    _NSSelectorFromString();
    local_40 = pcVar2;
    if ((local_38 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2),
       ((ulong)pcVar1 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_30 = 1;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_01533bf8();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      while (pcVar1 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__),
            ((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringFromIndex__0269d120,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_30 = 1;
      }
      else {
        FUN_01532090();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar1;
        FUN_01528f60();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_58 = pcVar1;
        FUN_01528d34();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_58;
        local_60 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (((pcVar1 == (cfstringStruct *)0x0) ||
            (pcVar1 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_58)
            , ((ulong)pcVar1 & 1) == 0)) &&
           ((pcVar1 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
            pcVar1 == (cfstringStruct *)0x0 ||
            (pcVar1 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_60)
            , ((ulong)pcVar1 & 1) == 0)))) {
          pcVar1 = local_48;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        local_30 = 1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

