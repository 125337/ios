// setAtMentionNotificationFormat: @ 01feabf8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAtMentionNotificationFormat_(ID param_1,SEL param_2,ID param_3)

{
  SEL SVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  uVar3 = local_28;
  local_30 = IVar2;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  FUN_01fd95c0(IVar2,SVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_01fe8ca8();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

