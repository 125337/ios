// FUN_008fb12c @ 008fb12c

void FUN_008fb12c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_100;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_008e6088(local_30,PTR_s_GetChatName_0269da58);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar1 = local_38;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_48 = 1;
    goto LAB_008fb550;
  }
  FUN_008f3a68(0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
LAB_008fb458:
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    pcVar1 = local_58;
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_60 == (cfstringStruct *)0x0) {
        local_100 = &cf___;
      }
      else {
        local_100 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_100;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
  }
  else {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_50);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_008fb458;
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    pcVar1 = local_60;
    if (pcVar2 == (cfstringStruct *)0x0) goto LAB_008fb458;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
  }
  local_48 = 1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_008fb550:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

