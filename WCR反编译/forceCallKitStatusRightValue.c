// forceCallKitStatusRightValue @ 01f4e86c

/* Function Stack Size: 0x10 bytes */

ID WCRefineVersionController::forceCallKitStatusRightValue(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_forceCallKitGrayValue_026c9168);
  pcVar1 = &cf_VoIPPushKitNotifyService;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_forceCallKitClassBool_sel__026c9178,pcVar1,
             PTR_s_isCallkitAvailable_026c9170);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_pp__);
  return (ID)puVar2;
}

