// FUN_001961a4 @ 001961a4

void FUN_001961a4(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if ((local_20 == (cfstringStruct *)0x0) || (param_2 < 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    local_38 = (cfstringStruct *)0x0;
    pcVar1 = local_20;
    FUN_001956c0();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_20;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_tableView_titleForHeaderInSectio_0269f990);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_tableView_titleForHeaderInSectio_0269f990,local_40,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      local_38 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_38;
    FUN_00184b18();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar1 = local_38;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionType__0269fca8);
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_section__ld);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionType__0269fca8,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringWithFormat__0269cca8,&cf_type__u);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

