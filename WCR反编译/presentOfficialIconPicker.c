// presentOfficialIconPicker @ 01aa1ed0

/* Function Stack Size: 0x10 bytes */

void WCRGroupAvatarPickerCoordinator::presentOfficialIconPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *local_60;
  char *local_38;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRGroupOfficialIconPickerViewController_026cf300;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithGroupId_completion__026bdb10,IVar2);
  local_28 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_60 = "MMUINavigationController";
  _objc_getClass();
  if (local_60 == (char *)0x0) {
    local_60 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  }
  local_30 = local_60;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_38 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presenter_0269fb78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

