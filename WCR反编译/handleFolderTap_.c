// handleFolderTap: @ 01f8309c

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPathPickerViewController::handleFolderTap_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_60;
  ID local_58;
  uint local_4c;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_30;
  local_30 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_directory_026ba278);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = PTR_WCRefineVoicePackPathPickerViewController_026cf178;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_18;
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onPick_026b9b08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setOnPick__026a5c98);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  local_4c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

