// setupMediaWebView @ 0196df88

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupMediaWebView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_98;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_makeWebViewBlack__026ba188,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  IVar3 = local_18;
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileURLWithPath__0269f540);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_URLByDeletingLastPathComponent_026af050);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_30;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLPathAllowedCharacterSet_026abb00);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringByAddingPercentEncodingWit_0269d900);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_98 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_98 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_98;
  }
  local_49 = puVar5 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_98;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &
             cf_<_doctypehtml><html><head><metaname__viewport_content__width_device_width,initial_scale_1,maximum_scale_6,user_scalable_yes_><style>html_body_margin_0_height_100___background__000___wrap_position_fixed_inset_0_display_flex_align_items_center_justify_content_center__img_max_width_100___max_height_100___width_auto_height_auto_image_rendering_auto__<_style><_head><body><divclass__wrap_><imgsrc_____><_div><_body><_html>
            );
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_loadHTMLString_baseURL__026a1cf0,puVar1,local_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

