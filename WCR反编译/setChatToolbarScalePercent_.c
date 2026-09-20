// setChatToolbarScalePercent: @ 021108a0

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setChatToolbarScalePercent_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  double local_80;
  double local_78;
  ID local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = (double)(long)(param_3 * 10.0) / 10.0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (local_30 <= 60.0) {
    local_78 = 60.0;
  }
  else {
    local_78 = local_30;
  }
  if (local_78 <= 140.0) {
    local_80 = local_78;
  }
  else {
    local_80 = 140.0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_chatToolbarScalePercent
            );
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38,0);
  return;
}

