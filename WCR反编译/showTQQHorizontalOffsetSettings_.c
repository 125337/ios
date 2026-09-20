// showTQQHorizontalOffsetSettings: @ 01c63bf0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineNavigationAvatarViewController::showTQQHorizontalOffsetSettings_
          (WCRefineNavigationAvatarViewController *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeOnlineModeContext_026c1d10);
  local_30 = &cf_ck<PSy;
  if ((IVar3 & 1) == 0) {
    local_30 = &cf_ck<PSy;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_18;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqAvatarHorizontalOffset_026c1f98);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  pcVar1 = local_30;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01c63dcc;
  local_40 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_showInputAlertWithTitle_message__026c2518,&cf_4ls_OPy,&cf_eQ4ls_OPy,puVar4,
             pcVar1,1,&local_58,in_d0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

