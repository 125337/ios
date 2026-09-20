// FUN_01acda9c @ 01acda9c

void FUN_01acda9c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_80 [2];
  ulong local_70;
  cfstringStruct *local_68;
  ulong local_60;
  ulong local_58 [4];
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    local_38 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_panelBtnItem);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_38 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_38;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_58[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setEnabled__026ca938,1);
      uVar3 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_customView_0269ea28);
      _objc_retainAutoreleasedReturnValue();
      FUN_01ace230();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(local_58,0);
    }
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEnabled__026ca938,1);
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_customView_0269ea28);
      _objc_retainAutoreleasedReturnValue();
      FUN_01ace230();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_60,0);
    }
    pcVar4 = &cf_updateRightBarItemEnabled_;
    _NSSelectorFromString();
    uVar3 = local_28;
    local_68 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_68,1);
    }
    local_70 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_toolView);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_70;
    local_70 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_70 == 0) {
      local_2c = 1;
    }
    else {
      local_80[0] = 0;
      uVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_valueForKey__0269d128,&cf_completeButton)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_80[0];
      local_80[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_80[0];
      puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = local_70;
      if ((uVar3 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) != 0) {
          FUN_01ace230(local_70);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setEnabled__026ca938,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,local_80[0],PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80[0],PTR_s_setUserInteractionEnabled__026caad8,1);
      }
      _objc_storeStrong(local_80,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

