// FUN_002c2678 @ 002c2678

void FUN_002c2678(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_50;
  undefined *local_40;
  byte local_35;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (undefined *)0x0) {
    local_1c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_floatingTabBarEnabled_0269e4b8);
    local_50 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_floatingTabBarSelectedBackground_026a18f0);
      local_50 = 0;
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_floatingTabBarSlideSwitchEnabled_026a18f8);
        local_50 = (byte)puVar1;
      }
    }
    local_35 = local_50 & 1;
    puVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9820);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    if ((local_35 & 1) == 0) {
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeGestureRecognizer__026ca808,puVar1);
        _objc_setAssociatedObject(local_18,&DAT_028c9820,0,1);
        _objc_setAssociatedObject(local_18,&DAT_028c9610,0,1);
        _objc_setAssociatedObject(local_18,&DAT_028c9611,0,1);
        _objc_setAssociatedObject(local_18,&DAT_028c9612,0,1);
        _objc_setAssociatedObject(local_18,&DAT_028c9613,0,1);
      }
      local_1c = 1;
    }
    else if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      puVar3 = PTR_WCRFloatingTabBarDragTarget_026ce4c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRFloatingTabBarDragTarget_026ce4c0,PTR_s_sharedTarget_026a1ae0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,puVar3,
                 PTR_s_handleFloatingDrag__026a1ae8);
      puVar1 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c68,local_40,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x408f400000000000,local_40,PTR_s_setAllowableMovement__0269e520);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelaysTouchesEnded__026a1af8,0);
      puVar1 = PTR_WCRFloatingTabBarDragTarget_026ce4c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRFloatingTabBarDragTarget_026ce4c0,PTR_s_sharedTarget_026a1ae0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addGestureRecognizer__026ca4a8,local_40);
      _objc_setAssociatedObject(local_18,&DAT_028c9820,local_40,1);
      local_1c = 0;
    }
    else {
      local_1c = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

