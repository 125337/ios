// glyphDrawingDisplayName @ 019ee404

/* Function Stack Size: 0x10 bytes */

ID WCRefineFontConvertViewController::glyphDrawingDisplayName(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_glyphDrawingRuleObjects_026bb288);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    local_58 = &cf__gn_;
  }
  else {
    local_58 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

