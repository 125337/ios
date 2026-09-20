// selectProfileAvatarRotationMode @ 01cd8de0

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::selectProfileAvatarRotationMode
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  ID IVar3;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(pcVar1,&DAT_028e46f8,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

