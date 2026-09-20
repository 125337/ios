// smallSignalAutoBounceMaxCountPerTenSeconds @ 021825d8

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCRefineConfig::smallSignalAutoBounceMaxCountPerTenSeconds(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,
             &cf_WCRefineSmallSignalAutoBounceMaxCountPerTenSeconds);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_40 = 3;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_integerValue_026ca750);
    local_40 = param_1;
  }
  local_38 = local_40;
  if (((long)local_40 < 1) || (0xb < (long)local_40)) {
    local_38 = 3;
  }
  if ((local_30 == 0) ||
     (IVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750),
     local_38 != IVar1)) {
    IVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,
               &cf_WCRefineSmallSignalAutoBounceMaxCountPerTenSeconds);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_38;
}

