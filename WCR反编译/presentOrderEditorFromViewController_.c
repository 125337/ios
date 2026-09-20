// presentOrderEditorFromViewController: @ 01ac3e98

/* Function Stack Size: 0x18 bytes */

void WCRefineGroupManagementViewController::presentOrderEditorFromViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *local_58;
  char *local_48;
  char *local_40;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR_WCRGroupListViewController_026cf330;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setEditingAllGroups__026bded0,1);
    local_58 = "MMUINavigationController";
    _objc_getClass();
    if (local_58 == (char *)0x0) {
      local_58 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_40 = local_58;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

