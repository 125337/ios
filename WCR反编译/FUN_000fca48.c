// FUN_000fca48 @ 000fca48

void FUN_000fca48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  undefined4 local_74;
  long local_70;
  undefined *local_68;
  char *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = "FirstUnReadTipView";
  _objc_getClass();
  local_68 = PTR_s_showTipWithDelegate_parentView_c_0269ebf8;
  lVar2 = local_30;
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = lVar2;
  if (((local_50 == (char *)0x0) || (lVar2 == 0)) ||
     (pcVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_68),
     ((ulong)pcVar1 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_74 = 1;
  }
  else {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,local_68,0,local_70,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_80 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_28 = (char *)0x0;
      local_74 = 1;
    }
    else {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      local_88 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeFromSuperview_026ca800);
        local_28 = (char *)0x0;
        local_74 = 1;
      }
      else {
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,1);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar1;
        if (local_48 != 0) {
          puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setImage__026ca978,local_48);
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
                   PTR_s_wcr_onChatPositionDIYTipTap__0269eb70,0x40);
        pcVar1 = local_80;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = pcVar1;
        uVar4 = local_38;
        FUN_000fd06c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setAccessibilityIdentifier__0269ebc0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_98,PTR_s_setAlpha__026ca860);
        pcVar1 = local_98;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_74 = 1;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

