// showTQQOnlineTextVerticalOffsetSettings: @ 01c604a0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineNavigationAvatarViewController::showTQQOnlineTextVerticalOffsetSettings_
          (WCRefineNavigationAvatarViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineTextVerticalOffset_026c2078);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineTextVerticalOffset_026c2078);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (in_d0 < 1000.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineTextVerticalOffset_026c2078);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (in_d0 <= -1000.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineTextVerticalOffset_026c2078);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__Q__0f);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      local_30 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineTextVerticalOffset_026c2078);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_Q__0f);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  IVar2 = local_18;
  puVar3 = local_30;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01c60784;
  local_40 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_showInputAlertWithTitle_message__026c24d8,&cf_eW_WvMOy,&cf_eQpeW_USreW_MOy,
             puVar3,&cf_eQMOy<P,&local_58);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

