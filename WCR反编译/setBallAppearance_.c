// setBallAppearance: @ 0160c9a4

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setBallAppearance_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  long_long local_70;
  long_long local_68;
  
  local_68 = param_3;
  if (2 < (long)param_3) {
    local_68 = 2;
  }
  if ((long)local_68 < 1) {
    local_70 = 0;
  }
  else {
    local_70 = local_68;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_ballAppearance);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_70 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTriggerMode__026b18b8,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,puVar1,&cf_menuOpenTrigger);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setCurrentValue_forKey__026b18a8,&cf_wcr_sf_drag_ball,
               &cf_ballGestureLongPress);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerMode_026b18c0);
    if (IVar2 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTriggerMode__026b18b8,0);
    }
  }
  return;
}

