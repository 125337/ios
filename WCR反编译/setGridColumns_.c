// setGridColumns: @ 016137e4

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setGridColumns_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  long_long local_88;
  long_long local_80;
  
  if ((long)param_3 < 1) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_gridColumns);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_80 = param_3;
    if (6 < (long)param_3) {
      local_80 = 6;
    }
    if ((long)local_80 < 3) {
      local_88 = 2;
    }
    else {
      local_88 = local_80;
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_gridColumns);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

