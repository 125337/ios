// ensureBlurView @ 00eb5638

/* Function Stack Size: 0x10 bytes */

ID WCRefineBackgroundBlur::ensureBlurView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundBlurView_026ab238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    local_30 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setBackgroundBlurView__026ab240,local_38);
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundBlurView_026ab238);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

