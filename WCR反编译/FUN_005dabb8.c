// FUN_005dabb8 @ 005dabb8

void FUN_005dabb8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char *local_b0;
  char *local_78;
  char *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_resignInput_026a5560);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resignInput_026a5560);
    }
    puVar2 = PTR_WCRefineMomentsTailPickerViewController_026ce7d8;
    _objc_alloc_init();
    local_38[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPostSessionMode__026a5c90,1);
    _objc_initWeak(auStack_40,local_18);
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_005daf3c;
    local_50 = &DAT_0257e3e8;
    _objc_copyWeak(auStack_48,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setOnPick__026a5c98,&local_68);
    local_b0 = "MMUINavigationController";
    _objc_getClass();
    if (local_b0 == (char *)0x0) {
      local_b0 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_70 = local_b0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_initWithRootViewController__0269d2a0,local_38[0]);
    local_78 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setModalPresentationStyle__0269d2a8,1);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_PresentModalViewController_anima_026a5ca0);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_78,1,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_PresentModalViewController_anima_026a5ca0,local_78,1);
    }
    _objc_storeStrong(&local_78);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(local_38,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

