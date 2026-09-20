// touchTrailTailDuration @ 020f6bec

/* Function Stack Size: 0x10 bytes */

double WCRefineConfig::touchTrailTailDuration(ID param_1,SEL param_2)

{
  double dVar1;
  undefined *puVar2;
  SEL SVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  double local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323d18;
  dVar6 = DAT_02323d18;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  fVar5 = SUB84(dVar6,0);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar3);
  if (local_30 == (undefined *)0x0) {
    fVar5 = 4.172325e-08;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_30 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar4 = local_28;
    puVar2 = local_30;
    SVar3 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setObject_forKey__026ca9e8,puVar2);
    (*(code *)PTR__objc_release_02578630)(SVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
  local_38 = (double)fVar5;
  if (local_38 < dVar1) {
    local_38 = dVar1;
  }
  if (3.0 < local_38) {
    local_38 = 3.0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_38;
}

