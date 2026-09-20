// touchTrailTailScale @ 020f6f80

/* Function Stack Size: 0x10 bytes */

double WCRefineConfig::touchTrailTailScale(ID param_1,SEL param_2)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  SEL SVar4;
  undefined *puVar5;
  float fVar6;
  double dVar7;
  double local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  dVar2 = DAT_02324000;
  dVar1 = DAT_02323d18;
  dVar7 = DAT_02324000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  fVar6 = SUB84(dVar7,0);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar4 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar4);
  if (local_30 == (undefined *)0x0) {
    fVar6 = 2.720083e+23;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_30 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_28;
    puVar3 = local_30;
    SVar4 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(SVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
  local_38 = (double)fVar6;
  if (local_38 < dVar1) {
    local_38 = dVar1;
  }
  if (dVar2 < local_38) {
    local_38 = dVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_38;
}

