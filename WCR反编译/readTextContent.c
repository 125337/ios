// readTextContent @ 0196f834

/* Function Stack Size: 0x10 bytes */

ID WCRefineFileManagerPreviewViewController::readTextContent(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cachedTextContent_026ba1b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  if (param_1 == 0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filePath_026b9cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dataWithContentsOfFile__0269e0b8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_38 = (cfstringStruct *)0x0;
    if (local_30 != (undefined *)0x0) {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar1 = local_38;
      local_38 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_38 == (cfstringStruct *)0x0) {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar1 = local_38;
        local_38 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_38 == (cfstringStruct *)0x0) {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar1 = local_38;
        local_38 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    if (local_38 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    else {
      local_60 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setCachedTextContent__026ba0f8,local_60);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cachedTextContent_026ba1b0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cachedTextContent_026ba1b0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

