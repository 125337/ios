// setHomeAvatarStripBottomSpacing:forRow: @ 0215cda8

/* Function Stack Size: 0x20 bytes */

void WCRefineConfig::setHomeAvatarStripBottomSpacing_forRow_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  long_long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_38;
  long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  if (param_3 < -80.0) {
    local_28 = -80.0;
  }
  if (80.0 < local_28) {
    local_28 = 80.0;
  }
  local_30 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_homeAvatarStripMutableRowConfigs_026ca448);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_38 = param_1;
  if ((-1 < (long)local_30) &&
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0),
     (long)lVar1 < (long)param_1)) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setHomeAvatarStripRowConfigs__026ca440,local_38);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

