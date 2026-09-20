// wcr_pickerTitleForRow:component: @ 00577924

/* Function Stack Size: 0x20 bytes */

ID WCRMomentsScheduledDatePickerPanel::wcr_pickerTitleForRow_component_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_minYear_026a52d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&cf__02ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__02ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__02ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__02ld);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

