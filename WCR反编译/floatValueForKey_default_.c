// floatValueForKey:default: @ 0183bb28

/* Function Stack Size: 0x20 bytes */

double WCRefineAvatarFrameSpecialUserDetailViewController::floatValueForKey_default_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  double local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar1 & 1) == 0) {
    local_18 = local_38;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    local_18 = param_4;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

