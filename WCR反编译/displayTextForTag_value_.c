// displayTextForTag:value: @ 01e176cc

/* Function Stack Size: 0x20 bytes */

ID WCRefineSuperFloatFanSettingsViewController::displayTextForTag_value_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  undefined *local_18;
  
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((undefined *)param_3 == &DAT_00011d2d) || ((undefined *)param_3 == &DAT_00011d2e)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

