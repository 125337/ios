// FUN_001165dc @ 001165dc

void FUN_001165dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
    goto LAB_00116a90;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_userId)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_50;
  FUN_00112b1c();
  if (((ulong)pcVar2 & 1) != 0) {
    _objc_storeStrong(&local_50,&cf___);
  }
  pcVar2 = local_58;
  FUN_00112b1c();
  if (((ulong)pcVar2 & 1) != 0) {
    _objc_storeStrong(&local_58,&cf___);
  }
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_28 = local_58;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
  }
  else {
    pcVar3 = local_50;
    FUN_00116ae8(pcVar2,local_50,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
LAB_00116940:
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      pcVar2 = local_58;
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        local_28 = local_50;
        pcVar2 = local_60;
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar2;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
    }
    else {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_50);
      pcVar2 = local_60;
      if (((ulong)pcVar3 & 1) != 0) goto LAB_00116940;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_48 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00116a90:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

