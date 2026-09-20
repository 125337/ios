// FUN_002f6170 @ 002f6170

byte FUN_002f6170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_1;
  uStack_20 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,uStack_20,local_30,PTR_s_hitTest_withEvent__026ca670,0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    while (uVar1 = local_40, local_40 != 0) {
      puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_40;
      if ((uVar1 & 1) != 0) {
LAB_002f6320:
        local_11 = 1;
        goto LAB_002f6460;
      }
      puVar2 = PTR__OBJC_CLASS___UITextView_026ce1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = local_40;
      if ((uVar3 & 1) != 0) goto LAB_002f6320;
      puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) goto LAB_002f6320;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      FUN_002f5d90();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar3 & 1) != 0) {
        local_11 = 1;
        goto LAB_002f6460;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_11 = 0;
LAB_002f6460:
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

