// handleThemeLongPress: @ 01fc1948

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::handleThemeLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_f8;
  ID local_d8;
  bool local_91;
  ID local_90;
  ID local_88;
  bool local_79;
  ID local_78;
  byte local_69;
  ID local_68;
  ID local_60 [3];
  ID local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar2 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,1)
    ;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_locationInView__026ca798);
    IVar7 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,IVar4,PTR_s_indexPathForRowAtPoint__026a13a8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar7;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_69 = 0;
    local_79 = false;
    bVar1 = local_48 == 0;
    if (bVar1) {
      local_d8 = 0;
    }
    else {
      local_d8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_d8;
    }
    local_79 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60[0] = local_d8;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    IVar3 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar8);
    local_91 = (IVar4 & 1) == 0;
    if (local_91) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_userInfo_0269f138);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_f8;
    }
    local_91 = !local_91;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_f8;
    if (local_91) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (IVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showThemeActionsNamed__026ca020,local_88)
      ;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(local_60,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

