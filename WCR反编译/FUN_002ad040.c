// FUN_002ad040 @ 002ad040

void FUN_002ad040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_f8;
  undefined *local_58 [3];
  undefined *local_40;
  undefined4 local_38;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_5);
  local_31 = param_6;
  if (local_30 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_38 = 1;
  }
  else {
    puVar1 = local_30;
    FUN_002acd8c(local_30,0x24f754);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineTabBar_026ce4c8;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineTabBar_026ce4c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      local_f8 = (undefined *)0x0;
    }
    else {
      local_f8 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_f8;
    if ((local_40 != (undefined *)0x0) && (local_f8 == (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeFromSuperview_026ca800);
    }
    if ((local_58[0] == (undefined *)0x0) && ((local_31 & 1) != 0)) {
      puVar2 = PTR_WCRefineTabBar_026ce4c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithFrame__026ca6e8);
      puVar1 = local_58[0];
      local_58[0] = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setTag__026caa80,DAT_02323f90);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setOpaque__026ca9f8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setClipsToBounds__026ca8c8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setUserInteractionEnabled__026caad8,1)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_insertSubview_atIndex__026ca748,local_58[0],0);
    }
    if (local_58[0] != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_58[0],PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_58[0],PTR_s_setAlpha__026ca860)
      ;
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setOpaque__026ca9f8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setClipsToBounds__026ca8c8,0);
    }
    puVar1 = local_58[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
    local_38 = 1;
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

