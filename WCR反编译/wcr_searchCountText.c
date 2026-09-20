// wcr_searchCountText @ 01967c08

/* Function Stack Size: 0x10 bytes */

ID WCRefineFileManagerPreviewViewController::wcr_searchCountText(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *local_70;
  long local_68;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchTotal_026ba078);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_0_0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_searchMatchIndex_026ba080);
    if ((long)IVar2 < 0) {
      local_68 = 0;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_searchMatchIndex_026ba080);
      local_68 = IVar2 + 1;
    }
    local_30 = local_68;
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_searchMatchTruncated_026ba088);
    local_70 = PTR__OBJC_CLASS___NSString_026cdfe8;
    bVar1 = (IVar2 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_searchMatchTotal_026ba078);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringWithFormat__0269cca8,&cf__lu);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_70;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_searchMatchTotal_026ba078);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringWithFormat__0269cca8,&cf__lu_);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_70;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld___);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

