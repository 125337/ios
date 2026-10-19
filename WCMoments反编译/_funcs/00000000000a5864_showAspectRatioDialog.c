// showAspectRatioDialog @0xa5864

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::showAspectRatioDialog(ID param_1,SEL param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_160;
  undefined8 local_128;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSend_cropView(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_aspectRatioLockEnabled(uVar4,local_128);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_cropView(local_28,local_128);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    bVar2 = _objc_msgSend_cropBoxAspectRatioIsPortrait(uVar4,local_128);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_31 = bVar2;
    _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_28);
    local_40 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_localizedStringForKey_value_table_
              (local_40,local_128,&cf_Cancel,&cf___,&cf_WCMTOCropViewControllerLocalizable);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    _objc_msgSend_allowedAspectRatios(local_28,local_128);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar5 == 0) {
      local_59 = 0;
      local_69 = 0;
      if ((local_31 & 1) == 0) {
        _objc_msgSend_landscapePresets
                  (&objc::class_t::WCMTOCropViewControllerAspectRatioPreset,local_128);
        local_160 = _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_160;
      }
      else {
        _objc_msgSend_portraitPresets
                  (&objc::class_t::WCMTOCropViewControllerAspectRatioPreset,local_128);
        local_160 = _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        local_58 = local_160;
      }
      _objc_storeStrong(&local_50,local_160);
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_68);
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_58);
      }
    }
    else {
      _objc_msgSend_allowedAspectRatios(local_28,local_128);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      uVar4 = local_50;
      local_50 = uVar6;
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    _objc_msgSend_alertControllerWithTitle_message_preferredStyle_
              (&_OBJC_CLASS___UIAlertController,local_128,0,0,0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_78 = uVar4;
    _objc_msgSend_actionWithTitle_style_handler_
              (&_OBJC_CLASS___UIAlertAction,local_128,local_48,1,0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addAction_(uVar4,local_128);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    for (local_80 = 0; uVar1 = local_80, uVar7 = _objc_msgSend_count(local_50,local_128),
        uVar1 < uVar7; local_80 = local_80 + 1) {
      local_c0 = PTR___NSConcreteStackBlock_001104f0;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = ___48__WCMTOCropViewController_showAspectRatioDialog__block_invoke;
      local_a8 = &___block_descriptor_56_e8_32s40s_e23_v16__0__UIAlertAction_8l;
      local_a0 = (*(code *)PTR__objc_retain_00110460)(local_28);
      local_98 = (*(code *)PTR__objc_retain_00110460)(local_50);
      local_90 = local_80;
      local_88 = _objc_retainBlock(&local_c0);
      _objc_msgSend_objectAtIndexedSubscript_(local_50,local_128,local_80);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_title(uVar4,local_128);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_actionWithTitle_style_handler_
                (&_OBJC_CLASS___UIAlertAction,local_128,uVar6,0,local_88);
      local_c8 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_addAction_(local_78,local_128,local_c8);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
    }
    _objc_msgSend_setModalPresentationStyle_(local_78,local_128,7);
    _objc_msgSend_popoverPresentationController(local_78,local_128);
    local_d0 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_toolbar(local_28,local_128);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSourceView_(local_d0,local_128);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_toolbar(local_28,local_128);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_clampButtonFrame(uVar4,local_128);
    _objc_msgSend_setSourceRect_(uVar6,in_d1,in_d2,in_d3,local_d0,local_128);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_presentViewController_animated_completion_(local_28,local_128,local_78,1);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    _objc_msgSend_cropView(local_28,local_128);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAspectRatioLockEnabled_(uVar4,local_128,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_toolbar(local_28,local_128);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setClampButtonGlowing_(uVar4,local_128,0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  return;
}

