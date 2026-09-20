// setFanManualClose: @ 01612aa8

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatProfileStore::setFanManualClose_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_fanManualClose);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

