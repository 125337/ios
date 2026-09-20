// FUN_00443cd0 @ 00443cd0

void FUN_00443cd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewWithTag__026cabe0,0x2c63f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_023241a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setShowsHorizontalScrollIndicato_0269f108,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setShowsVerticalScrollIndicator__026caa68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAlwaysBounceHorizontal__0269f110,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelaysContentTouches__026ca908,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCanCancelContentTouches__026ca8b0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addSubview__026ca4c0,local_28);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

