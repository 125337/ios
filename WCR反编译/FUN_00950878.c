// FUN_00950878 @ 00950878

void FUN_00950878(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  FUN_00956b08();
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_2c = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_009473cc();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_0095ade0(0x40a0000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_28 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_2c = 1;
    }
    else {
      pcVar1 = local_28;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
         (cfstringStruct *)0x800000 < pcVar1)) {
        pcVar2 = local_28;
        _UIImageJPEGRepresentation(0x3feb333333333333);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_38;
        local_38 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_18 = local_28;
      if (pcVar1 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        FUN_0095a110(local_18,pcVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

