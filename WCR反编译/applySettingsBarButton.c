// applySettingsBarButton @ 0178fcc0

/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::applySettingsBarButton(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *local_48;
  int local_3c;
  undefined *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = &cf_hub_settings;
  local_20 = param_2;
  local_18 = param_1;
  _WCRPluginIconResolvedIcon(&cf_hub_settings,&cf_pencil_rectangle_regular);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  _WCRPluginIconValueIsAlbum();
  if (((ulong)pcVar1 & 1) != 0) {
    puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4036000000000000,PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_resolvedDisplayImageForItemID_si_026a6578,&cf_hub_settings);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_3c = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageWithRenderingMode__026ca690,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithImage_style_target_actio_026b47e8,puVar3,0,local_18,
                 PTR_s_openManagement_026b47e0);
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAccessibilityLabel__0269e968,&cf_n_);
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_3c = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
    if (local_3c != 0) goto LAB_0178ff6c;
  }
  pcVar1 = &cf_hub_settings;
  _WCRPluginIconResolvedSVGName(&cf_hub_settings,&cf_pencil_rectangle_regular);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_48,&cf_pencil_rectangle_regular);
  }
  pcVar1 = local_48;
  FUN_0178ff84(local_48,local_18,PTR_s_openManagement_026b47e0,&cf_n_);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_48,0);
  local_3c = 0;
LAB_0178ff6c:
  _objc_storeStrong(&local_28,0);
  return;
}

