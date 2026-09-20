// FUN_00011dac @ 00011dac

void FUN_00011dac(undefined8 param_1)

{
  int iVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  uint local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
    goto LAB_00012124;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
  if ((int)pcVar2 == 1) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_24 = 1;
    goto LAB_00012124;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
  iVar1 = (int)pcVar2 + -0x31;
  if (iVar1 == 0) {
    pcVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_containsString__0269d0b0,&cf_<refermsg);
    iVar1 = (int)pcVar2;
    if (((ulong)pcVar2 & 1) == 0) goto LAB_000120d8;
    pcVar2 = local_40[0];
    FUN_0001a680(local_40[0],&cf_title);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar2 = local_48;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_24 = (uint)(pcVar3 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_48,0);
    if (local_24 == 0) {
      iVar1 = 0;
      goto LAB_000120d8;
    }
  }
  else {
LAB_000120d8:
    pcVar2 = local_20;
    FUN_00010978(iVar1);
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = pcVar2;
  }
  _objc_storeStrong(local_40,0);
LAB_00012124:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

