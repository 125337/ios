// endSummary @ 01955740

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationSettingsViewController::endSummary(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = (cfstringStruct *)0x0;
  local_48 = 0;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_loadDestLat_lng_name__026b9b40,&local_30,&local_38,&local_48);
  _objc_storeStrong(&local_40,local_48);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_pdkb;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___4f___4f)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      bVar1 = pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.filetype + 3);
      if (bVar1) {
        local_88 = local_40;
      }
      else {
        local_58 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,0xe);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_88;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_88;
      if (!bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_68);
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

