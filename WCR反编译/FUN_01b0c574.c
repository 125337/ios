// FUN_01b0c574 @ 01b0c574

void FUN_01b0c574(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_miniProgramTitle);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01b1f084();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_miniProgramContent);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01b1f084();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) &&
       (pcVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       pcVar2 == (cfstringStruct *)0x0)) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_dedupKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01b1f084();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      pcVar2 = local_40;
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_01b1f084();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_24 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_weapp_t__lu____c__lu___);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

