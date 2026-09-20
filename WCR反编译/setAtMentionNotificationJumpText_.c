// setAtMentionNotificationJumpText: @ 01feb234

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAtMentionNotificationJumpText_(ID param_1,SEL param_2,ID param_3)

{
  SEL SVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_30 = IVar2;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  IVar2 = local_30;
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_50 = &cf_pQ_MO0R_yrmo_;
  }
  else {
    local_50 = local_38;
  }
  FUN_01fd95c0(IVar2,SVar1,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_01fe8ca8();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

