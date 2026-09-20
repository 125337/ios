// handleParamConfirm: @ 01637520

/* Function Stack Size: 0x18 bytes */

void WCRSFURLSchemeOpener::handleParamConfirm_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_50;
  undefined *local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_016360a8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveAlert__026b1ad0,0);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SpeN_Nzz);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_askNextOrOpen_026b1b20);
    local_34 = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingKeys_026b1af0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancel_0269d1e8);
      local_34 = 1;
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingKeys_026b1af0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingKeys_026b1af0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_30;
      local_48 = puVar3;
      FUN_016378a8();
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_18;
      local_50 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_templateURL_026b1af8);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTemplateURL__026b1ad8);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_askNextOrOpen_026b1b20);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

