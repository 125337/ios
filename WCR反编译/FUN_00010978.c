// FUN_00010978 @ 00010978

void FUN_00010978(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
    goto LAB_00010bf4;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
    pcVar1 = local_30;
    if ((int)pcVar2 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
      if ((int)pcVar1 == 0x31) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_<refermsg)
        ;
        pcVar1 = local_30;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          goto LAB_00010be4;
        }
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
  }
LAB_00010be4:
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_00010bf4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

