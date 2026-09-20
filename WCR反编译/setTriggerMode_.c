// setTriggerMode: @ 0160b7c8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setTriggerMode_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ballAppearance_026b18a0);
  if (IVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar2,&cf_triggerMode);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,param_3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar2,&cf_triggerMode);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

