// keywordAutoReplyDelaySeconds @ 01fe5e9c

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::keywordAutoReplyDelaySeconds(WCRefineConfig *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  FUN_01fd9510(param_1,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_01fd95c0(local_30,local_28,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
  if (0.0 <= in_d0) {
    local_18 = in_d0;
    if (300.0 < in_d0) {
      local_18 = 300.0;
    }
  }
  else {
    local_18 = 0.0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

