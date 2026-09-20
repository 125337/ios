// setAtMeAutoReplyDelaySeconds: @ 01ff1564

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAtMeAutoReplyDelaySeconds_(ID param_1,SEL param_2,double param_3)

{
  SEL SVar1;
  undefined *puVar2;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  FUN_01fedcf8(local_28);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_01fd95c0(param_1,SVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

