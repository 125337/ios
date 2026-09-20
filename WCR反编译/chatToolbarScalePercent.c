// chatToolbarScalePercent @ 021106c4

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::chatToolbarScalePercent(WCRefineConfig *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  double in_d0;
  double local_90;
  double local_88;
  double local_80;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar1 & 1) == 0) {
    local_80 = 100.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_80 = in_d0;
  }
  local_88 = (double)(long)(local_80 * 10.0) / 10.0;
  if (local_88 <= 60.0) {
    local_88 = 60.0;
  }
  if (local_88 <= 140.0) {
    local_90 = local_88;
  }
  else {
    local_90 = 140.0;
  }
  _objc_storeStrong(&local_28,0);
  return local_90;
}

