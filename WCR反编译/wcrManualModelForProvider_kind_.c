// wcrManualModelForProvider:kind: @ 017dcdf8

/* Function Stack Size: 0x20 bytes */

void WCRefineAISettingsViewController::wcrManualModelForProvider_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_a8;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingModelProviderID__026b5390);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingModelKind__026b5398,local_30);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrCurrentModelForProvider_kind__026b53b0,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIAlertView";
  local_38 = pcVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_initWithTitle_message__0269d260,puVar4,&cf_KbRkXQ_jW);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setManualModelAlert__026b5408);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manualModelAlert_026b5410);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manualModelAlert_026b5410);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manualModelAlert_026b5410);
    _objc_retainAutoreleasedReturnValue();
    if (local_38 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    else {
      local_a8 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98,local_a8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manualModelAlert_026b5410);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manualModelAlert_026b5410);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_manualModelAlert_026b5410);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

