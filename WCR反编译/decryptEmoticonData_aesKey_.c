// decryptEmoticonData:aesKey: @ 00f33abc

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::decryptEmoticonData_aesKey_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (char *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_3c = 1;
    goto LAB_00f33d1c;
  }
  pcVar1 = "EmoticonUtil";
  _objc_getClass();
  local_50 = (char *)0x0;
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_AESGCMDecryptWithKeyString_andDa_026ac028);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_00f33c2c:
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_AESDecryptWithKeyString_andData__026ac030);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_AESDecryptWithKeyString_andData__026ac030,local_38,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_18 = local_50;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_00f33d0c;
      }
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_AESGCMDecryptWithKeyString_andDa_026ac028,local_38,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    pcVar1 = local_50;
    if (pcVar3 == (char *)0x0) goto LAB_00f33c2c;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
LAB_00f33d0c:
  local_3c = 1;
  _objc_storeStrong(&local_50,0);
LAB_00f33d1c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

