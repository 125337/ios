// FUN_0024af9c @ 0024af9c

void FUN_0024af9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_50;
  undefined4 local_44;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bottomBar_026a0ef8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_28 = param_1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (local_28 == 0) {
    local_44 = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar2 == 0) {
      local_50 = (char *)0x0;
      pcVar3 = "MMUICommonUtil";
      _objc_getClass();
      puVar1 = PTR_s_getBottomBarButtonWithTitle_targ_026a0f30;
      if (pcVar3 != (char *)0x0) {
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getBottomBarButtonWithTitle_targ_026a0f30);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,puVar1,&cf_yeQR_,local_18,PTR_s_WCRefine_onMoveToGroupTouched__026a0e08,
                     0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_50;
          local_50 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
      if (local_50 == (char *)0x0) {
        pcVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_50;
        local_50 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setTitle_forState__026caab8,&cf_yeQR_,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_18,
                   PTR_s_WCRefine_onMoveToGroupTouched__026a0e08,0x40);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTag__026caa80,DAT_02323e90);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAutoresizingMask__026ca878,0x24);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setEnabled__026ca938,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle_forState__026caab8,&cf_R_,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_50);
      _objc_storeStrong(&local_50,0);
      local_44 = 0;
    }
    else {
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

