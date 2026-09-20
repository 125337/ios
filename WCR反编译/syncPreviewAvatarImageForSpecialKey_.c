// syncPreviewAvatarImageForSpecialKey: @ 00eb2bc8

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFramePageOverlayHelper::syncPreviewAvatarImageForSpecialKey_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_38;
  ulong local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_hub__);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_my_page__);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_menu__),
       (uVar1 & 1) == 0)) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_18 = (undefined *)0x0;
    }
    goto LAB_00eb2d94;
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pluginHubConfiguredAvatarPath_026ab1e0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
LAB_00eb2ce4:
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pluginHubFallbackLogoImage_026ab1e8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
    _objc_storeStrong(&local_40,0);
    if (puVar2 == (undefined *)0x0) goto LAB_00eb2ce4;
  }
  _objc_storeStrong(&local_38,0);
LAB_00eb2d94:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

