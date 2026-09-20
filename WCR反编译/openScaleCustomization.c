// openScaleCustomization @ 01cac9a0

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginTopViewController::openScaleCustomization(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_avatarScale_026c2fa8);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showInputAlertWithTitle_placehol_026b9588,&cf___>ekO,&cf__YN1,puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

