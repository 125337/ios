// FUN_00942860 @ 00942860

void FUN_00942860(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_a8;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_34;
  cfstringStruct *local_30;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_20;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_34 = 1;
    goto LAB_00942bbc;
  }
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar3 != 0) &&
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_28),
     ((ulong)pcVar2 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_b;
    local_34 = 1;
    goto LAB_00942bbc;
  }
  pcVar2 = local_30;
  FUN_00942bf4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_00942a60:
    pcVar2 = local_40;
    FUN_00941344(local_40,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    pcVar2 = local_50;
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar2 = local_40;
      FUN_00941344(0,local_40,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      FUN_009407ac();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a8 = local_30;
      }
      else {
        local_a8 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a8;
      local_34 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_34 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar2 = local_48;
    bVar1 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_48,0);
    if (local_34 == 0) goto LAB_00942a60;
  }
  _objc_storeStrong(&local_40,0);
LAB_00942bbc:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

