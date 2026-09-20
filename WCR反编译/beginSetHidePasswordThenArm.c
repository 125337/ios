// beginSetHidePasswordThenArm @ 01c898c8

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginContainerSettingsViewController::beginSetHidePasswordThenArm
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = DAT_028c6900;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,uVar1,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_promptSetHidePasswordWithMessage_026c2a18,&cf_HQn_);
  return;
}

