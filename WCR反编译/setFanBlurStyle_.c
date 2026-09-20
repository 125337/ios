// setFanBlurStyle: @ 01612e8c

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setFanBlurStyle_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  long_long local_78;
  long_long local_70;
  
  local_70 = param_3;
  if (6 < (long)param_3) {
    local_70 = 6;
  }
  if ((long)local_70 < 1) {
    local_78 = 0;
  }
  else {
    local_78 = local_70;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_fanBlurStyle);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

