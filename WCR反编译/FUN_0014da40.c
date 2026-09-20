// FUN_0014da40 @ 0014da40

byte FUN_0014da40(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  ulong local_68;
  cfstringStruct *local_60;
  ulong local_58;
  double local_50;
  undefined4 local_34;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == 0) {
    local_21 = false;
    local_34 = 1;
    goto LAB_0014e054;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getKFCustomToolBarHeight_0269f4b8);
  if (((uVar2 & 1) != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getKFCustomToolBarHeight_0269f4b8),
     local_50 = param_1, 0.5 < param_1)) {
    local_21 = true;
    local_34 = 1;
    goto LAB_0014e054;
  }
  local_58 = 0;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_kfCustomToolBar_0269f4c0);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kfCustomToolBar_0269f4c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_58;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isHidden_026ca768),
      (uVar2 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_alpha_026ca4d8), param_1 < DAT_02323d38))
  {
    local_21 = false;
    local_34 = 1;
  }
  else {
    pcVar5 = &cf_WWKFCustomToolBar;
    dVar6 = DAT_02323d38;
    _NSClassFromString();
    local_60 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_0014ddcc;
      local_21 = false;
      local_34 = 1;
    }
    else {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,pcVar5);
      if ((uVar2 & 1) == 0) {
        local_21 = false;
        local_34 = 1;
      }
      else {
LAB_0014ddcc:
        uVar2 = local_30;
        FUN_0014a994();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        local_68 = uVar2;
        if (uVar2 != 0) {
          uVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = uVar2 != local_68;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (bVar1) {
          local_21 = false;
        }
        else {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_respondsToSelector__026ca818,
                     PTR_s_hasKFCustomToolBarItems_0269f4c8);
          if ((uVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
            _CGRectGetHeight(param_1,dVar6,param_3,param_4);
            local_21 = 1.0 < param_1;
          }
          else {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasKFCustomToolBarItems_0269f4c8);
            local_21 = (bool)((byte)uVar2 & 1);
          }
        }
        local_34 = 1;
        _objc_storeStrong(&local_68,0);
      }
    }
  }
  _objc_storeStrong(&local_58,0);
LAB_0014e054:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

