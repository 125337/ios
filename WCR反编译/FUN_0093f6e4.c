// FUN_0093f6e4 @ 0093f6e4

void FUN_0093f6e4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  uint local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_2);
  pcVar2 = local_50;
  FUN_00941344(local_50,&cf_m_nsTitle);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  pcVar2 = local_60;
  if (pcVar3 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar2;
    local_64 = 1;
    goto LAB_0093fa54;
  }
  pcVar2 = local_50;
  FUN_00941344(0,local_50,&cf_m_nsContent);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_70;
  puVar4 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeOfString_options__0269d118,&cf_<title>);
  pcVar3 = local_70;
  puVar5 = PTR_s_rangeOfString_options__0269d118;
  local_80 = pcVar2;
  local_78 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_rangeOfString_options__0269d118,&cf_<_title>,1);
  local_90 = pcVar3;
  local_88 = puVar5;
  if ((local_80 == (cfstringStruct *)0x7fffffffffffffff) ||
     (pcVar3 <= (cfstringStruct *)(local_78 + (long)&local_80->field0_0x0))) {
LAB_0093f988:
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf_eN;
      local_64 = 1;
    }
    else {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_64 = 1;
      local_48 = pcVar2;
    }
  }
  else {
    local_38 = (undefined *)((long)&local_80->field0_0x0 + (long)local_78);
    local_40 = (undefined *)((long)pcVar3 + (-(long)local_78 - (long)local_80));
    pcVar3 = local_70;
    local_30 = local_38;
    local_28 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_substringWithRange__0269d138,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar3;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_98;
    local_98 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    pcVar2 = local_98;
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar2;
    }
    local_64 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_98,0);
    if (local_64 == 0) goto LAB_0093f988;
  }
  _objc_storeStrong(&local_70,0);
LAB_0093fa54:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

