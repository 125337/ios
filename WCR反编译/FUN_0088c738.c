// FUN_0088c738 @ 0088c738

void FUN_0088c738(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  int local_4c;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_28;
  FUN_008825d8();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_30 = pcVar1;
  _objc_getAssociatedObject(local_20,&DAT_028cd8c9);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_4c = 1;
    }
    else {
      _objc_setAssociatedObject(pcVar1,local_20,&DAT_028cd8c9,local_30,3);
      pcVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_4c = 1;
    }
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar2 = local_48[0];
      FUN_0088c320(pcVar1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_58 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_48[0]);
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_58),
         ((ulong)pcVar1 & 1) == 0)) {
        _objc_setAssociatedObject(local_20,&DAT_028cd8c9,local_30,3);
        pcVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_4c = 1;
      }
      else {
        local_4c = 0;
      }
      _objc_storeStrong(&local_58,0);
      if (local_4c != 0) goto LAB_0088ca10;
    }
    pcVar1 = local_48[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_4c = 1;
  }
LAB_0088ca10:
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

