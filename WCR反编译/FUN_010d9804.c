// FUN_010d9804 @ 010d9804

void FUN_010d9804(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  _WCRNameplateUsernameIsGrouping();
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCRefine_groupEntry);
    pcVar1 = local_20;
    if (((ulong)pcVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_hasPrefix__0269d320,&cf_WCRefine_groupEntry_);
      pcVar2 = local_30;
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = &cf_WCRefine_groupEntry_;
        (*(code *)PTR__objc_msgSend_02578628)(&cf_WCRefine_groupEntry_,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_30 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      pcVar1 = local_30;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_substringToIndex__0269d6c0,
                   (undefined1 *)((long)&pcVar2[-1].field2_0x10 + 7));
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_30;
        local_30 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_58 = (cfstringStruct *)0x0;
      }
      else {
        local_58 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_58;
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

