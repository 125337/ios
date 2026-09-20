// setSmallSignalNotify31MaxCountPerTenSeconds: @ 02182b04

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setSmallSignalNotify31MaxCountPerTenSeconds_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  unsigned_long_long local_40;
  ID local_38;
  unsigned_long_long local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  if ((param_3 == 0) || (local_40 = param_3, 0x1e < param_3)) {
    local_40 = 5;
  }
  local_30 = local_40;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,local_30)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setObject_forKey__026ca9e8,puVar1,
             &cf_WCRefineSmallSignalNotify31MaxCountPerTenSeconds);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38,0);
  return;
}

