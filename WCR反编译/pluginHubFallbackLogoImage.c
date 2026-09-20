// pluginHubFallbackLogoImage @ 00eb2adc

/* WARNING: Removing unreachable block (ram,0x00eb2b9c) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFramePageOverlayHelper::pluginHubFallbackLogoImage(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,&cf_WeChat_Lab_Logo);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
               &cf_app_badge_fill);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

