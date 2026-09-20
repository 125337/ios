// setFanItemSpacing: @ 01611c7c

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setFanItemSpacing_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_3,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_fanItemSpacing);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

