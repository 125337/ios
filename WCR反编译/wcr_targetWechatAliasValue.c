// wcr_targetWechatAliasValue @ 01729ef0

/* Function Stack Size: 0x10 bytes */

ID ThemeBoxAirDropThemePickViewController::wcr_targetWechatAliasValue(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_targetWechatAlias_026b3c08);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar1 = local_30;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_targetWxid_026b3bd0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0172a114();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_isTargetFriend_026b3c18);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &::cf___;
      }
      else {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_targetWxid_026b3bd0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_01725ed0();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setTargetWechatAlias__026b3c10,local_30);
      pcVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

