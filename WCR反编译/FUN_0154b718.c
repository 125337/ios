// FUN_0154b718 @ 0154b718

void FUN_0154b718(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_20, FUN_01564574(), ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsNickName_0269d758);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      pcVar1 = local_38;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        FUN_01582d08(0);
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        pcVar1 = local_40;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar1 = local_20;
          FUN_01528f60(0);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_24 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

