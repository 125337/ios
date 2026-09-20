// buildCloudView @ 0170cc74

/* Function Stack Size: 0x10 bytes */

ID SwitchThemesDayNight::buildCloudView(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_70;
  long local_68;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setUserInteractionEnabled__026caad8,0);
  for (local_30 = 0; puVar2 = local_28, local_30 < 2; local_30 = local_30 + 1) {
    for (local_38 = 0; local_38 < 8; local_38 = local_38 + 1) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      if (local_30 == 0) {
        local_68 = local_38 + 900;
      }
      else {
        local_68 = local_38 + 800;
      }
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,local_68);
      bVar1 = local_30 != 0;
      local_70 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_70;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,DAT_02324020,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_70;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888,local_70);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_40);
      _objc_storeStrong(&local_40,0);
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

