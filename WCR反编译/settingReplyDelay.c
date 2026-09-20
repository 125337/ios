// settingReplyDelay @ 01d22ae0

/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::settingReplyDelay(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x7;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_redEnvelopAutoReplyDelaySeconds_026a6ab8);
  IVar2 = local_18;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01d22ca0;
  local_48 = &DAT_0257cbd8;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_18;
  local_40 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_showInputAlertWithTitle_message__026c24d8,&cf_RVY_e,&cf_eQ_ype0,puVar5,
             &::cf_0,&local_60,in_x7,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

