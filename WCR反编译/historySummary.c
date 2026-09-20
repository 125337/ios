// historySummary @ 019f78f4

/* Function Stack Size: 0x10 bytes */

ID WCRefineForwardToGroupSettingsViewController::historySummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  
  puVar1 = PTR_WCRefineForwardTargetHistory_026cebb8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineForwardTargetHistory_026cebb8,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    local_48 = &cf_fe;
  }
  else {
    local_48 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

