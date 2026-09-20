// selectThemeCell: @ 01fbe3b4

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::selectThemeCell_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ulong local_68;
  bool local_41;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_swipeOpenCell_026ca040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_41 = (uVar4 & 1) == 0;
    if (local_41) {
      local_68 = 0;
    }
    else {
      local_68 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_68;
    }
    local_41 = !local_41;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_68;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    IVar1 = local_18;
    uVar2 = local_38;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_role_026c9ee8);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_applyPackNamed_forRole_showToast_026ca018,uVar2,IVar5,1);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,1)
    ;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

