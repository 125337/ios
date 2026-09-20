// repeatButtonSizeOther @ 020149a8

/* Function Stack Size: 0x10 bytes */

double __thiscall WCRefineConfig::repeatButtonSizeOther(WCRefineConfig *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  SEL SVar2;
  undefined *puVar3;
  float in_s0;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_30 == (undefined *)0x0) {
    in_s0 = 13.0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar3 = local_28;
    puVar1 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar1);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (double)in_s0;
}

