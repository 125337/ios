// presentFolderPickerFrom:completion: @ 01f6d2bc

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackManagerViewController::presentFolderPickerFrom_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_ensureChatIncludeDirectoryExists_026c9850,0);
  puVar1 = PTR_WCRefineVoicePackManagerViewController_026cea28;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setFolderPickMode__026c9858,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFolderPickCompletion__026c9860,local_30);
  lVar2 = local_28;
  FUN_01f6d4bc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_40 = lVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,0);
  if (local_40 == 0) {
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))(local_30,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

