// FUN_004f2588 @ 004f2588

void FUN_004f2588(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_98;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsNickName_0269d758);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_98 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_98;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      else {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsNickName_0269d758);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsRemark_0269d760);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

