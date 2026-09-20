// settingDelay @ 01d24038

/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::settingDelay(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_redEnvelopMinDelaySeconds_026a6ae0);
  puVar4 = local_28;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopMaxDelaySeconds_026a6ae8);
  local_40 = (undefined *)0x0;
  local_38 = puVar4;
  if ((local_30 == (undefined *)0x0) && (puVar4 == (undefined *)0x0)) {
    _objc_storeStrong(&local_40,&::cf___);
  }
  else if (local_30 == puVar4) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  IVar1 = local_18;
  puVar4 = local_28;
  puVar3 = local_40;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01d242dc;
  local_58 = &DAT_0257cbd8;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_50 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showInputAlertWithTitle_message__026c24d8,&cf__b_S,&cf_eQ_eky,puVar3,
             &::cf_0,&local_70);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

