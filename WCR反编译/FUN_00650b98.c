// FUN_00650b98 @ 00650b98

void FUN_00650b98(undefined8 param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_d8;
  byte local_62;
  bool local_61;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  local_31 = param_3;
  local_30 = param_2;
  FUN_006549cc();
  _objc_getAssociatedObject(uVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_50 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_61 = (uVar3 & 1) == 0;
    if (local_61) {
      local_d8 = 0;
    }
    else {
      local_d8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_d8;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_d8;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_62 = 0;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_isShowing_0269ec18);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isShowing_0269ec18);
      local_62 = (byte)uVar1;
    }
    if (((((local_31 & 1) == 0) || ((local_62 & 1) == 0)) || (local_58 == 0)) ||
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,
                  PTR_s_hideAnimate_parentView_finishBlo_026a62a0), (uVar1 & 1) == 0)) {
      uVar1 = local_40;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_40,PTR_s_setAlpha__026ca860);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_hideAnimate_parentView_finishBlo_026a62a0,1,local_58,0);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setIsShowing__026a62a8);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIsShowing__026a62a8,0);
    }
    uVar1 = local_28;
    uVar4 = local_30;
    FUN_006549f8();
    _objc_setAssociatedObject(uVar1,uVar4,0,1);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

