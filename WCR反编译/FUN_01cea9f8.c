// FUN_01cea9f8 @ 01cea9f8

void FUN_01cea9f8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01ceb580(local_20,PTR_s_getContactDisplayName_0269d160);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_01ceb408();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  pcVar1 = local_28;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_20;
    FUN_01ceb580(local_20,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01ceb408();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar1 = local_28;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      FUN_01ceb580(local_20,PTR_s_m_nsNickName_0269d758);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01ceb408();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_28 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      pcVar1 = local_28;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        FUN_01ceb580(local_20,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_01ceb408();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_28;
        local_28 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
        pcVar1 = local_28;
        if (pcVar2 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__gwT_N;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

