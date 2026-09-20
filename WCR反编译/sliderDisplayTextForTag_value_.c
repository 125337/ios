// sliderDisplayTextForTag:value: @ 01e1ce60

/* Function Stack Size: 0x20 bytes */

ID WCRefineSuperFloatSettingsViewController::sliderDisplayTextForTag_value_
             (ID param_1,SEL param_2,long_long param_3,double param_4)

{
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_3 == 0x11944) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0x11945) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fs);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0x11946) {
      if (param_3 == 0x1194b) {
        if (0.5 <= param_4) {
          local_58 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
          _objc_retainAutoreleasedReturnValue();
          local_40 = local_58;
        }
        else {
          local_58 = &::cf_format_s_;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_58;
        if (0.5 <= param_4) {
          (*(code *)PTR__objc_release_02578630)(local_40);
        }
        goto LAB_01e1d144;
      }
      if (param_3 != 0x1194c) {
        if (param_3 == 0x1194e) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_01e1d144;
        }
        if (1 < param_3 - 0x1194f) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_01e1d144;
        }
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f__);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_01e1d144:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

