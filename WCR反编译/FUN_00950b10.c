// FUN_00950b10 @ 00950b10

void FUN_00950b10(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_80;
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
    FUN_009463a8();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        local_80 = &cf___;
      }
      else {
        local_80 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_80;
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      pcVar2 = (cfstringStruct *)PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_imageForItem__026aa848,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePath);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_00959fdc();
        FUN_0095a110(pcVar2,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

