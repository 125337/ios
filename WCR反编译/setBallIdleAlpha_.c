// setBallIdleAlpha: @ 0160d128

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setBallIdleAlpha_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  double local_78;
  double local_70;
  
  local_70 = param_3;
  if (1.0 < param_3) {
    local_70 = 1.0;
  }
  if (local_70 <= 0.0) {
    local_78 = 0.0;
  }
  else {
    local_78 = local_70;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_ballIdleAlpha);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

