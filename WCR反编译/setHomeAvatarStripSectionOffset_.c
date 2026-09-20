// setHomeAvatarStripSectionOffset: @ 02156dc4

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setHomeAvatarStripSectionOffset_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  long_long local_70;
  long_long local_68;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if ((long)local_28 < -4) {
    local_68 = 0xfffffffffffffffb;
  }
  else {
    local_68 = local_28;
  }
  if ((long)local_68 < 4) {
    local_70 = local_68;
  }
  else {
    local_70 = 3;
  }
  local_28 = local_70;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setObject_forKey__026ca9e8,puVar1,&cf_homeAvatarStripSectionOffset);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

