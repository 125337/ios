// FUN_01dc9394 @ 01dc9394

void FUN_01dc9394(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_60 [4];
  cfstringStruct *local_40;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_01dc8ed4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_34 = (uint)(pcVar2 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_30,0);
    if (local_34 != 0) goto LAB_01dc9748;
  }
  local_40 = (cfstringStruct *)0x0;
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsNickName);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_40;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  pcVar1 = local_40;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60[0] = (cfstringStruct *)0x0;
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_60[0];
    local_60[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_60[0];
    FUN_01dc8ed4();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_60[0];
    local_60[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b8 = &cf_S_MRO;
      }
      else {
        local_b8 = local_28;
      }
      local_b0 = local_b8;
    }
    else {
      local_b0 = local_60[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
    local_34 = 1;
    _objc_storeStrong(local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_40,0);
LAB_01dc9748:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

