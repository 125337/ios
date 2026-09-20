// hintForSliderTag:min:max: @ 01d0b81c

/* Function Stack Size: 0x28 bytes */

ID WCRefineQuickChatSettingsViewController::hintForSliderTag_min_max_
             (ID param_1,SEL param_2,long_long param_3,double param_4,double param_5)

{
  undefined *local_18;
  
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_3 != 2) {
    if (param_3 == 4) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_01d0b948;
    }
    if (param_3 != 6) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_01d0b948;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
  _objc_retainAutoreleasedReturnValue();
LAB_01d0b948:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

