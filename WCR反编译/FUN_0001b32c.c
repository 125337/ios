// FUN_0001b32c @ 0001b32c

void FUN_0001b32c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
    goto LAB_0001b6ac;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsRealChatUsr_0269d190);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
LAB_0001b4f8:
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
LAB_0001b650:
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      pcVar1 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_hasSuffix__0269d018,&cf__chatroom);
      if (((ulong)pcVar1 & 1) != 0) goto LAB_0001b650;
      pcVar2 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isEqualToString__0269ccc8,local_28);
      pcVar1 = local_50[0];
      if (((ulong)pcVar2 & 1) != 0) goto LAB_0001b650;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_2c = 1;
    _objc_storeStrong(local_50,0);
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    if (((ulong)pcVar1 & 1) != 0) goto LAB_0001b4f8;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_28);
    pcVar1 = local_38;
    if (((ulong)pcVar2 & 1) != 0) goto LAB_0001b4f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_0001b6ac:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

