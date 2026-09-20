// presentCreateGroupFromViewController:telegramStyle:completion: @ 01ac3864

/* Function Stack Size: 0x24 bytes */

void WCRefineGroupManagementViewController::
     presentCreateGroupFromViewController_telegramStyle_completion_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  char *local_f0;
  undefined *local_d0;
  char *local_b8;
  char *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  byte local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if (local_38 == 0) {
    local_4c = 1;
  }
  else {
    local_61 = 0;
    local_71 = 0;
    local_81 = 0;
    local_91 = 0;
    if ((local_39 & 1) == 0) {
      local_d0 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      local_d0 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = local_d0 + 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRGroupCreateViewController_026cf318;
    local_a0 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTelegramStyle__026bdf40,local_39 & 1);
    local_f0 = "MMUINavigationController";
    _objc_getClass();
    if (local_f0 == (char *)0x0) {
      local_f0 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_b0 = local_f0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_f0,1);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

