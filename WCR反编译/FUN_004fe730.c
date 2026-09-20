// FUN_004fe730 @ 004fe730

void FUN_004fe730(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  FUN_004fe8e0(local_20,&cf_m_nsRealChatUsr);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar1 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_34 = 1;
    goto LAB_004fe8a8;
  }
  pcVar2 = local_20;
  FUN_004fe8e0(0,local_20,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_004fe86c:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_28);
    if (((ulong)pcVar2 & 1) != 0) goto LAB_004fe86c;
    pcVar1 = local_40;
    FUN_004fe694();
    pcVar2 = local_40;
    if (((ulong)pcVar1 & 1) != 0) goto LAB_004fe86c;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  local_34 = 1;
  _objc_storeStrong(&local_40,0);
LAB_004fe8a8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

