// FUN_00762810 @ 00762810

void FUN_00762810(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_100;
  cfstringStruct *local_d8;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  FUN_0075ede8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_44 = 1;
    goto LAB_00762c6c;
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_44 = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleHomeCount);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineTextStyleHomeLogin);
      if ((((ulong)pcVar1 & 1) == 0) ||
         (pcVar1 = local_38, puVar3 = PTR_s_rangeOfString_options__0269d118,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_rangeOfString_options__0269d118,&cf___vU_,4), local_70 = pcVar1,
         local_68 = puVar3, pcVar1 == (cfstringStruct *)0x7fffffffffffffff)) goto LAB_00762c34;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (local_78 == (cfstringStruct *)0x0) {
        local_100 = &cf___;
      }
      else {
        local_100 = local_78;
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__D,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_44 = 1;
      local_28 = pcVar1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      local_58 = (cfstringStruct *)0x0;
      local_60 = 0;
      pcVar1 = local_38;
      FUN_00762ca8(local_38,&local_60);
      _objc_storeStrong(&local_58,local_60);
      if (((ulong)pcVar1 & 1) == 0) {
        local_44 = 0;
      }
      else {
        if (local_58 == (cfstringStruct *)0x0) {
          local_d8 = &cf___;
        }
        else {
          local_d8 = local_58;
        }
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_44 = 1;
        local_28 = pcVar1;
      }
      _objc_storeStrong(&local_58,0);
      if (local_44 == 0) {
LAB_00762c34:
        pcVar1 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_44 = 1;
      }
    }
  }
  _objc_storeStrong(&local_50,0);
LAB_00762c6c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

