// ============ 功能链 60  根: ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_3 @0xa1f5c ============
// 节点 523，按调用深度排序，自上而下读

// ---- [d0] ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_3 @0xa1f5c ----
// CALLERS: (根)
// CALLEES: viewDidLoad, showAspectRatioDialog


void ___38__WCMTOCropViewController_viewDidLoad__block_invoke_3(long param_1)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  _objc_msgSend_showAspectRatioDialog(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d1] viewDidLoad @0x60c0 ----
// CALLERS: ___33-[WCMVideoController_viewDidLoad]_block_invoke, ___33-[WCMVideoController_viewDidLoad]_block_invoke_2, ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke, ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke.9, ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_2, ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_3, ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_4, ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_5
// CALLEES: tableView, setTitle:, setTitle:


/* Function Stack Size: 0x10 bytes */



void WCMMomentsSettingsController::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_40;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMMomentsSettingsController;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"viewDidLoad");

  _objc_msgSend_setTitle_(local_18,local_40,&cf_SsgSW);

  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_tableView(local_18,local_40);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar2,local_40,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_navigationItem(local_18,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setLargeTitleDisplayMode_(uVar1,local_40,2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d1] showAspectRatioDialog @0xa5864 ----
// CALLERS: ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_3, ___48-[WCMTOCropViewController_showAspectRatioDialog]_block_invoke, _objc_msgSend$showAspectRatioDialog
// CALLEES: _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT, cropView, toolbar, setAspectRatioLockEnabled:, aspectRatioLockEnabled, allowedAspectRatios, portraitPresets, landscapePresets, title, cropBoxAspectRatioIsPortrait


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






// ---- [d2] tableView @0x8885c ----
// CALLERS: viewDidLoad, viewWillAppear:, tableView:numberOfRowsInSection:, tableView:titleForHeaderInSection:, tableView:titleForFooterInSection:, tableView:cellForRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, viewDidLoad
// CALLEES: setDataSource:, setDelegate:, setDelegate:, setDelegate:, setDelegate:


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBSheetView::tableView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 uVar5;

  undefined8 local_38;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  if (*(long *)(param_1 + (long)_tableView) == 0) {

    uVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);

    uVar1 = _objc_msgSend_initWithFrame_style_

                      (*(undefined8 *)PTR__CGRectZero_001108d8,

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_38,1);

    uVar2 = *(undefined8 *)(local_18 + (long)_tableView);

    *(undefined8 *)(local_18 + (long)_tableView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setDelegate_(*(undefined8 *)(local_18 + (long)_tableView),local_38,local_18);

    _objc_msgSend_setDataSource_(*(undefined8 *)(local_18 + (long)_tableView),local_38,local_18);

    _objc_msgSend_setEstimatedRowHeight_

              (0x4046000000000000,*(undefined8 *)(local_18 + (long)_tableView),local_38);

    _objc_msgSend_setEstimatedSectionFooterHeight_

              (*(undefined8 *)(local_18 + (long)_tableView),local_38);

    _objc_msgSend_setEstimatedSectionHeaderHeight_

              (0,*(undefined8 *)(local_18 + (long)_tableView),local_38);

    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_38);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(local_18 + (long)_tableView),local_38);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setAlwaysBounceVertical_(*(undefined8 *)(local_18 + (long)_tableView),local_38,0);

    _objc_msgSend_setSeparatorStyle_(*(undefined8 *)(local_18 + (long)_tableView),local_38,0);

    _objc_msgSend_setContentInsetAdjustmentBehavior_

              (*(undefined8 *)(local_18 + (long)_tableView),local_38,2);

    local_28 = _objc_opt_new(&_OBJC_CLASS___UIView);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_38);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_28,local_38);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setTableFooterView_

              (*(undefined8 *)(local_18 + (long)_tableView),local_38,local_28);

    uVar5 = *(undefined8 *)(local_18 + (long)_tableView);

    _objc_opt_self(&objc::class_t::WCMYBIBSheetCell);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_opt_self(&objc::class_t::WCMYBIBSheetCell);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _NSStringFromClass();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_registerClass_forCellReuseIdentifier_(uVar5,local_38,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_28,0);

  }

  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + (long)_tableView));

  return IVar4;

}






// ---- [d2] setTitle: @0xa9be0 ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, viewDidLoad, tableView:didSelectRowAtIndexPath:, cropHeaderImage:account:, -[UIViewController(WCMoments)_wcm_toggleFeed], _Attach
// CALLEES: titleLabel, frameForTitleLabelWithSize:verticalLayout:, _UIEdgeInsetsMake, cropView, titleLabel, verticalLayout, title, setCropRegionInsets:, setFrame:


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setTitle_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 uVar7;

  undefined8 local_118;

  ID local_48;

  class_t *local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  local_48 = local_28;

  local_40 = &objc::class_t::WCMTOCropViewController;

  _objc_msgSendSuper2(&local_48,"setTitle:",local_38);

  _objc_msgSend_title(local_28,local_118);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = _objc_msgSend_length(uVar2,local_118);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (lVar3 == 0) {

    _objc_msgSend_removeFromSuperview(*(undefined8 *)(local_28 + (long)_titleLabel),local_118);

    uVar7 = 0;

    uVar4 = 0;

    uVar5 = 0;

    uVar2 = _UIEdgeInsetsMake(0);

    _objc_msgSend_setCropRegionInsets_

              (uVar2,uVar4,uVar5,uVar7,*(undefined8 *)(local_28 + (long)_cropView),local_118);

    _objc_storeStrong(local_28 + (long)_titleLabel,0);

  }

  else {

    _objc_msgSend_title(local_28,local_118);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_titleLabel(local_28,local_118);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setText_(uVar4,local_118,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_titleLabel(local_28,local_118);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_sizeToFit(uVar2,local_118);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    IVar1 = local_28;

    _objc_msgSend_titleLabel(local_28,local_118);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_frame(uVar5,local_118);

    uVar2 = in_d2;

    uVar4 = in_d3;

    uVar7 = _objc_msgSend_verticalLayout(local_28,local_118);

    uVar6 = _objc_msgSend_frameForTitleLabelWithSize_verticalLayout_(in_d2,IVar1,local_118,uVar7);

    _objc_msgSend_titleLabel(local_28,local_118);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(uVar6,in_d3,uVar2,uVar4,uVar7,local_118);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar5);

  }

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d2] setTitle: @0xaf128 ----
// CALLERS: viewDidLoad, viewDidLoad, viewDidLoad, viewDidLoad, tableView:didSelectRowAtIndexPath:, cropHeaderImage:account:, -[UIViewController(WCMoments)_wcm_toggleFeed], _Attach
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewControllerAspectRatioPreset::setTitle_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 8,param_3);

  return;

}






// ---- [d2] _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT @0xa5e78 ----
// CALLERS: showAspectRatioDialog, cancelButtonTapped, portraitPresets, landscapePresets, setup
// CALLEES: (叶)


void _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_40;

  long local_38;

  undefined8 local_30;

  undefined8 local_28;

  undefined8 local_20;

  undefined8 local_18;

  

  local_18 = 0;

  _objc_storeStrong(&local_18,param_1);

  local_20 = (*(code *)PTR__objc_retain_00110460)(&cf_WCMTOCropViewControllerBundle);

  local_28 = 0;

  uVar1 = _objc_opt_class(local_18);

  _objc_msgSend_bundleForClass_(&_OBJC_CLASS___NSBundle,local_40,uVar1);

  local_30 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_URLForResource_withExtension_(local_30,local_40,local_20,&cf_bundle);

  local_38 = _objc_retainAutoreleasedReturnValue();

  if (local_38 == 0) {

    _objc_storeStrong(&local_28,local_30);

  }

  else {

    uVar1 = _objc_alloc(&_OBJC_CLASS___NSBundle);

    uVar2 = _objc_msgSend_initWithURL_(uVar1,local_40,local_38);

    uVar1 = local_28;

    local_28 = uVar2;

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);

  _objc_storeStrong(&local_38);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  _objc_storeStrong(&local_18,0);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}






// ---- [d2] cropView @0xaa358 ----
// CALLERS: cropViewController:didCropToImage:withRect:angle:, ___70-[WCMFeedController_cropViewController:didCropToImage:withRect:angle:]_block_invoke, cropViewController:didFinishCancelled:, viewDidLoad, viewWillAppear:, viewDidAppear:, frameForToolbarWithVerticalLayout:, adjustCropViewInsets
// CALLEES: setDelegate:, setDelegate:, image, image, view, initWithCroppingStyle:image:, image, setDelegate:, croppingStyle, image


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::cropView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_cropView) == 0) {

    uVar1 = _objc_alloc(&objc::class_t::WCMTOCropView);

    uVar2 = _objc_msgSend_croppingStyle(param_1,local_30);

    _objc_msgSend_image(param_1,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar1 = _objc_msgSend_initWithCroppingStyle_image_(uVar1,local_30,uVar2);

    uVar2 = *(undefined8 *)(param_1 + (long)_cropView);

    *(undefined8 *)(param_1 + (long)_cropView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_setDelegate_(*(undefined8 *)(param_1 + (long)_cropView),local_30,param_1);

    _objc_msgSend_setAutoresizingMask_(*(undefined8 *)(param_1 + (long)_cropView),local_30,0x12);

    _objc_msgSend_view(param_1,local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_insertSubview_atIndex_

              (uVar1,local_30,*(undefined8 *)(param_1 + (long)_cropView),0);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_cropView));

  return IVar4;

}






// ---- [d2] toolbar @0xaa4a8 ----
// CALLERS: viewDidLoad, frameForCropViewWithVerticalLayout:, adjustCropViewInsets, adjustToolbarInsets, ___48-[WCMTOCropViewController_viewDidLayoutSubviews]_block_invoke, _willRotateToInterfaceOrientation:duration:, _willAnimateRotationToInterfaceOrientation:duration:, ___79-[WCMTOCropViewController__willAnimateRotationToInterfaceOrientation:duration:]_block_invoke
// CALLEES: initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::toolbar(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_toolbar) == 0) {

    uVar1 = _objc_alloc(&objc::class_t::WCMTOCropToolbar);

    uVar1 = _objc_msgSend_initWithFrame_

                      (*(undefined8 *)PTR__CGRectZero_001108d8,

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_30);

    uVar2 = *(undefined8 *)(param_1 + (long)_toolbar);

    *(undefined8 *)(param_1 + (long)_toolbar) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_view(param_1,local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar1,local_30,*(undefined8 *)(param_1 + (long)_toolbar));

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_toolbar));

  return IVar3;

}






// ---- [d2] setAspectRatioLockEnabled: @0xaa8e4 ----
// CALLERS: resetCropViewLayout, showAspectRatioDialog, _objc_msgSend$setAspectRatioLockEnabled:
// CALLEES: cropView, toolbar, setAspectRatioPickerButtonHidden:, aspectRatioPickerButtonHidden, resetAspectRatioEnabled, aspectRatio, setAspectRatioLockEnabled:, resetAspectRatioEnabled, setClampButtonGlowing:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropViewController::setAspectRatioLockEnabled_(ID param_1,SEL param_2,bool param_3)



{

  bool bVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 local_30;

  

  _objc_msgSend_toolbar(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setClampButtonGlowing_(uVar3,local_30,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_msgSend_cropView(param_1,local_30);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAspectRatioLockEnabled_(uVar3,local_30,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  uVar4 = _objc_msgSend_aspectRatioPickerButtonHidden(param_1,local_30);

  if ((uVar4 & 1) == 0) {

    bVar1 = false;

    if ((param_3 & 1) != 0) {

      iVar2 = _objc_msgSend_resetAspectRatioEnabled(param_1,local_30);

      bVar1 = iVar2 == 0;

    }

    _objc_msgSend_setAspectRatioPickerButtonHidden_(param_1,local_30,bVar1);

  }

  return;

}






// ---- [d2] aspectRatioLockEnabled @0xaaa64 ----
// CALLERS: showAspectRatioDialog, setResetAspectRatioEnabled:, updateCropBoxFrameWithGesturePoint:, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke.23, setAspectRatioLockEnabled:, _objc_msgSend$aspectRatioLockEnabled
// CALLEES: cropView, aspectRatio, aspectRatioLockEnabled


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::aspectRatioLockEnabled(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  _objc_msgSend_cropView(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = _objc_msgSend_aspectRatioLockEnabled(uVar2,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return bVar1;

}






// ---- [d2] allowedAspectRatios @0xabe2c ----
// CALLERS: showAspectRatioDialog, setAllowedAspectRatios:, .cxx_destruct, _objc_msgSend$allowedAspectRatios
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::allowedAspectRatios(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_allowedAspectRatios);

}






// ---- [d2] portraitPresets @0xae72c ----
// CALLERS: showAspectRatioDialog, _objc_msgSend$portraitPresets
// CALLEES: _CGSizeMake, _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT, initWithSize:title:


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::portraitPresets(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ID IVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 local_178;

  undefined8 local_88;

  undefined8 local_80;

  SEL local_78;

  ID local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_78 = param_2;

  local_70 = param_1;

  uVar2 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  puVar1 = PTR__CGSizeZero_001108e0;

  local_80 = _objc_msgSend_initWithSize_title_

                       (*(undefined8 *)PTR__CGSizeZero_001108e0,

                        *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8),uVar2,local_178);

  _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_80);

  local_88 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  _objc_msgSend_localizedStringForKey_value_table_(local_88,local_178,&cf_Original);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_msgSend_initWithSize_title_

                    (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),uVar2,local_178);

  local_68 = uVar2;

  uVar4 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar8 = 0x3ff0000000000000;

  uVar7 = _CGSizeMake(0x3ff0000000000000);

  _objc_msgSend_localizedStringForKey_value_table_

            (local_88,local_178,&cf_Square,&cf___,&cf_WCMTOCropViewControllerLocalizable);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_initWithSize_title_(uVar7,uVar8,uVar4,local_178);

  local_60 = uVar4;

  uVar7 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar9 = 0x4008000000000000;

  uVar8 = _CGSizeMake(0x4000000000000000);

  uVar7 = _objc_msgSend_initWithSize_title_(uVar8,uVar9,uVar7,local_178,&cf_2_3);

  local_58 = uVar7;

  uVar8 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar10 = 0x4014000000000000;

  uVar9 = _CGSizeMake(0x4008000000000000);

  uVar8 = _objc_msgSend_initWithSize_title_(uVar9,uVar10,uVar8,local_178,&cf_3_5);

  local_50 = uVar8;

  uVar9 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar11 = 0x4010000000000000;

  uVar10 = _CGSizeMake(0x4008000000000000);

  uVar9 = _objc_msgSend_initWithSize_title_(uVar10,uVar11,uVar9,local_178,&cf_3_4);

  local_48 = uVar9;

  uVar10 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar12 = 0x4014000000000000;

  uVar11 = _CGSizeMake(0x4010000000000000);

  uVar10 = _objc_msgSend_initWithSize_title_(uVar11,uVar12,uVar10,local_178,&cf_4_5);

  local_40 = uVar10;

  uVar11 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar13 = 0x401c000000000000;

  uVar12 = _CGSizeMake(0x4014000000000000);

  uVar11 = _objc_msgSend_initWithSize_title_(uVar12,uVar13,uVar11,local_178,&cf_5_7);

  local_38 = uVar11;

  uVar12 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar14 = 0x4030000000000000;

  uVar13 = _CGSizeMake(0x4022000000000000);

  uVar12 = _objc_msgSend_initWithSize_title_(uVar13,uVar14,uVar12,local_178,&cf_9_16);

  local_30 = uVar12;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_178,&local_68,8);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_storeStrong(&local_88);

  _objc_storeStrong(&local_80,0);

  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar6 = _objc_autoreleaseReturnValue(0,uVar13);

  return IVar6;

}






// ---- [d2] landscapePresets @0xaecac ----
// CALLERS: showAspectRatioDialog, _objc_msgSend$landscapePresets
// CALLEES: _CGSizeMake, _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT, initWithSize:title:


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::landscapePresets(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ID IVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 local_178;

  undefined8 local_88;

  undefined8 local_80;

  SEL local_78;

  ID local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_78 = param_2;

  local_70 = param_1;

  uVar2 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  puVar1 = PTR__CGSizeZero_001108e0;

  local_80 = _objc_msgSend_initWithSize_title_

                       (*(undefined8 *)PTR__CGSizeZero_001108e0,

                        *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8),uVar2,local_178);

  _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_80);

  local_88 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  _objc_msgSend_localizedStringForKey_value_table_(local_88,local_178,&cf_Original);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_msgSend_initWithSize_title_

                    (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),uVar2,local_178);

  local_68 = uVar2;

  uVar4 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar8 = 0x3ff0000000000000;

  uVar7 = _CGSizeMake(0x3ff0000000000000);

  _objc_msgSend_localizedStringForKey_value_table_

            (local_88,local_178,&cf_Square,&cf___,&cf_WCMTOCropViewControllerLocalizable);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_initWithSize_title_(uVar7,uVar8,uVar4,local_178);

  local_60 = uVar4;

  uVar7 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar9 = 0x4000000000000000;

  uVar8 = _CGSizeMake();

  uVar7 = _objc_msgSend_initWithSize_title_(uVar8,uVar9,uVar7,local_178,&cf_3_2);

  local_58 = uVar7;

  uVar8 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar10 = 0x4008000000000000;

  uVar9 = _CGSizeMake();

  uVar8 = _objc_msgSend_initWithSize_title_(uVar9,uVar10,uVar8,local_178,&cf_5_3);

  local_50 = uVar8;

  uVar9 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar11 = 0x4008000000000000;

  uVar10 = _CGSizeMake();

  uVar9 = _objc_msgSend_initWithSize_title_(uVar10,uVar11,uVar9,local_178,&cf_4_3);

  local_48 = uVar9;

  uVar10 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar12 = 0x4010000000000000;

  uVar11 = _CGSizeMake(0x4014000000000000);

  uVar10 = _objc_msgSend_initWithSize_title_(uVar11,uVar12,uVar10,local_178,&cf_5_4);

  local_40 = uVar10;

  uVar11 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar13 = 0x4014000000000000;

  uVar12 = _CGSizeMake(0x401c000000000000);

  uVar11 = _objc_msgSend_initWithSize_title_(uVar12,uVar13,uVar11,local_178,&cf_7_5);

  local_38 = uVar11;

  uVar12 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);

  uVar14 = 0x4022000000000000;

  uVar13 = _CGSizeMake(0x4030000000000000);

  uVar12 = _objc_msgSend_initWithSize_title_(uVar13,uVar14,uVar12,local_178,&cf_16_9);

  local_30 = uVar12;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_178,&local_68,8);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar12);

  (*(code *)PTR__objc_release_00110458)(uVar11);

  (*(code *)PTR__objc_release_00110458)(uVar10);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_storeStrong(&local_88);

  _objc_storeStrong(&local_80,0);

  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar6 = _objc_autoreleaseReturnValue(0,uVar13);

  return IVar6;

}






// ---- [d2] title @0xaf10c ----
// CALLERS: viewDidLayoutSubviews, showAspectRatioDialog, setTitle:, titleLabel, isEqual:, hash, _objc_msgSend$title
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerAspectRatioPreset::title(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d2] cropBoxAspectRatioIsPortrait @0xb6744 ----
// CALLERS: showAspectRatioDialog, _objc_msgSend$cropBoxAspectRatioIsPortrait
// CALLEES: cropBoxFrame


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::cropBoxAspectRatioIsPortrait(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  double dVar2;

  double dVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  

  uVar1 = _objc_msgSend_cropBoxFrame(param_1);

  dVar2 = (double)_CGRectGetWidth(uVar1,in_d1,in_d2,in_d3);

  dVar3 = (double)_CGRectGetHeight(uVar1,in_d1,in_d2,in_d3);

  return (bool)(dVar2 < dVar3);

}






// ---- [d2] aspectRatio @0xbbbc8 ----
// CALLERS: initWithCroppingStyle:image:, viewDidLoad, viewWillAppear:, showAspectRatioDialog, setAspectRatioPreset:animated:, setAspectRatioLockEnabled:, setAspectRatioLockDimensionSwapEnabled:, aspectRatioLockEnabled
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropView::aspectRatio(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + (long)_aspectRatio);

}






// ---- [d2] aspectRatioLockEnabled @0xbbbf8 ----
// CALLERS: showAspectRatioDialog, aspectRatioLockEnabled, setResetAspectRatioEnabled:, updateCropBoxFrameWithGesturePoint:, _objc_msgSend$aspectRatioLockEnabled
// CALLEES: aspectRatio


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::aspectRatioLockEnabled(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_aspectRatioLockEnabled) & 1;

}






// ---- [d2] setAspectRatioLockEnabled: @0xbbc24 ----
// CALLERS: resetCropViewLayout, showAspectRatioDialog, setAspectRatioLockEnabled:, _objc_msgSend$setAspectRatioLockEnabled:
// CALLEES: aspectRatioLockEnabled, aspectRatio


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::setAspectRatioLockEnabled_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_aspectRatioLockEnabled) = (byte)param_3 & 1;

  return;

}






// ---- [d2] clampButtonFrame @0xc2964 ----
// CALLERS: showAspectRatioDialog, _objc_msgSend$clampButtonFrame
// CALLEES: fromView, clampButton


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropToolbar::clampButtonFrame(ID param_1,SEL param_2)



{

  CGRect CVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_80;

  

  _objc_msgSend_clampButton(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_bounds(uVar2,local_80);

  _objc_msgSend_clampButton(param_1,local_80);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_convertRect_fromView_(uVar4,param_1,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  CVar1.field0_0x0.field1_0x8 = (double)in_d1;

  CVar1.field0_0x0.field0_0x0 = (double)uVar4;

  CVar1.field1_0x10.field0_0x0 = (double)in_d2;

  CVar1.field1_0x10.field1_0x8 = in_d3;

  return CVar1;

}






// ---- [d2] setClampButtonGlowing: @0xc2b2c ----
// CALLERS: showAspectRatioDialog, setAspectRatioLockEnabled:, _objc_msgSend$setClampButtonGlowing:
// CALLEES: clampButton, clampButtonGlowing


/* Function Stack Size: 0x14 bytes */



void WCMTOCropToolbar::setClampButtonGlowing_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  if ((*(byte *)(param_1 + (long)_clampButtonGlowing) & 1) != ((byte)param_3 & 1)) {

    *(byte *)(param_1 + (long)_clampButtonGlowing) = (byte)param_3 & 1;

    if ((*(byte *)(param_1 + (long)_clampButtonGlowing) & 1) == 0) {

      _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_38);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_clampButton(param_1,local_38);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setTintColor_(uVar2,local_38,uVar1);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      (*(code *)PTR__objc_release_00110458)(uVar1);

    }

    else {

      _objc_msgSend_clampButton(param_1,local_38);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setTintColor_(uVar1,local_38,0);

      (*(code *)PTR__objc_release_00110458)(uVar1);

    }

  }

  return;

}






// ---- [d2] clampButton @0xc55e0 ----
// CALLERS: showAspectRatioDialog, aspectRatioPickerButtonHidden, setup, layoutSubviews, buttonTapped:, clampButtonFrame, setClampButtonHidden:, setClampButtonGlowing:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::clampButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_clampButton);

}






// ---- [d3] setDataSource: @0x67788 ----
// CALLERS: viewDidLoad, viewDidLoad, collectionView, tableView, _objc_msgSend$setDataSource:
// CALLEES: dataSource


/* Function Stack Size: 0x18 bytes */



void WCMYBImageBrowser::setDataSource_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_dataSource,param_3);

  return;

}






// ---- [d3] setDelegate: @0x677f8 ----
// CALLERS: viewDidLoad, presentationTransitionWillBegin, viewDidLoad, viewDidLoad, openCacheManager, openGallery:, cropHeaderImage:account:, collectionView
// CALLEES: delegate


/* Function Stack Size: 0x18 bytes */



void WCMYBImageBrowser::setDelegate_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_delegate,param_3);

  return;

}






// ---- [d3] setDelegate: @0x7c120 ----
// CALLERS: viewDidLoad, presentationTransitionWillBegin, viewDidLoad, viewDidLoad, openCacheManager, openGallery:, cropHeaderImage:account:, collectionView
// CALLEES: removeResidentForKey:, loadData, imageCache, cacheKey


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setDelegate_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_storeWeak(local_18 + 0x58,local_28);

  if (local_28 == 0) {

    *(undefined1 *)(local_18 + 0x18) = 1;

    _objc_msgSend_imageCache(local_18,local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_cacheKey(local_18,local_30);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeResidentForKey_(uVar1,local_30);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  else {

    _objc_msgSend_loadData(local_18,local_30);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d3] setDelegate: @0xab9dc ----
// CALLERS: viewDidLoad, presentationTransitionWillBegin, viewDidLoad, viewDidLoad, openCacheManager, openGallery:, cropHeaderImage:account:, collectionView
// CALLEES: delegate


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setDelegate_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_delegate,param_3);

  return;

}






// ---- [d3] setDelegate: @0xbb9e0 ----
// CALLERS: viewDidLoad, presentationTransitionWillBegin, viewDidLoad, viewDidLoad, openCacheManager, openGallery:, cropHeaderImage:account:, collectionView
// CALLEES: delegate


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setDelegate_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_delegate,param_3);

  return;

}






// ---- [d3] titleLabel @0x87380 ----
// CALLERS: layoutSubviews, initWithFrame:, viewDidLoad, operationButton, initWithStyle:reuseIdentifier:, layoutSubviews, setTitleLabel:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBSheetCell::titleLabel(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_titleLabel);

}






// ---- [d3] frameForTitleLabelWithSize:verticalLayout: @0xa3bd4 ----
// CALLERS: viewDidLayoutSubviews, setTitle:, _objc_msgSend$frameForTitleLabelWithSize:verticalLayout:
// CALLEES: view, verticalLayout


/* Function Stack Size: 0x24 bytes */



CGRect WCMTOCropViewController::frameForTitleLabelWithSize_verticalLayout_

                 (ID param_1,SEL param_2,CGSize param_3,bool param_4)



{

  CGRect CVar1;

  undefined8 uVar2;

  double dVar3;

  double in_d2;

  undefined8 local_e0;

  undefined8 local_88;

  undefined8 local_60;

  undefined8 local_30;

  

  dVar3 = param_3.field1_0x8;

  _objc_msgSend_view(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_bounds(uVar2,local_e0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_88 = 0.0;

  local_60 = in_d2;

  if ((param_4 & 1) == 0) {

    _objc_msgSend_view(param_1,local_e0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_safeAreaInsets(uVar2,local_e0);

    local_88 = dVar3 + 14.0;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    local_60 = in_d2 - local_88;

  }

  local_30 = (double)(float)(int)((local_60 - param_3.field0_0x0) * 0.5);

  if ((param_4 & 1) == 0) {

    local_30 = local_30 + local_88;

  }

  _objc_msgSend_view(param_1,local_e0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar3 = (double)_objc_msgSend_safeAreaInsets(uVar2,local_e0);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  CVar1.field0_0x0.field1_0x8 = dVar3 + 14.0;

  CVar1.field0_0x0.field0_0x0 = local_30;

  CVar1.field1_0x10.field0_0x0 = param_3.field0_0x0;

  CVar1.field1_0x10.field1_0x8 = param_3.field1_0x8;

  return CVar1;

}






// ---- [d3] _UIEdgeInsetsMake @0xa9e9c ----
// CALLERS: setTitle:
// CALLEES: (叶)


undefined1  [16] _UIEdgeInsetsMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d3] titleLabel @0xaa58c ----
// CALLERS: layoutSubviews, initWithFrame:, viewDidLoad, operationButton, tableView:cellForRowAtIndexPath:, viewWillAppear:, frameForToolbarWithVerticalLayout:, adjustCropViewInsets
// CALLEES: initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, titleLabel, initWithFrame:


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::titleLabel(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 local_40;

  undefined8 local_18;

  

  _objc_msgSend_title(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = _objc_msgSend_length(uVar1,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (lVar2 == 0) {

    local_18 = 0;

  }

  else if (*(long *)(param_1 + (long)_titleLabel) == 0) {

    uVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);

    uVar1 = _objc_msgSend_initWithFrame_

                      (*(undefined8 *)PTR__CGRectZero_001108d8,

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),

                       *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_40);

    uVar3 = *(undefined8 *)(param_1 + (long)_titleLabel);

    *(undefined8 *)(param_1 + (long)_titleLabel) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_preferredFontForTextStyle_

              (&_OBJC_CLASS___UIFont,local_40,*(undefined8 *)PTR__UIFontTextStyleHeadline_001100b8);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_40);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_40);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTextColor_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setNumberOfLines_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);

    _objc_msgSend_setBaselineAdjustment_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40,0);

    _objc_msgSend_setClipsToBounds_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40,1);

    _objc_msgSend_setTextAlignment_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40,1);

    _objc_msgSend_title(param_1,local_40);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setText_(*(undefined8 *)(param_1 + (long)_titleLabel),local_40);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_view(param_1,local_40);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_titleLabel(param_1,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_toolbar(param_1,local_40);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_insertSubview_aboveSubview_(uVar1,local_40,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    local_18 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + (long)_titleLabel));

  }

  else {

    local_18 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + (long)_titleLabel));

  }

  IVar5 = _objc_autoreleaseReturnValue(local_18);

  return IVar5;

}






// ---- [d3] verticalLayout @0xab398 ----
// CALLERS: viewDidLoad, frameForTitleLabelWithSize:verticalLayout:, adjustCropViewInsets, adjustToolbarInsets, viewDidLayoutSubviews, ___48-[WCMTOCropViewController_viewDidLayoutSubviews]_block_invoke, setTitle:, _objc_msgSend$frameForTitleLabelWithSize:verticalLayout:
// CALLEES: view


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::verticalLayout(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  double dVar3;

  undefined8 uVar4;

  double dVar5;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_88;

  

  _objc_msgSend_view(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_msgSend_bounds(uVar1,local_88);

  dVar3 = (double)_CGRectGetWidth(uVar2);

  _objc_msgSend_view(param_1,local_88);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_msgSend_bounds(uVar2,local_88);

  dVar5 = (double)_CGRectGetHeight(uVar4,in_d1,in_d2,in_d3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return (uint)(dVar3 < dVar5);

}






// ---- [d3] setCropRegionInsets: @0xbbafc ----
// CALLERS: adjustCropViewInsets, setTitle:, _objc_msgSend$setCropRegionInsets:
// CALLEES: cropRegionInsets


/* Function Stack Size: 0x30 bytes */



void WCMTOCropView::setCropRegionInsets_(ID param_1,SEL param_2,UIEdgeInsets param_3)



{

  double *pdVar1;

  

  pdVar1 = (double *)(param_1 + (long)_cropRegionInsets);

  pdVar1[1] = param_3.field1_0x8;

  *pdVar1 = param_3.field0_0x0;

  pdVar1[3] = param_3.field3_0x18;

  pdVar1[2] = param_3.field2_0x10;

  return;

}






// ---- [d3] setFrame: @0xbd0e8 ----
// CALLERS: layoutIndicatorContent, layoutSubviews, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, containerViewWillLayoutSubviews, ___37-[WCMCommentPresentation_dragHeader:]_block_invoke, animateTransition:
// CALLEES: layoutLines, outerLineViews


/* Function Stack Size: 0x30 bytes */



void WCMTOCropOverlayView::setFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 local_58;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  ID local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_48 = &objc::class_t::WCMTOCropOverlayView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = param_1;

  _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"setFrame:");

  if (*(long *)(local_38 + (long)_outerLineViews) != 0) {

    _objc_msgSend_layoutLines(local_38,local_58);

  }

  return;

}






// ---- [d3] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d3] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d3] view @0x9d4cc ----
// CALLERS: _StyleMessageController, gestureRecognizerShouldBegin:, swipeCategory:, gestureRecognizer:shouldReceiveTouch:, animateTransition:, viewDidLoad, keyboard:, ___29-[WCMVideoComments_keyboard:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::view(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_view);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d3] initWithCroppingStyle:image: @0xa12e4 ----
// CALLERS: initWithImage:, cropView, initWithImage:, _objc_msgSend$initWithCroppingStyle:image:
// CALLEES: description, croppingStyle, aspectRatioPreset, toolbarPosition, setHidesNavigationBar:, transitionController, aspectRatio


/* Function Stack Size: 0x20 bytes */



ID WCMTOCropViewController::initWithCroppingStyle_image_

             (ID param_1,SEL param_2,long_long param_3,ID param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 in_x7;

  long lVar4;

  undefined8 local_50;

  ID local_40;

  class_t *local_38;

  long local_30;

  long_long local_28;

  SEL local_20;

  ID local_18;

  

  local_30 = 0;

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_30,param_4);

  if (local_30 == 0) {

    _objc_msgSend_currentHandler(&_OBJC_CLASS___NSAssertionHandler,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_handleFailureInMethod_object_file_lineNumber_description_

              (uVar1,local_50,local_20,local_18,&cf_TOCropViewController_m,0x4b,

               &cf_Invalidparameternotsatisfying___,in_x7,&cf_image);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  local_40 = local_18;

  local_18 = 0;

  local_38 = &objc::class_t::WCMTOCropViewController;

  local_18 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",0);

  _objc_storeStrong(&local_18);

  if (local_18 != 0) {

    _objc_storeStrong(local_18 + (long)_image,local_30);

    *(long_long *)(local_18 + (long)_croppingStyle) = local_28;

    _objc_msgSend_setOverrideUserInterfaceStyle_(local_18,local_50,2);

    _objc_msgSend_setModalTransitionStyle_(local_18,local_50,2);

    _objc_msgSend_setModalPresentationStyle_(local_18,local_50);

    _objc_msgSend_setHidesNavigationBar_(local_18,local_50,1);

    uVar1 = _objc_alloc_init(&objc::class_t::WCMTOCropViewControllerTransitioning);

    uVar2 = *(undefined8 *)(local_18 + (long)_transitionController);

    *(undefined8 *)(local_18 + (long)_transitionController) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    lVar4 = (long)_aspectRatioPreset;

    uVar1 = *(undefined8 *)PTR__CGSizeZero_001108e0;

    ((undefined8 *)(local_18 + lVar4))[1] = *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8);

    *(undefined8 *)(local_18 + lVar4) = uVar1;

    *(undefined8 *)(local_18 + (long)_toolbarPosition) = 0;

  }

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_18,0);

  return IVar3;

}






// ---- [d3] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] croppingStyle @0xabaec ----
// CALLERS: initWithCroppingStyle:image:, viewDidLoad, doneButtonTapped, cropView, setCroppingStyle:, initWithCroppingStyle:image:, setup, setCropBoxFrame:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropViewController::croppingStyle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_croppingStyle);

}






// ---- [d3] image @0xac96c ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] image @0xadbf8 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d3] initWithCroppingStyle:image: @0xaf6c0 ----
// CALLERS: initWithImage:, cropView, initWithImage:, _objc_msgSend$initWithCroppingStyle:image:
// CALLEES: croppingStyle, setup, setup, setup


/* Function Stack Size: 0x20 bytes */



ID WCMTOCropView::initWithCroppingStyle_image_(ID param_1,SEL param_2,long_long param_3,ID param_4)



{

  ID IVar1;

  undefined8 local_58;

  ID local_40;

  class_t *local_38;

  undefined8 local_30;

  long_long local_28;

  SEL local_20;

  ID local_18;

  

  local_30 = 0;

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_30,param_4);

  local_40 = local_18;

  local_18 = 0;

  local_38 = &objc::class_t::WCMTOCropView;

  IVar1 = _objc_msgSendSuper2(&local_40,"init");

  local_18 = IVar1;

  _objc_storeStrong(&local_18);

  if (IVar1 != 0) {

    _objc_storeStrong(local_18 + (long)_image,local_30);

    *(long_long *)(local_18 + (long)_croppingStyle) = local_28;

    _objc_msgSend_setup(local_18,local_58);

  }

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d3] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] croppingStyle @0xbb83c ----
// CALLERS: viewDidLoad, doneButtonTapped, cropView, setup, setCropBoxFrame:, setEditing:resetCropBox:animated:, _objc_msgSend$croppingStyle
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropView::croppingStyle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_croppingStyle);

}






// ---- [d3] initWithFrame: @0x9954 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, initWithFrame:collectionViewLayout:, toolbar
// CALLEES: surface, setSurface:


/* Function Stack Size: 0x30 bytes */



ID WCMMessageCardBackground::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 uVar5;

  undefined8 local_78;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMMessageCardBackground;

  local_50 = param_1;

  local_40 = param_2;

  lVar1 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  local_38 = lVar1;

  _objc_storeStrong(&local_38);

  if (lVar1 != 0) {

    _objc_msgSend_setUserInteractionEnabled_(local_38,local_78,0);

    uVar2 = _objc_opt_new(&_OBJC_CLASS___UIView);

    _objc_msgSend_setSurface_(local_38,local_78);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_secondarySystemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_surface(local_38,local_78);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(uVar3,local_78,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_surface(local_38,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_layer(uVar2,local_78);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setCornerRadius_(0x4032000000000000,uVar3,local_78);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar5 = *(undefined8 *)PTR__kCACornerCurveContinuous_001101d8;

    _objc_msgSend_surface(local_38,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_layer(uVar2,local_78);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setCornerCurve_(uVar3,local_78,uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    lVar1 = local_38;

    _objc_msgSend_surface(local_38,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_78);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar4;

}






// ---- [d3] initWithFrame: @0x16324 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: backdrop, setBackdrop:, poster, setPoster:, blur, setBlur:, caption, setCaption:, authorButton, setAuthorButton:


/* Function Stack Size: 0x30 bytes */



ID WCMVideoCell::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 local_88;

  ID local_60;

  class_t *local_58;

  SEL local_50;

  long local_48;

  double local_40;

  double local_38;

  double local_30;

  double local_28;

  

  local_28 = param_3.field1_0x10.field1_0x8;

  local_30 = param_3.field1_0x10.field0_0x0;

  local_38 = param_3.field0_0x0.field1_0x8;

  local_40 = param_3.field0_0x0.field0_0x0;

  local_48 = 0;

  local_58 = &objc::class_t::WCMVideoCell;

  local_60 = param_1;

  local_50 = param_2;

  lVar1 = _objc_msgSendSuper2(local_40,local_38,local_30,local_28,&local_60,"initWithFrame:");

  local_48 = lVar1;

  _objc_storeStrong(&local_48);

  if (lVar1 != 0) {

    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_contentView(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(uVar3,local_88,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_contentView(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setClipsToBounds_(uVar2,local_88,1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_opt_new(&_OBJC_CLASS___UIImageView);

    _objc_msgSend_setBackdrop_(local_48,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_backdrop(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setContentMode_(uVar2,local_88,2);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_backdrop(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setClipsToBounds_(uVar2,local_88,1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_contentView(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_backdrop(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

    uVar2 = _objc_msgSend_initWithEffect_(uVar2,local_88,0);

    _objc_msgSend_setBlur_(local_48,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_blur(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setHidden_(uVar2,local_88,1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_blur(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setUserInteractionEnabled_(uVar2,local_88,0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_contentView(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_blur(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_opt_new(&_OBJC_CLASS___UIImageView);

    _objc_msgSend_setPoster_(local_48,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_poster(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setContentMode_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_contentView(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_poster(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar2 = _objc_opt_new(&_OBJC_CLASS___UILabel);

    _objc_msgSend_setCaption_(local_48,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_caption(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTextColor_(uVar3,local_88,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_systemFontOfSize_weight_

              (0x402d000000000000,*(undefined8 *)PTR__UIFontWeightRegular_001100c8,

               &_OBJC_CLASS___UIFont,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_caption(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(uVar3,local_88,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_caption(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setLineBreakMode_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_caption(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setNumberOfLines_(uVar2,local_88,3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_contentView(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_caption(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_88,1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setAuthorButton_(local_48,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_authorButton(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setContentHorizontalAlignment_(uVar2,local_88,1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_authorButton(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTintColor_(uVar3,local_88,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_systemFontOfSize_weight_

              (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,

               &_OBJC_CLASS___UIFont,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_authorButton(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_titleLabel(uVar3,local_88);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(uVar4,local_88,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_authorButton(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_titleLabel(uVar2,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setLineBreakMode_(uVar3,local_88,4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_contentView(local_48,local_88);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_authorButton(local_48,local_88);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar2,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar5 = (*(code *)PTR__objc_retain_00110460)(local_48);

  _objc_storeStrong(&local_48,0);

  return IVar5;

}






// ---- [d3] initWithFrame: @0x62c2c ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: initValue, respondsToLongPress:, initValue, addGesture, initValue


/* Function Stack Size: 0x30 bytes */



ID WCMYBImageBrowser::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_70;

  undefined8 local_58;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBImageBrowser;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_70);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_38,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar1 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

    local_58 = _objc_msgSend_initWithTarget_action_(uVar1,local_70,local_38,"respondsToLongPress:");

    _objc_msgSend_addGestureRecognizer_(local_38,local_70,local_58);

    _objc_msgSend_initValue(local_38,local_70);

    _objc_storeStrong(&local_58,0);

  }

  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar2;

}






// ---- [d3] initWithFrame: @0x6a7c4 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: imageView, imageView, setMaximumZoomScale:


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBImageScrollView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_78;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBIBImageScrollView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_setShowsHorizontalScrollIndicator_(local_38,local_78,0);

    _objc_msgSend_setShowsVerticalScrollIndicator_(local_38,local_78,0);

    _objc_msgSend_setDecelerationRate_

              (*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_00110128,local_38,local_78);

    _objc_msgSend_setMaximumZoomScale_(local_38,local_78);

    _objc_msgSend_setMinimumZoomScale_(0x3ff0000000000000,local_38,local_78);

    _objc_msgSend_setAlwaysBounceHorizontal_(local_38,local_78,0);

    _objc_msgSend_setAlwaysBounceVertical_(local_38,local_78,0);

    _objc_msgSend_layer(local_38,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setMasksToBounds_(uVar2,local_78,0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setContentInsetAdjustmentBehavior_(local_38,local_78,2);

    lVar1 = local_38;

    _objc_msgSend_imageView(local_38,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_78);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar3;

}






// ---- [d3] initWithFrame: @0x6b5d4 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: initValue, initValue, addGesture, imageScrollView, initValue


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBImageCell::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_60;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBIBImageCell;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_initValue(local_38,local_60);

    _objc_msgSend_contentView(local_38,local_60);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_imageScrollView(local_38,local_60);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(uVar1,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_addGesture(local_38,local_60);

  }

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar3;

}






// ---- [d3] initWithFrame: @0x7df58 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: textLabel, textLabel


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBToastView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_70;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBIBToastView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_colorWithAlphaComponent_(0x3fe999999999999a,uVar2,local_70);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_38,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setUserInteractionEnabled_(local_38,local_70,0);

    _objc_msgSend_layer(local_38,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setCornerRadius_(0x401c000000000000,uVar2,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    lVar1 = local_38;

    _objc_msgSend_textLabel(local_38,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar4;

}






// ---- [d3] initWithFrame: @0x7fbbc ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: imageView, textLabel, drawView, textLabel, imageView


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBLoadingView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_70;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBIBLoadingView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_colorWithAlphaComponent_(0,uVar2,local_70);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_38,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setUserInteractionEnabled_(local_38,local_70,0);

    lVar1 = local_38;

    _objc_msgSend_drawView(local_38,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    lVar1 = local_38;

    _objc_msgSend_textLabel(local_38,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    lVar1 = local_38;

    _objc_msgSend_imageView(local_38,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar4;

}






// ---- [d3] initWithFrame: @0x84be0 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: setOperationType:, pageLabel, operationButton


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBTopView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_60;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBIBTopView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  lVar1 = local_38;

  if (local_38 != 0) {

    _objc_msgSend_pageLabel(local_38,local_60);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    lVar1 = local_38;

    _objc_msgSend_operationButton(local_38,local_60);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setOperationType_(local_38,local_60,1);

  }

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar3;

}






// ---- [d3] initWithFrame: @0x87498 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: sharedCopywriter, cancel, tableView, cellHeight, maxHeightScale, cancelText, showDuration, hideDuration, backAlpha


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBSheetView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 local_70;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYBIBSheetView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_cancel(uVar2,local_70);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = *(undefined8 *)(local_38 + _cancelText);

    *(undefined8 *)(local_38 + _cancelText) = uVar3;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    *(undefined8 *)(local_38 + _maxHeightScale) = 0x3fe6666666666666;

    *(undefined8 *)(local_38 + _showDuration) = 0x3fc999999999999a;

    *(undefined8 *)(local_38 + _hideDuration) = 0x3fb999999999999a;

    *(undefined8 *)(local_38 + _cellHeight) = 0x4049000000000000;

    *(undefined8 *)(local_38 + _backAlpha) = 0x3fd3333333333333;

    _objc_msgSend_array(&_OBJC_CLASS___NSMutableArray,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = *(undefined8 *)(local_38 + _actions);

    *(undefined8 *)(local_38 + _actions) = uVar2;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    lVar1 = local_38;

    _objc_msgSend_tableView(local_38,local_70);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(lVar1,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar5 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar5;

}






// ---- [d3] initWithFrame: @0x8c354 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: collection, collectionView, initWithFrame:collectionViewLayout:


/* Function Stack Size: 0x30 bytes */



ID WCMYBIBCollectionView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_60;

  ID local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = param_1;

  uVar2 = _objc_opt_new(&objc::class_t::WCMYBIBCollectionViewLayout);

  uVar3 = *(undefined8 *)(local_38 + (long)_layout);

  *(undefined8 *)(local_38 + (long)_layout) = uVar2;

  (*(code *)PTR__objc_release_00110458)(uVar3);

  IVar4 = local_38;

  puVar1 = (undefined8 *)(local_38 + (long)_layout);

  local_38 = 0;

  local_38 = _objc_msgSend_initWithFrame_collectionViewLayout_

                       (local_30,local_28,local_20,local_18,IVar4,local_60,*puVar1);

  IVar4 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_38,0);

  return IVar4;

}






// ---- [d3] initWithFrame: @0x9d708 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: autoPlayAnimatedImage, runloopMode


/* Function Stack Size: 0x30 bytes */



ID WCMYYAnimatedImageView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  ID IVar1;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMYYAnimatedImageView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  _objc_storeStrong(&local_38);

  _objc_storeStrong(local_38 + _runloopMode,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);

  *(undefined1 *)(local_38 + _autoPlayAnimatedImage) = 1;

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar1;

}






// ---- [d3] initWithFrame: @0xbcb20 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: setup, setup, setup


/* Function Stack Size: 0x30 bytes */



ID WCMTOCropOverlayView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  ID IVar2;

  undefined8 local_68;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMTOCropOverlayView;

  local_50 = param_1;

  local_40 = param_2;

  lVar1 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  local_38 = lVar1;

  _objc_storeStrong(&local_38);

  if (lVar1 != 0) {

    _objc_msgSend_setClipsToBounds_(local_38,local_68,0);

    _objc_msgSend_setup(local_38,local_68);

  }

  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar2;

}






// ---- [d3] initWithFrame: @0xbec70 ----
// CALLERS: init, viewDidLoad, _StyleMessageCell, presentationTransitionWillBegin, viewDidLoad, tableView:didSelectRowAtIndexPath:, toolbar, titleLabel
// CALLEES: setup, setup, setup


/* Function Stack Size: 0x30 bytes */



ID WCMTOCropToolbar::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  long lVar1;

  ID IVar2;

  undefined8 local_68;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  long local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_38 = 0;

  local_48 = &objc::class_t::WCMTOCropToolbar;

  local_50 = param_1;

  local_40 = param_2;

  lVar1 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"initWithFrame:");

  local_38 = lVar1;

  _objc_storeStrong(&local_38);

  if (lVar1 != 0) {

    _objc_msgSend_setup(local_38,local_68);

  }

  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  return IVar2;

}






// ---- [d3] setAspectRatioPickerButtonHidden: @0xaadc8 ----
// CALLERS: setAspectRatioLockEnabled:, setResetAspectRatioEnabled:, _objc_msgSend$setAspectRatioPickerButtonHidden:
// CALLEES: toolbar, setClampButtonHidden:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropViewController::setAspectRatioPickerButtonHidden_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 local_40;

  

  _objc_msgSend_toolbar(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setClampButtonHidden_(uVar1,local_40,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d3] aspectRatioPickerButtonHidden @0xaae2c ----
// CALLERS: viewDidLoad, setAspectRatioLockEnabled:, setResetAspectRatioEnabled:, _objc_msgSend$aspectRatioPickerButtonHidden
// CALLEES: toolbar, aspectRatio, clampButton, clampButtonHidden


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::aspectRatioPickerButtonHidden(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  _objc_msgSend_toolbar(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = _objc_msgSend_clampButtonHidden(uVar2,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return bVar1;

}






// ---- [d3] resetAspectRatioEnabled @0xab180 ----
// CALLERS: resetCropViewLayout, setAspectRatioLockEnabled:, layoutInitialImage, resetLayoutToDefaultAnimated:, setResetAspectRatioEnabled:, _objc_msgSend$resetAspectRatioEnabled
// CALLEES: cropView, resetAspectRatioEnabled


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::resetAspectRatioEnabled(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  _objc_msgSend_cropView(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = _objc_msgSend_resetAspectRatioEnabled(uVar2,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return bVar1;

}






// ---- [d3] resetAspectRatioEnabled @0xbbcb0 ----
// CALLERS: resetCropViewLayout, setAspectRatioLockEnabled:, resetAspectRatioEnabled, layoutInitialImage, resetLayoutToDefaultAnimated:, _objc_msgSend$resetAspectRatioEnabled
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::resetAspectRatioEnabled(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_resetAspectRatioEnabled) & 1;

}






// ---- [d3] _CGSizeMake @0x7b08 ----
// CALLERS: layoutIndicatorContent, tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, layoutSubviews, viewDidLoad, webView:didFinishNavigation:, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, ___39-[WCMFeedController_galleryPlaceholder]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGSizeMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d3] initWithSize:title: @0xae26c ----
// CALLERS: portraitPresets, landscapePresets, _objc_msgSend$initWithSize:title:
// CALLEES: (叶)


/* Function Stack Size: 0x28 bytes */



ID __thiscall

WCMTOCropViewControllerAspectRatioPreset::initWithSize_title_

          (WCMTOCropViewControllerAspectRatioPreset *this,ID param_1,SEL param_2,CGSize param_3,

          ID param_4)



{

  ID IVar1;

  WCMTOCropViewControllerAspectRatioPreset *local_48;

  class_t *local_40;

  undefined8 local_38;

  ID local_30;

  WCMTOCropViewControllerAspectRatioPreset *local_28;

  double local_20;

  double dStack_18;

  

  dStack_18 = param_3.field1_0x8;

  local_20 = param_3.field0_0x0;

  local_38 = 0;

  local_30 = param_1;

  local_28 = this;

  _objc_storeStrong(&local_38,param_2);

  local_48 = local_28;

  local_28 = (WCMTOCropViewControllerAspectRatioPreset *)0x0;

  local_40 = &objc::class_t::WCMTOCropViewControllerAspectRatioPreset;

  local_28 = (WCMTOCropViewControllerAspectRatioPreset *)_objc_msgSendSuper2(&local_48,"init");

  _objc_storeStrong(&local_28);

  if (local_28 != (WCMTOCropViewControllerAspectRatioPreset *)0x0) {

    *(double *)(local_28 + 0x18) = dStack_18;

    *(double *)(local_28 + 0x10) = local_20;

    _objc_storeStrong(local_28 + 8,local_38);

  }

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);

  _objc_storeStrong(&local_38);

  _objc_storeStrong(&local_28,0);

  return IVar1;

}






// ---- [d3] cropBoxFrame @0xbba74 ----
// CALLERS: dismissAnimatedFromParentViewController:withCroppedImage:toView:toFrame:setup:completion:, ___107-[WCMTOCropViewController_animationControllerForPresentedController:presentingController:sourceController:]_block_invoke, layoutInitialImage, performRelayoutForRotation, updateCropBoxFrameWithGesturePoint:, gridPanGestureRecognized:, cropEdgeForPoint:, setCropBoxFrame:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropView::cropBoxFrame(ID param_1,SEL param_2)



{

  return *(CGRect *)(param_1 + (long)_cropBoxFrame);

}






// ---- [d3] fromView @0xadc48 ----
// CALLERS: positionIndicator, keyboard:, presentAnimatedFromParentViewController:fromView:fromFrame:setup:completion:, presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion:, ___132-[WCMTOCropViewController_presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion:]_block_invoke, ___107-[WCMTOCropViewController_animationControllerForPresentedController:presentingController:sourceController:]_block_invoke, animateTransition:, clampButtonFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::fromView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x18);

}






// ---- [d3] clampButtonGlowing @0xc590c ----
// CALLERS: setClampButtonGlowing:
// CALLEES: clampButton


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropToolbar::clampButtonGlowing(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_clampButtonGlowing) & 1;

}






// ---- [d4] dataSource @0x67754 ----
// CALLERS: galleryImageData:, updateGallery, dataSourceArray, setDataSourceArray:, setDataSource:, .cxx_destruct, numberOfCells, dataForCellAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::dataSource(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_dataSource);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d4] delegate @0x677c4 ----
// CALLERS: pageNumberChanged, respondsToLongPress:, setTransitioning:isShow:, setDelegate:, .cxx_destruct, loadData, loadOriginImage, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_3
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::delegate(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_delegate);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d4] removeResidentForKey: @0x6b4cc ----
// CALLERS: setDelegate:, _objc_msgSend$removeResidentForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCache::removeResidentForKey_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 local_40;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_removeObjectForKey_(*(undefined8 *)(local_18 + 0x10),local_40,local_28);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d4] loadData @0x711dc ----
// CALLERS: viewWillAppear:, tableView:didSelectRowAtIndexPath:, changeCategory, reloadComments, ___29-[WCMCacheController_measure]_block_invoke_2, ___56-[WCMCacheController_tableView:didSelectRowAtIndexPath:]_block_invoke, ___34-[WCMFeedController_updateGallery]_block_invoke.2058, reloadData
// CALLEES: delegate, originImage, loadOriginImage, loadYBImage, loadImageBlock, loadURL, loadPHAsset, loadThumbImage, delegate, originImage


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadData(ID param_1,SEL param_2)



{

  bool bVar1;

  bool bVar2;

  bool bVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 local_48;

  undefined8 local_38;

  undefined8 local_28;

  

  *(undefined1 *)(param_1 + 0x18) = 0;

  lVar4 = _objc_msgSend_loadingStatus(param_1);

  if (lVar4 == 0) {

    _objc_msgSend_originImage(param_1,local_48);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar4 == 0) {

      _objc_msgSend_imageName(param_1,local_48);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      bVar2 = false;

      bVar1 = false;

      bVar3 = true;

      if (lVar4 == 0) {

        _objc_msgSend_imagePath(param_1,local_48);

        local_28 = _objc_retainAutoreleasedReturnValue();

        bVar2 = true;

        bVar3 = true;

        if (local_28 == 0) {

          _objc_msgSend_imageData(param_1,local_48);

          local_38 = _objc_retainAutoreleasedReturnValue();

          bVar1 = true;

          bVar3 = local_38 != 0;

        }

      }

      if (bVar1) {

        (*(code *)PTR__objc_release_00110458)(local_38);

      }

      if (bVar2) {

        (*(code *)PTR__objc_release_00110458)(local_28);

      }

      (*(code *)PTR__objc_release_00110458)(lVar4);

      if (bVar3) {

        _objc_msgSend_loadYBImage(param_1,local_48);

      }

      else {

        _objc_msgSend_image(param_1,local_48);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)();

        if (lVar4 == 0) {

          _objc_msgSend_imageURL(param_1,local_48);

          lVar4 = _objc_retainAutoreleasedReturnValue();

          (*(code *)PTR__objc_release_00110458)();

          if (lVar4 == 0) {

            _objc_msgSend_imagePHAsset(param_1,local_48);

            lVar4 = _objc_retainAutoreleasedReturnValue();

            (*(code *)PTR__objc_release_00110458)();

            if (lVar4 == 0) {

              _objc_msgSend_delegate(param_1,local_48);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_wcm_yb_imageIsInvalidForData_(uVar5,local_48,param_1);

              (*(code *)PTR__objc_release_00110458)(uVar5);

            }

            else {

              _objc_msgSend_loadThumbImage(param_1,local_48);

              _objc_msgSend_loadPHAsset(param_1,local_48);

            }

          }

          else {

            _objc_msgSend_loadThumbImage(param_1,local_48);

            _objc_msgSend_loadURL(param_1,local_48);

          }

        }

        else {

          _objc_msgSend_loadImageBlock(param_1,local_48);

        }

      }

    }

    else {

      _objc_msgSend_loadOriginImage(param_1,local_48);

    }

  }

  else {

    _objc_msgSend_loadThumbImage(param_1,local_48);

    uVar5 = _objc_msgSend_loadingStatus(param_1,local_48);

    _objc_msgSend_setLoadingStatus_(param_1,local_48,uVar5);

  }

  return;

}






// ---- [d4] imageCache @0x7b1c0 ----
// CALLERS: -[NSObject(WCMYBIBImageCache)_setWcm_ybib_imageCache:], -[NSObject(WCMYBIBImageCache)_wcm_ybib_imageCache], imageCacheCountLimit, dealloc, clearCache, setDelegate:, setOriginImage:, originImage
// CALLEES: wcm_yb_backView, wcm_yb_backView


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageCache(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_38;

  

  _objc_msgSend_wcm_yb_backView(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_wcm_ybib_imageCache(uVar1,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d4] cacheKey @0x7c3c4 ----
// CALLERS: dealloc, clearCache, setDelegate:, setOriginImage:, originImage, setCompressedImage:, compressedImage, _objc_msgSend$cacheKey
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::cacheKey(ID param_1,SEL param_2)



{

  ID IVar1;

  

  IVar1 = _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,param_2,&cf__p);

  return IVar1;

}






// ---- [d4] cropRegionInsets @0xbbab8 ----
// CALLERS: contentBounds, setCropRegionInsets:, _objc_msgSend$cropRegionInsets
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



UIEdgeInsets WCMTOCropView::cropRegionInsets(ID param_1,SEL param_2)



{

  return *(UIEdgeInsets *)(param_1 + (long)_cropRegionInsets);

}






// ---- [d4] layoutLines @0xbd1e0 ----
// CALLERS: setFrame:, didMoveToSuperview, setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:, _objc_msgSend$layoutLines
// CALLEES: setFrame:, horizontalGridLines, verticalGridLines, outerLineViews, topLeftLineViews, bottomLeftLineViews, bottomRightLineViews, topRightLineViews


/* Function Stack Size: 0x10 bytes */



void WCMTOCropOverlayView::layoutLines(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double in_d2;

  double dVar9;

  double in_d3;

  double local_4f0;

  undefined8 local_488;

  undefined8 local_3f0;

  long local_3e8;

  undefined8 local_3e0;

  double local_3d8;

  double local_3d0;

  double local_3c8;

  undefined8 local_3c0;

  double dStack_3b8;

  double local_3b0;

  double dStack_3a8;

  undefined8 local_3a0;

  double dStack_398;

  double local_390;

  double dStack_388;

  undefined8 local_380;

  double local_378;

  double local_370;

  double local_368;

  undefined8 local_360;

  double dStack_358;

  double local_350;

  double dStack_348;

  undefined8 local_340;

  long local_338;

  undefined8 local_330;

  double local_328;

  double local_320;

  double local_318;

  double local_310;

  long local_308;

  double local_300;

  double local_2f8;

  float local_2ec;

  double local_2e8;

  undefined8 local_2e0;

  double dStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  double dStack_2b8;

  undefined8 local_2b0;

  undefined8 uStack_2a8;

  double local_2a0;

  double dStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  double local_280;

  double dStack_278;

  undefined8 local_270;

  undefined8 uStack_268;

  double local_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  double local_240;

  undefined8 uStack_238;

  undefined8 local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  double local_1e0;

  double dStack_1d8;

  double local_1d0;

  double dStack_1c8;

  double local_1c0;

  double dStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_198;

  long local_190;

  undefined8 local_188;

  double local_180;

  double dStack_178;

  double local_170;

  double dStack_168;

  double local_160;

  double dStack_158;

  double local_150;

  double dStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  double dStack_128;

  undefined8 local_120;

  double dStack_118;

  double local_110;

  undefined8 uStack_108;

  double local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  double dStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  double local_d0;

  undefined8 uStack_c8;

  double local_c0;

  double dStack_b8;

  double local_b0;

  double dStack_a8;

  undefined8 local_a0;

  long local_98;

  undefined8 local_90;

  double local_70;

  double dStack_68;

  SEL local_58;

  ID local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_58 = param_2;

  local_50 = param_1;

  local_90 = _objc_msgSend_bounds(param_1);

  local_70 = in_d2;

  dStack_68 = in_d3;

  for (local_98 = 0; local_98 < 4; local_98 = local_98 + 1) {

    _objc_msgSend_outerLineViews(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_98);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dStack_b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_c0 = *(double *)PTR__CGRectZero_001108d8;

    dStack_a8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_b0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    if (local_98 == 0) {

      local_e0 = 0xbff0000000000000;

      uStack_d8 = 0xbff0000000000000;

      local_d0 = local_70 + 2.0;

      uStack_c8 = 0x3ff0000000000000;

      dStack_b8 = -1.0;

      local_c0 = -1.0;

      dStack_a8 = 1.0;

      local_b0 = local_d0;

    }

    else if (local_98 == 1) {

      local_100 = local_70;

      uStack_f8 = 0;

      local_f0 = 0x3ff0000000000000;

      dStack_e8 = dStack_68;

      dStack_b8 = 0.0;

      local_c0 = local_70;

      dStack_a8 = dStack_68;

      local_b0 = 1.0;

    }

    else if (local_98 == 2) {

      local_120 = 0xbff0000000000000;

      dStack_118 = dStack_68;

      local_110 = local_70 + 2.0;

      uStack_108 = 0x3ff0000000000000;

      dStack_b8 = dStack_68;

      local_c0 = -1.0;

      dStack_a8 = 1.0;

      local_b0 = local_110;

    }

    else if (local_98 == 3) {

      local_140 = 0xbff0000000000000;

      uStack_138 = 0;

      local_130 = 0x3ff0000000000000;

      dStack_128 = dStack_68 + 1.0;

      dStack_b8 = 0.0;

      local_c0 = -1.0;

      local_b0 = 1.0;

      dStack_a8 = dStack_128;

    }

    dStack_158 = dStack_b8;

    local_160 = local_c0;

    dStack_148 = dStack_a8;

    local_150 = local_b0;

    dStack_178 = dStack_b8;

    local_180 = local_c0;

    dStack_168 = dStack_a8;

    local_170 = local_b0;

    in_d2 = local_b0;

    in_d3 = dStack_a8;

    _objc_msgSend_setFrame_(local_c0,dStack_b8,local_a0,local_488);

    _objc_storeStrong(&local_a0,0);

  }

  _objc_msgSend_topLeftLineViews(local_98 + -4,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar1;

  _objc_msgSend_topRightLineViews(local_50,local_488);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar2;

  _objc_msgSend_bottomRightLineViews(local_50,local_488);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar3;

  _objc_msgSend_bottomLeftLineViews(local_50,local_488);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar4;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_488,&local_48,4);

  local_188 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  for (local_190 = 0; local_190 < 4; local_190 = local_190 + 1) {

    _objc_msgSend_objectAtIndexedSubscript_(local_188,local_488,local_190);

    local_198 = _objc_retainAutoreleasedReturnValue();

    dStack_1b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_1c0 = *(double *)PTR__CGRectZero_001108d8;

    uStack_1a8 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);

    local_1b0 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

    dStack_1d8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_1e0 = *(double *)PTR__CGRectZero_001108d8;

    dStack_1c8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_1d0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    if (local_190 == 0) {

      local_200 = 0xc008000000000000;

      uStack_1f8 = 0xc008000000000000;

      local_1f0 = 0x4008000000000000;

      uStack_1e8 = 0x4037000000000000;

      dStack_1b8 = -3.0;

      local_1c0 = -3.0;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_220 = 0;

      uStack_218 = 0xc008000000000000;

      local_210 = 0x4034000000000000;

      uStack_208 = 0x4008000000000000;

      dStack_1d8 = -3.0;

      local_1e0 = 0.0;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

    }

    else if (local_190 == 1) {

      local_240 = local_70;

      uStack_238 = 0xc008000000000000;

      local_230 = 0x4008000000000000;

      uStack_228 = 0x4037000000000000;

      dStack_1b8 = -3.0;

      local_1c0 = local_70;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_260 = local_70 - 20.0;

      uStack_258 = 0xc008000000000000;

      local_250 = 0x4034000000000000;

      uStack_248 = 0x4008000000000000;

      dStack_1d8 = -3.0;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

      local_1e0 = local_260;

    }

    else if (local_190 == 2) {

      local_280 = local_70;

      dStack_278 = dStack_68 - 20.0;

      local_270 = 0x4008000000000000;

      uStack_268 = 0x4037000000000000;

      local_1c0 = local_70;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_2a0 = local_70 - 20.0;

      dStack_298 = dStack_68;

      local_290 = 0x4034000000000000;

      uStack_288 = 0x4008000000000000;

      dStack_1d8 = dStack_68;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

      local_1e0 = local_2a0;

      dStack_1b8 = dStack_278;

    }

    else if (local_190 == 3) {

      local_2c0 = 0xc008000000000000;

      dStack_2b8 = dStack_68 - 20.0;

      local_2b0 = 0x4008000000000000;

      uStack_2a8 = 0x4034000000000000;

      local_1c0 = -3.0;

      uStack_1a8 = 0x4034000000000000;

      local_1b0 = 0x4008000000000000;

      local_2e0 = 0xc008000000000000;

      dStack_2d8 = dStack_68;

      local_2d0 = 0x4037000000000000;

      uStack_2c8 = 0x4008000000000000;

      dStack_1d8 = dStack_68;

      local_1e0 = -3.0;

      dStack_1c8 = 3.0;

      local_1d0 = 23.0;

      dStack_1b8 = dStack_2b8;

    }

    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(local_1c0,dStack_1b8,local_1b0,uStack_1a8,uVar1,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    in_d2 = local_1d0;

    in_d3 = dStack_1c8;

    _objc_msgSend_setFrame_(local_1e0,dStack_1d8,uVar1,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_198,0);

  }

  local_2ec = 1.0;

  _objc_msgSend_traitCollection(local_190 + -4,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  dVar6 = (double)_objc_msgSend_displayScale(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_4f0 = dVar6;

  if (dVar6 <= (double)local_2ec) {

    local_4f0 = (double)local_2ec;

  }

  local_300 = local_4f0;

  local_2e8 = 1.0 / local_4f0;

  local_2f8 = dVar6;

  _objc_msgSend_horizontalGridLines(local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar5 = _objc_msgSend_count(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_308 = lVar5;

  local_330 = _objc_msgSend_bounds(local_50,local_488);

  local_328 = local_4f0;

  local_320 = in_d2;

  local_318 = in_d3;

  dVar6 = (double)_CGRectGetHeight(local_330,local_4f0,in_d2);

  dVar8 = (double)(local_308 + 1);

  local_310 = (dVar6 - (double)local_308 * local_2e8) / dVar8;

  for (local_338 = 0; local_338 < local_308; local_338 = local_338 + 1) {

    _objc_msgSend_horizontalGridLines(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_338);

    local_340 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dStack_358 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_360 = *(undefined8 *)PTR__CGRectZero_001108d8;

    local_350 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    dStack_348 = local_2e8;

    local_380 = _objc_msgSend_bounds(local_50,local_488);

    local_378 = dVar8;

    local_370 = dVar6;

    local_368 = in_d3;

    dVar6 = (double)_CGRectGetWidth(local_380,dVar8,dVar6,in_d3);

    dVar8 = local_2e8 * (double)local_338 + (double)(local_338 + 1) * local_310;

    local_3a0 = local_360;

    dStack_388 = dStack_348;

    local_3c0 = local_360;

    dStack_3a8 = dStack_348;

    in_d3 = dStack_348;

    dStack_3b8 = dVar8;

    local_3b0 = dVar6;

    dStack_398 = dVar8;

    local_390 = dVar6;

    dStack_358 = dVar8;

    local_350 = dVar6;

    _objc_msgSend_setFrame_(local_360,local_340,local_488);

    _objc_storeStrong(&local_340,0);

  }

  _objc_msgSend_verticalGridLines(local_338 - local_308,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_308 = _objc_msgSend_count(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_3e0 = _objc_msgSend_bounds(local_50,local_488);

  local_3d8 = dVar8;

  local_3d0 = dVar6;

  local_3c8 = in_d3;

  dVar8 = (double)_CGRectGetWidth(local_3e0,dVar8,dVar6);

  local_310 = (dVar8 - (double)local_308 * local_2e8) / (double)(local_308 + 1);

  dVar6 = (double)(local_308 + 1);

  for (local_3e8 = 0; local_3e8 < local_308; local_3e8 = local_3e8 + 1) {

    _objc_msgSend_verticalGridLines(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_3e8);

    local_3f0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dVar9 = local_2e8;

    dVar7 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    uVar1 = _objc_msgSend_bounds(local_50,local_488);

    in_d3 = (double)_CGRectGetHeight(uVar1,dVar6,dVar8,in_d3);

    _objc_msgSend_setFrame_

              (local_2e8 * (double)local_3e8 + (double)(local_3e8 + 1) * local_310,local_3f0,

               local_488);

    _objc_storeStrong(&local_3f0,0);

    dVar6 = dVar7;

    dVar8 = dVar9;

  }

  _objc_storeStrong(local_3e8 - local_308,&local_188,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d4] outerLineViews @0xbe9c0 ----
// CALLERS: setup, setFrame:, didMoveToSuperview, layoutLines, setOuterLineViews:, .cxx_destruct, _objc_msgSend$outerLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::outerLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_outerLineViews);

}






// ---- [d4] description @0x9cebc ----
// CALLERS: ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.54, initWithCroppingStyle:image:, _objc_msgSend$description, _objc_msgSend$handleFailureInMethod:object:file:lineNumber:description:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYImageWeakProxy::description(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_38;

  

  uVar1 = _objc_loadWeakRetained(param_1 + (long)_target);

  _objc_msgSend_description(uVar1,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d4] aspectRatioPreset @0xabb3c ----
// CALLERS: initWithCroppingStyle:image:, viewWillAppear:, setAspectRatioPreset:animated:, setAspectRatioPreset:, _objc_msgSend$aspectRatioPreset
// CALLEES: aspectRatio


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewController::aspectRatioPreset(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + (long)_aspectRatioPreset);

}






// ---- [d4] toolbarPosition @0xabc60 ----
// CALLERS: initWithCroppingStyle:image:, frameForToolbarWithVerticalLayout:, frameForCropViewWithVerticalLayout:, adjustCropViewInsets, adjustToolbarInsets, setToolbarPosition:, _objc_msgSend$toolbarPosition
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropViewController::toolbarPosition(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_toolbarPosition);

}






// ---- [d4] setHidesNavigationBar: @0xabcdc ----
// CALLERS: initWithCroppingStyle:image:, _objc_msgSend$setHidesNavigationBar:
// CALLEES: hidesNavigationBar


/* Function Stack Size: 0x14 bytes */



void WCMTOCropViewController::setHidesNavigationBar_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_hidesNavigationBar) = (byte)param_3 & 1;

  return;

}






// ---- [d4] transitionController @0xac12c ----
// CALLERS: initWithCroppingStyle:image:, presentAnimatedFromParentViewController:fromImage:fromView:fromFrame:angle:toImageFrame:setup:completion:, dismissAnimatedFromParentViewController:withCroppedImage:toView:toFrame:setup:completion:, animationControllerForPresentedController:presentingController:sourceController:, ___107-[WCMTOCropViewController_animationControllerForPresentedController:presentingController:sourceController:]_block_invoke, animationControllerForDismissedController:, ___69-[WCMTOCropViewController_animationControllerForDismissedController:]_block_invoke, setTransitionController:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::transitionController(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_transitionController);

}






// ---- [d4] setup @0xaf7c0 ----
// CALLERS: initWithCroppingStyle:image:, initWithFrame:, initWithFrame:, _objc_msgSend$setup
// CALLEES: initWithFrame:, initWithFrame:, initWithFrame:, setDelegate:, initWithFrame:, initWithFrame:, addGesture, setDelegate:, image, initWithFrame:


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::setup(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined4 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 local_278;

  undefined *local_198;

  undefined4 local_190;

  undefined4 local_18c;

  code *local_188;

  undefined *local_180;

  undefined1 auStack_178 [15];

  undefined1 local_169;

  undefined *local_168;

  undefined4 local_160;

  undefined4 local_15c;

  code *local_158;

  undefined *local_150;

  undefined1 auStack_148 [15];

  undefined1 local_139;

  undefined *local_138;

  undefined4 local_130;

  undefined4 local_12c;

  code *local_128;

  undefined *local_120;

  undefined1 auStack_118 [8];

  undefined8 local_110;

  undefined8 local_d0;

  undefined8 uStack_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 local_70;

  undefined8 uStack_68;

  undefined8 local_60;

  undefined8 uStack_58;

  byte local_39;

  undefined1 auStack_38 [8];

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  _objc_initWeak(auStack_38,param_1);

  lVar3 = _objc_msgSend_croppingStyle(local_28,local_278);

  local_39 = lVar3 == 1;

  _objc_msgSend_setAutoresizingMask_(local_28,local_278,0x12);

  uVar4 = _objc_msgSend_colorWithWhite_alpha_

                    (0x3fbeb851e0000000,0x3ff0000000000000,&_OBJC_CLASS___UIColor,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setBackgroundColor_(local_28,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uStack_68 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);

  local_70 = *(undefined8 *)PTR__CGRectZero_001108d8;

  uStack_58 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);

  local_60 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

  _objc_msgSend_setCropBoxFrame_(local_70,uStack_68,local_60,uStack_58,local_28,local_278);

  _objc_msgSend_setApplyInitialCroppedImageFrame_(local_28,local_278,0);

  _objc_msgSend_setEditing_(local_28,local_278,0);

  _objc_msgSend_setCropBoxResizeEnabled_(local_28,local_278,(local_39 ^ 1) & 1);

  if ((local_39 & 1) == 0) {

    uStack_98 = *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8);

    local_a0 = *(undefined8 *)PTR__CGSizeZero_001108e0;

  }

  else {

    local_a0 = 0x3ff0000000000000;

    uStack_98 = 0x3ff0000000000000;

  }

  _objc_msgSend_setAspectRatio_(local_a0,uStack_98,local_28,local_278);

  _objc_msgSend_setResetAspectRatioEnabled_(local_28,local_278,(local_39 ^ 1) & 1);

  uVar8 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);

  local_d0 = *(undefined8 *)PTR__CGRectZero_001108d8;

  uVar9 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);

  uVar7 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

  uStack_c8 = uVar8;

  local_c0 = uVar7;

  uStack_b8 = uVar9;

  _objc_msgSend_setRestoreImageCropFrame_(local_d0,local_28,local_278);

  _objc_msgSend_setRestoreAngle_(local_28,local_278,0);

  _objc_msgSend_setCropAdjustingDelay_(0x3fe99999a0000000,local_28,local_278);

  _objc_msgSend_setCropViewPadding_(0x402c000000000000,local_28,local_278);

  _objc_msgSend_setMaximumZoomScale_(0x402e000000000000,local_28,local_278);

  uVar4 = _objc_alloc(&objc::class_t::WCMTOCropScrollView);

  local_110 = _objc_msgSend_bounds(local_28,local_278);

  uVar4 = _objc_msgSend_initWithFrame_(local_110,uVar4,local_278);

  _objc_msgSend_setScrollView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAutoresizingMask_(uVar4,local_278,0x12);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAlwaysBounceHorizontal_(uVar4,local_278,1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAlwaysBounceVertical_(uVar4,local_278,1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setShowsHorizontalScrollIndicator_(uVar4,local_278,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setShowsVerticalScrollIndicator_(uVar4,local_278,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  IVar1 = local_28;

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setDelegate_(uVar4,local_278,IVar1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  IVar1 = local_28;

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_addSubview_(IVar1,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setContentInsetAdjustmentBehavior_(uVar4,local_278,2);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_138 = PTR___NSConcreteStackBlock_001104f0;

  local_130 = 0xc2000000;

  local_12c = 0;

  local_128 = ___22__WCMTOCropView_setup__block_invoke;

  local_120 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_118,auStack_38);

  local_139 = 1;

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setTouchesBegan_(uVar4,local_278,&local_138);

  local_139 = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_168 = PTR___NSConcreteStackBlock_001104f0;

  local_160 = 0xc2000000;

  local_15c = 0;

  local_158 = ___22__WCMTOCropView_setup__block_invoke_2;

  local_150 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_148,auStack_38);

  local_169 = 1;

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setTouchesEnded_(uVar4,local_278,&local_168);

  local_169 = 0;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_198 = PTR___NSConcreteStackBlock_001104f0;

  local_190 = 0xc2000000;

  local_18c = 0;

  local_188 = ___22__WCMTOCropView_setup__block_invoke_2;

  local_180 = &___block_descriptor_40_e8_32w_e5_v8__0l;

  _objc_copyWeak(auStack_178,auStack_38);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setTouchesCancelled_(uVar4,local_278,&local_198);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIImageView);

  uVar5 = _objc_msgSend_image(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  uVar4 = _objc_msgSend_initWithImage_(uVar4,local_278);

  _objc_msgSend_setBackgroundImageView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar6 = *(undefined8 *)PTR__kCAFilterTrilinear_001101f0;

  uVar4 = _objc_msgSend_backgroundImageView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar5 = _objc_msgSend_layer(uVar4,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  _objc_msgSend_setMinificationFilter_(uVar5,local_278,uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIView);

  uVar5 = _objc_msgSend_backgroundImageView(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  uVar6 = _objc_msgSend_frame(uVar5,local_278);

  uVar4 = _objc_msgSend_initWithFrame_(uVar6,uVar4,local_278);

  _objc_msgSend_setBackgroundContainerView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar4 = _objc_msgSend_backgroundContainerView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar5 = _objc_msgSend_backgroundImageView(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  _objc_msgSend_addSubview_(uVar4,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_scrollView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar5 = _objc_msgSend_backgroundContainerView(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  _objc_msgSend_addSubview_(uVar4,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIView);

  uVar5 = _objc_msgSend_bounds(local_28,local_278);

  uVar4 = _objc_msgSend_initWithFrame_(uVar5,uVar4,local_278);

  _objc_msgSend_setOverlayView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_overlayView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAutoresizingMask_(uVar4,local_278,0x12);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_backgroundColor(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar5 = _objc_msgSend_colorWithAlphaComponent_(0x3fd6666660000000,uVar4,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  uVar6 = _objc_msgSend_overlayView(local_28,local_278);

  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

  _objc_msgSend_setBackgroundColor_(uVar6,local_278,uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_overlayView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setHidden_(uVar4,local_278,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_overlayView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setUserInteractionEnabled_(uVar4,local_278,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  IVar1 = local_28;

  uVar4 = _objc_msgSend_overlayView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_addSubview_(IVar1,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIBlurEffect,local_278,2);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setTranslucencyEffect_(local_28,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

  uVar5 = _objc_msgSend_translucencyEffect(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  uVar4 = _objc_msgSend_initWithEffect_(uVar4,local_278);

  _objc_msgSend_setTranslucencyView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar5 = _objc_msgSend_bounds(local_28,local_278);

  uVar4 = _objc_msgSend_translucencyView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setFrame_(uVar5,uVar8,uVar7,uVar9,uVar4,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar2 = _objc_msgSend_translucencyAlwaysHidden(local_28,local_278);

  uVar4 = _objc_msgSend_translucencyView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setHidden_(uVar4,local_278,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_translucencyView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setUserInteractionEnabled_(uVar4,local_278,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_translucencyView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAutoresizingMask_(uVar4,local_278,0x12);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  IVar1 = local_28;

  uVar4 = _objc_msgSend_translucencyView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_addSubview_(IVar1,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIView);

  uVar7 = 0;

  uVar8 = 0x4069000000000000;

  uVar9 = 0x4069000000000000;

  uVar4 = _objc_msgSend_initWithFrame_(0,uVar4,local_278);

  _objc_msgSend_setForegroundContainerView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_foregroundContainerView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setClipsToBounds_(uVar4,local_278,1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_foregroundContainerView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setUserInteractionEnabled_(uVar4,local_278,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  IVar1 = local_28;

  uVar4 = _objc_msgSend_foregroundContainerView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_addSubview_(IVar1,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIImageView);

  uVar5 = _objc_msgSend_image(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  uVar4 = _objc_msgSend_initWithImage_(uVar4,local_278);

  _objc_msgSend_setForegroundImageView_(local_28,local_278,uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar6 = *(undefined8 *)PTR__kCAFilterTrilinear_001101f0;

  uVar4 = _objc_msgSend_foregroundImageView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar5 = _objc_msgSend_layer(uVar4,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  _objc_msgSend_setMinificationFilter_(uVar5,local_278,uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_foregroundContainerView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  uVar5 = _objc_msgSend_foregroundImageView(local_28,local_278);

  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

  _objc_msgSend_addSubview_(uVar4,local_278);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_foregroundImageView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAccessibilityIgnoresInvertColors_(uVar4,local_278,1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = _objc_msgSend_backgroundImageView(local_28,local_278);

  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

  _objc_msgSend_setAccessibilityIgnoresInvertColors_(uVar4,local_278,1);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  if ((local_39 & 1) == 0) {

    uVar4 = _objc_alloc(&objc::class_t::WCMTOCropOverlayView);

    uVar5 = _objc_msgSend_foregroundContainerView(local_28,local_278);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    uVar6 = _objc_msgSend_frame(uVar5,local_278);

    uVar4 = _objc_msgSend_initWithFrame_(uVar6,uVar7,uVar8,uVar9,uVar4,local_278);

    _objc_msgSend_setGridOverlayView_(local_28,local_278,uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    uVar4 = _objc_msgSend_gridOverlayView(local_28,local_278);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_setUserInteractionEnabled_(uVar4,local_278,0);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar4 = _objc_msgSend_gridOverlayView(local_28,local_278);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_setGridHidden_(uVar4,local_278,1);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    IVar1 = local_28;

    uVar4 = _objc_msgSend_gridOverlayView(local_28,local_278);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_addSubview_(IVar1,local_278);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar4 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);

    uVar4 = _objc_msgSend_initWithTarget_action_

                      (uVar4,local_278,local_28,"gridPanGestureRecognized:");

    _objc_msgSend_setGridPanGestureRecognizer_(local_28,local_278,uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    IVar1 = local_28;

    uVar4 = _objc_msgSend_gridPanGestureRecognizer(local_28,local_278);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_setDelegate_(uVar4,local_278,IVar1);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar4 = _objc_msgSend_scrollView(local_28,local_278);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    uVar5 = _objc_msgSend_panGestureRecognizer(uVar4,local_278);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    uVar6 = _objc_msgSend_gridPanGestureRecognizer(local_28,local_278);

    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);

    _objc_msgSend_requireGestureRecognizerToFail_(uVar5,local_278);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    IVar1 = local_28;

    uVar4 = _objc_msgSend_gridPanGestureRecognizer(local_28,local_278);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

    _objc_msgSend_addGestureRecognizer_(IVar1,local_278);

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  _objc_destroyWeak(auStack_178);

  _objc_destroyWeak(auStack_148);

  _objc_destroyWeak(auStack_118);

  _objc_destroyWeak(auStack_38);

  return;

}






// ---- [d4] setup @0xbcc04 ----
// CALLERS: initWithCroppingStyle:image:, initWithFrame:, initWithFrame:, _objc_msgSend$setup
// CALLEES: setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:, outerLineViews, topLeftLineViews, bottomLeftLineViews, bottomRightLineViews, topRightLineViews


/* Function Stack Size: 0x10 bytes */



void WCMTOCropOverlayView::setup(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 local_f0;

  undefined8 local_a8;

  long local_a0;

  SEL local_98;

  ID local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_98 = param_2;

  local_90 = param_1;

  local_a8 = (*(code *)PTR__objc_retain_00110460)(param_1);

  local_a0 = _objc_retainBlock();

  (**(code **)(local_a0 + 0x10))();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar1;

  (**(code **)(local_a0 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar2;

  (**(code **)(local_a0 + 0x10))();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar3;

  (**(code **)(local_a0 + 0x10))();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar4;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_48,4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_90 + (long)_outerLineViews);

  *(undefined8 *)(local_90 + (long)_outerLineViews) = uVar5;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  (**(code **)(local_a0 + 0x10))();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_58 = uVar1;

  (**(code **)(local_a0 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_50 = uVar2;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_58);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = *(undefined8 *)(local_90 + (long)_topLeftLineViews);

  *(undefined8 *)(local_90 + (long)_topLeftLineViews) = uVar3;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  (**(code **)(local_a0 + 0x10))();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_68 = uVar1;

  (**(code **)(local_a0 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_60 = uVar2;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_68,2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = *(undefined8 *)(local_90 + (long)_bottomLeftLineViews);

  *(undefined8 *)(local_90 + (long)_bottomLeftLineViews) = uVar3;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  (**(code **)(local_a0 + 0x10))();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_78 = uVar1;

  (**(code **)(local_a0 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_70 = uVar2;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_78,2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = *(undefined8 *)(local_90 + (long)_topRightLineViews);

  *(undefined8 *)(local_90 + (long)_topRightLineViews) = uVar3;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  (**(code **)(local_a0 + 0x10))();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_88 = uVar1;

  (**(code **)(local_a0 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_80 = uVar2;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_f0,&local_88,2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = *(undefined8 *)(local_90 + (long)_bottomRightLineViews);

  *(undefined8 *)(local_90 + (long)_bottomRightLineViews) = uVar3;

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_setDisplayHorizontalGridLines_(local_90,local_f0,1);

  _objc_msgSend_setDisplayVerticalGridLines_(local_90,local_f0,1);

  _objc_storeStrong(&local_a0);

  _objc_storeStrong(&local_a8,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d4] setup @0xbed40 ----
// CALLERS: initWithCroppingStyle:image:, initWithFrame:, initWithFrame:, _objc_msgSend$setup
// CALLEES: initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, titleLabel, initWithFrame:


/* Function Stack Size: 0x10 bytes */



void WCMTOCropToolbar::setup(ID param_1,SEL param_2)



{

  bool bVar1;

  ID IVar2;

  int iVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_1b0;

  undefined8 local_138;

  undefined8 local_b8;

  undefined8 local_a8;

  byte local_99;

  undefined8 local_98;

  undefined8 local_90;

  byte local_81;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  uVar4 = _objc_alloc(&_OBJC_CLASS___UIView);

  local_50 = _objc_msgSend_bounds(local_28,local_b8);

  uVar4 = _objc_msgSend_initWithFrame_(local_50,in_d1,in_d2,in_d3,uVar4,local_b8);

  _objc_msgSend_setBackgroundView_(local_28,local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  local_58 = (*(code *)PTR__objc_retain_00110460)(local_28);

  iVar3 = ___isPlatformVersionAtLeast(2,0x1a,0);

  if (iVar3 == 0) {

    _objc_msgSend_colorWithWhite_alpha_

              (0x3fbeb851e0000000,0x3ff0000000000000,&_OBJC_CLASS___UIColor,local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_backgroundView(local_28,local_b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(uVar6,local_b8,uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    IVar2 = local_28;

    _objc_msgSend_backgroundView(local_28,local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addSubview_(IVar2,local_b8);

    (*(code *)PTR__objc_release_00110458)(uVar4);

  }

  else {

    local_60 = 0;

    local_68 = 0;

    local_70 = _NSSelectorFromString(&cf_effectWithStyle_);

    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIGlassEffect);

    uVar5 = _objc_opt_respondsToSelector(uVar4,local_70);

    if ((uVar5 & 1) == 0) {

      uVar6 = _objc_opt_new(&_OBJC_CLASS___UIGlassEffect);

      uVar4 = local_68;

      local_68 = uVar6;

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    else {

      _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIGlassEffect,local_b8,1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      uVar4 = local_68;

      local_68 = uVar6;

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    _objc_msgSend_setInteractive_(local_68,local_b8,1);

    _objc_storeStrong(&local_60,local_68);

    uVar4 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

    uVar4 = _objc_msgSend_initWithEffect_(uVar4,local_b8,local_60);

    uVar6 = *(undefined8 *)(local_28 + (long)_glassView);

    *(undefined8 *)(local_28 + (long)_glassView) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar6);

    _objc_msgSend_capsuleConfiguration(&_OBJC_CLASS___UICornerConfiguration,local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setCornerConfiguration_(*(undefined8 *)(local_28 + (long)_glassView),local_b8);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_setUserInteractionEnabled_

              (*(undefined8 *)(local_28 + (long)_glassView),local_b8,1);

    _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_glassView));

    _objc_msgSend_contentView(*(undefined8 *)(local_28 + (long)_glassView),local_b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar4 = local_58;

    local_58 = uVar6;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    *(undefined1 *)(local_28 + (long)_showOnlyIcons) = 1;

    _objc_storeStrong(&local_68);

    _objc_storeStrong(&local_60,0);

  }

  uVar4 = _objc_msgSend_semanticContentAttribute(local_28,local_b8);

  lVar7 = _objc_msgSend_userInterfaceLayoutDirectionForSemanticContentAttribute_

                    (&_OBJC_CLASS___UIView,local_b8,uVar4);

  *(bool *)(local_28 + (long)_reverseContentLayout) = lVar7 == 1;

  _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_28);

  local_78 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _WCMTOCropViewUsesGlassDesign();

  if ((uVar5 & 1) == 0) {

    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar6 = *(undefined8 *)(local_28 + (long)_doneTextButton);

    *(undefined8 *)(local_28 + (long)_doneTextButton) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar6);

    uVar4 = *(undefined8 *)(local_28 + (long)_doneTextButton);

    local_81 = 0;

    bVar1 = *(long *)(local_28 + (long)_doneTextButtonTitle) == 0;

    if (bVar1) {

      _objc_msgSend_localizedStringForKey_value_table_

                (local_78,local_b8,&cf_Done,&cf___,&cf_WCMTOCropViewControllerLocalizable);

      local_138 = _objc_retainAutoreleasedReturnValue();

      local_80 = local_138;

    }

    else {

      local_138 = *(undefined8 *)(local_28 + (long)_doneTextButtonTitle);

    }

    local_81 = bVar1;

    _objc_msgSend_setTitle_forState_(uVar4,local_b8,local_138,0);

    if ((local_81 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_80);

    }

    uVar6 = *(undefined8 *)(local_28 + (long)_doneTextButton);

    _objc_msgSend_colorWithRed_green_blue_alpha_

              (0x3ff0000000000000,0x3fe99999a0000000,0,&_OBJC_CLASS___UIColor,local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTitleColor_forState_(uVar6,local_b8,uVar4,0);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_titleLabel(*(undefined8 *)(local_28 + (long)_doneTextButton),local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_systemFontOfSize_weight_

              (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightMedium_001100c0,

               &_OBJC_CLASS___UIFont,local_b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(uVar4,local_b8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_addTarget_action_forControlEvents_

              (*(undefined8 *)(local_28 + (long)_doneTextButton),local_b8,local_28,"buttonTapped:",

               0x40);

    _objc_msgSend_sizeToFit(*(undefined8 *)(local_28 + (long)_doneTextButton),local_b8);

    _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_doneTextButton));

  }

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_28 + (long)_doneIconButton);

  *(undefined8 *)(local_28 + (long)_doneIconButton) = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  uVar6 = *(undefined8 *)(local_28 + (long)_doneIconButton);

  _objc_msgSend_doneImage(&objc::class_t::WCMTOCropToolbar,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar6 = *(undefined8 *)(local_28 + (long)_doneIconButton);

  _objc_msgSend_colorWithRed_green_blue_alpha_

            (0x3ff0000000000000,0x3fe99999a0000000,0,&_OBJC_CLASS___UIColor,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(uVar6,local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addTarget_action_forControlEvents_

            (*(undefined8 *)(local_28 + (long)_doneIconButton),local_b8,local_28,"buttonTapped:",

             0x40);

  iVar3 = ___isPlatformVersionAtLeast(2,0x1a,0);

  if (iVar3 != 0) {

    _objc_msgSend_prominentGlassButtonConfiguration(&_OBJC_CLASS___UIButtonConfiguration,local_b8);

    local_90 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBaseForegroundColor_(local_90,local_b8);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_setConfiguration_

              (*(undefined8 *)(local_28 + (long)_doneIconButton),local_b8,local_90);

    _objc_storeStrong(&local_90,0);

  }

  _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_doneIconButton));

  _objc_msgSend_setDoneButtonColor_(local_28,local_b8,0);

  uVar5 = _WCMTOCropViewUsesGlassDesign();

  if ((uVar5 & 1) == 0) {

    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar6 = *(undefined8 *)(local_28 + (long)_cancelTextButton);

    *(undefined8 *)(local_28 + (long)_cancelTextButton) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar6);

    uVar4 = *(undefined8 *)(local_28 + (long)_cancelTextButton);

    local_99 = 0;

    bVar1 = *(long *)(local_28 + (long)_cancelTextButtonTitle) == 0;

    if (bVar1) {

      _objc_msgSend_localizedStringForKey_value_table_

                (local_78,local_b8,&cf_Cancel,&cf___,&cf_WCMTOCropViewControllerLocalizable);

      local_1b0 = _objc_retainAutoreleasedReturnValue();

      local_98 = local_1b0;

    }

    else {

      local_1b0 = *(undefined8 *)(local_28 + (long)_cancelTextButtonTitle);

    }

    local_99 = bVar1;

    _objc_msgSend_setTitle_forState_(uVar4,local_b8,local_1b0,0);

    if ((local_99 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_98);

    }

    _objc_msgSend_titleLabel(*(undefined8 *)(local_28 + (long)_cancelTextButton),local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_systemFontOfSize_(0x4031000000000000,&_OBJC_CLASS___UIFont,local_b8);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(uVar4,local_b8);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_addTarget_action_forControlEvents_

              (*(undefined8 *)(local_28 + (long)_cancelTextButton),local_b8,local_28,"buttonTapped:"

               ,0x40);

    _objc_msgSend_sizeToFit(*(undefined8 *)(local_28 + (long)_cancelTextButton),local_b8);

    _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_cancelTextButton))

    ;

  }

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_28 + (long)_cancelIconButton);

  *(undefined8 *)(local_28 + (long)_cancelIconButton) = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  uVar6 = *(undefined8 *)(local_28 + (long)_cancelIconButton);

  _objc_msgSend_cancelImage(&objc::class_t::WCMTOCropToolbar,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addTarget_action_forControlEvents_

            (*(undefined8 *)(local_28 + (long)_cancelIconButton),local_b8,local_28,"buttonTapped:",

             0x40);

  iVar3 = ___isPlatformVersionAtLeast(2,0x1a,0);

  if (iVar3 != 0) {

    _objc_msgSend_clearGlassButtonConfiguration(&_OBJC_CLASS___UIButtonConfiguration,local_b8);

    local_a8 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_b8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBaseForegroundColor_(local_a8,local_b8);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_setConfiguration_

              (*(undefined8 *)(local_28 + (long)_cancelIconButton),local_b8,local_a8);

    _objc_storeStrong(&local_a8,0);

  }

  _objc_msgSend_addSubview_(local_28,local_b8,*(undefined8 *)(local_28 + (long)_cancelIconButton));

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_28 + (long)_clampButton);

  *(undefined8 *)(local_28 + (long)_clampButton) = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_msgSend_setContentMode_(*(undefined8 *)(local_28 + (long)_clampButton),local_b8);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(*(undefined8 *)(local_28 + (long)_clampButton),local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar6 = *(undefined8 *)(local_28 + (long)_clampButton);

  _objc_msgSend_clampImage(&objc::class_t::WCMTOCropToolbar,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addTarget_action_forControlEvents_

            (*(undefined8 *)(local_28 + (long)_clampButton),local_b8,local_28,"buttonTapped:");

  _objc_msgSend_addSubview_(local_58,local_b8,*(undefined8 *)(local_28 + (long)_clampButton));

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton);

  *(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton) = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_msgSend_setContentMode_

            (*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton),local_b8,4);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_

            (*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton),local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar6 = *(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton);

  _objc_msgSend_rotateCCWImage(&objc::class_t::WCMTOCropToolbar,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addTarget_action_forControlEvents_

            (*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton),local_b8,local_28,

             "buttonTapped:",0x40);

  _objc_msgSend_addSubview_

            (local_58,local_b8,*(undefined8 *)(local_28 + (long)_rotateCounterclockwiseButton));

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_28 + (long)_rotateClockwiseButton);

  *(undefined8 *)(local_28 + (long)_rotateClockwiseButton) = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_msgSend_setContentMode_(*(undefined8 *)(local_28 + (long)_rotateClockwiseButton),local_b8,4)

  ;

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(*(undefined8 *)(local_28 + (long)_rotateClockwiseButton),local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar6 = *(undefined8 *)(local_28 + (long)_rotateClockwiseButton);

  _objc_msgSend_rotateCWImage(&objc::class_t::WCMTOCropToolbar,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addTarget_action_forControlEvents_

            (*(undefined8 *)(local_28 + (long)_rotateClockwiseButton),local_b8,local_28,

             "buttonTapped:",0x40);

  _objc_msgSend_addSubview_

            (local_58,local_b8,*(undefined8 *)(local_28 + (long)_rotateClockwiseButton));

  _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_b8,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = *(undefined8 *)(local_28 + (long)_resetButton);

  *(undefined8 *)(local_28 + (long)_resetButton) = uVar4;

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_msgSend_setContentMode_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8,4);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setTintColor_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_setEnabled_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8,0);

  uVar6 = *(undefined8 *)(local_28 + (long)_resetButton);

  _objc_msgSend_resetImage(&objc::class_t::WCMTOCropToolbar,local_b8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar4,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addTarget_action_forControlEvents_

            (*(undefined8 *)(local_28 + (long)_resetButton),local_b8,local_28,"buttonTapped:",0x40);

  _objc_msgSend_localizedStringForKey_value_table_

            (local_78,local_b8,&cf_Reset,&cf___,&cf_WCMTOCropViewControllerLocalizable);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setAccessibilityLabel_(*(undefined8 *)(local_28 + (long)_resetButton),local_b8);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_addSubview_(local_58,local_b8,*(undefined8 *)(local_28 + (long)_resetButton));

  _objc_storeStrong(&local_78);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d4] surface @0x9c98 ----
// CALLERS: initWithFrame:, layoutSubviews, _StyleMessageCell, _objc_msgSend$surface
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMMessageCardBackground::surface(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_surface);

}






// ---- [d4] setSurface: @0x9cbc ----
// CALLERS: initWithFrame:, _objc_msgSend$setSurface:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMMessageCardBackground::setSurface_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_surface,param_3);

  return;

}






// ---- [d4] backdrop @0x17a24 ----
// CALLERS: initWithFrame:, layoutSubviews, setBackdrop:, .cxx_destruct, collectionView:cellForItemAtIndexPath:, ___60-[WCMVideoController_collectionView:cellForItemAtIndexPath:]_block_invoke, _objc_msgSend$backdrop
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoCell::backdrop(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_backdrop);

}






// ---- [d4] setBackdrop: @0x17a48 ----
// CALLERS: initWithFrame:, _objc_msgSend$setBackdrop:
// CALLEES: backdrop


/* Function Stack Size: 0x18 bytes */



void WCMVideoCell::setBackdrop_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_backdrop,param_3);

  return;

}






// ---- [d4] poster @0x17a84 ----
// CALLERS: initWithFrame:, layoutSubviews, collectionView:cellForItemAtIndexPath:, activateVideo, _objc_msgSend$poster
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoCell::poster(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_poster);

}






// ---- [d4] setPoster: @0x17aa8 ----
// CALLERS: initWithFrame:, _objc_msgSend$setPoster:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoCell::setPoster_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_poster,param_3);

  return;

}






// ---- [d4] blur @0x17b44 ----
// CALLERS: initWithFrame:, layoutSubviews, _objc_msgSend$blur
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoCell::blur(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_blur);

}






// ---- [d4] setBlur: @0x17b68 ----
// CALLERS: initWithFrame:, _objc_msgSend$setBlur:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoCell::setBlur_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_blur,param_3);

  return;

}






// ---- [d4] caption @0x17ba4 ----
// CALLERS: initWithFrame:, layoutSubviews, collectionView:cellForItemAtIndexPath:, _objc_msgSend$caption
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoCell::caption(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_caption);

}






// ---- [d4] setCaption: @0x17bc8 ----
// CALLERS: initWithFrame:, _objc_msgSend$setCaption:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoCell::setCaption_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_caption,param_3);

  return;

}






// ---- [d4] authorButton @0x17c04 ----
// CALLERS: initWithFrame:, layoutSubviews, setAuthorButton:, .cxx_destruct, collectionView:cellForItemAtIndexPath:, _objc_msgSend$authorButton
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoCell::authorButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_authorButton);

}






// ---- [d4] setAuthorButton: @0x17c28 ----
// CALLERS: initWithFrame:, _objc_msgSend$setAuthorButton:
// CALLEES: authorButton


/* Function Stack Size: 0x18 bytes */



void WCMVideoCell::setAuthorButton_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_authorButton,param_3);

  return;

}






// ---- [d4] initValue @0x62d80 ----
// CALLERS: initWithFrame:, initWithFrame:, init, _objc_msgSend$initValue
// CALLEES: autoHideProjectiveView, shouldHideStatusBar, toolViewHandlers, defaultToolViewHandler, auxiliaryViewHandler, animatedTransition, defaultAnimatedTransition


/* Function Stack Size: 0x10 bytes */



void WCMYBImageBrowser::initValue(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_40;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  *(undefined1 *)(param_1 + (long)_hideTransitioning) = 0;

  *(undefined1 *)(param_1 + (long)_showTransitioning) = 0;

  *(undefined1 *)(param_1 + (long)_transitioning) = 0;

  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBAnimatedTransition);

  uVar2 = *(undefined8 *)(param_1 + (long)_animatedTransition);

  *(undefined8 *)(param_1 + (long)_animatedTransition) = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeWeak(param_1 + (long)_defaultAnimatedTransition,uVar1);

  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBToolViewHandler);

  local_20 = uVar1;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_40,&local_20,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = *(undefined8 *)(param_1 + (long)_toolViewHandlers);

  *(undefined8 *)(param_1 + (long)_toolViewHandlers) = uVar2;

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_objectAtIndexedSubscript_

            (*(undefined8 *)(param_1 + (long)_toolViewHandlers),local_40,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_storeWeak(param_1 + (long)_defaultToolViewHandler);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBAuxiliaryViewHandler);

  uVar2 = *(undefined8 *)(param_1 + (long)_auxiliaryViewHandler);

  *(undefined8 *)(param_1 + (long)_auxiliaryViewHandler) = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  *(undefined1 *)(param_1 + (long)_shouldHideStatusBar) = 1;

  *(undefined1 *)(param_1 + (long)_autoHideProjectiveView) = 1;

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- [d4] respondsToLongPress: @0x66ac8 ----
// CALLERS: initWithFrame:
// CALLEES: currentData, delegate, toolViewHandlers, delegate, wcm_yb_respondsToLongPress, delegate, delegate


/* Function Stack Size: 0x18 bytes */



void WCMYBImageBrowser::respondsToLongPress_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  uint uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  ulong local_160;

  ulong local_158;

  undefined8 local_110;

  undefined1 auStack_108 [8];

  long local_100;

  long *local_f8;

  undefined8 local_c8;

  undefined8 local_c0;

  SEL local_b8;

  ID local_b0;

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_c0 = 0;

  local_b8 = param_2;

  local_b0 = param_1;

  _objc_storeStrong(&local_c0,param_3);

  lVar3 = _objc_msgSend_state(local_c0,local_110);

  if (lVar3 == 1) {

    _objc_msgSend_delegate(0,local_b0,local_110);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_respondsToSelector(uVar4,"wcm_yb_imageBrowser:respondsToLongPressWithData:");

    (*(code *)PTR__objc_release_00110458)(uVar4);

    if ((uVar2 & 1) == 0) {

      _memset(auStack_108,0,0x40);

      _objc_msgSend_toolViewHandlers(local_b0,local_110);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      local_158 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                            (uVar4,local_110,auStack_108,auStack_a8,0x10);

      if (local_158 != 0) {

        lVar3 = *local_f8;

        local_160 = 0;

        do {

          do {

            if (*local_f8 - lVar3 != 0) {

              _objc_enumerationMutation(*local_f8 - lVar3,uVar4);

            }

            local_c8 = *(undefined8 *)(local_100 + local_160 * 8);

            uVar6 = _objc_opt_respondsToSelector(local_c8,"wcm_yb_respondsToLongPress");

            if ((uVar6 & 1) != 0) {

              _objc_msgSend_wcm_yb_respondsToLongPress(local_c8,local_110);

            }

            local_160 = local_160 + 1;

          } while (local_160 < local_158);

          local_158 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                (uVar4,local_110,auStack_108,auStack_a8,0x10);

          local_160 = 0;

        } while (local_158 != 0);

      }

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    else {

      _objc_msgSend_delegate(local_b0,local_110);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      IVar1 = local_b0;

      _objc_msgSend_currentData(local_b0,local_110);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_wcm_yb_imageBrowser_respondsToLongPressWithData_(uVar4,local_110,IVar1);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

  }

  _objc_storeStrong(&local_c0,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d4] initValue @0x6b7c0 ----
// CALLERS: initWithFrame:, initWithFrame:, init, _objc_msgSend$initValue
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageCell::initValue(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  

  lVar1 = (long)_interactStartPoint;

  uVar2 = *(undefined8 *)PTR__CGPointZero_00110850;

  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);

  *(undefined8 *)(param_1 + lVar1) = uVar2;

  *(undefined1 *)(param_1 + (long)_interacting) = 0;

  return;

}






// ---- [d4] addGesture @0x6e31c ----
// CALLERS: viewDidLoad, presentationTransitionWillBegin, viewDidLoad, initWithFrame:, initWithFrame:, textLabel, setup, _objc_msgSend$addGesture
// CALLEES: setDelegate:, respondsToTapSingle:, respondsToTapDouble:, respondsToPan:, setDelegate:, setDelegate:, setDelegate:


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageCell::addGesture(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 local_60;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  uVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

  local_28 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"respondsToTapSingle:");

  _objc_msgSend_setNumberOfTapsRequired_(local_28,local_60);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

  local_30 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"respondsToTapDouble:");

  _objc_msgSend_setNumberOfTapsRequired_(local_30,local_60,2);

  uVar1 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);

  local_38 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"respondsToPan:");

  _objc_msgSend_setMaximumNumberOfTouches_(local_38,local_60,1);

  _objc_msgSend_setDelegate_(local_38,local_60,local_18);

  _objc_msgSend_requireGestureRecognizerToFail_(local_28,local_60,local_30);

  _objc_msgSend_requireGestureRecognizerToFail_(local_28,local_60,local_38);

  _objc_msgSend_requireGestureRecognizerToFail_(local_30,local_60,local_38);

  _objc_msgSend_addGestureRecognizer_(local_18,local_60,local_28);

  _objc_msgSend_addGestureRecognizer_(local_18,local_60,local_30);

  _objc_msgSend_addGestureRecognizer_(local_18,local_60,local_38);

  _objc_storeStrong(&local_38);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d4] initValue @0x710f4 ----
// CALLERS: initWithFrame:, initWithFrame:, init, _objc_msgSend$initValue
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::initValue(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBImageLayout);

  uVar2 = *(undefined8 *)(param_1 + 0x108);

  *(undefined8 *)(param_1 + 0x108) = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeWeak(param_1 + 0x110,uVar1);

  *(undefined8 *)(param_1 + 0x118) = 0;

  *(undefined8 *)(param_1 + 0xb8) = 0x4170000000000000;

  *(undefined1 *)(param_1 + 0x1a) = 1;

  *(undefined1 *)(param_1 + 0x18) = 0;

  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBSentinel);

  uVar2 = *(undefined8 *)(param_1 + 0x10);

  *(undefined8 *)(param_1 + 0x10) = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBInteractionProfile);

  uVar2 = *(undefined8 *)(param_1 + 0xe8);

  *(undefined8 *)(param_1 + 0xe8) = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  *(undefined1 *)(param_1 + 0x19) = 1;

  return;

}






// ---- [d4] imageView @0x6ab38 ----
// CALLERS: layoutSubviews, showToView:containerSize:, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, initWithFrame:, setImage:type:, reset, setImageView:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageScrollView::imageView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_imageView) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYYAnimatedImageView);

    uVar2 = *(undefined8 *)(param_1 + (long)_imageView);

    *(undefined8 *)(param_1 + (long)_imageView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setContentMode_(*(undefined8 *)(param_1 + (long)_imageView),local_30,2);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setMasksToBounds_(uVar1,local_30,1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageView));

  return IVar3;

}






// ---- [d4] imageView @0x80d98 ----
// CALLERS: layoutSubviews, initWithFrame:, setImage:type:, reset, wcm_yb_foregroundView, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: _CGSizeMake, setImage:, sharedManager, loadingImage, setImage:, setImage:, setImage:, setImage:, setImage:, setImage:


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBLoadingView::imageView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 local_50;

  

  if (*(long *)(param_1 + (long)_imageView) == 0) {

    uVar1 = _objc_opt_new(&_OBJC_CLASS___UIImageView);

    uVar2 = *(undefined8 *)(param_1 + (long)_imageView);

    *(undefined8 *)(param_1 + (long)_imageView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_loadingImage(uVar1,local_50);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar3 + 0x10))();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setImage_(*(undefined8 *)(param_1 + (long)_imageView),local_50);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(lVar3);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_darkGrayColor(&_OBJC_CLASS___UIColor,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar2 = _objc_msgSend_CGColor(uVar1,local_50);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowColor_(uVar4,local_50,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar4 = 0x3ff0000000000000;

    uVar2 = _CGSizeMake(0);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowOffset_(uVar2,uVar4,uVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowOpacity_(0x3f800000,uVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowRadius_(0x4010000000000000,uVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageView));

  return IVar5;

}






// ---- [d4] setMaximumZoomScale: @0xbbe9c ----
// CALLERS: viewDidLoad, initWithFrame:, updateImageLayoutWithOrientation:previousImageSize:, setup, updateToImageCropFrame:, updateScrollViewMaximumZoomScale, _objc_msgSend$setMaximumZoomScale:
// CALLEES: maximumZoomScale


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setMaximumZoomScale_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_maximumZoomScale) = param_3;

  return;

}






// ---- [d4] imageScrollView @0x705a0 ----
// CALLERS: initWithFrame:, layoutSubviews, prepareForReuse, wcm_yb_foregroundView, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, ___71-[WCMYBIBImageCell_updateImageLayoutWithOrientation:previousImageSize:]_block_invoke, cuttingImage
// CALLEES: setDelegate:, setDelegate:, setDelegate:, setDelegate:


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::imageScrollView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_imageScrollView) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBImageScrollView);

    uVar2 = *(undefined8 *)(param_1 + (long)_imageScrollView);

    *(undefined8 *)(param_1 + (long)_imageScrollView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setDelegate_(*(undefined8 *)(param_1 + (long)_imageScrollView),local_28,param_1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageScrollView));

  return IVar3;

}






// ---- [d4] textLabel @0x7ec58 ----
// CALLERS: tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, initWithFrame:, updateConstraints, showWithText:type:, setTextLabel:, .cxx_destruct, initWithFrame:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToastView::textLabel(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_textLabel) == 0) {

    uVar1 = _objc_opt_new(&_OBJC_CLASS___UILabel);

    uVar2 = *(undefined8 *)(param_1 + (long)_textLabel);

    *(undefined8 *)(param_1 + (long)_textLabel) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_28);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTextColor_(*(undefined8 *)(param_1 + (long)_textLabel),local_28);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_28);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(*(undefined8 *)(param_1 + (long)_textLabel),local_28);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setTextAlignment_(*(undefined8 *)(param_1 + (long)_textLabel),local_28,1);

    _objc_msgSend_setNumberOfLines_(*(undefined8 *)(param_1 + (long)_textLabel),local_28,0);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_textLabel));

  return IVar3;

}






// ---- [d4] textLabel @0x80bd4 ----
// CALLERS: tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, initWithFrame:, updateConstraints, showWithText:type:, initWithFrame:, updateConstraints, showProgress:
// CALLEES: addGesture, respondsToTapTextlabel


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBLoadingView::textLabel(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_38;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  if (*(long *)(param_1 + (long)_textLabel) == 0) {

    uVar1 = _objc_opt_new(&_OBJC_CLASS___UILabel);

    uVar2 = *(undefined8 *)(local_18 + (long)_textLabel);

    *(undefined8 *)(local_18 + (long)_textLabel) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_38);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTextColor_(*(undefined8 *)(local_18 + (long)_textLabel),local_38);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setNumberOfLines_(*(undefined8 *)(local_18 + (long)_textLabel),local_38,0);

    _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_38);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(*(undefined8 *)(local_18 + (long)_textLabel),local_38);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setTextAlignment_(*(undefined8 *)(local_18 + (long)_textLabel),local_38,1);

    uVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

    local_28 = _objc_msgSend_initWithTarget_action_

                         (uVar1,local_38,local_18,"respondsToTapTextlabel");

    _objc_msgSend_addGestureRecognizer_

              (*(undefined8 *)(local_18 + (long)_textLabel),local_38,local_28);

    _objc_msgSend_setUserInteractionEnabled_

              (*(undefined8 *)(local_18 + (long)_textLabel),local_38,1);

    _objc_storeStrong(&local_28,0);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + (long)_textLabel));

  return IVar3;

}






// ---- [d4] drawView @0x80b08 ----
// CALLERS: initWithFrame:, updateConstraints, showProgress:, show, showText:click:, setDrawView:, .cxx_destruct, _WCMYBIBSnapshotView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBLoadingView::drawView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_drawView) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBProgressDrawView);

    uVar2 = *(undefined8 *)(param_1 + (long)_drawView);

    *(undefined8 *)(param_1 + (long)_drawView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + (long)_drawView),local_30);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_drawView));

  return IVar3;

}






// ---- [d4] setOperationType: @0x852d4 ----
// CALLERS: initWithFrame:, topView, _objc_msgSend$setOperationType:
// CALLEES: sharedManager, toolSaveImage, toolMoreImage, operationButton, operationType


/* Function Stack Size: 0x18 bytes */



void WCMYBIBTopView::setOperationType_(ID param_1,SEL param_2,long_long param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_50;

  undefined8 local_30;

  long_long local_28;

  SEL local_20;

  ID local_18;

  

  *(long_long *)(param_1 + (long)_operationType) = param_3;

  local_30 = 0;

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  if (param_3 == 0) {

    _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_toolSaveImage(uVar1,local_50);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = local_30;

    local_30 = uVar3;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(lVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  else if (param_3 == 1) {

    _objc_msgSend_sharedManager(&objc::class_t::WCMYBIBIconManager,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_toolMoreImage(uVar1,local_50);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = local_30;

    local_30 = uVar3;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(lVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  _objc_msgSend_operationButton(local_18,local_50);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setImage_forState_(uVar4,local_50,local_30,0);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_storeStrong(&local_30,0);

  return;

}






// ---- [d4] pageLabel @0x85474 ----
// CALLERS: initWithFrame:, layoutSubviews, setPage:totalPage:, setPageLabel:, .cxx_destruct, _objc_msgSend$pageLabel
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBTopView::pageLabel(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_pageLabel) == 0) {

    uVar1 = _objc_opt_new(&_OBJC_CLASS___UILabel);

    uVar2 = *(undefined8 *)(param_1 + (long)_pageLabel);

    *(undefined8 *)(param_1 + (long)_pageLabel) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_28);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTextColor_(*(undefined8 *)(param_1 + (long)_pageLabel),local_28);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_boldSystemFontOfSize_(0x4030000000000000,&_OBJC_CLASS___UIFont,local_28);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(*(undefined8 *)(param_1 + (long)_pageLabel),local_28);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setTextAlignment_(*(undefined8 *)(param_1 + (long)_pageLabel),local_28,0);

    _objc_msgSend_setAdjustsFontSizeToFitWidth_

              (*(undefined8 *)(param_1 + (long)_pageLabel),local_28,1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_pageLabel));

  return IVar3;

}






// ---- [d4] operationButton @0x855c8 ----
// CALLERS: initWithFrame:, layoutSubviews, setOperationType:, setOperationButton:, .cxx_destruct, wcm_yb_pageChanged, _objc_msgSend$operationButton
// CALLEES: _CGSizeMake, clickOperationButton:, clickOperation, titleLabel, titleLabel


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBTopView::operationButton(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_50;

  

  if (*(long *)(param_1 + (long)_operationButton) == 0) {

    _objc_msgSend_buttonWithType_(&_OBJC_CLASS___UIButton,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = *(undefined8 *)(param_1 + (long)_operationButton);

    *(undefined8 *)(param_1 + (long)_operationButton) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_boldSystemFontOfSize_(0x4030000000000000,&_OBJC_CLASS___UIFont,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_titleLabel(*(undefined8 *)(param_1 + (long)_operationButton),local_50);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFont_(uVar2,local_50,uVar1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_titleLabel(*(undefined8 *)(param_1 + (long)_operationButton),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setAdjustsFontSizeToFitWidth_(uVar1,local_50,1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar2 = *(undefined8 *)(param_1 + (long)_operationButton);

    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setTitleColor_forState_(uVar2,local_50,uVar1,0);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_addTarget_action_forControlEvents_

              (*(undefined8 *)(param_1 + (long)_operationButton),local_50,param_1,

               "clickOperationButton:",0x40);

    _objc_msgSend_darkGrayColor(&_OBJC_CLASS___UIColor,local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar2 = _objc_msgSend_CGColor(uVar1,local_50);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowColor_(uVar3,local_50,uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    uVar3 = 0x3ff0000000000000;

    uVar2 = _CGSizeMake(0);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowOffset_(uVar2,uVar3,uVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowOpacity_(0x3f800000,uVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_operationButton),local_50);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setShadowRadius_(0x4010000000000000,uVar1,local_50);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_operationButton));

  return IVar4;

}






// ---- [d4] sharedCopywriter @0x82934 ----
// CALLERS: wcm_yb_imageIsInvalidForData:, wcm_yb_imageDownloadFailedForData:, saveToPhotoAlbumCompleteWithError:, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.109, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.113, ___37+[WCMYBIBCopywriter_sharedCopywriter]_block_invoke, saveAction, initWithFrame:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::sharedCopywriter(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined8 local_20;

  long *local_18;

  

  local_18 = &_sharedCopywriter_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  IVar1 = _objc_retainAutoreleaseReturnValue(_sharedCopywriter_copywriter);

  return IVar1;

}






// ---- [d4] cancel @0x830c4 ----
// CALLERS: initWithFrame:, _objc_msgSend$cancel
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::cancel(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x58);

}






// ---- [d4] cellHeight @0x88bcc ----
// CALLERS: initWithFrame:, showToView:orientation:, tableView:heightForRowAtIndexPath:, setCellHeight:, _objc_msgSend$cellHeight
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBSheetView::cellHeight(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_cellHeight);

}






// ---- [d4] maxHeightScale @0x88c1c ----
// CALLERS: initWithFrame:, showToView:orientation:, setMaxHeightScale:, _objc_msgSend$maxHeightScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBSheetView::maxHeightScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_maxHeightScale);

}






// ---- [d4] cancelText @0x88c6c ----
// CALLERS: initWithFrame:, tableView:cellForRowAtIndexPath:, setCancelText:, .cxx_destruct, cancelButtonTitle, setup, layoutSubviews, buttonTapped:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBSheetView::cancelText(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cancelText);

}






// ---- [d4] showDuration @0x88ccc ----
// CALLERS: initWithFrame:, showToView:orientation:, setShowDuration:, wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:, _objc_msgSend$showDuration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBSheetView::showDuration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_showDuration);

}






// ---- [d4] hideDuration @0x88d1c ----
// CALLERS: initWithFrame:, hideWithAnimation:, setHideDuration:, wcm_yb_hideTransitioningWithContainer:startView:endView:orientation:completion:, _objc_msgSend$hideDuration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBSheetView::hideDuration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_hideDuration);

}






// ---- [d4] backAlpha @0x88d6c ----
// CALLERS: initWithFrame:, ___43-[WCMYBIBSheetView_showToView:orientation:]_block_invoke, setBackAlpha:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBSheetView::backAlpha(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_backAlpha);

}






// ---- [d4] collection @0x2b244 ----
// CALLERS: viewDidLoad, gestureRecognizer:shouldReceiveTouch:, viewDidLayoutSubviews, viewDidAppear:, collectionView:numberOfItemsInSection:, collectionView:layout:sizeForItemAtIndexPath:, collectionView:cellForItemAtIndexPath:, ___60-[WCMVideoController_collectionView:cellForItemAtIndexPath:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMVideoController::collection(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_collection);

}






// ---- [d4] collectionView @0x66e68 ----
// CALLERS: viewDidLoad, viewDidLayoutSubviews, collectionView:numberOfItemsInSection:, collectionView:layout:sizeForItemAtIndexPath:, collectionView:cellForItemAtIndexPath:, ___60-[WCMVideoController_collectionView:cellForItemAtIndexPath:]_block_invoke, galleryIsInteracting, settleGalleryIfIdle
// CALLEES: collection, setDataSource:, setDelegate:, setDelegate:, setDelegate:, setDelegate:


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::collectionView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_collectionView) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBCollectionView);

    uVar2 = *(undefined8 *)(param_1 + (long)_collectionView);

    *(undefined8 *)(param_1 + (long)_collectionView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setDelegate_(*(undefined8 *)(param_1 + (long)_collectionView),local_28,param_1);

    _objc_msgSend_setDataSource_(*(undefined8 *)(param_1 + (long)_collectionView),local_28,param_1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_collectionView));

  return IVar3;

}






// ---- [d4] initWithFrame:collectionViewLayout: @0x8c428 ----
// CALLERS: viewDidLoad, initWithFrame:, _objc_msgSend$initWithFrame:collectionViewLayout:
// CALLEES: initWithFrame:, collection, collectionView


/* Function Stack Size: 0x38 bytes */



ID WCMYBIBCollectionView::initWithFrame_collectionViewLayout_

             (ID param_1,SEL param_2,CGRect param_3,ID param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_70;

  ID local_58;

  class_t *local_50;

  undefined8 local_48;

  SEL local_40;

  ID local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_48 = 0;

  local_40 = param_2;

  local_38 = param_1;

  _objc_storeStrong(&local_48,param_4);

  local_58 = local_38;

  local_38 = 0;

  local_50 = &objc::class_t::WCMYBIBCollectionView;

  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_58,

                                 "initWithFrame:collectionViewLayout:",local_48);

  _objc_storeStrong(&local_38);

  if (local_38 != 0) {

    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_70);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_38,local_70);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_setPagingEnabled_(local_38,local_70,1);

    _objc_msgSend_setShowsHorizontalScrollIndicator_(local_38,local_70,0);

    _objc_msgSend_setShowsVerticalScrollIndicator_(local_38,local_70,0);

    _objc_msgSend_setAlwaysBounceVertical_(local_38,local_70,0);

    _objc_msgSend_setAlwaysBounceHorizontal_(local_38,local_70,0);

    _objc_msgSend_setDecelerationRate_

              (*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_00110128,local_38,local_70);

    _objc_msgSend_setContentInsetAdjustmentBehavior_(local_38,local_70,2);

    _objc_msgSend_set(&_OBJC_CLASS___NSMutableSet,local_70);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = *(undefined8 *)(local_38 + (long)_reuseSet);

    *(undefined8 *)(local_38 + (long)_reuseSet) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_48);

  _objc_storeStrong(&local_38,0);

  return IVar3;

}






// ---- [d4] autoPlayAnimatedImage @0xa0fd8 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, didMoved, initWithCoder:, encodeWithCoder:, setAutoPlayAnimatedImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::autoPlayAnimatedImage(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_autoPlayAnimatedImage) & 1;

}






// ---- [d4] runloopMode @0xa1090 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, setRunloopMode:, initWithCoder:, encodeWithCoder:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYAnimatedImageView::runloopMode(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_runloopMode);

}






// ---- [d4] setClampButtonHidden: @0xc2ab0 ----
// CALLERS: viewDidLoad, setAspectRatioPickerButtonHidden:, _objc_msgSend$setClampButtonHidden:
// CALLEES: clampButton, clampButtonHidden


/* Function Stack Size: 0x14 bytes */



void WCMTOCropToolbar::setClampButtonHidden_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 local_30;

  

  if ((*(byte *)(param_1 + (long)_clampButtonHidden) & 1) != ((byte)param_3 & 1)) {

    *(byte *)(param_1 + (long)_clampButtonHidden) = (byte)param_3 & 1;

    _objc_msgSend_setNeedsLayout(param_1,local_30);

  }

  return;

}






// ---- [d4] clampButtonHidden @0xc5938 ----
// CALLERS: aspectRatioPickerButtonHidden, layoutSubviews, setClampButtonHidden:, _objc_msgSend$clampButtonHidden
// CALLEES: clampButton


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropToolbar::clampButtonHidden(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_clampButtonHidden) & 1;

}






// ---- [d5] originImage @0x6adf4 ----
// CALLERS: imageForKey:type:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage, cuttingImage_, loadData, loadOriginImage, loadOriginImage_compress, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCachePack::originImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d5] loadOriginImage @0x714d4 ----
// CALLERS: loadData, loadOriginImage_compress, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_3, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.9, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.10, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.11
// CALLEES: delegate, originImage, compressedImage, loadOriginImage_compress, loadThumbImage, shouldCompress, delegate, originImage, compressedImage, imageData


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadOriginImage(ID param_1,SEL param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_30;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    _objc_msgSend_originImage(param_1,local_30);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar1 != 0) {

      uVar2 = _objc_msgSend_shouldCompress(param_1,local_30);

      if ((uVar2 & 1) == 0) {

        _objc_msgSend_delegate(param_1,local_30);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_originImage(param_1,local_30);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_wcm_yb_imageData_readyForImage_(uVar3,local_30,param_1);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        (*(code *)PTR__objc_release_00110458)(uVar3);

      }

      else {

        _objc_msgSend_compressedImage(param_1,local_30);

        lVar1 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)();

        if (lVar1 == 0) {

          _objc_msgSend_loadThumbImage(param_1,local_30);

          _objc_msgSend_loadOriginImage_compress(param_1,local_30);

        }

        else {

          _objc_msgSend_delegate(param_1,local_30);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_compressedImage(param_1,local_30);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_wcm_yb_imageData_readyForCompressedImage_(uVar3,local_30,param_1);

          (*(code *)PTR__objc_release_00110458)(uVar4);

          (*(code *)PTR__objc_release_00110458)(uVar3);

        }

      }

    }

  }

  return;

}






// ---- [d5] loadYBImage @0x72bb4 ----
// CALLERS: loadData, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke.15, _objc_msgSend$loadYBImage
// CALLEES: _WCMYBIBImageProcessingQueue, ___Block_byref_object_copy_, ___Block_byref_object_dispose_, loadThumbImage, defaultDecodeDecision, setLoadingStatus:, imageName, imagePath, imageData, shouldPreDecodeAsync


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadYBImage(ID param_1,SEL param_2)



{

  uint uVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  char *pcVar5;

  dispatch_queue_t queue;

  char *pcVar6;

  undefined8 local_150;

  undefined8 local_138;

  undefined *local_110;

  undefined4 local_108;

  undefined4 local_104;

  code *local_100;

  undefined *local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 *local_d0;

  undefined1 auStack_c8 [8];

  long local_c0;

  undefined1 auStack_b8 [8];

  undefined8 local_b0;

  undefined8 *local_a8;

  undefined4 local_a0;

  undefined4 local_9c;

  code *local_98;

  code *local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined4 local_78;

  bool local_71;

  undefined8 local_70;

  byte local_61;

  undefined8 local_60;

  byte local_51;

  long local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    local_30 = param_2;

    local_28 = param_1;

    _objc_msgSend_imageName(param_1,local_138);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_38 = _objc_msgSend_copy(uVar3,local_138);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_imagePath(local_28,local_138);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_40 = _objc_msgSend_copy(uVar3,local_138);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_imageData(local_28,local_138);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    local_51 = 0;

    local_61 = 0;

    local_71 = false;

    if (lVar4 == 0) {

      local_150 = 0;

    }

    else {

      _objc_msgSend_imageData(local_28,local_138);

      local_50 = _objc_retainAutoreleasedReturnValue();

      local_51 = 1;

      (**(code **)(local_50 + 0x10))();

      local_60 = _objc_retainAutoreleasedReturnValue();

      local_61 = 1;

      local_150 = _objc_msgSend_copy(local_60,local_138);

      local_70 = local_150;

    }

    local_71 = lVar4 != 0;

    local_48 = (*(code *)PTR__objc_retain_00110460)(local_150);

    if ((local_71 & 1U) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_70);

    }

    if ((local_61 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_60);

    }

    if ((local_51 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_50);

    }

    (*(code *)PTR__objc_release_00110458)(lVar4);

    lVar4 = _objc_msgSend_length(local_38,local_138);

    if (((lVar4 == 0) && (lVar4 = _objc_msgSend_length(local_40,local_138), lVar4 == 0)) &&

       (lVar4 = _objc_msgSend_length(local_48,local_138), lVar4 == 0)) {

      local_78 = 1;

    }

    else {

      _objc_msgSend_defaultDecodeDecision(local_28,local_138);

      local_80 = _objc_retainAutoreleasedReturnValue();

      local_b0 = 0;

      local_a0 = 0x32000000;

      local_9c = 0x30;

      local_98 = ___Block_byref_object_copy_;

      local_90 = ___Block_byref_object_dispose_;

      local_88 = 0;

      local_a8 = &local_b0;

      _objc_initWeak(auStack_b8,local_28);

      local_110 = PTR___NSConcreteStackBlock_001104f0;

      local_108 = 0xc2000000;

      local_104 = 0;

      local_100 = ___31__WCMYBIBImageData_loadYBImage__block_invoke;

      local_f8 = &___block_descriptor_80_e8_32s40s48s56bs64r72w_e5_v8__0l;

      local_f0 = (*(code *)PTR__objc_retain_00110460)(local_38);

      local_d0 = &local_b0;

      local_d8 = (*(code *)PTR__objc_retain_00110460)(local_80);

      local_e8 = (*(code *)PTR__objc_retain_00110460)(local_40);

      local_e0 = (*(code *)PTR__objc_retain_00110460)(local_48);

      _objc_copyWeak(auStack_c8,auStack_b8);

      local_c0 = _objc_retainBlock(&local_110);

      uVar1 = _objc_msgSend_shouldPreDecodeAsync(local_28,local_138);

      if ((uVar1 & 1) == 0) {

        _objc_msgSend_setLoadingStatus_(local_28,local_138,2);

        (**(code **)(local_c0 + 0x10))();

      }

      else {

        _objc_msgSend_loadThumbImage(local_28,local_138);

        _objc_msgSend_setLoadingStatus_(local_28,local_138,2);

        pcVar5 = _dispatch_queue_get_label((dispatch_queue_t)0x0);

        uVar3 = _WCMYBIBImageProcessingQueue();

        queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(uVar3);

        pcVar6 = _dispatch_queue_get_label(queue);

        iVar2 = _strcmp(pcVar5,pcVar6);

        (*(code *)PTR__objc_release_00110458)(queue);

        if (iVar2 == 0) {

          (**(code **)(local_c0 + 0x10))();

        }

        else {

          uVar3 = _WCMYBIBImageProcessingQueue();

          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

          _dispatch_async(uVar3,local_c0);

          (*(code *)PTR__objc_release_00110458)(uVar3);

        }

      }

      _objc_storeStrong(&local_c0);

      _objc_destroyWeak(auStack_c8);

      _objc_storeStrong(&local_e0,0);

      _objc_storeStrong(&local_e8,0);

      _objc_storeStrong(&local_d8,0);

      _objc_storeStrong(&local_f0,0);

      _objc_destroyWeak(auStack_b8);

      __Block_object_dispose(&local_b0,8);

      _objc_storeStrong(&local_88,0);

      _objc_storeStrong(&local_80,0);

      local_78 = 0;

    }

    _objc_storeStrong(&local_48);

    _objc_storeStrong(&local_40,0);

    _objc_storeStrong(&local_38,0);

  }

  return;

}






// ---- [d5] loadImageBlock @0x7390c ----
// CALLERS: loadData, ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke_2, ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke_3, _objc_msgSend$loadImageBlock
// CALLEES: scale, _WCMYBIBImageProcessingQueue, ___Block_byref_object_copy_, ___Block_byref_object_dispose_, loadThumbImage, shouldCompress, shouldCompressWithImage:, setLoadingStatus:, image, preDecodeDecision


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadImageBlock(ID param_1,SEL param_2)



{

  ID IVar1;

  uint uVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  char *pcVar7;

  dispatch_queue_t queue;

  char *pcVar8;

  undefined8 in_d1;

  uint local_170;

  undefined8 local_118;

  undefined8 local_110;

  undefined *local_100;

  undefined4 local_f8;

  undefined4 local_f4;

  code *local_f0;

  undefined *local_e8;

  undefined8 *local_e0;

  undefined1 auStack_d8 [8];

  byte local_d0;

  long local_c8;

  undefined1 auStack_c0 [8];

  undefined8 local_b8;

  undefined8 local_b0;

  byte local_a1;

  long local_a0;

  byte local_81;

  undefined4 local_80;

  bool local_79;

  undefined8 local_78;

  byte local_69;

  long local_68;

  undefined8 local_60;

  undefined8 *local_58;

  undefined4 local_50;

  undefined4 local_4c;

  code *local_48;

  code *local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    local_58 = &local_60;

    local_60 = 0;

    local_50 = 0x32000000;

    local_4c = 0x30;

    local_48 = ___Block_byref_object_copy_;

    local_40 = ___Block_byref_object_dispose_;

    local_30 = param_2;

    local_28 = param_1;

    _objc_msgSend_image(param_1,local_110);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    local_69 = 0;

    local_79 = false;

    if (lVar4 == 0) {

      local_118 = 0;

    }

    else {

      _objc_msgSend_image(local_28,local_110);

      local_68 = _objc_retainAutoreleasedReturnValue();

      local_69 = 1;

      (**(code **)(local_68 + 0x10))();

      local_118 = _objc_retainAutoreleasedReturnValue();

      local_78 = local_118;

    }

    local_79 = lVar4 != 0;

    local_38 = (*(code *)PTR__objc_retain_00110460)(local_118);

    if ((local_79 & 1U) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_78);

    }

    if ((local_69 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_68);

    }

    (*(code *)PTR__objc_release_00110458)(lVar4);

    if (local_58[5] == 0) {

      local_80 = 1;

    }

    else {

      local_a1 = 0;

      uVar5 = _objc_msgSend_preDecodeDecision(local_28,local_110);

      lVar4 = _objc_retainAutoreleasedReturnValue(uVar5);

      if (lVar4 == 0) {

        local_170 = _objc_msgSend_shouldCompressWithImage_(local_28,local_110,local_58[5]);

        local_170 = local_170 ^ 1;

      }

      else {

        uVar5 = _objc_msgSend_preDecodeDecision(local_28,local_110);

        lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);

        IVar1 = local_28;

        local_a1 = 1;

        local_a0 = lVar6;

        local_b8 = _objc_msgSend_size(local_58[5],local_110);

        local_b0 = in_d1;

        uVar5 = _objc_msgSend_scale(local_58[5],local_110);

        local_170 = (**(code **)(lVar6 + 0x10))(local_b8,local_b0,uVar5,lVar6,IVar1);

      }

      if ((local_a1 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_a0);

      }

      (*(code *)PTR__objc_release_00110458)(lVar4);

      local_81 = local_170 != 0;

      _objc_initWeak(auStack_c0,local_28);

      local_100 = PTR___NSConcreteStackBlock_001104f0;

      local_f8 = 0xc2000000;

      local_f4 = 0;

      local_f0 = ___34__WCMYBIBImageData_loadImageBlock__block_invoke;

      local_e8 = &___block_descriptor_49_e8_32r40w_e5_v8__0l;

      local_e0 = &local_60;

      local_d0 = local_81 & 1;

      _objc_copyWeak(auStack_d8,auStack_c0);

      local_c8 = _objc_retainBlock(&local_100);

      uVar2 = _objc_msgSend_shouldPreDecodeAsync(local_28,local_110);

      if ((uVar2 & 1) == 0) {

        _objc_msgSend_setLoadingStatus_(local_28,local_110,2);

        (**(code **)(local_c8 + 0x10))();

      }

      else {

        _objc_msgSend_loadThumbImage(local_28,local_110);

        _objc_msgSend_setLoadingStatus_(local_28,local_110,2);

        pcVar7 = _dispatch_queue_get_label((dispatch_queue_t)0x0);

        uVar5 = _WCMYBIBImageProcessingQueue();

        queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(uVar5);

        pcVar8 = _dispatch_queue_get_label(queue);

        iVar3 = _strcmp(pcVar7,pcVar8);

        (*(code *)PTR__objc_release_00110458)(queue);

        if (iVar3 == 0) {

          (**(code **)(local_c8 + 0x10))();

        }

        else {

          uVar5 = _WCMYBIBImageProcessingQueue();

          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

          _dispatch_async(uVar5,local_c8);

          (*(code *)PTR__objc_release_00110458)(uVar5);

        }

      }

      _objc_storeStrong(&local_c8,0);

      _objc_destroyWeak(auStack_d8);

      _objc_destroyWeak(auStack_c0);

      local_80 = 0;

    }

    __Block_object_dispose(&local_60,8);

    _objc_storeStrong(&local_38,0);

  }

  return;

}






// ---- [d5] loadURL @0x7421c ----
// CALLERS: loadData, _objc_msgSend$loadURL
// CALLEES: loadURL_queryCache, imageURL


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadURL(ID param_1,SEL param_2)



{

  bool bVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 local_50;

  

  _objc_msgSend_imageURL(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = true;

  if (lVar2 != 0) {

    _objc_msgSend_imageURL(param_1,local_50);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_absoluteString(uVar3,local_50);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar5 = _objc_msgSend_length(uVar4,local_50);

    bVar1 = lVar5 == 0;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  (*(code *)PTR__objc_release_00110458)(lVar2);

  if (!bVar1) {

    _objc_msgSend_loadURL_queryCache(param_1,local_50);

  }

  return;

}






// ---- [d5] loadPHAsset @0x76dd0 ----
// CALLERS: loadData, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_3, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_4, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke.89, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2.90, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_3.91
// CALLEES: _WCMYBIBImageProcessingQueue, defaultDecodeDecision, setLoadingStatus:, imagePHAsset


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadPHAsset(ID param_1,SEL param_2)



{

  int iVar1;

  long lVar2;

  char *pcVar3;

  dispatch_queue_t queue;

  char *pcVar4;

  undefined8 uVar5;

  undefined8 local_a8;

  undefined *local_98;

  undefined4 local_90;

  undefined4 local_8c;

  code *local_88;

  undefined *local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    local_30 = param_2;

    local_28 = param_1;

    _objc_msgSend_imagePHAsset(param_1,local_a8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar2 != 0) {

      _objc_msgSend_defaultDecodeDecision(local_28,local_a8);

      local_38 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setLoadingStatus_(local_28,local_a8,6);

      pcVar3 = _dispatch_queue_get_label((dispatch_queue_t)0x0);

      _WCMYBIBImageProcessingQueue();

      queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue();

      pcVar4 = _dispatch_queue_get_label(queue);

      iVar1 = _strcmp(pcVar3,pcVar4);

      (*(code *)PTR__objc_release_00110458)(queue);

      if (iVar1 == 0) {

        local_68 = PTR___NSConcreteStackBlock_001104f0;

        local_60 = 0xc2000000;

        local_5c = 0;

        local_58 = ___31__WCMYBIBImageData_loadPHAsset__block_invoke;

        local_50 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;

        local_48 = (*(code *)PTR__objc_retain_00110460)(local_28);

        local_40 = (*(code *)PTR__objc_retain_00110460)(local_38);

        (*local_58)(&local_68);

        _objc_storeStrong(&local_40);

        _objc_storeStrong(&local_48,0);

      }

      else {

        _WCMYBIBImageProcessingQueue();

        uVar5 = _objc_retainAutoreleasedReturnValue();

        local_98 = PTR___NSConcreteStackBlock_001104f0;

        local_90 = 0xc2000000;

        local_8c = 0;

        local_88 = ___31__WCMYBIBImageData_loadPHAsset__block_invoke_89;

        local_80 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;

        local_78 = (*(code *)PTR__objc_retain_00110460)(local_28);

        local_70 = (*(code *)PTR__objc_retain_00110460)(local_38);

        _dispatch_async(uVar5,&local_98);

        (*(code *)PTR__objc_release_00110458)(uVar5);

        _objc_storeStrong(&local_70);

        _objc_storeStrong(&local_78,0);

      }

      _objc_storeStrong(&local_38,0);

    }

  }

  return;

}






// ---- [d5] loadThumbImage @0x77b98 ----
// CALLERS: loadData, loadOriginImage, loadYBImage, loadImageBlock, ___34-[WCMYBIBImageData_loadThumbImage]_block_invoke, _objc_msgSend$loadThumbImage
// CALLEES: delegate, webImageMediator, delegate, wcm_yb_webImageMediator, imageData, image, projectiveView, thumbImage, thumbURL, image


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadThumbImage(ID param_1,SEL param_2)



{

  ID IVar1;

  bool bVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  undefined8 local_c8;

  undefined8 local_b8;

  byte local_a9;

  long local_a8;

  byte local_99;

  undefined8 local_98;

  byte local_89;

  undefined8 local_88;

  byte local_79;

  undefined8 local_78;

  undefined *local_70;

  undefined4 local_68;

  undefined4 local_64;

  code *local_60;

  undefined *local_58;

  undefined1 auStack_50 [24];

  undefined1 auStack_38 [8];

  SEL local_30;

  ID local_28;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    local_30 = param_2;

    local_28 = param_1;

    _objc_msgSend_thumbImage(param_1,local_c8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar3 == 0) {

      _objc_msgSend_thumbURL(local_28,local_c8);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 == 0) {

        _objc_msgSend_projectiveView(local_28,local_c8);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        local_79 = 0;

        local_89 = 0;

        local_99 = 0;

        local_a9 = 0;

        bVar2 = false;

        if (lVar3 != 0) {

          _objc_msgSend_projectiveView(local_28,local_c8);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          local_79 = 1;

          local_78 = uVar4;

          _objc_opt_self(&_OBJC_CLASS___UIImageView);

          local_88 = _objc_retainAutoreleasedReturnValue();

          local_89 = 1;

          uVar6 = _objc_opt_isKindOfClass(uVar4);

          bVar2 = false;

          if ((uVar6 & 1) != 0) {

            _objc_msgSend_projectiveView(local_28,local_c8);

            local_98 = _objc_retainAutoreleasedReturnValue();

            local_99 = 1;

            _objc_msgSend_image(local_98,local_c8);

            local_a8 = _objc_retainAutoreleasedReturnValue();

            local_a9 = 1;

            bVar2 = local_a8 != 0;

          }

        }

        if ((local_a9 & 1) != 0) {

          (*(code *)PTR__objc_release_00110458)(local_a8);

        }

        if ((local_99 & 1) != 0) {

          (*(code *)PTR__objc_release_00110458)(local_98);

        }

        if ((local_89 & 1) != 0) {

          (*(code *)PTR__objc_release_00110458)(local_88);

        }

        if ((local_79 & 1) != 0) {

          (*(code *)PTR__objc_release_00110458)(local_78);

        }

        (*(code *)PTR__objc_release_00110458)(lVar3);

        if (bVar2) {

          _objc_msgSend_projectiveView(local_28,local_c8);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_image(uVar4,local_c8);

          local_b8 = _objc_retainAutoreleasedReturnValue();

          (*(code *)PTR__objc_release_00110458)(uVar4);

          _objc_msgSend_delegate(local_28,local_c8);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_wcm_yb_imageData_readyForThumbImage_(uVar4,local_c8,local_28,local_b8);

          (*(code *)PTR__objc_release_00110458)(uVar4);

          _objc_storeStrong(&local_b8,0);

        }

      }

      else {

        _objc_initWeak(auStack_38,local_28);

        uVar4 = _objc_msgSend_wcm_yb_webImageMediator(local_28,local_c8);

        lVar3 = _objc_retainAutoreleasedReturnValue(uVar4);

        uVar4 = (**(code **)(lVar3 + 0x10))();

        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

        uVar5 = _objc_msgSend_thumbURL(local_28,local_c8);

        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

        local_70 = PTR___NSConcreteStackBlock_001104f0;

        local_68 = 0xc2000000;

        local_64 = 0;

        local_60 = ___34__WCMYBIBImageData_loadThumbImage__block_invoke;

        local_58 = &___block_descriptor_40_e8_32w_e28_v24__0__UIImage_8__NSData_16l;

        _objc_copyWeak(auStack_50,auStack_38);

        _objc_msgSend_wcm_yb_queryCacheOperationForKey_completed_(uVar4,local_c8,uVar5,&local_70);

        (*(code *)PTR__objc_release_00110458)(uVar5);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        (*(code *)PTR__objc_release_00110458)(lVar3);

        _objc_destroyWeak(auStack_50);

        _objc_destroyWeak(auStack_38);

      }

    }

    else {

      _objc_msgSend_delegate(local_28,local_c8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      IVar1 = local_28;

      _objc_msgSend_thumbImage(local_28,local_c8);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_wcm_yb_imageData_readyForThumbImage_(uVar4,local_c8,IVar1);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

  }

  return;

}






// ---- [d5] delegate @0x7c1fc ----
// CALLERS: pageNumberChanged, respondsToLongPress:, setTransitioning:isShow:, loadData, loadOriginImage, loadThumbImage, wcm_yb_preload, _WCMYBIBStatusbarHeight
// CALLEES: isHideTransitioning, wcm_yb_isHideTransitioning


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::delegate(ID param_1,SEL param_2)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 local_48;

  undefined8 local_30;

  

  _objc_msgSend_wcm_yb_isHideTransitioning(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = (**(code **)(lVar2 + 0x10))();

  bVar1 = (uVar3 & 1) == 0;

  if (bVar1) {

    local_48 = _objc_loadWeakRetained(param_1 + 0x58);

    local_30 = local_48;

  }

  else {

    local_48 = 0;

  }

  uVar4 = (*(code *)PTR__objc_retain_00110460)(local_48);

  if (bVar1) {

    (*(code *)PTR__objc_release_00110458)(local_30);

  }

  (*(code *)PTR__objc_release_00110458)(lVar2);

  IVar5 = _objc_autoreleaseReturnValue(uVar4);

  return IVar5;

}






// ---- [d5] originImage @0x7c4f0 ----
// CALLERS: imageForKey:type:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage, cuttingImage_, loadData, loadOriginImage, loadOriginImage_compress, cuttingImageToRect:complete:
// CALLEES: imageForKey:type:, imageCache, cacheKey


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::originImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_40;

  

  _objc_msgSend_imageCache(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_cacheKey(param_1,local_40);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageForKey_type_(uVar1,local_40,uVar2,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar4 = _objc_autoreleaseReturnValue(uVar3);

  return IVar4;

}






// ---- [d5] setLoadingStatus: @0x7c708 ----
// CALLERS: loadData, loadOriginImage_compress, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.9, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.11, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.12, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_4
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setLoadingStatus_(ID param_1,SEL param_2,long_long param_3)



{

  undefined *puVar1;

  int iVar2;

  char *pcVar3;

  dispatch_queue_t queue;

  char *pcVar4;

  undefined8 uVar5;

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  long_long local_60;

  undefined *local_58;

  undefined4 local_50;

  undefined4 local_4c;

  code *local_48;

  undefined *local_40;

  undefined8 local_38;

  long_long local_30;

  long_long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  pcVar3 = _dispatch_queue_get_label((dispatch_queue_t)0x0);

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);

  pcVar4 = _dispatch_queue_get_label(queue);

  iVar2 = _strcmp(pcVar3,pcVar4);

  (*(code *)PTR__objc_release_00110458)(queue);

  puVar1 = PTR___dispatch_main_q_00110528;

  if (iVar2 == 0) {

    local_58 = PTR___NSConcreteStackBlock_001104f0;

    local_50 = 0xc2000000;

    local_4c = 0;

    local_48 = ___37__WCMYBIBImageData_setLoadingStatus___block_invoke;

    local_40 = &___block_descriptor_48_e8_32s_e5_v8__0l;

    local_38 = (*(code *)PTR__objc_retain_00110460)(local_18);

    local_30 = local_28;

    (*local_48)(&local_58);

    _objc_storeStrong(&local_38,0);

  }

  else {

    _objc_retainAutoreleaseReturnValue();

    uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);

    local_88 = PTR___NSConcreteStackBlock_001104f0;

    local_80 = 0xc2000000;

    local_7c = 0;

    local_78 = ___37__WCMYBIBImageData_setLoadingStatus___block_invoke_117;

    local_70 = &___block_descriptor_48_e8_32s_e5_v8__0l;

    local_68 = (*(code *)PTR__objc_retain_00110460)(local_18);

    local_60 = local_28;

    _dispatch_async(uVar5,&local_88);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_storeStrong(&local_68,0);

  }

  return;

}






// ---- [d5] imageName @0x7ce0c ----
// CALLERS: imageNamed:, imageNamed:decodeDecision:, loadData, loadYBImage, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], ___26-[WCMYBIBIconManager_init]_block_invoke, ___26-[WCMYBIBIconManager_init]_block_invoke_2
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageName(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x60);

}






// ---- [d5] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d5] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d5] imageURL @0x7cf5c ----
// CALLERS: loadData, loadURL, loadURL_queryCache, loadURL_download, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.80, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.82, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3.83
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageURL(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x80);

}






// ---- [d5] imagePHAsset @0x7cfcc ----
// CALLERS: loadData, loadPHAsset, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke.89, _objc_msgSend$imagePHAsset
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePHAsset(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x90);

}






// ---- [d5] loadingStatus @0x7d57c ----
// CALLERS: loadData, _objc_msgSend$loadingStatus
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBImageData::loadingStatus(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 0x118);

}






// ---- [d5] imageIsInvalid @0x82ecc ----
// CALLERS: wcm_yb_imageIsInvalidForData:, loadData, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke.15, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.80, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.82, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3.83
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::imageIsInvalid(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x28);

}






// ---- [d5] delegate @0xab9a8 ----
// CALLERS: pageNumberChanged, respondsToLongPress:, setTransitioning:isShow:, loadData, loadOriginImage, loadThumbImage, wcm_yb_preload, _WCMYBIBStatusbarHeight
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::delegate(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_delegate);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d5] delegate @0xbb9ac ----
// CALLERS: pageNumberChanged, respondsToLongPress:, setTransitioning:isShow:, loadData, loadOriginImage, loadThumbImage, wcm_yb_preload, _WCMYBIBStatusbarHeight
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::delegate(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_delegate);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d5] wcm_yb_backView @0x707a0 ----
// CALLERS: respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke, setWcm_yb_backView:, .cxx_destruct, imageCache, _objc_msgSend$wcm_yb_backView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_backView(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_wcm_yb_backView);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d5] wcm_yb_backView @0x7cdac ----
// CALLERS: respondsToPan:, imageCache, _objc_msgSend$wcm_yb_backView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_backView(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + 0x50);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d5] horizontalGridLines @0xbe900 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayHorizontalGridLines:, setHorizontalGridLines:, .cxx_destruct, _objc_msgSend$horizontalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::horizontalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_horizontalGridLines);

}






// ---- [d5] verticalGridLines @0xbe960 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayVerticalGridLines:, setVerticalGridLines:, .cxx_destruct, _objc_msgSend$verticalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::verticalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_verticalGridLines);

}






// ---- [d5] topLeftLineViews @0xbea20 ----
// CALLERS: setup, layoutLines, setTopLeftLineViews:, .cxx_destruct, _objc_msgSend$topLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topLeftLineViews);

}






// ---- [d5] bottomLeftLineViews @0xbea80 ----
// CALLERS: setup, layoutLines, setBottomLeftLineViews:, .cxx_destruct, _objc_msgSend$bottomLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomLeftLineViews);

}






// ---- [d5] bottomRightLineViews @0xbeae0 ----
// CALLERS: setup, layoutLines, setBottomRightLineViews:, .cxx_destruct, _objc_msgSend$bottomRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomRightLineViews);

}






// ---- [d5] topRightLineViews @0xbeb40 ----
// CALLERS: setup, layoutLines, setTopRightLineViews:, .cxx_destruct, _objc_msgSend$topRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topRightLineViews);

}






// ---- [d5] hidesNavigationBar @0xabcb0 ----
// CALLERS: viewWillAppear:, viewWillDisappear:, setHidesNavigationBar:, _objc_msgSend$hidesNavigationBar
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::hidesNavigationBar(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_hidesNavigationBar) & 1;

}






// ---- [d5] initWithImage: @0x9d7f4 ----
// CALLERS: init, tableView:cellForRowAtIndexPath:, viewDidLoad, cropHeaderImage:account:, animateTransition:, setup, _objc_msgSend$initWithImage:, _objc_msgSend$initWithImage:cropFrame:angle:circular:
// CALLEES: setImage:, setImage:, setImage:, autoPlayAnimatedImage, runloopMode, setImage:, setImage:, setImage:, size, setImage:


/* Function Stack Size: 0x18 bytes */



ID WCMYYAnimatedImageView::initWithImage_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 in_d1;

  undefined8 local_a8;

  ID local_38;

  class_t *local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_38 = local_18;

  local_18 = 0;

  local_30 = &objc::class_t::WCMYYAnimatedImageView;

  local_18 = _objc_msgSendSuper2(&local_38,"init");

  _objc_storeStrong(&local_18);

  _objc_storeStrong(local_18 + (long)_runloopMode,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0)

  ;

  *(undefined1 *)(local_18 + (long)_autoPlayAnimatedImage) = 1;

  uVar4 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);

  uVar2 = *(undefined8 *)PTR__CGPointZero_00110850;

  uVar3 = _objc_msgSend_size(local_28,local_a8);

  _objc_msgSend_setFrame_(uVar2,uVar4,uVar3,in_d1,local_18,local_a8);

  _objc_msgSend_setImage_(local_18,local_a8,local_28);

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d5] initWithImage: @0xa1520 ----
// CALLERS: init, tableView:cellForRowAtIndexPath:, viewDidLoad, cropHeaderImage:account:, animateTransition:, setup, _objc_msgSend$initWithImage:
// CALLEES: initWithCroppingStyle:image:, initWithCroppingStyle:image:


/* Function Stack Size: 0x18 bytes */



ID WCMTOCropViewController::initWithImage_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithCroppingStyle_image_(IVar1,local_50,0,local_28);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d5] setResetAspectRatioEnabled: @0xab0c8 ----
// CALLERS: setup, _objc_msgSend$setResetAspectRatioEnabled:
// CALLEES: cropView, aspectRatioLockEnabled, setAspectRatioPickerButtonHidden:, aspectRatioPickerButtonHidden, aspectRatio, aspectRatioLockEnabled, setResetAspectRatioEnabled:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropViewController::setResetAspectRatioEnabled_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined4 local_40;

  undefined8 local_30;

  

  _objc_msgSend_cropView(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setResetAspectRatioEnabled_(uVar1,local_30,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  uVar2 = _objc_msgSend_aspectRatioPickerButtonHidden(param_1,local_30);

  if ((uVar2 & 1) == 0) {

    local_40 = 0;

    if ((param_3 & 1) == 0) {

      local_40 = _objc_msgSend_aspectRatioLockEnabled(param_1,local_30);

    }

    _objc_msgSend_setAspectRatioPickerButtonHidden_(param_1,local_30,local_40 & 1);

  }

  return;

}






// ---- [d5] setTouchesBegan: @0xaf4bc ----
// CALLERS: setup, _objc_msgSend$setTouchesBegan:
// CALLEES: touchesBegan


/* Function Stack Size: 0x18 bytes */



void WCMTOCropScrollView::setTouchesBegan_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_touchesBegan);

  return;

}






// ---- [d5] setTouchesCancelled: @0xaf51c ----
// CALLERS: setup, _objc_msgSend$setTouchesCancelled:
// CALLEES: touchesCancelled


/* Function Stack Size: 0x18 bytes */



void WCMTOCropScrollView::setTouchesCancelled_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_touchesCancelled);

  return;

}






// ---- [d5] setTouchesEnded: @0xaf57c ----
// CALLERS: setup, _objc_msgSend$setTouchesEnded:
// CALLEES: touchesEnded


/* Function Stack Size: 0x18 bytes */



void WCMTOCropScrollView::setTouchesEnded_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_touchesEnded);

  return;

}






// ---- [d5] initWithImage: @0xaf628 ----
// CALLERS: init, tableView:cellForRowAtIndexPath:, viewDidLoad, cropHeaderImage:account:, animateTransition:, setup, _objc_msgSend$initWithImage:
// CALLEES: initWithCroppingStyle:image:, initWithCroppingStyle:image:


/* Function Stack Size: 0x18 bytes */



ID WCMTOCropView::initWithImage_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithCroppingStyle_image_(IVar1,local_50,0,local_28);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d5] gridPanGestureRecognized: @0xb4b54 ----
// CALLERS: setup
// CALLEES: updateCropBoxFrameWithGesturePoint:, startResetTimer, cropEdgeForPoint:, startEditing, cropBoxFrame, setTappedEdge:, setCropOriginFrame:, panOriginPoint, setPanOriginPoint:


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::gridPanGestureRecognized_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_b8;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar4 = _objc_msgSend_locationInView_(local_28,local_b8,local_18);

  lVar2 = _objc_msgSend_state(local_28,local_b8);

  if (lVar2 == 1) {

    _objc_msgSend_startEditing(0,local_18,local_b8);

    uVar3 = in_d1;

    _objc_msgSend_setPanOriginPoint_(uVar4,local_18,local_b8);

    uVar5 = _objc_msgSend_cropBoxFrame(local_18,local_b8);

    _objc_msgSend_setCropOriginFrame_(uVar5,uVar3,in_d2,in_d3,local_18,local_b8);

    IVar1 = local_18;

    uVar5 = _objc_msgSend_panOriginPoint(local_18,local_b8);

    uVar3 = _objc_msgSend_cropEdgeForPoint_(uVar5,uVar3,IVar1,local_b8);

    _objc_msgSend_setTappedEdge_(local_18,local_b8,uVar3);

  }

  lVar2 = _objc_msgSend_state(local_28,local_b8);

  if (lVar2 + -3 != 0) {

    lVar2 = _objc_msgSend_state(lVar2 + -3,local_28,local_b8);

    if ((lVar2 + -4 != 0) && (lVar2 = _objc_msgSend_state(lVar2 + -4,local_28,local_b8), lVar2 != 5)

       ) goto LAB_000b4cc0;

  }

  _objc_msgSend_startResetTimer(0,local_18,local_b8);

LAB_000b4cc0:

  _objc_msgSend_updateCropBoxFrameWithGesturePoint_(uVar4,in_d1,local_18,local_b8);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] setCropBoxResizeEnabled: @0xb5c30 ----
// CALLERS: setup, _objc_msgSend$setCropBoxResizeEnabled:
// CALLEES: cropBoxResizeEnabled, gridPanGestureRecognizer


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::setCropBoxResizeEnabled_(ID param_1,SEL param_2,bool param_3)



{

  byte bVar1;

  undefined8 uVar2;

  undefined8 local_40;

  

  *(byte *)(param_1 + (long)_cropBoxResizeEnabled) = (byte)param_3 & 1;

  bVar1 = *(byte *)(param_1 + (long)_cropBoxResizeEnabled);

  _objc_msgSend_gridPanGestureRecognizer(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEnabled_(uVar2,local_40,bVar1 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return;

}






// ---- [d5] setCropBoxFrame: @0xb5cbc ----
// CALLERS: setup, layoutInitialImage, performRelayoutForRotation, updateCropBoxFrameWithGesturePoint:, updateToImageCropFrame:, ___52-[WCMTOCropView_moveCroppedContentToCenterAnimated:]_block_invoke, ___41-[WCMTOCropView_setAspectRatio:animated:]_block_invoke, rotateImageNinetyDegreesAnimated:clockwise:completion:
// CALLEES: croppingStyle, matchForegroundToBackground, updateScrollViewMaximumZoomScale, contentBounds, croppingStyle, gridOverlayView, foregroundContainerView, cropBoxFrame, backgroundContainerView, scrollView


/* WARNING: Removing unreachable block (ram,0x000b5e44) */

/* WARNING: Removing unreachable block (ram,0x000b5e54) */

/* WARNING: Removing unreachable block (ram,0x000b5e58) */

/* WARNING: Removing unreachable block (ram,0x000b5e60) */

/* WARNING: Removing unreachable block (ram,0x000b5dc8) */

/* WARNING: Removing unreachable block (ram,0x000b5dd8) */

/* WARNING: Removing unreachable block (ram,0x000b5ddc) */

/* WARNING: Removing unreachable block (ram,0x000b5de4) */

/* WARNING: Removing unreachable block (ram,0x000b5d74) */

/* WARNING: Removing unreachable block (ram,0x000b5d8c) */

/* WARNING: Removing unreachable block (ram,0x000b5d90) */

/* WARNING: Removing unreachable block (ram,0x000b5d98) */

/* WARNING: Removing unreachable block (ram,0x000b5df0) */

/* WARNING: Removing unreachable block (ram,0x000b5e08) */

/* WARNING: Removing unreachable block (ram,0x000b5e0c) */

/* WARNING: Removing unreachable block (ram,0x000b5e14) */

/* WARNING: Removing unreachable block (ram,0x000b5e64) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x30 bytes */



void WCMTOCropView::setCropBoxFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 *puVar1;

  double *pdVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  double local_3d0;

  double local_360;

  double local_358;

  double local_350;

  double local_348;

  double local_340;

  double local_338;

  undefined8 local_330;

  double local_58;

  double dStack_50;

  

  dStack_50 = param_3.field1_0x10.field1_0x8;

  local_58 = param_3.field1_0x10.field0_0x0;

  local_340 = param_3.field0_0x0.field1_0x8;

  local_338 = param_3.field0_0x0.field0_0x0;

  puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);

  dVar11 = local_58;

  dVar10 = dStack_50;

  uVar3 = _CGRectEqualToRect(local_338,local_340,local_58,dStack_50,*puVar1,puVar1[1],puVar1[2],

                             puVar1[3]);

  if ((((uVar3 & 1) == 0) && (1.1920928955078125e-07 <= local_58)) &&

     (1.1920928955078125e-07 <= dStack_50)) {

    dVar12 = dStack_50;

    dVar7 = (double)_objc_msgSend_contentBounds(param_1,local_330);

    dVar8 = (double)(float)(int)dVar7;

    dVar9 = local_338 - dVar8;

    if (local_338 < dVar8) {

      local_338 = dVar8;

    }

    if (dVar9 < -1.1920928955078125e-07) {

      local_58 = local_58 + dVar9;

    }

    dVar8 = (double)(float)(int)dVar12;

    dVar9 = local_340 - dVar8;

    if (local_340 < dVar8) {

      local_340 = dVar8;

    }

    if (dVar9 < -1.1920928955078125e-07) {

      dStack_50 = dStack_50 + dVar9;

    }

    local_348 = (dVar11 + dVar7) - (double)(float)(int)local_338;

    if (local_58 < local_348) {

      local_348 = local_58;

    }

    local_358 = (double)(float)(int)local_348;

    local_350 = (dVar10 + dVar12) - (double)(float)(int)local_340;

    if (dStack_50 < local_350) {

      local_350 = dStack_50;

    }

    local_360 = (double)(float)(int)local_350;

    if (local_358 < 42.0) {

      local_358 = 42.0;

    }

    if (local_360 < 42.0) {

      local_360 = 42.0;

    }

    pdVar2 = (double *)(param_1 + (long)_cropBoxFrame);

    pdVar2[1] = (double)(float)(int)local_340;

    *pdVar2 = (double)(float)(int)local_338;

    pdVar2[3] = local_360;

    pdVar2[2] = local_358;

    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);

    uVar14 = puVar1[1];

    uVar6 = *puVar1;

    uVar15 = puVar1[3];

    uVar13 = puVar1[2];

    _objc_msgSend_foregroundContainerView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(uVar6,uVar14,uVar13,uVar15,uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    uVar6 = *(undefined8 *)(param_1 + (long)_cropBoxFrame);

    dVar11 = (double)((undefined8 *)(param_1 + (long)_cropBoxFrame))[2];

    _objc_msgSend_gridOverlayView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(uVar6,uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    lVar5 = _objc_msgSend_croppingStyle(param_1,local_330);

    if (lVar5 == 1) {

      _objc_msgSend_foregroundContainerView(0,param_1,local_330);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_frame(uVar4,local_330);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      _objc_msgSend_foregroundContainerView(param_1,local_330);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_layer(uVar4,local_330);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setCornerRadius_(dVar11 * 0.5,uVar6,local_330);

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);

    uVar6 = _CGRectGetMinY(*puVar1,puVar1[1],puVar1[2],puVar1[3]);

    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);

    uVar13 = puVar1[1];

    uVar14 = puVar1[2];

    uVar15 = puVar1[3];

    _CGRectGetMinX(*puVar1);

    uVar4 = _objc_msgSend_bounds(param_1,local_330);

    dVar10 = (double)_CGRectGetMaxY(uVar4,uVar13,uVar14,uVar15);

    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);

    uVar13 = puVar1[2];

    uVar14 = puVar1[3];

    dVar11 = (double)_CGRectGetMaxY(*puVar1,puVar1[1]);

    dVar10 = dVar10 - dVar11;

    uVar4 = _objc_msgSend_bounds(param_1,local_330);

    local_3d0 = (double)_CGRectGetMaxX(uVar4,dVar11,uVar13,uVar14);

    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);

    dVar11 = (double)_CGRectGetMaxX(*puVar1,puVar1[1],puVar1[2],puVar1[3]);

    local_3d0 = local_3d0 - dVar11;

    _objc_msgSend_scrollView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setContentInset_(uVar6,uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_backgroundContainerView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_bounds(uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    local_3d0 = local_360 / local_3d0;

    local_358 = local_358 / dVar10;

    if (local_3d0 < local_358) {

      local_3d0 = local_358;

    }

    _objc_msgSend_scrollView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setMinimumZoomScale_(local_3d0,uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_updateScrollViewMaximumZoomScale(param_1,local_330);

    _objc_msgSend_scrollView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    dVar11 = (double)_objc_msgSend_contentSize(uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_scrollView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setContentSize_

              ((double)(float)(int)dVar11,(double)(float)(int)local_358,uVar4,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_scrollView(param_1,local_330);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar13 = _objc_msgSend_zoomScale(uVar4,local_330);

    _objc_msgSend_scrollView(param_1,local_330);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setZoomScale_(uVar13,uVar6,local_330);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_msgSend_matchForegroundToBackground(param_1,local_330);

  }

  return;

}






// ---- [d5] setEditing: @0xb66c0 ----
// CALLERS: setup, setSimpleRenderMode:animated:, _objc_msgSend$setEditing:, _objc_msgSend$setEditing:resetCropBox:animated:
// CALLEES: setEditing:resetCropBox:animated:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::setEditing_(ID param_1,SEL param_2,bool param_3)



{

  _objc_msgSend_setEditing_resetCropBox_animated_(param_1,param_2,param_3 & 1,0,0);

  return;

}






// ---- [d5] setAspectRatio: @0xb8a68 ----
// CALLERS: setup, _objc_msgSend$setAspectRatio:, _objc_msgSend$setAspectRatio:animated:
// CALLEES: setAspectRatio:animated:


/* Function Stack Size: 0x20 bytes */



void __thiscall

WCMTOCropView::setAspectRatio_(WCMTOCropView *this,ID param_1,SEL param_2,CGSize param_3)



{

  _objc_msgSend_setAspectRatio_animated_(param_3.field0_0x0,param_3.field1_0x8,this,param_1,0);

  return;

}






// ---- [d5] overlayView @0xbb88c ----
// CALLERS: setup, setOverlayView:, .cxx_destruct, _objc_msgSend$overlayView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::overlayView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_overlayView);

}






// ---- [d5] setOverlayView: @0xbb8b0 ----
// CALLERS: setup, _objc_msgSend$setOverlayView:
// CALLEES: overlayView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setOverlayView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_overlayView,param_3);

  return;

}






// ---- [d5] gridOverlayView @0xbb8ec ----
// CALLERS: setup, longPressGestureRecognized:, gestureRecognizerShouldBegin:, setCropBoxFrame:, setCroppingViewsHidden:animated:, ___49-[WCMTOCropView_setCroppingViewsHidden:animated:]_block_invoke, setAlwaysShowCroppingGrid:, setGridOverlayHidden:animated:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::gridOverlayView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_gridOverlayView);

}






// ---- [d5] setGridOverlayView: @0xbb910 ----
// CALLERS: setup, _objc_msgSend$setGridOverlayView:
// CALLEES: gridOverlayView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setGridOverlayView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_gridOverlayView,param_3);

  return;

}






// ---- [d5] foregroundContainerView @0xbb94c ----
// CALLERS: setup, matchForegroundToBackground, setCropBoxFrame:, setCroppingViewsHidden:animated:, rotateImageNinetyDegreesAnimated:clockwise:completion:, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_2, setForegroundContainerView:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::foregroundContainerView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_foregroundContainerView);

}






// ---- [d5] setForegroundContainerView: @0xbb970 ----
// CALLERS: setup, _objc_msgSend$setForegroundContainerView:
// CALLEES: foregroundContainerView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setForegroundContainerView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_foregroundContainerView,param_3);

  return;

}






// ---- [d5] setResetAspectRatioEnabled: @0xbbcdc ----
// CALLERS: setResetAspectRatioEnabled:, setup, _objc_msgSend$setResetAspectRatioEnabled:
// CALLEES: resetAspectRatioEnabled


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::setResetAspectRatioEnabled_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_resetAspectRatioEnabled) = (byte)param_3 & 1;

  return;

}






// ---- [d5] setCropViewPadding: @0xbbdac ----
// CALLERS: setup, _objc_msgSend$setCropViewPadding:
// CALLEES: cropView, cropViewPadding


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setCropViewPadding_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_cropViewPadding) = param_3;

  return;

}






// ---- [d5] setCropAdjustingDelay: @0xbbdfc ----
// CALLERS: setup, _objc_msgSend$setCropAdjustingDelay:
// CALLEES: cropAdjustingDelay


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setCropAdjustingDelay_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_cropAdjustingDelay) = param_3;

  return;

}






// ---- [d5] translucencyAlwaysHidden @0xbbef4 ----
// CALLERS: setup, setTranslucencyAlwaysHidden:, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_2, _objc_msgSend$translucencyAlwaysHidden
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::translucencyAlwaysHidden(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_translucencyAlwaysHidden) & 1;

}






// ---- [d5] backgroundImageView @0xbbf20 ----
// CALLERS: setup, resetLayoutToDefaultAnimated:, setCroppingViewsHidden:animated:, setBackgroundImageViewHidden:animated:, ___55-[WCMTOCropView_setBackgroundImageViewHidden:animated:]_block_invoke, ___55-[WCMTOCropView_setBackgroundImageViewHidden:animated:]_block_invoke.17, rotateImageNinetyDegreesAnimated:clockwise:completion:, setBackgroundImageView:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::backgroundImageView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_backgroundImageView);

}






// ---- [d5] setBackgroundImageView: @0xbbf44 ----
// CALLERS: setup, _objc_msgSend$setBackgroundImageView:
// CALLEES: backgroundImageView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setBackgroundImageView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_backgroundImageView,param_3);

  return;

}






// ---- [d5] backgroundContainerView @0xbbf80 ----
// CALLERS: setup, matchForegroundToBackground, resetLayoutToDefaultAnimated:, viewForZoomingInScrollView:, setCropBoxFrame:, rotateImageNinetyDegreesAnimated:clockwise:completion:, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_2, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_3
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::backgroundContainerView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_backgroundContainerView);

}






// ---- [d5] setBackgroundContainerView: @0xbbfa4 ----
// CALLERS: setup, _objc_msgSend$setBackgroundContainerView:
// CALLEES: backgroundContainerView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setBackgroundContainerView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_backgroundContainerView,param_3);

  return;

}






// ---- [d5] foregroundImageView @0xbbfe0 ----
// CALLERS: setup, matchForegroundToBackground, resetLayoutToDefaultAnimated:, rotateImageNinetyDegreesAnimated:clockwise:completion:, setForegroundImageView:, .cxx_destruct, _objc_msgSend$foregroundImageView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::foregroundImageView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_foregroundImageView);

}






// ---- [d5] setForegroundImageView: @0xbc004 ----
// CALLERS: setup, _objc_msgSend$setForegroundImageView:
// CALLEES: foregroundImageView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setForegroundImageView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_foregroundImageView,param_3);

  return;

}






// ---- [d5] scrollView @0xbc040 ----
// CALLERS: scrollViewWillBeginDragging:, scrollViewDidEndDecelerating:, scrollViewDidEndDragging:willDecelerate:, isFeedScrolling, viewDidLoad, refreshPan:, dealloc, scrollViewDidScroll:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::scrollView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_scrollView);

}






// ---- [d5] setScrollView: @0xbc064 ----
// CALLERS: setup, _objc_msgSend$setScrollView:
// CALLEES: scrollView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setScrollView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_scrollView,param_3);

  return;

}






// ---- [d5] translucencyView @0xbc0a0 ----
// CALLERS: setup, toggleTranslucencyViewVisible:, setTranslucencyAlwaysHidden:, rotateImageNinetyDegreesAnimated:clockwise:completion:, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_2, setTranslucencyView:, .cxx_destruct, _objc_msgSend$translucencyView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::translucencyView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_translucencyView);

}






// ---- [d5] setTranslucencyView: @0xbc0c4 ----
// CALLERS: setup, _objc_msgSend$setTranslucencyView:
// CALLEES: translucencyView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setTranslucencyView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_translucencyView,param_3);

  return;

}






// ---- [d5] translucencyEffect @0xbc100 ----
// CALLERS: setup, toggleTranslucencyViewVisible:, setTranslucencyEffect:, .cxx_destruct, _objc_msgSend$translucencyEffect
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::translucencyEffect(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_translucencyEffect);

}






// ---- [d5] setTranslucencyEffect: @0xbc124 ----
// CALLERS: setup, _objc_msgSend$setTranslucencyEffect:
// CALLEES: translucencyEffect


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setTranslucencyEffect_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_translucencyEffect,param_3);

  return;

}






// ---- [d5] gridPanGestureRecognizer @0xbc160 ----
// CALLERS: setup, gestureRecognizerShouldBegin:, gestureRecognizer:shouldReceiveTouch:, setCropBoxResizeEnabled:, setGridPanGestureRecognizer:, .cxx_destruct, _objc_msgSend$gridPanGestureRecognizer
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::gridPanGestureRecognizer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_gridPanGestureRecognizer);

}






// ---- [d5] setGridPanGestureRecognizer: @0xbc184 ----
// CALLERS: setup, _objc_msgSend$setGridPanGestureRecognizer:
// CALLEES: gridPanGestureRecognizer


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setGridPanGestureRecognizer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_gridPanGestureRecognizer,param_3);

  return;

}






// ---- [d5] setApplyInitialCroppedImageFrame: @0xbc1ec ----
// CALLERS: setup, _objc_msgSend$setApplyInitialCroppedImageFrame:
// CALLEES: applyInitialCroppedImageFrame


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::setApplyInitialCroppedImageFrame_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_applyInitialCroppedImageFrame) = (byte)param_3 & 1;

  return;

}






// ---- [d5] setRestoreAngle: @0xbc8b4 ----
// CALLERS: setup, performInitialSetup, setAngle:, _objc_msgSend$setRestoreAngle:
// CALLEES: restoreAngle


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setRestoreAngle_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_restoreAngle) = param_3;

  return;

}






// ---- [d5] setRestoreImageCropFrame: @0xbc924 ----
// CALLERS: setup, performInitialSetup, setImageCropFrame:, _objc_msgSend$setRestoreImageCropFrame:
// CALLEES: restoreImageCropFrame


/* Function Stack Size: 0x30 bytes */



void WCMTOCropView::setRestoreImageCropFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  double *pdVar1;

  

  pdVar1 = (double *)(param_1 + (long)_restoreImageCropFrame);

  pdVar1[1] = param_3.field0_0x0.field1_0x8;

  *pdVar1 = param_3.field0_0x0.field0_0x0;

  pdVar1[3] = param_3.field1_0x10.field1_0x8;

  pdVar1[2] = param_3.field1_0x10.field0_0x0;

  return;

}






// ---- [d5] setGridHidden: @0xbe770 ----
// CALLERS: setup, _objc_msgSend$setGridHidden:, _objc_msgSend$setGridHidden:animated:
// CALLEES: setGridHidden:animated:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropOverlayView::setGridHidden_(ID param_1,SEL param_2,bool param_3)



{

  _objc_msgSend_setGridHidden_animated_(param_1,param_2,param_3 & 1,0);

  return;

}






// ---- [d5] setDisplayHorizontalGridLines: @0xbe310 ----
// CALLERS: setup, _objc_msgSend$setDisplayHorizontalGridLines:
// CALLEES: layoutLines, setGridHidden:animated:, createNewLineView, gridHidden, displayHorizontalGridLines, horizontalGridLines, setHorizontalGridLines:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropOverlayView::setDisplayHorizontalGridLines_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_58;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  *(byte *)(param_1 + (long)_displayHorizontalGridLines) = (byte)param_3 & 1;

  _objc_msgSend_horizontalGridLines(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_enumerateObjectsUsingBlock_(uVar1,local_58,&___block_literal_global);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if ((*(byte *)(param_1 + (long)_displayHorizontalGridLines) & 1) == 0) {

    _objc_msgSend_setHorizontalGridLines_(param_1,local_58,PTR____NSArray0__struct_00110718);

  }

  else {

    _objc_msgSend_createNewLineView(param_1,local_58);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_28 = uVar1;

    _objc_msgSend_createNewLineView(param_1,local_58);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_20 = uVar2;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_28,2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setHorizontalGridLines_(param_1,local_58);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  _objc_msgSend_setGridHidden_animated_

            (param_1,local_58,*(byte *)(param_1 + (long)_gridHidden) & 1,0);

  _objc_msgSend_layoutLines(param_1,local_58);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- [d5] setDisplayVerticalGridLines: @0xbe540 ----
// CALLERS: setup, _objc_msgSend$setDisplayVerticalGridLines:
// CALLEES: layoutLines, setGridHidden:animated:, createNewLineView, gridHidden, displayVerticalGridLines, verticalGridLines, setVerticalGridLines:


/* Function Stack Size: 0x14 bytes */



void WCMTOCropOverlayView::setDisplayVerticalGridLines_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_58;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  *(byte *)(param_1 + (long)_displayVerticalGridLines) = (byte)param_3 & 1;

  _objc_msgSend_verticalGridLines(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_enumerateObjectsUsingBlock_(uVar1,local_58,&___block_literal_global_8);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if ((*(byte *)(param_1 + (long)_displayVerticalGridLines) & 1) == 0) {

    _objc_msgSend_setVerticalGridLines_(param_1,local_58,PTR____NSArray0__struct_00110718);

  }

  else {

    _objc_msgSend_createNewLineView(param_1,local_58);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_28 = uVar1;

    _objc_msgSend_createNewLineView(param_1,local_58);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_20 = uVar2;

    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_58,&local_28,2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setVerticalGridLines_(param_1,local_58);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  _objc_msgSend_setGridHidden_animated_

            (param_1,local_58,*(byte *)(param_1 + (long)_gridHidden) & 1,0);

  _objc_msgSend_layoutLines(param_1,local_58);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return;

}






// ---- [d5] _WCMTOCropViewUsesGlassDesign @0xa3594 ----
// CALLERS: frameForToolbarWithVerticalLayout:, frameForCropViewWithVerticalLayout:, adjustCropViewInsets, setup, layoutSubviews, layoutToolbarButtons:withSameButtonSize:inContainerRect:horizontally:
// CALLEES: ___isPlatformVersionAtLeast


bool _WCMTOCropViewUsesGlassDesign(void)



{

  int iVar1;

  

  iVar1 = ___isPlatformVersionAtLeast(2,0x1a,0);

  return iVar1 != 0;

}






// ---- [d5] showOnlyIcons @0xaa124 ----
// CALLERS: setup, layoutSubviews, setShowOnlyIcons:, _objc_msgSend$showOnlyIcons
// CALLEES: toolbar, showOnlyIcons


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::showOnlyIcons(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  _objc_msgSend_toolbar(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = _objc_msgSend_showOnlyIcons(uVar2,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return bVar1;

}






// ---- [d5] setDoneButtonColor: @0xaa180 ----
// CALLERS: setup, _objc_msgSend$setDoneButtonColor:
// CALLEES: toolbar, setDoneButtonColor:


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setDoneButtonColor_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar1 = local_28;

  _objc_msgSend_toolbar(local_18,local_50);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDoneButtonColor_(uVar2,local_50,uVar1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] reverseContentLayout @0xab008 ----
// CALLERS: setup, layoutSubviews, setReverseContentLayout:, _objc_msgSend$reverseContentLayout
// CALLEES: toolbar, reverseContentLayout


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::reverseContentLayout(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  _objc_msgSend_toolbar(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = _objc_msgSend_reverseContentLayout(uVar2,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return bVar1;

}






// ---- [d5] buttonTapped: @0xc2298 ----
// CALLERS: setup
// CALLEES: cancelText, cancelButtonTapped, doneButtonTapped, doneTextButton, doneIconButton, cancelTextButton, cancelIconButton, rotateCounterclockwiseButton, resetButton, clampButton


/* Function Stack Size: 0x18 bytes */



void WCMTOCropToolbar::buttonTapped_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 local_b8;

  long local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  lVar3 = local_38;

  _objc_msgSend_cancelTextButton(local_28,local_b8);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar4 = local_38;

  bVar1 = true;

  if (lVar3 != lVar2) {

    _objc_msgSend_cancelIconButton(local_28,local_b8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    bVar1 = lVar4 == lVar3;

    (*(code *)PTR__objc_release_00110458)(lVar3);

  }

  (*(code *)PTR__objc_release_00110458)(lVar2);

  lVar3 = local_38;

  if (bVar1) {

    _objc_msgSend_cancelButtonTapped(local_28,local_b8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar3 != 0) {

      _objc_msgSend_cancelButtonTapped(local_28,local_b8);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar3 + 0x10))();

      (*(code *)PTR__objc_release_00110458)(lVar3);

    }

  }

  else {

    _objc_msgSend_doneTextButton(local_28,local_b8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    lVar4 = local_38;

    bVar1 = true;

    if (lVar3 != lVar2) {

      _objc_msgSend_doneIconButton(local_28,local_b8);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      bVar1 = lVar4 == lVar3;

      (*(code *)PTR__objc_release_00110458)(lVar3);

    }

    (*(code *)PTR__objc_release_00110458)(lVar2);

    lVar3 = local_38;

    if (bVar1) {

      _objc_msgSend_doneButtonTapped(local_28,local_b8);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        _objc_msgSend_doneButtonTapped(local_28,local_b8);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        (**(code **)(lVar3 + 0x10))();

        (*(code *)PTR__objc_release_00110458)(lVar3);

      }

    }

    else {

      _objc_msgSend_resetButton(local_28,local_b8);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      bVar1 = false;

      if (lVar3 == lVar4) {

        _objc_msgSend_resetButtonTapped(local_28,local_b8);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        bVar1 = lVar3 != 0;

        (*(code *)PTR__objc_release_00110458)(lVar3);

      }

      (*(code *)PTR__objc_release_00110458)(lVar4);

      lVar3 = local_38;

      if (bVar1) {

        _objc_msgSend_resetButtonTapped(local_28,local_b8);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        (**(code **)(lVar3 + 0x10))();

        (*(code *)PTR__objc_release_00110458)(lVar3);

      }

      else {

        _objc_msgSend_rotateCounterclockwiseButton(local_28,local_b8);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        bVar1 = false;

        if (lVar3 == lVar4) {

          _objc_msgSend_rotateCounterclockwiseButtonTapped(local_28,local_b8);

          lVar3 = _objc_retainAutoreleasedReturnValue();

          bVar1 = lVar3 != 0;

          (*(code *)PTR__objc_release_00110458)(lVar3);

        }

        (*(code *)PTR__objc_release_00110458)(lVar4);

        lVar3 = local_38;

        if (bVar1) {

          _objc_msgSend_rotateCounterclockwiseButtonTapped(local_28,local_b8);

          lVar3 = _objc_retainAutoreleasedReturnValue();

          (**(code **)(lVar3 + 0x10))();

          (*(code *)PTR__objc_release_00110458)(lVar3);

        }

        else {

          _objc_msgSend_rotateClockwiseButton(local_28,local_b8);

          lVar4 = _objc_retainAutoreleasedReturnValue();

          bVar1 = false;

          if (lVar3 == lVar4) {

            _objc_msgSend_rotateClockwiseButtonTapped(local_28,local_b8);

            lVar3 = _objc_retainAutoreleasedReturnValue();

            bVar1 = lVar3 != 0;

            (*(code *)PTR__objc_release_00110458)(lVar3);

          }

          (*(code *)PTR__objc_release_00110458)(lVar4);

          lVar3 = local_38;

          if (bVar1) {

            _objc_msgSend_rotateClockwiseButtonTapped(local_28,local_b8);

            lVar3 = _objc_retainAutoreleasedReturnValue();

            (**(code **)(lVar3 + 0x10))();

            (*(code *)PTR__objc_release_00110458)(lVar3);

          }

          else {

            _objc_msgSend_clampButton(local_28,local_b8);

            lVar4 = _objc_retainAutoreleasedReturnValue();

            bVar1 = false;

            if (lVar3 == lVar4) {

              _objc_msgSend_clampButtonTapped(local_28,local_b8);

              lVar3 = _objc_retainAutoreleasedReturnValue();

              bVar1 = lVar3 != 0;

              (*(code *)PTR__objc_release_00110458)(lVar3);

            }

            (*(code *)PTR__objc_release_00110458)(lVar4);

            if (bVar1) {

              _objc_msgSend_clampButtonTapped(local_28,local_b8);

              lVar3 = _objc_retainAutoreleasedReturnValue();

              (**(code **)(lVar3 + 0x10))();

              (*(code *)PTR__objc_release_00110458)(lVar3);

            }

          }

        }

      }

    }

  }

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d5] setDoneButtonColor: @0xc32c0 ----
// CALLERS: setDoneButtonColor:, setup, _objc_msgSend$setDoneButtonColor:
// CALLEES: doneButtonColor, doneTextButton, doneIconButton


/* Function Stack Size: 0x18 bytes */



void WCMTOCropToolbar::setDoneButtonColor_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_38;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  if (local_28 == 0) {

    _objc_msgSend_colorWithRed_green_blue_alpha_

              (0x3ff0000000000000,0x3fe99999a0000000,0,&_OBJC_CLASS___UIColor,local_38);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    lVar1 = local_28;

    local_28 = lVar2;

    (*(code *)PTR__objc_release_00110458)(lVar1);

  }

  if (local_28 != *(long *)(local_18 + (long)_doneButtonColor)) {

    _objc_storeStrong(local_18 + (long)_doneButtonColor,local_28);

    _objc_msgSend_setTitleColor_forState_

              (*(undefined8 *)(local_18 + (long)_doneTextButton),local_38,

               *(undefined8 *)(local_18 + (long)_doneButtonColor),0);

    _objc_msgSend_setTintColor_

              (*(undefined8 *)(local_18 + (long)_doneIconButton),local_38,

               *(undefined8 *)(local_18 + (long)_doneButtonColor));

    _objc_msgSend_sizeToFit(*(undefined8 *)(local_18 + (long)_doneTextButton),local_38);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] doneImage @0xc3414 ----
// CALLERS: setup, ___29+[WCMTOCropToolbar_doneImage]_block_invoke, _objc_msgSend$doneImage
// CALLEES: (叶)


/* WARNING: Removing unreachable block (ram,0x000c349c) */

/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::doneImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_60;

  

  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_60,6);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_(&_OBJC_CLASS___UIImage,local_60,&cf_checkmark);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d5] cancelImage @0xc36a4 ----
// CALLERS: setup, ___31+[WCMTOCropToolbar_cancelImage]_block_invoke, _objc_msgSend$cancelImage
// CALLEES: (叶)


/* WARNING: Removing unreachable block (ram,0x000c372c) */

/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::cancelImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_60;

  

  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_60,6);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_(&_OBJC_CLASS___UIImage,local_60,&cf_xmark);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d5] rotateCCWImage @0xc39f8 ----
// CALLERS: setup, ___34+[WCMTOCropToolbar_rotateCCWImage]_block_invoke, _objc_msgSend$rotateCCWImage
// CALLEES: (叶)


/* WARNING: Removing unreachable block (ram,0x000c3aa8) */

/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::rotateCCWImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_60;

  

  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_60,6);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_

            (&_OBJC_CLASS___UIImage,local_60,&cf_rotate_left_fill);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageWithBaselineOffsetFromBottom_(0x4010000000000000,uVar2,local_60);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar4 = _objc_autoreleaseReturnValue(uVar3);

  return IVar4;

}






// ---- [d5] rotateCWImage @0xc3ed8 ----
// CALLERS: setup, ___33+[WCMTOCropToolbar_rotateCWImage]_block_invoke, _objc_msgSend$rotateCWImage
// CALLEES: (叶)


/* WARNING: Removing unreachable block (ram,0x000c3f88) */

/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::rotateCWImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_90;

  

  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_90,6);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_

            (&_OBJC_CLASS___UIImage,local_90,&cf_rotate_right_fill);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageWithBaselineOffsetFromBottom_(0x4010000000000000,uVar2,local_90);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar4 = _objc_autoreleaseReturnValue(uVar3);

  return IVar4;

}






// ---- [d5] resetImage @0xc4234 ----
// CALLERS: setup, ___30+[WCMTOCropToolbar_resetImage]_block_invoke, _objc_msgSend$resetImage
// CALLEES: (叶)


/* WARNING: Removing unreachable block (ram,0x000c42e4) */

/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::resetImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_60;

  

  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_60,6);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_

            (&_OBJC_CLASS___UIImage,local_60,&cf_arrow_counterclockwise);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageWithBaselineOffsetFromBottom_(0,uVar2,local_60);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar4 = _objc_autoreleaseReturnValue(uVar3);

  return IVar4;

}






// ---- [d5] clampImage @0xc4b1c ----
// CALLERS: setup, ___30+[WCMTOCropToolbar_clampImage]_block_invoke, _objc_msgSend$clampImage
// CALLEES: (叶)


/* WARNING: Removing unreachable block (ram,0x000c4bcc) */

/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::clampImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_60;

  

  _objc_msgSend_configurationWithWeight_(&_OBJC_CLASS___UIImageSymbolConfiguration,local_60,6);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_systemImageNamed_withConfiguration_

            (&_OBJC_CLASS___UIImage,local_60,&cf_aspectratio_fill);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageWithBaselineOffsetFromBottom_(0,uVar2,local_60);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar4 = _objc_autoreleaseReturnValue(uVar3);

  return IVar4;

}






// ---- [d5] doneTextButton @0xc5320 ----
// CALLERS: setDoneButtonsEnabled:, doneButtonTitle, setup, layoutSubviews, buttonTapped:, doneButtonFrame, setShowOnlyIcons:, setDoneTextButtonTitle:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::doneTextButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_doneTextButton);

}






// ---- [d5] doneIconButton @0xc5380 ----
// CALLERS: setDoneButtonsEnabled:, setup, layoutSubviews, buttonTapped:, doneButtonFrame, setShowOnlyIcons:, setDoneButtonColor:, setDoneIconButton:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::doneIconButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_doneIconButton);

}






// ---- [d5] doneTextButtonTitle @0xc53e0 ----
// CALLERS: doneButtonTitle, setup, setDoneTextButtonTitle:, .cxx_destruct, _objc_msgSend$doneTextButtonTitle
// CALLEES: doneTextButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::doneTextButtonTitle(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_doneTextButtonTitle);

}






// ---- [d5] cancelTextButton @0xc5428 ----
// CALLERS: cancelButtonTitle, setup, layoutSubviews, buttonTapped:, setShowOnlyIcons:, setCancelTextButtonTitle:, setCancelButtonColor:, visibleCancelButton
// CALLEES: cancelText


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::cancelTextButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cancelTextButton);

}






// ---- [d5] cancelIconButton @0xc5488 ----
// CALLERS: setup, layoutSubviews, buttonTapped:, setShowOnlyIcons:, setCancelButtonColor:, visibleCancelButton, setCancelIconButton:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::cancelIconButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cancelIconButton);

}






// ---- [d5] cancelTextButtonTitle @0xc54e8 ----
// CALLERS: cancelButtonTitle, setup, setCancelTextButtonTitle:, .cxx_destruct, _objc_msgSend$cancelTextButtonTitle
// CALLEES: cancelText, cancelTextButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::cancelTextButtonTitle(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cancelTextButtonTitle);

}






// ---- [d5] rotateCounterclockwiseButton @0xc555c ----
// CALLERS: rotateButtonsHidden, setup, layoutSubviews, buttonTapped:, setRotateCounterclockwiseButtonHidden:, rotateButton, setDisableRotationButtons:, rotateCounterclockwiseButtonTapped
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::rotateCounterclockwiseButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_rotateCounterclockwiseButton);

}






// ---- [d5] resetButton @0xc5580 ----
// CALLERS: resetButtonHidden, setup, layoutSubviews, buttonTapped:, resetButtonEnabled, setResetButtonEnabled:, setResetButtonHidden:, setResetButton:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::resetButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_resetButton);

}






// ---- [d5] rotateClockwiseButton @0xc5640 ----
// CALLERS: viewDidLoad, rotateButtonsHidden, rotateClockwiseButtonHidden, setup, layoutSubviews, buttonTapped:, setRotateClockwiseButtonHidden:, setDisableRotationButtons:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::rotateClockwiseButton(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_rotateClockwiseButton);

}






// ---- [d5] backgroundView @0xc5a6c ----
// CALLERS: _StyleMessageCell, setup, layoutSubviews, backgroundViewOutsets, setBackgroundViewOutsets:, setBackgroundView:, .cxx_destruct, _objc_msgSend$backgroundView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::backgroundView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_backgroundView);

}






// ---- [d5] setBackgroundView: @0xc5a90 ----
// CALLERS: changeCategory, _StyleMessageCell, reloadComments, setup, _objc_msgSend$setBackgroundView:
// CALLEES: backgroundView


/* Function Stack Size: 0x18 bytes */



void WCMTOCropToolbar::setBackgroundView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_backgroundView,param_3);

  return;

}






// ---- [d5] glassView @0xc5acc ----
// CALLERS: setup, layoutToolbarButtons:withSameButtonSize:inContainerRect:horizontally:, setGlassView:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::glassView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_glassView);

}






// ---- [d5] ___isPlatformVersionAtLeast @0xc6328 ----
// CALLERS: frameForToolbarWithVerticalLayout:, _WCMTOCropViewUsesGlassDesign, setup, _WCMTOCropViewUsesGlassDesign, -[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:]
// CALLEES: _compatibilityInitializeAvailabilityCheck, _initializeAvailabilityCheck


void ___isPlatformVersionAtLeast(undefined4 param_1,int param_2,uint param_3,uint param_4)



{

  ulong uVar1;

  long lVar2;

  undefined4 local_50;

  uint uStack_4c;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00110518;

  _dispatch_once_f((dispatch_once_t *)&DAT_0012c6b8,(void *)0x0,_initializeAvailabilityCheck);

  if (DAT_0012c6c0 != 0) {

    uStack_4c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;

    local_50 = param_1;

    uVar1 = __availability_version_check(1,&local_50);

    if (*(long *)PTR____stack_chk_guard_00110518 == local_48) {

      return;

    }

    goto LAB_000c6474;

  }

  _dispatch_once_f((dispatch_once_t *)&DAT_0012c6b0,(void *)0x0,

                   _compatibilityInitializeAvailabilityCheck);

  if (param_2 < __MergedGlobals) {

LAB_000c63e0:

    uVar1 = 1;

    lVar2 = *(long *)PTR____stack_chk_guard_00110518;

  }

  else if (__MergedGlobals < param_2) {

LAB_000c6404:

    uVar1 = 0;

    lVar2 = *(long *)PTR____stack_chk_guard_00110518;

  }

  else {

    if ((int)param_3 < DAT_0012c6a4) goto LAB_000c63e0;

    if (DAT_0012c6a4 < (int)param_3) goto LAB_000c6404;

    uVar1 = (ulong)((int)param_4 <= DAT_0012c6a8);

    lVar2 = *(long *)PTR____stack_chk_guard_00110518;

  }

  if (lVar2 == local_48) {

    return;

  }

LAB_000c6474:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(uVar1);

}






// ---- [d5] autoHideProjectiveView @0x67858 ----
// CALLERS: initValue, setHiddenProjectiveView:, setAutoHideProjectiveView:, _objc_msgSend$autoHideProjectiveView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImageBrowser::autoHideProjectiveView(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_autoHideProjectiveView) & 1;

}






// ---- [d5] shouldHideStatusBar @0x67938 ----
// CALLERS: initValue, showStatusBar, hideStatusBar, setShouldHideStatusBar:, _objc_msgSend$shouldHideStatusBar
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImageBrowser::shouldHideStatusBar(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_shouldHideStatusBar) & 1;

}






// ---- [d5] toolViewHandlers @0x67994 ----
// CALLERS: initValue, buildToolView, pageNumberChanged, hide, ___53-[WCMYBImageBrowser_implementOperateBrowserProtocol:]_block_invoke.40, scrollViewDidScroll:, respondsToLongPress:, setToolViewHandlers:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::toolViewHandlers(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_toolViewHandlers);

}






// ---- [d5] defaultToolViewHandler @0x679f4 ----
// CALLERS: initValue, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::defaultToolViewHandler(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_defaultToolViewHandler);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d5] auxiliaryViewHandler @0x67a28 ----
// CALLERS: initValue, implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.50, setAuxiliaryViewHandler:, .cxx_destruct, hideAuxiliaryView, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::auxiliaryViewHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_auxiliaryViewHandler);

}






// ---- [d5] animatedTransition @0x67a88 ----
// CALLERS: initValue, showToView:containerSize:, hide, setAnimatedTransition:, .cxx_destruct, _objc_msgSend$animatedTransition
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::animatedTransition(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_animatedTransition);

}






// ---- [d5] defaultAnimatedTransition @0x67ae8 ----
// CALLERS: initValue, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::defaultAnimatedTransition(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_defaultAnimatedTransition);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d5] currentData @0x64848 ----
// CALLERS: buildToolView, ___34-[WCMYBImageBrowser_buildToolView]_block_invoke, pageNumberChanged, respondsToLongPress:, wcm_yb_pageChanged, currentDataShouldHideSaveButton, showSheetView, ___35-[WCMYBIBToolViewHandler_sheetView]_block_invoke
// CALLEES: dataMediator, currentPage, dataForCellAtIndex:


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::currentData(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_38;

  

  _objc_msgSend_dataMediator(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_msgSend_currentPage(param_1,local_38);

  _objc_msgSend_dataForCellAtIndex_(uVar1,local_38,uVar2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d5] wcm_yb_respondsToLongPress @0x85c98 ----
// CALLERS: respondsToLongPress:, _objc_msgSend$wcm_yb_respondsToLongPress
// CALLEES: showSheetView


/* Function Stack Size: 0x10 bytes */



void WCMYBIBToolViewHandler::wcm_yb_respondsToLongPress(ID param_1,SEL param_2)



{

  _objc_msgSend_showSheetView(param_1);

  return;

}






// ---- [d5] respondsToTapSingle: @0x6e490 ----
// CALLERS: addGesture
// CALLEES: hideTailoringImageView, hideAuxiliaryView, hideBrowser, wcm_yb_isRotating, wcm_yb_hideBrowser, wcm_yb_cellData, singleTouchBlock, isRotating


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::respondsToTapSingle_(ID param_1,SEL param_2,ID param_3)



{

  uint uVar1;

  long lVar2;

  undefined8 local_50;

  undefined8 local_38;

  undefined4 local_2c;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_wcm_yb_isRotating(local_18,local_50);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = (**(code **)(lVar2 + 0x10))();

  (*(code *)PTR__objc_release_00110458)(lVar2);

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_wcm_yb_cellData(local_18,local_50);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_singleTouchBlock(local_38,local_50);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar2 == 0) {

      _objc_msgSend_hideTailoringImageView(local_18,local_50);

      _objc_msgSend_hideAuxiliaryView(local_18,local_50);

      _objc_msgSend_wcm_yb_hideBrowser(local_18,local_50);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar2 + 0x10))();

      (*(code *)PTR__objc_release_00110458)(lVar2);

    }

    else {

      _objc_msgSend_singleTouchBlock(local_38,local_50);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar2 + 0x10))(lVar2,local_38);

      (*(code *)PTR__objc_release_00110458)(lVar2);

    }

    _objc_storeStrong(&local_38,0);

    local_2c = 0;

  }

  else {

    local_2c = 1;

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] respondsToTapDouble: @0x6e600 ----
// CALLERS: addGesture
// CALLEES: _CGRectMake, hideTailoringImageView, viewForZoomingInScrollView:, imageScrollView, wcm_yb_isRotating, isRotating, viewForZoomingInScrollView:, maximumZoomScale


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::respondsToTapDouble_(ID param_1,SEL param_2,ID param_3)



{

  uint uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  double dVar6;

  double dVar7;

  undefined8 in_d1;

  undefined8 uVar8;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 uVar9;

  undefined8 local_a8;

  undefined8 local_40;

  undefined8 local_38;

  undefined4 local_2c;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_wcm_yb_isRotating(local_18,local_a8);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = (**(code **)(lVar2 + 0x10))();

  (*(code *)PTR__objc_release_00110458)(lVar2);

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_hideTailoringImageView(local_18,local_a8);

    _objc_msgSend_imageScrollView(local_18,local_a8);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_viewForZoomingInScrollView_(local_18,local_a8,local_38);

    local_40 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_msgSend_locationInView_(local_28,local_a8,local_40);

    uVar8 = in_d1;

    uVar5 = _objc_msgSend_bounds(local_40,local_a8);

    uVar3 = _CGRectContainsPoint(uVar5,uVar8,in_d2,in_d3,uVar4,in_d1);

    if ((uVar3 & 1) == 0) {

      local_2c = 1;

    }

    else {

      dVar6 = (double)_objc_msgSend_zoomScale(local_38,local_a8);

      dVar7 = (double)_objc_msgSend_maximumZoomScale(local_38,local_a8);

      uVar8 = local_38;

      if (dVar6 == dVar7) {

        _objc_msgSend_setZoomScale_animated_(0x3ff0000000000000,local_38,local_a8,1);

      }

      else {

        uVar9 = 0x3ff0000000000000;

        uVar5 = 0x3ff0000000000000;

        uVar4 = _CGRectMake(uVar4);

        _objc_msgSend_zoomToRect_animated_(uVar4,in_d1,uVar5,uVar9,uVar8,local_a8,1);

      }

      local_2c = 0;

    }

    _objc_storeStrong(&local_40);

    _objc_storeStrong(&local_38,0);

  }

  else {

    local_2c = 1;

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] respondsToPan: @0x6e7fc ----
// CALLERS: addGesture
// CALLEES: _CGPointMake, collection, hideStatusBar, collectionView, currentOrientation, currentPage, disable, dismissScale, dismissVelocityY, restoreDuration


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::respondsToPan_(ID param_1,SEL param_2,ID param_3)



{

  undefined1 uVar1;

  bool bVar2;

  bool bVar3;

  byte bVar4;

  ID IVar5;

  bool bVar6;

  bool bVar7;

  uint uVar8;

  long lVar9;

  undefined8 uVar10;

  ulong uVar11;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double in_d1;

  undefined8 in_d2;

  double dVar20;

  undefined8 in_d3;

  double dVar21;

  double local_498;

  double local_470;

  double local_460;

  uint local_414;

  double local_3f0;

  double local_3d0;

  double local_3a0;

  double local_390;

  undefined8 local_338;

  undefined8 local_1e8;

  long local_1d8;

  long local_1c8;

  long local_1b8;

  double local_1a0;

  undefined1 auStack_198 [48];

  undefined1 auStack_168 [48];

  double local_138;

  double local_130;

  double local_128;

  double local_120;

  double dStack_118;

  double local_110;

  double dStack_108;

  byte local_f9;

  double local_f8;

  double local_f0;

  undefined1 local_e1;

  double local_e0;

  double local_d8;

  byte local_c9;

  undefined8 local_c8;

  double local_c0;

  undefined8 local_b8;

  double local_b0;

  double local_a8;

  double dStack_a0;

  undefined1 local_91;

  long local_90;

  byte local_81;

  undefined8 local_80;

  byte local_71;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_48;

  undefined4 local_3c;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  _objc_msgSend_wcm_yb_isRotating(local_28,local_338);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  uVar8 = (**(code **)(lVar9 + 0x10))();

  (*(code *)PTR__objc_release_00110458)(lVar9);

  if ((uVar8 & 1) != 0) {

    local_3c = 1;

    goto LAB_0006f8f4;

  }

  _objc_msgSend_wcm_yb_cellData(local_28,local_338);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_interactionProfile(uVar10,local_338);

  local_48 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar10);

  uVar11 = _objc_msgSend_disable(local_48,local_338);

  if ((uVar11 & 1) == 0) {

    _objc_msgSend_imageScrollView(local_28,local_338);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_imageView(uVar10,local_338);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    local_68 = _objc_msgSend_frame(uVar12,local_338);

    uVar11 = _CGRectIsEmpty(local_68,in_d1,in_d2,in_d3);

    local_71 = 0;

    local_81 = 0;

    local_91 = 0;

    bVar7 = true;

    uVar1 = (uVar11 & 1) == 0;

    if ((bool)uVar1) {

      _objc_msgSend_imageScrollView(local_28,local_338);

      local_70 = _objc_retainAutoreleasedReturnValue();

      local_71 = 1;

      _objc_msgSend_imageView(local_70,local_338);

      local_80 = _objc_retainAutoreleasedReturnValue();

      local_81 = 1;

      _objc_msgSend_image(local_80,local_338);

      local_90 = _objc_retainAutoreleasedReturnValue();

      bVar7 = local_90 == 0;

      local_91 = uVar1;

      (*(code *)PTR__objc_release_00110458)(local_90);

      uVar1 = local_91;

    }

    local_91 = uVar1;

    if ((local_81 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_80);

    }

    if ((local_71 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_70);

    }

    (*(code *)PTR__objc_release_00110458)(uVar12);

    (*(code *)PTR__objc_release_00110458)(uVar10);

    if (bVar7) {

      local_3c = 1;

    }

    else {

      local_a8 = (double)_objc_msgSend_locationInView_(local_38,local_338,local_28);

      dStack_a0 = in_d1;

      _objc_msgSend_wcm_yb_containerSize(local_28,local_338);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_wcm_yb_currentOrientation(local_28,local_338);

      lVar13 = _objc_retainAutoreleasedReturnValue();

      uVar10 = (**(code **)(lVar13 + 0x10))();

      local_b8 = (**(code **)(lVar9 + 0x10))(lVar9,uVar10);

      local_b0 = in_d1;

      (*(code *)PTR__objc_release_00110458)(lVar13);

      (*(code *)PTR__objc_release_00110458)(lVar9);

      lVar9 = _objc_msgSend_state(local_38,local_338);

      if (lVar9 + -1 == 0) {

        lVar9 = (long)_interactStartPoint;

        ((double *)(local_28 + lVar9))[1] = dStack_a0;

        *(double *)(local_28 + lVar9) = local_a8;

        goto LAB_0006f8dc;

      }

      lVar9 = _objc_msgSend_state(lVar9 + -1,local_38,local_338);

      if (lVar9 + -4 == 0) {

LAB_0006ebc0:

        uVar10 = local_38;

        if ((*(byte *)(local_28 + (long)_interacting) & 1) != 0) {

          _objc_msgSend_imageScrollView(local_28,local_338);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          local_c8 = _objc_msgSend_velocityInView_(uVar10,local_338);

          local_c0 = in_d1;

          (*(code *)PTR__objc_release_00110458)(uVar12);

          local_d8 = local_c0;

          if (0.0 <= local_c0) {

            local_390 = local_c0;

          }

          else {

            local_390 = -local_c0;

          }

          local_e0 = local_390;

          dVar16 = (double)_objc_msgSend_dismissVelocityY(local_48,local_338);

          local_c9 = dVar16 < local_390;

          local_f0 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);

          local_3a0 = local_f0;

          if (local_f0 < 0.0) {

            local_3a0 = -local_f0;

          }

          local_f8 = local_3a0;

          dVar16 = (double)_objc_msgSend_dismissScale(local_48,local_338);

          IVar5 = local_28;

          local_e1 = local_b0 * dVar16 < local_3a0;

          bVar4 = 1;

          if (!(bool)local_e1) {

            bVar4 = local_c9;

          }

          local_f9 = bVar4 & 1;

          if ((bVar4 & 1) == 0) {

            _objc_msgSend_restoreDuration(local_48,local_338);

            _objc_msgSend_restoreInteractionWithDuration_(IVar5,local_338);

          }

          else {

            _objc_msgSend_hideBrowser(local_28,local_338);

          }

        }

      }

      else {

        lVar9 = _objc_msgSend_state(lVar9 + -4,local_38,local_338);

        if (lVar9 + -3 == 0) goto LAB_0006ebc0;

        lVar9 = _objc_msgSend_state(lVar9 + -3,local_38,local_338);

        if (lVar9 + -3 == 0) goto LAB_0006ebc0;

        lVar9 = _objc_msgSend_state(lVar9 + -3,local_38,local_338);

        if (lVar9 + -5 == 0) goto LAB_0006ebc0;

        lVar9 = _objc_msgSend_state(lVar9 + -5,local_38,local_338);

        if (lVar9 == 2) {

          if ((*(byte *)(local_28 + (long)_interacting) & 1) == 0) {

            dVar16 = (double)((undefined8 *)(local_28 + (long)_interactStartPoint))[1];

            dVar20 = *(double *)PTR__CGPointZero_00110850;

            dVar21 = *(double *)(PTR__CGPointZero_00110850 + 8);

            uVar11 = ___CGPointEqualToPoint(*(undefined8 *)(local_28 + (long)_interactStartPoint));

            bVar3 = false;

            bVar7 = false;

            bVar2 = false;

            bVar6 = false;

            local_414 = 1;

            if ((uVar11 & 1) == 0) {

              _objc_msgSend_wcm_yb_currentPage(local_28,local_338);

              local_1b8 = _objc_retainAutoreleasedReturnValue();

              bVar3 = true;

              lVar9 = (**(code **)(local_1b8 + 0x10))();

              _objc_msgSend_wcm_yb_selfPage(local_28,local_338);

              local_1c8 = _objc_retainAutoreleasedReturnValue();

              bVar7 = true;

              lVar13 = (**(code **)(local_1c8 + 0x10))();

              local_414 = 1;

              if (lVar9 == lVar13) {

                _objc_msgSend_wcm_yb_cellIsInCenter(0,local_28,local_338);

                local_1d8 = _objc_retainAutoreleasedReturnValue();

                bVar2 = true;

                uVar11 = (**(code **)(local_1d8 + 0x10))();

                local_414 = 1;

                if ((uVar11 & 1) != 0) {

                  _objc_msgSend_imageScrollView(local_28,local_338);

                  local_1e8 = _objc_retainAutoreleasedReturnValue();

                  bVar6 = true;

                  local_414 = _objc_msgSend_isZooming(local_1e8,local_338);

                }

              }

            }

            if (bVar6) {

              (*(code *)PTR__objc_release_00110458)(local_1e8);

            }

            if (bVar2) {

              (*(code *)PTR__objc_release_00110458)(local_1d8);

            }

            if (bVar7) {

              (*(code *)PTR__objc_release_00110458)(local_1c8);

            }

            if (bVar3) {

              (*(code *)PTR__objc_release_00110458)(local_1b8);

            }

            uVar10 = local_38;

            if ((local_414 & 1) == 0) {

              _objc_msgSend_imageScrollView(local_28,local_338);

              uVar12 = _objc_retainAutoreleasedReturnValue();

              local_470 = (double)_objc_msgSend_velocityInView_(uVar10,local_338);

              (*(code *)PTR__objc_release_00110458)(uVar12);

              dVar17 = (double)_objc_msgSend_triggerDistance(local_48,local_338);

              _objc_msgSend_imageScrollView(local_28,local_338);

              uVar10 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_contentOffset(uVar10,local_338);

              (*(code *)PTR__objc_release_00110458)(uVar10);

              _objc_msgSend_imageScrollView(local_28,local_338);

              uVar10 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_bounds(uVar10,local_338);

              dVar19 = dVar21;

              (*(code *)PTR__objc_release_00110458)(uVar10);

              local_460 = local_a8 - *(double *)(local_28 + (long)_interactStartPoint);

              if (local_460 < 0.0) {

                local_460 = -local_460;

              }

              bVar7 = false;

              if (local_460 < dVar17) {

                if (local_470 < 0.0) {

                  local_470 = -local_470;

                }

                bVar7 = local_470 < 500.0;

              }

              dVar18 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);

              bVar6 = false;

              if (dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8) < -dVar17) {

                local_498 = dVar21;

                _objc_msgSend_imageScrollView(local_28,local_338);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_contentSize(uVar10,local_338);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                if (local_498 < dVar21) {

                  local_498 = dVar21;

                }

                dVar20 = 1.0;

                bVar6 = local_498 - 1.0 <= dVar16 + dVar21;

              }

              if ((dVar17 < dVar18 && dVar16 <= 1.0) || (bVar2 = false, bVar6)) {

                bVar2 = bVar7;

              }

              if (bVar2) {

                lVar9 = (long)_interactStartPoint;

                ((double *)(local_28 + lVar9))[1] = dStack_a0;

                *(double *)(local_28 + lVar9) = local_a8;

                _objc_msgSend_imageScrollView(local_28,local_338);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_frame(uVar10,local_338);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                dVar19 = dStack_a0 / dVar19;

                uVar14 = _CGPointMake(local_a8 / dVar20);

                _objc_msgSend_imageScrollView(local_28,local_338);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_layer(uVar10,local_338);

                uVar12 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_setAnchorPoint_(uVar14,dVar19,uVar12,local_338);

                (*(code *)PTR__objc_release_00110458)(uVar12);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                _objc_msgSend_imageScrollView(local_28,local_338);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_setUserInteractionEnabled_(uVar10,local_338,0);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                _objc_msgSend_imageScrollView(local_28,local_338);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_setScrollEnabled_(uVar10,local_338,0);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                dVar16 = local_a8;

                _objc_msgSend_imageScrollView(local_28,local_338);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_setCenter_(dVar16,dStack_a0,uVar10,local_338);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                _objc_msgSend_wcm_yb_hideToolViews(local_28,local_338);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                (**(code **)(lVar9 + 0x10))(lVar9,1);

                (*(code *)PTR__objc_release_00110458)(lVar9);

                _objc_msgSend_wcm_yb_hideStatusBar(local_28,local_338);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                (**(code **)(lVar9 + 0x10))(lVar9,0);

                (*(code *)PTR__objc_release_00110458)(lVar9);

                _objc_msgSend_wcm_yb_collectionView(local_28,local_338);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                (**(code **)(lVar9 + 0x10))();

                uVar10 = _objc_retainAutoreleasedReturnValue();

                _objc_msgSend_setScrollEnabled_(uVar10,local_338,0);

                (*(code *)PTR__objc_release_00110458)(uVar10);

                (*(code *)PTR__objc_release_00110458)(lVar9);

                _objc_msgSend_hideTailoringImageView(local_28,local_338);

                *(undefined1 *)(local_28 + (long)_interacting) = 1;

                goto LAB_0006f8dc;

              }

              local_3c = 1;

            }

            else {

              local_3c = 1;

            }

            goto LAB_0006f8e4;

          }

          dStack_108 = dStack_a0;

          local_110 = local_a8;

          _objc_msgSend_imageScrollView(local_28,local_338);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          dStack_118 = dStack_108;

          local_120 = local_110;

          _objc_msgSend_setCenter_(local_110,dStack_108,uVar10,local_338);

          (*(code *)PTR__objc_release_00110458)(uVar10);

          local_130 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);

          local_3d0 = local_130;

          if (local_130 < 0.0) {

            local_3d0 = -local_130;

          }

          local_138 = local_3d0;

          local_128 = 1.0 - local_3d0 / (local_b0 * 1.2);

          if (1.0 < local_128) {

            local_128 = 1.0;

          }

          if (local_128 < 0.35) {

            local_128 = 0.35;

          }

          _CGAffineTransformMakeScale(local_128,local_128);

          _objc_msgSend_imageScrollView(local_28,local_338);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _memcpy(auStack_198,auStack_168,0x30);

          _objc_msgSend_setTransform_(uVar10,local_338,auStack_198);

          (*(code *)PTR__objc_release_00110458)(uVar10);

          local_3f0 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);

          if (local_3f0 < 0.0) {

            local_3f0 = -local_3f0;

          }

          local_1a0 = 1.0 - local_3f0 / (local_b0 * 0.7);

          if (1.0 < local_1a0) {

            local_1a0 = 1.0;

          }

          if (local_1a0 < 0.0) {

            local_1a0 = 0.0;

          }

          _objc_msgSend_wcm_yb_backView(local_28,local_338);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_backgroundColor(uVar10,local_338);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_colorWithAlphaComponent_(local_1a0,uVar12,local_338);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_wcm_yb_backView(local_28,local_338);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_setBackgroundColor_(uVar15,local_338,uVar14);

          (*(code *)PTR__objc_release_00110458)(uVar15);

          (*(code *)PTR__objc_release_00110458)(uVar14);

          (*(code *)PTR__objc_release_00110458)(uVar12);

          (*(code *)PTR__objc_release_00110458)(uVar10);

        }

      }

LAB_0006f8dc:

      local_3c = 0;

    }

  }

  else {

    local_3c = 1;

  }

LAB_0006f8e4:

  _objc_storeStrong(&local_48,0);

LAB_0006f8f4:

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d5] setImage: @0x7cf24 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setImage_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x78);

  return;

}






// ---- [d5] sharedManager @0x81dd0 ----
// CALLERS: openGallery:, imageView, ___35+[WCMYBIBIconManager_sharedManager]_block_invoke, setOperationType:, _objc_msgSend$sharedManager
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBIconManager::sharedManager(ID param_1,SEL param_2)



{

  ID IVar1;

  undefined8 local_20;

  long *local_18;

  

  local_18 = &_sharedManager_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global_25);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  IVar1 = _objc_retainAutoreleaseReturnValue(_sharedManager_manager);

  return IVar1;

}






// ---- [d5] loadingImage @0x8245c ----
// CALLERS: imageView, _objc_msgSend$loadingImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBIconManager::loadingImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d5] setImage: @0x934ac ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x48,param_3);

  return;

}






// ---- [d5] setImage: @0x9e194 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: image, image, setImage:withType:, image, image, image, image


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_image(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,1);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] setImage: @0xab96c ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d5] setImage: @0xac990 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOActivityCroppedImageProvider::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d5] setImage: @0xadc14 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewControllerTransitioning::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x10,param_3);

  return;

}






// ---- [d5] setImage: @0xbb800 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d5] maximumZoomScale @0xbbe78 ----
// CALLERS: wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, updateImageLayoutWithOrientation:previousImageSize:, respondsToTapDouble:, layoutInitialImage, updateToImageCropFrame:, ___52-[WCMTOCropView_moveCroppedContentToCenterAnimated:]_block_invoke, setMaximumZoomScale:, _objc_msgSend$maximumZoomScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::maximumZoomScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_maximumZoomScale);

}






// ---- [d5] respondsToTapTextlabel @0x80a84 ----
// CALLERS: textLabel
// CALLEES: clickTextLabelBlock


/* Function Stack Size: 0x10 bytes */



void WCMYBIBLoadingView::respondsToTapTextlabel(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 local_38;

  

  _objc_msgSend_clickTextLabelBlock(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar1 != 0) {

    _objc_msgSend_clickTextLabelBlock(param_1,local_38);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    (*(code *)PTR__objc_release_00110458)(lVar1);

  }

  return;

}






// ---- [d5] toolSaveImage @0x824b0 ----
// CALLERS: setOperationType:, _objc_msgSend$toolSaveImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBIconManager::toolSaveImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d5] toolMoreImage @0x82504 ----
// CALLERS: setOperationType:, _objc_msgSend$toolMoreImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBIconManager::toolMoreImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x18);

}






// ---- [d5] operationType @0x8596c ----
// CALLERS: clickOperationButton:, setOperationType:, wcm_yb_pageChanged, _objc_msgSend$operationType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBTopView::operationType(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_operationType);

}






// ---- [d5] clickOperationButton: @0x8521c ----
// CALLERS: operationButton
// CALLEES: operationType, clickOperation


/* Function Stack Size: 0x18 bytes */



void WCMYBIBTopView::clickOperationButton_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 local_38;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_clickOperation(local_18,local_38);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar1 != 0) {

    _objc_msgSend_clickOperation(local_18,local_38);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_msgSend_operationType(local_18,local_38);

    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);

    (*(code *)PTR__objc_release_00110458)(lVar1);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d5] clickOperation @0x85990 ----
// CALLERS: clickOperationButton:, operationButton, setClickOperation:, .cxx_destruct, _objc_msgSend$clickOperation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBTopView::clickOperation(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_clickOperation);

}






// ---- [d6] compressedImage @0x6ae44 ----
// CALLERS: imageForKey:type:, loadOriginImage, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_3, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.9, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.10, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.12, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_3.13
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCachePack::compressedImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d6] loadOriginImage_compress @0x71680 ----
// CALLERS: loadOriginImage, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_3, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.9, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.10, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.11, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.12
// CALLEES: originImage, loadOriginImage, _WCMYBIBImageProcessingQueue, bestSizeOfCompressing, originImage, setLoadingStatus:


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadOriginImage_compress(ID param_1,SEL param_2)



{

  int iVar1;

  long lVar2;

  char *pcVar3;

  undefined8 uVar4;

  dispatch_queue_t queue;

  char *pcVar5;

  undefined8 in_d1;

  undefined8 local_e8;

  undefined *local_d8;

  undefined4 local_d0;

  undefined4 local_cc;

  code *local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  undefined1 auStack_b0 [8];

  undefined8 local_a8;

  undefined8 uStack_a0;

  undefined *local_98;

  undefined4 local_90;

  undefined4 local_8c;

  code *local_88;

  undefined *local_80;

  undefined8 local_78;

  undefined1 auStack_70 [8];

  undefined8 local_68;

  undefined8 uStack_60;

  undefined8 local_48;

  undefined8 uStack_40;

  undefined1 auStack_38 [8];

  SEL local_30;

  ID local_28;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    local_30 = param_2;

    local_28 = param_1;

    _objc_msgSend_originImage(param_1,local_e8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)();

    if (lVar2 != 0) {

      _objc_msgSend_setLoadingStatus_(local_28,local_e8,1);

      _objc_initWeak(auStack_38,local_28);

      local_48 = _objc_msgSend_bestSizeOfCompressing(local_28,local_e8);

      uStack_40 = in_d1;

      pcVar3 = _dispatch_queue_get_label((dispatch_queue_t)0x0);

      uVar4 = _WCMYBIBImageProcessingQueue();

      queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(uVar4);

      pcVar5 = _dispatch_queue_get_label(queue);

      iVar1 = _strcmp(pcVar3,pcVar5);

      (*(code *)PTR__objc_release_00110458)(queue);

      if (iVar1 == 0) {

        local_98 = PTR___NSConcreteStackBlock_001104f0;

        local_90 = 0xc2000000;

        local_8c = 0;

        local_88 = ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke;

        local_80 = &___block_descriptor_64_e8_32s40w_e5_v8__0l;

        local_78 = (*(code *)PTR__objc_retain_00110460)(local_28);

        uStack_60 = uStack_40;

        local_68 = local_48;

        _objc_copyWeak(auStack_70,auStack_38);

        (*local_88)(&local_98);

        _objc_destroyWeak(auStack_70);

        _objc_storeStrong(&local_78,0);

      }

      else {

        uVar4 = _WCMYBIBImageProcessingQueue();

        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);

        local_d8 = PTR___NSConcreteStackBlock_001104f0;

        local_d0 = 0xc2000000;

        local_cc = 0;

        local_c8 = ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_11;

        local_c0 = &___block_descriptor_64_e8_32s40w_e5_v8__0l;

        local_b8 = (*(code *)PTR__objc_retain_00110460)(local_28);

        uStack_a0 = uStack_40;

        local_a8 = local_48;

        _objc_copyWeak(auStack_b0,auStack_38);

        _dispatch_async(uVar4,&local_d8);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        _objc_destroyWeak(auStack_b0);

        _objc_storeStrong(&local_b8,0);

      }

      _objc_destroyWeak(auStack_38);

    }

  }

  return;

}






// ---- [d6] shouldCompress @0x7a318 ----
// CALLERS: cuttingImage, loadOriginImage, loadImageBlock, ___34-[WCMYBIBImageData_loadThumbImage]_block_invoke, shouldCompressWithImage:, shouldCompressWithImageSize:scale:, ___41-[WCMYBIBImageData_defaultDecodeDecision]_block_invoke, _objc_msgSend$shouldCompress
// CALLEES: originImage, shouldCompressWithImage:, originImage


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBImageData::shouldCompress(ID param_1,SEL param_2)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_40;

  

  _objc_msgSend_originImage(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = _objc_msgSend_shouldCompressWithImage_(param_1,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return bVar1;

}






// ---- [d6] compressedImage @0x7c670 ----
// CALLERS: imageForKey:type:, loadOriginImage, _objc_msgSend$compressedImage
// CALLEES: imageForKey:type:, imageCache, cacheKey


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::compressedImage(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 local_40;

  

  _objc_msgSend_imageCache(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_cacheKey(param_1,local_40);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageForKey_type_(uVar1,local_40,uVar2,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar4 = _objc_autoreleaseReturnValue(uVar3);

  return IVar4;

}






// ---- [d6] _WCMYBIBImageProcessingQueue @0x71934 ----
// CALLERS: loadOriginImage_compress, loadYBImage, loadImageBlock, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.78, loadPHAsset, cuttingImageToRect:complete:, ___WCMYBIBImageProcessingQueue_block_invoke
// CALLEES: (叶)


void _WCMYBIBImageProcessingQueue(void)



{

  undefined8 local_20;

  long *local_18;

  

  local_18 = &_WCMYBIBImageProcessingQueue_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  _objc_retainAutoreleaseReturnValue(_WCMYBIBImageProcessingQueue_queue);

  return;

}






// ---- [d6] ___Block_byref_object_copy_ @0x731b4 ----
// CALLERS: loadYBImage, loadImageBlock
// CALLEES: (叶)


void ___Block_byref_object_copy_(long param_1,long param_2)



{

  undefined8 uVar1;

  

  uVar1 = *(undefined8 *)(param_2 + 0x28);

  *(undefined8 *)(param_1 + 0x28) = 0;

  _objc_storeStrong(param_1 + 0x28,uVar1);

  _objc_storeStrong(param_2 + 0x28,0);

  return;

}






// ---- [d6] ___Block_byref_object_dispose_ @0x73208 ----
// CALLERS: loadYBImage, loadImageBlock
// CALLEES: (叶)


void ___Block_byref_object_dispose_(long param_1)



{

  _objc_storeStrong(param_1 + 0x28,0);

  return;

}






// ---- [d6] defaultDecodeDecision @0x7a8c8 ----
// CALLERS: loadYBImage, loadURL_queryCache, loadURL_download, loadPHAsset, ___41-[WCMYBIBImageData_defaultDecodeDecision]_block_invoke, _objc_msgSend$defaultDecodeDecision
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::defaultDecodeDecision(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  ID IVar2;

  undefined *local_50;

  undefined4 local_48;

  undefined4 local_44;

  code *local_40;

  undefined *local_38;

  undefined1 auStack_30 [8];

  undefined1 auStack_28 [8];

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _objc_initWeak(auStack_28,param_1);

  local_50 = PTR___NSConcreteStackBlock_001104f0;

  local_48 = 0xc2000000;

  local_44 = 0;

  local_40 = ___41__WCMYBIBImageData_defaultDecodeDecision__block_invoke;

  local_38 = &___block_descriptor_40_e8_32w_e21_B32__0_CGSize_dd_8d24l;

  _objc_copyWeak(auStack_30,auStack_28);

  uVar1 = _objc_retainBlock(&local_50);

  _objc_destroyWeak(auStack_30);

  _objc_destroyWeak(auStack_28);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d6] shouldPreDecodeAsync @0x7d1bc ----
// CALLERS: loadYBImage, loadImageBlock, _objc_msgSend$shouldPreDecodeAsync
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBImageData::shouldPreDecodeAsync(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 0x1a) & 1;

}






// ---- [d6] scale @0x2d0d8 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMHeaderSizeController::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_scale);

}






// ---- [d6] shouldCompressWithImage: @0x7a384 ----
// CALLERS: loadImageBlock, shouldCompress, _objc_msgSend$shouldCompressWithImage:
// CALLEES: scale, shouldCompress, shouldCompressWithImageSize:scale:, scale, size


/* Function Stack Size: 0x18 bytes */



bool WCMYBIBImageData::shouldCompressWithImage_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 local_50;

  long local_30;

  SEL local_28;

  ID local_20;

  byte local_11;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  IVar1 = local_20;

  if (local_30 == 0) {

    local_11 = 0;

  }

  else {

    uVar2 = _objc_msgSend_size(local_30,local_50);

    uVar3 = _objc_msgSend_scale(local_30,local_50);

    local_11 = _objc_msgSend_shouldCompressWithImageSize_scale_(uVar2,in_d1,uVar3,IVar1,local_50);

    local_11 = local_11 & 1;

  }

  _objc_storeStrong(&local_30,0);

  return local_11 & 1;

}






// ---- [d6] preDecodeDecision @0x7d168 ----
// CALLERS: loadImageBlock, ___41-[WCMYBIBImageData_defaultDecodeDecision]_block_invoke, _objc_msgSend$preDecodeDecision
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::preDecodeDecision(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xb0);

}






// ---- [d6] scale @0x97710 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYYImageDecoder::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0xa8);

}






// ---- [d6] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d6] loadURL_queryCache @0x7436c ----
// CALLERS: loadURL, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke.68, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2.69, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_3, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_4, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke.70
// CALLEES: webImageMediator, defaultDecodeDecision, setLoadingStatus:, wcm_yb_webImageMediator, imageURL


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::loadURL_queryCache(ID param_1,SEL param_2)



{

  bool bVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 local_90;

  undefined *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  code *local_68;

  undefined *local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 local_48;

  byte local_39;

  undefined8 local_38;

  byte local_29;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {

    local_20 = param_2;

    local_18 = param_1;

    _objc_msgSend_imageURL(param_1,local_90);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    local_29 = 0;

    local_39 = 0;

    bVar1 = true;

    if (lVar2 != 0) {

      _objc_msgSend_imageURL(local_18,local_90);

      local_28 = _objc_retainAutoreleasedReturnValue();

      local_29 = 1;

      _objc_msgSend_absoluteString(local_28,local_90);

      local_38 = _objc_retainAutoreleasedReturnValue();

      local_39 = 1;

      lVar3 = _objc_msgSend_length(local_38,local_90);

      bVar1 = lVar3 == 0;

    }

    if ((local_39 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_38);

    }

    if ((local_29 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_28);

    }

    (*(code *)PTR__objc_release_00110458)(lVar2);

    if (!bVar1) {

      _objc_msgSend_defaultDecodeDecision(local_18,local_90);

      local_48 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setLoadingStatus_(local_18,local_90,3);

      _objc_msgSend_wcm_yb_webImageMediator(local_18,local_90);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar2 + 0x10))();

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_imageURL(local_18,local_90);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      local_78 = PTR___NSConcreteStackBlock_001104f0;

      local_70 = 0xc2000000;

      local_6c = 0;

      local_68 = ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke;

      local_60 = &___block_descriptor_48_e8_32s40bs_e28_v24__0__UIImage_8__NSData_16l;

      local_58 = (*(code *)PTR__objc_retain_00110460)(local_18);

      local_50 = (*(code *)PTR__objc_retain_00110460)(local_48);

      _objc_msgSend_wcm_yb_queryCacheOperationForKey_completed_(uVar4,local_90,uVar5,&local_78);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(lVar2);

      _objc_storeStrong(&local_50);

      _objc_storeStrong(&local_58,0);

      _objc_storeStrong(&local_48,0);

    }

  }

  return;

}






// ---- [d6] webImageMediator @0x67b1c ----
// CALLERS: implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.54, setWebImageMediator:, .cxx_destruct, dealloc, loadURL_queryCache, loadURL_download, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::webImageMediator(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_webImageMediator);

}






// ---- [d6] wcm_yb_webImageMediator @0x7cd58 ----
// CALLERS: dealloc, loadURL_queryCache, loadURL_download, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.80, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.82, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3.83, loadThumbImage
// CALLEES: webImageMediator


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_webImageMediator(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d6] projectiveView @0x7d01c ----
// CALLERS: pageNumberChanged, showToView:containerSize:, hide, loadThumbImage, wcm_yb_projectiveView, _objc_msgSend$projectiveView, _objc_msgSend$wcm_yb_projectiveView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::projectiveView(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + 0x98);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d6] thumbImage @0x7d07c ----
// CALLERS: loadThumbImage, _objc_msgSend$thumbImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::thumbImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xa0);

}






// ---- [d6] thumbURL @0x7d0cc ----
// CALLERS: loadThumbImage, _objc_msgSend$thumbURL
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::thumbURL(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xa8);

}






// ---- [d6] isHideTransitioning @0x6790c ----
// CALLERS: implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_3.85, delegate, wcm_yb_isHideTransitioning, setWcm_yb_isHideTransitioning:, _objc_msgSend$isHideTransitioning, _objc_msgSend$setWcm_yb_isHideTransitioning:, _objc_msgSend$wcm_yb_isHideTransitioning
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImageBrowser::isHideTransitioning(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_hideTransitioning) & 1;

}






// ---- [d6] wcm_yb_isHideTransitioning @0x7cba8 ----
// CALLERS: delegate, _objc_msgSend$wcm_yb_isHideTransitioning
// CALLEES: isHideTransitioning


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_isHideTransitioning(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x20);

}






// ---- [d6] imageForKey:type: @0x6b2bc ----
// CALLERS: originImage, compressedImage, _objc_msgSend$imageForKey:type:
// CALLEES: originImage, compressedImage, originImage, compressedImage


/* Function Stack Size: 0x20 bytes */



ID WCMYBIBImageCache::imageForKey_type_(ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  long lVar1;

  ID IVar2;

  long local_70;

  undefined8 local_60;

  long local_48;

  undefined8 local_40;

  long_long local_38;

  undefined8 local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  local_38 = param_4;

  _objc_msgSend_objectForKey_(*(undefined8 *)(local_20 + 8),local_60,local_30);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  local_70 = lVar1;

  if (lVar1 == 0) {

    _objc_msgSend_objectForKey_(*(undefined8 *)(local_20 + 0x10),local_60,local_30);

    local_48 = _objc_retainAutoreleasedReturnValue();

    local_70 = local_48;

  }

  local_40 = (*(code *)PTR__objc_retain_00110460)(local_70);

  if (lVar1 == 0) {

    (*(code *)PTR__objc_release_00110458)(local_48);

  }

  (*(code *)PTR__objc_release_00110458)(lVar1);

  if (local_38 == 0) {

    _objc_msgSend_originImage(local_40,local_60);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (local_38 == 1) {

    _objc_msgSend_compressedImage(0,local_40,local_60);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_18 = 0;

  }

  _objc_storeStrong(&local_40);

  _objc_storeStrong(&local_30,0);

  IVar2 = _objc_autoreleaseReturnValue(local_18);

  return IVar2;

}






// ---- [d6] touchesBegan @0xaf498 ----
// CALLERS: touchesBegan:withEvent:, touchesBegan:withEvent:, setTouchesBegan:, .cxx_destruct, _objc_msgSend$touchesBegan
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropScrollView::touchesBegan(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_touchesBegan);

}






// ---- [d6] touchesCancelled @0xaf4f8 ----
// CALLERS: touchesCancelled:withEvent:, setTouchesCancelled:, .cxx_destruct, _objc_msgSend$touchesCancelled
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropScrollView::touchesCancelled(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_touchesCancelled);

}






// ---- [d6] touchesEnded @0xaf558 ----
// CALLERS: touchesEnded:withEvent:, setTouchesEnded:, .cxx_destruct, _objc_msgSend$touchesEnded
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropScrollView::touchesEnded(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_touchesEnded);

}






// ---- [d6] updateCropBoxFrameWithGesturePoint: @0xb2408 ----
// CALLERS: gridPanGestureRecognized:, _objc_msgSend$updateCropBoxFrameWithGesturePoint:
// CALLEES: cropView, aspectRatioLockEnabled, minimumAspectRatio, setCropBoxFrame:, checkForCanReset, contentBounds, cropBoxFrame, aspectRatio, aspectRatioLockEnabled, cropViewPadding


/* Function Stack Size: 0x20 bytes */



void WCMTOCropView::updateCropBoxFrameWithGesturePoint_(ID param_1,SEL param_2,CGPoint param_3)



{

  bool bVar1;

  bool bVar2;

  bool bVar3;

  bool bVar4;

  long lVar5;

  ulong uVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  undefined8 uVar12;

  double dVar13;

  double dVar14;

  double in_d2;

  double dVar15;

  double dVar16;

  double in_d3;

  double dVar17;

  double dVar18;

  double dVar19;

  double local_820;

  double local_818;

  double local_810;

  double local_808;

  double local_800;

  double local_7f8;

  double local_7f0;

  double local_7e8;

  double local_7e0;

  double local_7d8;

  double local_7d0;

  double local_798;

  double local_768;

  double local_730;

  double local_728;

  double local_720;

  double local_6e0;

  double local_6d8;

  double local_6d0;

  double local_6b8;

  double local_6b0;

  double local_698;

  double local_690;

  double local_678;

  double local_670;

  double local_658;

  double local_638;

  double local_628;

  undefined8 local_620;

  double local_490;

  double local_488;

  double local_480;

  double dStack_478;

  double local_d8;

  double local_60;

  double dStack_58;

  double local_50;

  double dStack_48;

  

  dVar9 = param_3.field1_0x8;

  dStack_58 = dVar9;

  local_60 = (double)_objc_msgSend_cropBoxFrame(param_1);

  dVar13 = dStack_58;

  dVar15 = in_d2;

  dVar17 = in_d3;

  dVar7 = (double)_objc_msgSend_cropOriginFrame(param_1,local_620);

  dVar14 = dVar13;

  dVar16 = dVar15;

  dVar18 = dVar17;

  dVar8 = (double)_objc_msgSend_contentBounds(param_1,local_620);

  local_628 = (double)_objc_msgSend_cropViewPadding(param_1,local_620);

  local_628 = dVar8 - local_628;

  if (local_628 < param_3.field0_0x0) {

    local_628 = param_3.field0_0x0;

  }

  local_638 = (double)_objc_msgSend_cropViewPadding(param_1,local_620);

  local_638 = dVar14 - local_638;

  if (local_638 < dVar9) {

    local_638 = dVar9;

  }

  dVar9 = (double)_objc_msgSend_panOriginPoint(param_1,local_620);

  local_728 = (double)(float)(int)(local_628 - dVar9);

  _objc_msgSend_panOriginPoint(param_1,local_620);

  local_730 = (double)(float)(int)(local_638 - dVar9);

  dVar9 = dVar15 / dVar17;

  bVar1 = false;

  bVar2 = false;

  bVar4 = false;

  bVar3 = false;

  lVar5 = _objc_msgSend_tappedEdge(param_1,local_620);

  local_50 = in_d2;

  dStack_48 = in_d3;

  if (lVar5 != 0) {

    if (lVar5 == 1) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar10 = dVar15 - local_728;

        dVar11 = dVar17 - local_730;

        local_720 = dVar11;

        if (dVar11 < dVar10) {

          local_720 = dVar10;

          dVar10 = dVar11;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_720) {

          local_60 = dVar7 + local_728;

          local_50 = dVar15 - local_728;

          dStack_58 = dVar13 + local_730;

          dStack_48 = dVar17 - local_730;

        }

      }

      else {

        local_6d8 = local_728;

        if (local_728 < 0.0) {

          local_6d8 = 0.0;

        }

        local_6e0 = local_730;

        if (local_730 < 0.0) {

          local_6e0 = 0.0;

        }

        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dVar10 = ((1.0 - local_6d8 / dVar10) + (1.0 - local_6e0 / dVar11)) * 0.5;

        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        local_50 = (double)(float)(int)(dVar11 * dVar10);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dStack_48 = (double)(float)(int)(dVar11 * dVar10);

        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        local_60 = dVar7 + (dVar10 - local_50);

        dVar10 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dStack_58 = dVar13 + (dVar10 - dStack_48);

        bVar2 = true;

        bVar1 = true;

      }

      bVar4 = true;

      bVar3 = true;

    }

    else if (lVar5 == 2) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar11 = dVar17 - local_730;

        local_6d0 = dVar11;

        dVar10 = dVar15;

        if (dVar11 < dVar15) {

          local_6d0 = dVar15;

          dVar10 = dVar11;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_6d0) {

          dStack_58 = dVar13 + local_730;

          dStack_48 = dVar17 - local_730;

        }

      }

      else {

        bVar2 = true;

        local_6b8 = local_730;

        if (local_730 <= 0.0) {

          local_6b8 = 0.0;

        }

        local_60 = (double)_CGRectGetMidX(dVar7,dVar13,dVar15,dVar17);

        _CGRectGetMaxY(dVar7,dVar13,dVar15,dVar17);

        local_50 = in_d3 * dVar9;

        local_60 = local_60 - local_50 * 0.5;

        dStack_58 = dVar13 + local_6b8;

        dStack_48 = dVar17 - local_6b8;

      }

      bVar4 = true;

    }

    else if (lVar5 == 3) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar10 = dVar15 + local_728;

        dVar11 = dVar17 - local_730;

        local_768 = dVar11;

        if (dVar11 < dVar10) {

          local_768 = dVar10;

          dVar10 = dVar11;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_768) {

          local_50 = dVar15 + local_728;

          dStack_58 = dVar13 + local_730;

          dStack_48 = dVar17 - local_730;

        }

      }

      else {

        if (0.0 <= local_728) {

          local_728 = 0.0;

        }

        if (local_730 < 0.0) {

          local_730 = 0.0;

        }

        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dVar10 = ((1.0 - -local_728 / dVar10) + (1.0 - local_730 / dVar11)) * 0.5;

        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        local_50 = (double)(float)(int)(dVar11 * dVar10);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dStack_48 = (double)(float)(int)(dVar11 * dVar10);

        dVar10 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dStack_58 = dVar13 + (dVar10 - dStack_48);

        bVar2 = true;

        bVar1 = true;

      }

      bVar4 = true;

    }

    else if (lVar5 == 4) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar10 = dVar15 + local_728;

        local_690 = dVar17;

        if (dVar17 < dVar10) {

          local_690 = dVar10;

          dVar10 = dVar17;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_690) {

          local_50 = dVar15 + local_728;

        }

      }

      else {

        bVar1 = true;

        _CGRectGetMinX(dVar7,dVar13,dVar15,dVar17);

        dStack_58 = (double)_CGRectGetMidY(dVar7,dVar13,dVar15,dVar17);

        dStack_48 = in_d2 / dVar9;

        dStack_58 = dStack_58 - dStack_48 * 0.5;

        local_678 = dVar18 * dVar9;

        if (dVar15 + local_728 < local_678) {

          local_678 = dVar15 + local_728;

        }

        local_50 = local_678;

      }

    }

    else if (lVar5 == 5) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar10 = dVar15 + local_728;

        dVar11 = dVar17 + local_730;

        local_7d0 = dVar11;

        if (dVar11 < dVar10) {

          local_7d0 = dVar10;

          dVar10 = dVar11;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_7d0) {

          dStack_48 = dVar17 + local_730;

          local_50 = dVar15 + local_728;

        }

      }

      else {

        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dVar10 = ((1.0 - (local_728 * -1.0) / dVar10) + (1.0 - (local_730 * -1.0) / dVar11)) * 0.5;

        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        local_50 = (double)(float)(int)(dVar11 * dVar10);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dStack_48 = (double)(float)(int)(dVar11 * dVar10);

        bVar2 = true;

        bVar1 = true;

      }

    }

    else if (lVar5 == 6) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar11 = dVar17 + local_730;

        local_6b0 = dVar11;

        dVar10 = dVar15;

        if (dVar11 < dVar15) {

          local_6b0 = dVar15;

          dVar10 = dVar11;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_6b0) {

          dStack_48 = dVar17 + local_730;

        }

      }

      else {

        bVar2 = true;

        local_60 = (double)_CGRectGetMidX(dVar7,dVar13,dVar15,dVar17);

        _CGRectGetMinY(dVar7,dVar13,dVar15,dVar17);

        local_50 = in_d3 * dVar9;

        local_60 = local_60 - local_50 * 0.5;

        local_698 = dVar16 / dVar9;

        if (dVar17 + local_730 < local_698) {

          local_698 = dVar17 + local_730;

        }

        dStack_48 = local_698;

      }

    }

    else if (lVar5 == 7) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      if ((uVar6 & 1) == 0) {

        dVar10 = dVar15 - local_728;

        dVar11 = dVar17 + local_730;

        local_798 = dVar11;

        if (dVar11 < dVar10) {

          local_798 = dVar10;

          dVar10 = dVar11;

        }

        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_798) {

          dStack_48 = dVar17 + local_730;

          local_60 = dVar7 + local_728;

          local_50 = dVar15 - local_728;

        }

      }

      else {

        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dVar10 = ((1.0 - local_728 / dVar10) + (1.0 - -local_730 / dVar11)) * 0.5;

        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);

        local_50 = (double)(float)(int)(dVar11 * dVar10);

        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);

        dStack_48 = (double)(float)(int)(dVar11 * dVar10);

        local_60 = (double)_CGRectGetMaxX(dVar7,dVar13,dVar15,dVar17);

        local_60 = local_60 - local_50;

        bVar2 = true;

        bVar1 = true;

      }

      bVar3 = true;

    }

    else if (lVar5 == 8) {

      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);

      local_d8 = local_728;

      if ((uVar6 & 1) != 0) {

        bVar1 = true;

        local_658 = local_728;

        if (local_728 < 0.0) {

          local_658 = 0.0;

        }

        local_d8 = local_658;

        _CGRectGetMaxX(dVar7,dVar13,dVar15,dVar17);

        dStack_58 = (double)_CGRectGetMidY(dVar7,dVar13,dVar15,dVar17);

        dStack_48 = in_d2 / dVar9;

        dStack_58 = dStack_58 - dStack_48 * 0.5;

      }

      dVar10 = dVar15 - local_d8;

      local_670 = dVar17;

      if (dVar17 < dVar10) {

        local_670 = dVar10;

        dVar10 = dVar17;

      }

      if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_670) {

        local_60 = dVar7 + local_d8;

        local_50 = dVar15 - local_d8;

      }

      bVar3 = true;

    }

  }

  dStack_478 = 42.0;

  local_480 = 42.0;

  local_490 = (double)_CGRectGetWidth(dVar8,dVar14,dVar16,dVar18);

  dVar10 = dVar14;

  dVar11 = dVar16;

  dVar19 = dVar18;

  local_488 = (double)_CGRectGetHeight(dVar8);

  uVar6 = _objc_msgSend_aspectRatioLockEnabled(param_1,local_620);

  if (((uVar6 & 1) != 0) && (bVar1)) {

    local_488 = dVar16 / dVar9;

    local_480 = dVar9 * 42.0;

    dVar10 = dVar9;

  }

  uVar6 = _objc_msgSend_aspectRatioLockEnabled(param_1,local_620);

  if (((uVar6 & 1) != 0) && (bVar2)) {

    local_490 = dVar18 * dVar9;

    dStack_478 = 42.0 / dVar9;

    dVar10 = dVar9;

  }

  if (bVar3) {

    uVar12 = _objc_msgSend_cropOriginFrame(param_1,local_620);

    dVar10 = (double)_CGRectGetMaxX(uVar12,dVar10);

    dVar10 = dVar10 - dVar8;

    local_7d8 = dVar10;

    if (local_50 < dVar10) {

      local_7d8 = local_50;

    }

    local_50 = local_7d8;

  }

  if (bVar4) {

    uVar12 = _objc_msgSend_cropOriginFrame(param_1,local_620);

    local_7e0 = (double)_CGRectGetMaxY(uVar12,dVar10,dVar11,dVar19);

    local_7e0 = local_7e0 - dVar14;

    if (dStack_48 < local_7e0) {

      local_7e0 = dStack_48;

    }

    dStack_48 = local_7e0;

  }

  if (local_480 <= local_50) {

    local_7e8 = local_50;

  }

  else {

    local_7e8 = local_480;

  }

  if (dStack_478 <= dStack_48) {

    local_7f0 = dStack_48;

  }

  else {

    local_7f0 = dStack_478;

  }

  if (local_490 <= local_7e8) {

    local_7f8 = local_490;

  }

  else {

    local_7f8 = local_7e8;

  }

  if (local_488 <= local_7f0) {

    local_800 = local_488;

  }

  else {

    local_800 = local_7f0;

  }

  local_808 = (double)_CGRectGetMinX(dVar8,dVar14,dVar16,dVar18);

  if (local_808 <= local_60) {

    local_808 = local_60;

  }

  local_810 = (double)_CGRectGetMaxX(dVar8,dVar14,dVar16,dVar18);

  local_810 = local_810 - local_480;

  if (local_808 < local_810) {

    local_810 = local_808;

  }

  local_60 = local_810;

  local_818 = (double)_CGRectGetMinY(dVar8,dVar14,dVar16,dVar18);

  if (local_818 <= dStack_58) {

    local_818 = dStack_58;

  }

  local_820 = (double)_CGRectGetMaxY(dVar8,dVar14,dVar16,dVar18);

  local_820 = local_820 - dStack_478;

  if (local_818 < local_820) {

    local_820 = local_818;

  }

  dStack_58 = local_820;

  if ((bVar3) && (local_7f8 <= local_480 + 1.1920928955078125e-07)) {

    local_60 = (double)_CGRectGetMaxX(dVar7,dVar13,dVar15,dVar17);

    local_60 = local_60 - local_480;

  }

  if ((bVar4) && (local_800 <= dStack_478 + 1.1920928955078125e-07)) {

    dStack_58 = (double)_CGRectGetMaxY(dVar7,dVar13,dVar15,dVar17);

    dStack_58 = dStack_58 - dStack_478;

  }

  _objc_msgSend_setCropBoxFrame_(local_60,dStack_58,local_7f8,local_800,param_1,local_620);

  _objc_msgSend_checkForCanReset(param_1,local_620);

  return;

}






// ---- [d6] startResetTimer @0xb5094 ----
// CALLERS: ___22-[WCMTOCropView_setup]_block_invoke.2, gridPanGestureRecognized:, ___32-[WCMTOCropView_startResetTimer]_block_invoke, handleScrollViewTouchCancellation, scrollViewDidEndDecelerating:, scrollViewDidEndZooming:withView:atScale:, scrollViewDidEndDragging:willDecelerate:, _objc_msgSend$startResetTimer
// CALLEES: cropAdjustingDelay, resetTimer, setResetTimer:


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::startResetTimer(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 local_88;

  undefined *local_60;

  undefined4 local_58;

  undefined4 local_54;

  code *local_50;

  undefined *local_48;

  undefined1 auStack_40 [24];

  undefined1 auStack_28 [8];

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSend_resetTimer(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar1 == 0) {

    _objc_initWeak(auStack_28,local_18);

    uVar2 = _objc_msgSend_cropAdjustingDelay(local_18,local_88);

    local_60 = PTR___NSConcreteStackBlock_001104f0;

    local_58 = 0xc2000000;

    local_54 = 0;

    local_50 = ___32__WCMTOCropView_startResetTimer__block_invoke;

    local_48 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;

    _objc_copyWeak(auStack_40,auStack_28);

    uVar2 = _objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_

                      (uVar2,&_OBJC_CLASS___NSTimer,local_88,0,&local_60);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    _objc_msgSend_setResetTimer_(local_18,local_88);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_destroyWeak(auStack_40);

    _objc_destroyWeak(auStack_28);

  }

  return;

}






// ---- [d6] cropEdgeForPoint: @0xb54f4 ----
// CALLERS: gridPanGestureRecognized:, _objc_msgSend$cropEdgeForPoint:
// CALLEES: cropBoxFrame


/* Function Stack Size: 0x20 bytes */



long_long WCMTOCropView::cropEdgeForPoint_(ID param_1,SEL param_2,CGPoint param_3)



{

  ulong uVar1;

  double dVar2;

  undefined8 uVar3;

  double dVar4;

  double dVar5;

  undefined8 uVar6;

  double dVar7;

  double dVar8;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_28;

  

  dVar7 = param_3.field1_0x8;

  dVar2 = param_3.field0_0x0;

  dVar8 = dVar7;

  uVar3 = _objc_msgSend_cropBoxFrame(param_1);

  uVar3 = _CGRectInset(uVar3);

  uVar1 = _CGRectContainsPoint(uVar3,dVar8,0x4050000000000000,0x4050000000000000,dVar2,dVar7);

  if ((uVar1 & 1) == 0) {

    dVar4 = (double)_CGRectGetMaxX(uVar3,dVar8,in_d2,in_d3);

    uVar1 = _CGRectContainsPoint

                      (dVar4 - 64.0,dVar8,0x4050000000000000,0x4050000000000000,dVar2,dVar7);

    if ((uVar1 & 1) == 0) {

      dVar5 = (double)_CGRectGetMaxY(uVar3,dVar8,in_d2,in_d3);

      uVar1 = _CGRectContainsPoint

                        (uVar3,dVar5 - 64.0,0x4050000000000000,0x4050000000000000,dVar2,dVar7);

      if ((uVar1 & 1) == 0) {

        uVar1 = _CGRectContainsPoint

                          (dVar4 - 64.0,dVar5 - 64.0,0x4050000000000000,0x4050000000000000,dVar2,

                           dVar7);

        if ((uVar1 & 1) == 0) {

          uVar6 = _CGRectGetWidth(uVar3,dVar8,in_d2,in_d3);

          uVar1 = _CGRectContainsPoint(uVar3,dVar8,uVar6,0x4050000000000000,dVar2,dVar7);

          if ((uVar1 & 1) == 0) {

            dVar4 = (double)_CGRectGetMaxY(uVar3,dVar8,in_d2,in_d3);

            uVar1 = _CGRectContainsPoint(uVar3,dVar4 - 64.0,uVar6,0x4050000000000000,dVar2,dVar7);

            if ((uVar1 & 1) == 0) {

              uVar6 = _CGRectGetHeight(uVar3,dVar8,in_d2,in_d3);

              uVar1 = _CGRectContainsPoint(uVar3,dVar8,0x4050000000000000,uVar6,dVar2,dVar7);

              if ((uVar1 & 1) == 0) {

                dVar4 = (double)_CGRectGetMaxX(uVar3,dVar8,in_d2,in_d3);

                uVar1 = _CGRectContainsPoint

                                  (dVar4 - 64.0,dVar8,0x4050000000000000,uVar6,dVar2,dVar7);

                if ((uVar1 & 1) == 0) {

                  local_28 = 0;

                }

                else {

                  local_28 = 4;

                }

              }

              else {

                local_28 = 8;

              }

            }

            else {

              local_28 = 6;

            }

          }

          else {

            local_28 = 2;

          }

        }

        else {

          local_28 = 5;

        }

      }

      else {

        local_28 = 7;

      }

    }

    else {

      local_28 = 3;

    }

  }

  else {

    local_28 = 1;

  }

  return local_28;

}






// ---- [d6] startEditing @0xb7aa8 ----
// CALLERS: ___22-[WCMTOCropView_setup]_block_invoke, gridPanGestureRecognized:, scrollViewWillBeginDragging:, scrollViewWillBeginZooming:withView:, _objc_msgSend$startEditing
// CALLEES: cancelResetTimer, setEditing:resetCropBox:animated:


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::startEditing(ID param_1,SEL param_2)



{

  undefined8 local_28;

  

  _objc_msgSend_cancelResetTimer(param_1);

  _objc_msgSend_setEditing_resetCropBox_animated_(param_1,local_28,1,0,1);

  return;

}






// ---- [d6] setTappedEdge: @0xbc240 ----
// CALLERS: gridPanGestureRecognized:, _objc_msgSend$setTappedEdge:
// CALLEES: tappedEdge


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setTappedEdge_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_tappedEdge) = param_3;

  return;

}






// ---- [d6] setCropOriginFrame: @0xbc2b0 ----
// CALLERS: gridPanGestureRecognized:, _objc_msgSend$setCropOriginFrame:
// CALLEES: cropOriginFrame


/* Function Stack Size: 0x30 bytes */



void WCMTOCropView::setCropOriginFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  double *pdVar1;

  

  pdVar1 = (double *)(param_1 + (long)_cropOriginFrame);

  pdVar1[1] = param_3.field0_0x0.field1_0x8;

  *pdVar1 = param_3.field0_0x0.field0_0x0;

  pdVar1[3] = param_3.field1_0x10.field1_0x8;

  pdVar1[2] = param_3.field1_0x10.field0_0x0;

  return;

}






// ---- [d6] panOriginPoint @0xbc2f4 ----
// CALLERS: updateCropBoxFrameWithGesturePoint:, gridPanGestureRecognized:, setPanOriginPoint:, _objc_msgSend$panOriginPoint
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGPoint WCMTOCropView::panOriginPoint(ID param_1,SEL param_2)



{

  return *(CGPoint *)(param_1 + (long)_panOriginPoint);

}






// ---- [d6] setPanOriginPoint: @0xbc324 ----
// CALLERS: gridPanGestureRecognized:, _objc_msgSend$setPanOriginPoint:
// CALLEES: panOriginPoint


/* Function Stack Size: 0x20 bytes */



void WCMTOCropView::setPanOriginPoint_(ID param_1,SEL param_2,CGPoint param_3)



{

  long lVar1;

  

  lVar1 = (long)_panOriginPoint;

  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;

  *(double *)(param_1 + lVar1) = param_3.field0_0x0;

  return;

}






// ---- [d6] cropBoxResizeEnabled @0xbba1c ----
// CALLERS: setCropBoxResizeEnabled:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::cropBoxResizeEnabled(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_cropBoxResizeEnabled) & 1;

}






// ---- [d6] matchForegroundToBackground @0xb2298 ----
// CALLERS: layoutInitialImage, performRelayoutForRotation, scrollViewDidScroll:, scrollViewDidZoom:, setCropBoxFrame:, moveCroppedContentToCenterAnimated:, ___52-[WCMTOCropView_moveCroppedContentToCenterAnimated:]_block_invoke, rotateImageNinetyDegreesAnimated:clockwise:completion:
// CALLEES: foregroundContainerView, backgroundContainerView, foregroundImageView, disableForgroundMatching, setFrame:


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::matchForegroundToBackground(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_b0;

  

  uVar1 = _objc_msgSend_disableForgroundMatching(param_1);

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_backgroundContainerView(param_1,local_b0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_superview(uVar2,local_b0);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_backgroundContainerView(param_1,local_b0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar6 = _objc_msgSend_frame(uVar4,local_b0);

    _objc_msgSend_foregroundContainerView(param_1,local_b0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar7 = _objc_msgSend_convertRect_toView_(uVar6,uVar3,local_b0);

    _objc_msgSend_foregroundImageView(param_1,local_b0);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(uVar7,in_d1,in_d2,in_d3,uVar6,local_b0);

    (*(code *)PTR__objc_release_00110458)(uVar6);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- [d6] updateScrollViewMaximumZoomScale @0xbaf78 ----
// CALLERS: layoutInitialImage, performRelayoutForRotation, setCropBoxFrame:, rotateImageNinetyDegreesAnimated:clockwise:completion:, _objc_msgSend$updateScrollViewMaximumZoomScale
// CALLEES: setMaximumZoomScale:, scrollView, baseMaximumZoomScale


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::updateScrollViewMaximumZoomScale(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  double dVar2;

  double local_58;

  undefined8 local_40;

  

  _objc_msgSend_scrollView(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_58 = (double)_objc_msgSend_minimumZoomScale(uVar1,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  dVar2 = (double)_objc_msgSend_baseMaximumZoomScale(param_1,local_40);

  if (local_58 < dVar2) {

    local_58 = dVar2;

  }

  _objc_msgSend_scrollView(param_1,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMaximumZoomScale_(local_58,uVar1,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d6] contentBounds @0xbb380 ----
// CALLERS: layoutInitialImage, prepareforRotation, performRelayoutForRotation, updateCropBoxFrameWithGesturePoint:, updateToImageCropFrame:, setCropBoxFrame:, moveCroppedContentToCenterAnimated:, setAspectRatio:animated:
// CALLEES: cropView, cropRegionInsets, cropViewPadding


/* Function Stack Size: 0x10 bytes */



CGRect __thiscall WCMTOCropView::contentBounds(WCMTOCropView *this,ID param_1,SEL param_2)



{

  CGRect CVar1;

  double dVar2;

  double dVar3;

  double dVar4;

  undefined8 uVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double in_d1;

  double in_d3;

  undefined8 local_178;

  

  dVar2 = (double)_objc_msgSend_cropViewPadding(this);

  _objc_msgSend_cropRegionInsets(this,local_178);

  dVar3 = (double)_objc_msgSend_cropViewPadding(this,local_178);

  dVar4 = (double)_objc_msgSend_cropRegionInsets(this,local_178);

  dVar3 = dVar3 + dVar4;

  uVar5 = _objc_msgSend_frame(this,local_178);

  dVar6 = (double)_CGRectGetWidth(uVar5);

  dVar7 = (double)_objc_msgSend_cropViewPadding(this,local_178);

  _objc_msgSend_cropRegionInsets(this,local_178);

  _objc_msgSend_cropRegionInsets(this,local_178);

  uVar5 = _objc_msgSend_frame(this,local_178);

  dVar8 = (double)_CGRectGetHeight(uVar5);

  dVar9 = (double)_objc_msgSend_cropViewPadding(this,local_178);

  dVar10 = (double)_objc_msgSend_cropRegionInsets(this,local_178);

  dVar9 = dVar10 + dVar9 * 2.0;

  _objc_msgSend_cropRegionInsets(this,local_178);

  CVar1.field0_0x0.field1_0x8 = dVar3;

  CVar1.field0_0x0.field0_0x0 = dVar2 + in_d1;

  CVar1.field1_0x10.field0_0x0 = dVar6 - (dVar4 + dVar7 * 2.0 + in_d3);

  CVar1.field1_0x10.field1_0x8 = dVar8 - (dVar9 + dVar10);

  return CVar1;

}






// ---- [d6] setEditing:resetCropBox:animated: @0xb7af4 ----
// CALLERS: resetLayoutToDefaultAnimated:, timerTriggered, setEditing:, startEditing, rotateImageNinetyDegreesAnimated:clockwise:completion:, _objc_msgSend$setEditing:resetCropBox:animated:
// CALLEES: angle, croppingStyle, angle, angle, toggleTranslucencyViewVisible:, moveCroppedContentToCenterAnimated:, captureStateForImageRotation, croppingStyle, gridOverlayView, angle


/* Function Stack Size: 0x1c bytes */



void WCMTOCropView::setEditing_resetCropBox_animated_

               (ID param_1,SEL param_2,bool param_3,bool param_4,bool param_5)



{

  double dVar1;

  double dVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  float fVar6;

  undefined8 local_70;

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined8 local_48;

  byte local_40;

  double local_38;

  double local_30;

  byte local_24;

  byte local_23;

  byte local_22;

  byte local_21;

  SEL local_20;

  ID local_18;

  

  local_21 = (byte)param_3;

  local_22 = (byte)param_4;

  local_23 = (byte)param_5;

  if ((param_3 & 1) != (*(byte *)(param_1 + (long)_editing) & 1)) {

    *(byte *)(param_1 + (long)_editing) = local_21 & 1;

    local_24 = (*(byte *)(param_1 + (long)_editing) ^ 1) & 1;

    local_20 = param_2;

    local_18 = param_1;

    uVar3 = _objc_msgSend_alwaysShowCroppingGrid(param_1,local_70);

    if ((uVar3 & 1) != 0) {

      local_24 = 0;

    }

    _objc_msgSend_gridOverlayView(local_18,local_70);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setGridHidden_animated_(uVar4,local_70,local_24 & 1,local_23 & 1);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    if ((local_22 & 1) != 0) {

      _objc_msgSend_moveCroppedContentToCenterAnimated_(local_18,local_70,local_23 & 1);

      _objc_msgSend_captureStateForImageRotation(local_18,local_70);

      uVar4 = _objc_msgSend_angle(local_18,local_70);

      _objc_msgSend_setCropBoxLastEditedAngle_(local_18,local_70,uVar4);

    }

    if ((local_23 & 1) == 0) {

      _objc_msgSend_toggleTranslucencyViewVisible_(local_18,local_70,(local_21 ^ 1) & 1);

    }

    else {

      fVar6 = 0.05;

      if ((local_21 & 1) == 0) {

        fVar6 = 0.35;

      }

      local_30 = (double)fVar6;

      fVar6 = 0.0;

      if ((local_21 & 1) == 0) {

        fVar6 = 0.35;

      }

      local_38 = (double)fVar6;

      lVar5 = _objc_msgSend_croppingStyle(local_21 & 1,local_18,local_70);

      dVar2 = local_30;

      if (lVar5 == 1) {

        local_38 = 0.0;

      }

      dVar1 = local_38;

      local_68 = PTR___NSConcreteStackBlock_001104f0;

      local_60 = 0xc2000000;

      local_5c = 0;

      local_58 = ___50__WCMTOCropView_setEditing_resetCropBox_animated___block_invoke;

      local_50 = &___block_descriptor_41_e8_32s_e5_v8__0l;

      local_48 = (*(code *)PTR__objc_retain_00110460)(local_18);

      local_40 = local_21 & 1;

      _objc_msgSend_animateKeyframesWithDuration_delay_options_animations_completion_

                (dVar2,dVar1,&_OBJC_CLASS___UIView,local_70,0,&local_68);

      _objc_storeStrong(&local_48,0);

    }

  }

  return;

}






// ---- [d6] setAspectRatio:animated: @0xb8aac ----
// CALLERS: setAspectRatioPreset:animated:, setAspectRatio:, ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke.23, _objc_msgSend$setAspectRatio:animated:
// CALLEES: image, image, angle, image, image, angle, image, angle, size, contentBounds


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x24 bytes */



void WCMTOCropView::setAspectRatio_animated_(ID param_1,SEL param_2,CGSize param_3,bool param_4)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  double dVar5;

  double dVar6;

  double in_d2;

  double dVar7;

  double in_d3;

  undefined8 local_228;

  undefined8 local_1e8;

  double local_1e0;

  double dStack_1d8;

  undefined8 local_1d0;

  double dStack_1c8;

  double local_1c0;

  double dStack_1b8;

  byte local_1b0;

  long local_1a8;

  double local_1a0;

  double dStack_198;

  double local_190;

  double dStack_188;

  double local_180;

  double local_178;

  double local_170;

  undefined8 local_168;

  double local_160;

  double local_158;

  double local_148;

  double local_140;

  double local_138;

  double local_130;

  double local_128;

  undefined8 local_120;

  undefined8 local_118;

  double local_110;

  double local_100;

  double local_f8;

  undefined8 local_f0;

  double local_e8;

  double local_e0;

  double local_d8;

  byte local_c9;

  double local_c8;

  double dStack_c0;

  undefined8 local_b8;

  double dStack_b0;

  double local_a8;

  double dStack_a0;

  undefined8 local_98;

  double local_90;

  double local_88;

  double local_80;

  undefined8 local_78;

  double local_70;

  double local_68;

  double local_60;

  double local_58;

  double dStack_50;

  byte local_42;

  byte local_41;

  SEL local_40;

  ID local_38;

  double local_30;

  double dStack_28;

  

  dStack_28 = param_3.field1_0x8;

  local_30 = param_3.field0_0x0;

  local_41 = (byte)param_4;

  lVar4 = (long)_aspectRatio;

  ((double *)(param_1 + lVar4))[1] = dStack_28;

  *(double *)(param_1 + lVar4) = local_30;

  local_40 = param_2;

  local_38 = param_1;

  uVar1 = _objc_msgSend_initialSetupPerformed(param_1);

  if ((uVar1 & 1) != 0) {

    local_42 = 0;

    if ((local_30 < 1.1920928955078125e-07) ||

       (dVar6 = 1.1920928955078125e-07, dStack_28 < 1.1920928955078125e-07)) {

      dVar6 = 1.1920928955078125e-07;

      local_68 = (double)_objc_msgSend_imageSize(local_38,local_228);

      local_60 = dVar6;

      local_58 = local_68;

      local_78 = _objc_msgSend_imageSize(local_38,local_228);

      local_30 = local_58;

      local_42 = 1;

      dStack_28 = dVar6;

      local_70 = dVar6;

      dStack_50 = dVar6;

    }

    local_98 = _objc_msgSend_contentBounds(local_38,local_228);

    local_90 = dVar6;

    local_88 = in_d2;

    local_80 = in_d3;

    local_b8 = _objc_msgSend_cropBoxFrame(local_38,local_228);

    dStack_b0 = dVar6;

    local_a8 = in_d2;

    dStack_a0 = in_d3;

    _objc_msgSend_scrollView(local_38,local_228);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_c8 = (double)_objc_msgSend_contentOffset(uVar2,local_228);

    dStack_c0 = dVar6;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    local_c9 = 0;

    if (((long)local_30 == 1) && ((long)dStack_28 == 1)) {

      _objc_msgSend_image(local_38,local_228);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      dVar5 = (double)_objc_msgSend_size(uVar2,local_228);

      local_e0 = dVar5;

      local_d8 = dVar6;

      _objc_msgSend_image(local_38,local_228);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      local_f0 = _objc_msgSend_size(uVar3,local_228);

      local_c9 = dVar6 < dVar5;

      local_e8 = dVar6;

      (*(code *)PTR__objc_release_00110458)(uVar3);

      (*(code *)PTR__objc_release_00110458)(uVar2);

    }

    else {

      local_c9 = local_30 < dStack_28;

    }

    if ((local_c9 & 1) == 0) {

      local_140 = (double)(float)(int)(local_a8 * (dStack_28 / local_30));

      local_148 = dStack_a0 - local_140;

      dVar6 = dStack_c0 + local_148 * 0.5;

      dVar5 = 1.1920928955078125e-07;

      dStack_a0 = local_140;

      if (local_148 < 1.1920928955078125e-07) {

        dVar7 = dStack_c0;

        dStack_c0 = dVar6;

        local_168 = _objc_msgSend_contentBounds(local_38,local_228);

        local_160 = dVar5;

        local_158 = dVar7;

        dVar6 = dStack_c0;

        dStack_b0 = dVar5;

      }

      dStack_c0 = dVar6;

      local_170 = (double)_CGRectGetHeight(local_98,local_90,local_88,local_80);

      if (local_170 < local_140) {

        local_178 = local_170 / local_140;

        local_180 = local_a8 * local_178;

        local_148 = local_a8 - local_180;

        local_c8 = local_c8 + local_148 * 0.5;

        local_42 = 1;

        local_a8 = local_180;

        dStack_a0 = local_170;

      }

    }

    else {

      local_f8 = (double)(float)(int)(dStack_a0 * (local_30 / dStack_28));

      local_100 = local_a8 - local_f8;

      dVar6 = local_c8 + local_100 * 0.5;

      uVar2 = 0x3e80000000000000;

      local_a8 = local_f8;

      if (local_100 < 1.1920928955078125e-07) {

        dVar5 = local_c8;

        local_c8 = dVar6;

        local_120 = _objc_msgSend_contentBounds(local_38,local_228);

        local_118 = uVar2;

        local_110 = dVar5;

        dVar6 = local_c8;

        local_b8 = local_120;

      }

      local_c8 = dVar6;

      local_128 = (double)_CGRectGetWidth(local_98,local_90,local_88,local_80);

      if (local_128 < local_f8) {

        local_130 = local_128 / local_f8;

        local_138 = dStack_a0 * local_130;

        local_100 = dStack_a0 - local_138;

        dStack_c0 = dStack_c0 + local_100 * 0.5;

        local_42 = 1;

        local_a8 = local_128;

        dStack_a0 = local_138;

      }

    }

    dStack_198 = dStack_a0;

    local_1a0 = local_a8;

    local_190 = local_1a0;

    dStack_188 = dStack_198;

    _objc_msgSend_setCropBoxLastEditedSize_(local_a8,dStack_a0,local_38,local_228);

    uVar2 = _objc_msgSend_angle(local_38,local_228);

    _objc_msgSend_setCropBoxLastEditedAngle_(local_38,local_228,uVar2);

    local_1e8 = (*(code *)PTR__objc_retain_00110460)(local_38);

    dStack_1d8 = dStack_c0;

    local_1e0 = local_c8;

    dStack_1c8 = dStack_b0;

    local_1d0 = local_b8;

    dStack_1b8 = dStack_a0;

    local_1c0 = local_a8;

    local_1b0 = local_42 & 1;

    local_1a8 = _objc_retainBlock();

    if ((local_41 & 1) == 0) {

      (**(code **)(local_1a8 + 0x10))();

    }

    else {

      _objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_

                (0x3fe0000000000000,0,0x3ff0000000000000,0x3fe6666660000000,&_OBJC_CLASS___UIView,

                 local_228,4,local_1a8,0);

    }

    _objc_storeStrong(&local_1a8);

    _objc_storeStrong(&local_1e8,0);

  }

  return;

}






// ---- [d6] cropViewPadding @0xbbd88 ----
// CALLERS: updateCropBoxFrameWithGesturePoint:, contentBounds, setCropViewPadding:, _objc_msgSend$cropViewPadding
// CALLEES: cropView


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::cropViewPadding(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_cropViewPadding);

}






// ---- [d6] cropAdjustingDelay @0xbbdd8 ----
// CALLERS: startResetTimer, setCropAdjustingDelay:, _objc_msgSend$cropAdjustingDelay
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::cropAdjustingDelay(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_cropAdjustingDelay);

}






// ---- [d6] applyInitialCroppedImageFrame @0xbc1c0 ----
// CALLERS: setApplyInitialCroppedImageFrame:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::applyInitialCroppedImageFrame(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_applyInitialCroppedImageFrame) & 1;

}






// ---- [d6] restoreAngle @0xbc890 ----
// CALLERS: performInitialSetup, setRestoreAngle:, _objc_msgSend$restoreAngle
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropView::restoreAngle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_restoreAngle);

}






// ---- [d6] restoreImageCropFrame @0xbc8e0 ----
// CALLERS: performInitialSetup, setRestoreImageCropFrame:, _objc_msgSend$restoreImageCropFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropView::restoreImageCropFrame(ID param_1,SEL param_2)



{

  return *(CGRect *)(param_1 + (long)_restoreImageCropFrame);

}






// ---- [d6] setGridHidden:animated: @0xbdc44 ----
// CALLERS: longPressGestureRecognized:, setAlwaysShowCroppingGrid:, setEditing:resetCropBox:animated:, setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:, setGridHidden:, _objc_msgSend$setGridHidden:animated:
// CALLEES: gridHidden, horizontalGridLines, verticalGridLines


/* Function Stack Size: 0x18 bytes */



void WCMTOCropOverlayView::setGridHidden_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)



{

  undefined8 uVar1;

  long lVar2;

  float fVar3;

  ulong local_270;

  ulong local_268;

  ulong local_230;

  ulong local_228;

  undefined8 local_220;

  undefined *local_200;

  undefined4 local_1f8;

  undefined4 local_1f4;

  code *local_1f0;

  undefined *local_1e8;

  undefined8 local_1e0;

  byte local_1d8;

  undefined1 auStack_1d0 [8];

  long local_1c8;

  long *local_1c0;

  undefined8 local_190;

  undefined1 auStack_188 [8];

  long local_180;

  long *local_178;

  undefined8 local_148;

  undefined1 local_13a;

  byte local_139;

  SEL local_138;

  ID local_130;

  undefined1 auStack_128 [128];

  undefined1 auStack_a8 [128];

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_139 = (byte)param_3;

  local_13a = (undefined1)param_4;

  *(byte *)(param_1 + (long)_gridHidden) = local_139 & 1;

  local_138 = param_2;

  local_130 = param_1;

  if ((param_4 & 1) == 0) {

    _memset(auStack_188,0,0x40);

    _objc_msgSend_horizontalGridLines(local_130,local_220);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar1,local_220,auStack_188,auStack_a8,0x10);

    if (local_228 != 0) {

      lVar2 = *local_178;

      local_230 = 0;

      do {

        do {

          if (*local_178 - lVar2 != 0) {

            _objc_enumerationMutation(*local_178 - lVar2,uVar1);

          }

          local_148 = *(undefined8 *)(local_180 + local_230 * 8);

          fVar3 = 0.0;

          if ((local_139 & 1) == 0) {

            fVar3 = 1.0;

          }

          _objc_msgSend_setAlpha_(local_139 & 1,(double)fVar3,local_148,local_220);

          local_230 = local_230 + 1;

        } while (local_230 < local_228);

        local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar1,local_220,auStack_188,auStack_a8,0x10);

        local_230 = 0;

      } while (local_228 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _memset(auStack_1d0,0,0x40);

    _objc_msgSend_verticalGridLines(local_130,local_220);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_268 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                          (uVar1,local_220,auStack_1d0,auStack_128,0x10);

    if (local_268 != 0) {

      lVar2 = *local_1c0;

      local_270 = 0;

      do {

        do {

          if (*local_1c0 - lVar2 != 0) {

            _objc_enumerationMutation(*local_1c0 - lVar2,uVar1);

          }

          local_190 = *(undefined8 *)(local_1c8 + local_270 * 8);

          fVar3 = 0.0;

          if ((local_139 & 1) == 0) {

            fVar3 = 1.0;

          }

          _objc_msgSend_setAlpha_(local_139 & 1,(double)fVar3,local_190,local_220);

          local_270 = local_270 + 1;

        } while (local_270 < local_268);

        local_268 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar1,local_220,auStack_1d0,auStack_128,0x10);

        local_270 = 0;

      } while (local_268 != 0);

    }

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  else {

    fVar3 = 0.35;

    if ((param_3 & 1) == 0) {

      fVar3 = 0.2;

    }

    local_200 = PTR___NSConcreteStackBlock_001104f0;

    local_1f8 = 0xc2000000;

    local_1f4 = 0;

    local_1f0 = ___47__WCMTOCropOverlayView_setGridHidden_animated___block_invoke;

    local_1e8 = &___block_descriptor_41_e8_32s_e5_v8__0l;

    local_1e0 = (*(code *)PTR__objc_retain_00110460)(param_1);

    local_1d8 = local_139 & 1;

    _objc_msgSend_animateWithDuration_animations_

              ((double)fVar3,&_OBJC_CLASS___UIView,local_220,&local_200);

    _objc_storeStrong(&local_1e0,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d6] createNewLineView @0xbe7b0 ----
// CALLERS: ___29-[WCMTOCropOverlayView_setup]_block_invoke, setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:, _objc_msgSend$createNewLineView
// CALLEES: initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:, initWithFrame:


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::createNewLineView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_40;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  uVar1 = _objc_alloc(&_OBJC_CLASS___UIView);

  local_28 = _objc_msgSend_initWithFrame_

                       (*(undefined8 *)PTR__CGRectZero_001108d8,

                        *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),

                        *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),

                        *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),uVar1,local_40);

  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_40);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(local_28,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_addSubview_(local_18,local_40,local_28);

  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_28);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d6] gridHidden @0xbe87c ----
// CALLERS: setGridHidden:animated:, setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropOverlayView::gridHidden(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_gridHidden) & 1;

}






// ---- [d6] displayHorizontalGridLines @0xbe8a8 ----
// CALLERS: setDisplayHorizontalGridLines:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropOverlayView::displayHorizontalGridLines(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_displayHorizontalGridLines) & 1;

}






// ---- [d6] setHorizontalGridLines: @0xbe924 ----
// CALLERS: setDisplayHorizontalGridLines:, _objc_msgSend$setHorizontalGridLines:
// CALLEES: horizontalGridLines


/* Function Stack Size: 0x18 bytes */



void WCMTOCropOverlayView::setHorizontalGridLines_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_horizontalGridLines,param_3);

  return;

}






// ---- [d6] displayVerticalGridLines @0xbe8d4 ----
// CALLERS: setDisplayVerticalGridLines:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropOverlayView::displayVerticalGridLines(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_displayVerticalGridLines) & 1;

}






// ---- [d6] setVerticalGridLines: @0xbe984 ----
// CALLERS: setDisplayVerticalGridLines:, _objc_msgSend$setVerticalGridLines:
// CALLEES: verticalGridLines


/* Function Stack Size: 0x18 bytes */



void WCMTOCropOverlayView::setVerticalGridLines_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_verticalGridLines,param_3);

  return;

}






// ---- [d6] showOnlyIcons @0xc5530 ----
// CALLERS: showOnlyIcons, _objc_msgSend$showOnlyIcons
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropToolbar::showOnlyIcons(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_showOnlyIcons) & 1;

}






// ---- [d6] reverseContentLayout @0xc5a40 ----
// CALLERS: reverseContentLayout, layoutSubviews, _objc_msgSend$reverseContentLayout
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropToolbar::reverseContentLayout(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_reverseContentLayout) & 1;

}






// ---- [d6] cancelButtonTapped @0xa7ccc ----
// CALLERS: ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke.9, ___45-[WCMTOCropViewController_cancelButtonTapped]_block_invoke, buttonTapped:, setCancelButtonTapped:, .cxx_destruct, _objc_msgSend$cancelButtonTapped
// CALLEES: _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT, dismissCropViewController, toolbar, showCancelConfirmationDialog, visibleCancelButton


/* Function Stack Size: 0x10 bytes */



void WCMTOCropViewController::cancelButtonTapped(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_a8;

  undefined8 local_a0 [3];

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined1 auStack_68 [8];

  undefined8 local_60;

  undefined1 auStack_58 [8];

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  uVar1 = _objc_msgSend_showCancelConfirmationDialog(param_1);

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_dismissCropViewController(local_28,local_a8);

  }

  else {

    _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_28);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_alertControllerWithTitle_message_preferredStyle_

              (&_OBJC_CLASS___UIAlertController,local_a8,0,0,0);

    local_40 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_toolbar(local_28,local_a8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_visibleCancelButton(uVar2,local_a8);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_popoverPresentationController(local_40,local_a8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setSourceView_(uVar4,local_a8,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_localizedStringForKey_value_table_(local_38,local_a8,&cf_DeleteChanges);

    local_48 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_localizedStringForKey_value_table_

              (local_38,local_a8,&cf_Cancel,&cf___,&cf_WCMTOCropViewControllerLocalizable);

    local_50 = _objc_retainAutoreleasedReturnValue();

    _objc_initWeak(auStack_58,local_28);

    uVar2 = local_48;

    local_88 = PTR___NSConcreteStackBlock_001104f0;

    local_80 = 0xc2000000;

    local_7c = 0;

    local_78 = ___45__WCMTOCropViewController_cancelButtonTapped__block_invoke;

    local_70 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;

    _objc_copyWeak(auStack_68,auStack_58);

    uVar2 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_a8,uVar2,2,&local_88);

    local_60 = _objc_retainAutoreleasedReturnValue(uVar2);

    _objc_msgSend_addAction_(local_40,local_a8,local_60);

    uVar2 = _objc_msgSend_actionWithTitle_style_handler_

                      (&_OBJC_CLASS___UIAlertAction,local_a8,local_50,1,0);

    local_a0[0] = _objc_retainAutoreleasedReturnValue(uVar2);

    _objc_msgSend_addAction_(local_40,local_a8,local_a0[0]);

    uVar2 = _objc_loadWeakRetained(auStack_58);

    _objc_msgSend_presentViewController_animated_completion_(uVar2,local_a8,local_40,1,0);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_storeStrong(local_a0);

    _objc_storeStrong(&local_60,0);

    _objc_destroyWeak(auStack_68);

    _objc_destroyWeak(auStack_58);

    _objc_storeStrong(&local_50,0);

    _objc_storeStrong(&local_48,0);

    _objc_storeStrong(&local_40,0);

    _objc_storeStrong(&local_38,0);

  }

  return;

}






// ---- [d6] doneButtonTapped @0xa8358 ----
// CALLERS: ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke_2, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.64, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.65, commitCurrentCrop, buttonTapped:, setDoneButtonTapped:
// CALLEES: presenting, cropViewController:didCropToImage:withRect:angle:, delegate, delegate, image, image, setDoneButtonsEnabled:, cropView, toolbar, angle


/* Function Stack Size: 0x10 bytes */



void WCMTOCropViewController::doneButtonTapped(ID param_1,SEL param_2)



{

  byte bVar1;

  uint uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  dispatch_time_t dVar9;

  undefined8 uVar10;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 uVar11;

  uint local_524;

  undefined8 local_2a0;

  undefined *local_258;

  undefined4 local_250;

  undefined4 local_24c;

  code *local_248;

  undefined *local_240;

  undefined8 local_238;

  undefined8 local_230;

  undefined8 local_228;

  undefined8 uStack_220;

  undefined8 local_218;

  undefined8 uStack_210;

  long local_208;

  byte local_200;

  byte local_1ff;

  byte local_1f9;

  undefined8 local_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 local_1d0;

  undefined *local_1c8;

  undefined4 local_1c0;

  undefined4 local_1bc;

  code *local_1b8;

  undefined *local_1b0;

  undefined8 local_1a8;

  undefined8 local_1a0;

  undefined8 local_198;

  undefined8 uStack_190;

  undefined8 local_188;

  undefined8 uStack_180;

  long local_178;

  byte local_170;

  byte local_16f;

  undefined8 local_168;

  byte local_15a;

  byte local_159;

  byte local_158;

  byte local_157;

  byte local_156;

  byte local_155;

  undefined *local_148;

  undefined4 local_140;

  undefined4 local_13c;

  code *local_138;

  undefined *local_130;

  undefined8 local_128;

  undefined1 auStack_120 [8];

  undefined1 auStack_118 [48];

  undefined8 local_e8;

  undefined8 uStack_e0;

  undefined8 local_d8;

  undefined8 uStack_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined *local_98;

  undefined4 local_90;

  undefined4 local_8c;

  code *local_88;

  undefined *local_80;

  undefined8 local_78;

  long local_70;

  undefined8 local_68;

  undefined8 uStack_60;

  undefined8 local_58;

  undefined8 uStack_50;

  SEL local_48;

  ID local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_48 = param_2;

  local_40 = param_1;

  uVar3 = _objc_msgSend_cropView(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

  local_68 = _objc_msgSend_imageCropFrame(uVar3,local_2a0);

  uStack_60 = in_d1;

  local_58 = in_d2;

  uStack_50 = in_d3;

  (*(code *)PTR__objc_release_00110458)(uVar3);

  uVar3 = _objc_msgSend_cropView(local_40,local_2a0);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

  lVar4 = _objc_msgSend_angle(uVar3,local_2a0);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  local_70 = lVar4;

  uVar3 = _objc_msgSend_onDidTapDone(local_40,local_2a0);

  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

  (*(code *)PTR__objc_release_00110458)();

  if (lVar4 != 0) {

    _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);

    uVar3 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);

    local_98 = PTR___NSConcreteStackBlock_001104f0;

    local_90 = 0xc2000000;

    local_8c = 0;

    local_88 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke;

    local_80 = &___block_descriptor_40_e8_32s_e5_v8__0l;

    local_78 = (*(code *)PTR__objc_retain_00110460)(local_40);

    _dispatch_async(uVar3,&local_98);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_storeStrong(&local_78,0);

  }

  uVar2 = _objc_msgSend_showActivitySheetOnDone(local_40,local_2a0);

  if ((uVar2 & 1) == 0) {

    _objc_msgSend_setDoneButtonsEnabled_(local_40,local_2a0,0);

    local_155 = 0;

    local_156 = 0;

    uVar3 = _objc_msgSend_delegate(local_40,local_2a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar2 = _objc_opt_respondsToSelector(uVar3,"cropViewController:didCropImageToRect:angle:");

    (*(code *)PTR__objc_release_00110458)(uVar3);

    if ((uVar2 & 1) != 0) {

      uVar3 = _objc_msgSend_delegate(local_40,local_2a0);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      in_d2 = uStack_60;

      _objc_msgSend_cropViewController_didCropImageToRect_angle_

                (local_68,uStack_60,local_58,uStack_50,uVar3,local_2a0,local_40,local_70);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      local_155 = 1;

    }

    uVar3 = _objc_msgSend_onDidCropImageToRect(local_40,local_2a0);

    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    (*(code *)PTR__objc_release_00110458)();

    if (lVar4 != 0) {

      uVar3 = _objc_msgSend_onDidCropImageToRect(local_40,local_2a0);

      lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

      in_d2 = uStack_60;

      (**(code **)(lVar4 + 0x10))(local_68,uStack_60,local_58,uStack_50,lVar4,local_70);

      (*(code *)PTR__objc_release_00110458)(lVar4);

      local_155 = 1;

    }

    uVar3 = _objc_msgSend_delegate(local_40,local_2a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    bVar1 = _objc_opt_respondsToSelector

                      (uVar3,"cropViewController:didCropToCircularImage:withRect:angle:");

    (*(code *)PTR__objc_release_00110458)(uVar3);

    local_157 = bVar1 & 1;

    uVar3 = _objc_msgSend_onDidCropToCircleImage(local_40,local_2a0);

    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    (*(code *)PTR__objc_release_00110458)();

    local_158 = lVar4 != 0;

    uVar3 = _objc_msgSend_delegate(local_40,local_2a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    bVar1 = _objc_opt_respondsToSelector(uVar3,"cropViewController:didCropToImage:withRect:angle:");

    (*(code *)PTR__objc_release_00110458)(uVar3);

    local_159 = bVar1 & 1;

    uVar3 = _objc_msgSend_onDidCropToRect(local_40,local_2a0);

    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    (*(code *)PTR__objc_release_00110458)();

    local_15a = lVar4 != 0;

    lVar4 = _objc_msgSend_croppingStyle(local_40,local_2a0);

    if ((lVar4 == 1) && (((local_157 & 1) != 0 || ((local_158 & 1) != 0)))) {

      uVar3 = _objc_msgSend_image(local_40,local_2a0);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      uVar5 = _objc_msgSend_wcm_croppedImageWithFrame_angle_circularClip_

                        (local_68,uStack_60,local_58,uStack_50,uVar3,local_2a0,local_70,1);

      local_168 = _objc_retainAutoreleasedReturnValue(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      dVar9 = _dispatch_time(0,30000000);

      _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);

      uVar3 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);

      local_1c8 = PTR___NSConcreteStackBlock_001104f0;

      local_1c0 = 0xc2000000;

      local_1bc = 0;

      local_1b8 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_64;

      local_1b0 = &___block_descriptor_90_e8_32s40s_e5_v8__0l;

      local_170 = local_157 & 1;

      local_1a8 = (*(code *)PTR__objc_retain_00110460)(local_40);

      local_1a0 = (*(code *)PTR__objc_retain_00110460)(local_168);

      uStack_190 = uStack_60;

      local_198 = local_68;

      uStack_180 = uStack_50;

      local_188 = local_58;

      local_178 = local_70;

      local_16f = local_158 & 1;

      _dispatch_after(dVar9,uVar3,&local_1c8);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      local_155 = 1;

      local_156 = 1;

      _objc_storeStrong(&local_1a0,0);

      _objc_storeStrong(&local_1a8,0);

      _objc_storeStrong(&local_168,0);

    }

    else if (((local_159 & 1) != 0) || ((local_15a & 1) != 0)) {

      local_1d0 = 0;

      local_1f9 = 0;

      local_524 = 0;

      if (local_70 == 0) {

        uStack_1e8 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);

        local_1f0 = *(undefined8 *)PTR__CGPointZero_00110850;

        uVar3 = _objc_msgSend_image(local_40,local_2a0);

        local_1f8 = _objc_retainAutoreleasedReturnValue(uVar3);

        local_1f9 = 1;

        local_1e0 = _objc_msgSend_size(local_1f8,local_2a0);

        local_524 = _CGRectEqualToRect(local_68,uStack_60,local_58,uStack_50,local_1f0,uStack_1e8,

                                       local_1e0,in_d2);

      }

      if ((local_1f9 & 1) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_1f8);

      }

      if ((local_524 & 1) == 0) {

        uVar3 = _objc_msgSend_image(local_40,local_2a0);

        uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);

        uVar3 = _objc_msgSend_wcm_croppedImageWithFrame_angle_circularClip_

                          (local_68,uStack_60,local_58,uStack_50,uVar5,local_2a0,local_70,0);

        uVar10 = _objc_retainAutoreleasedReturnValue(uVar3);

        uVar3 = local_1d0;

        local_1d0 = uVar10;

        (*(code *)PTR__objc_release_00110458)(uVar3);

        (*(code *)PTR__objc_release_00110458)(uVar5);

      }

      else {

        uVar3 = _objc_msgSend_image(local_40,local_2a0);

        uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);

        uVar3 = local_1d0;

        local_1d0 = uVar5;

        (*(code *)PTR__objc_release_00110458)(uVar3);

      }

      dVar9 = _dispatch_time(0,30000000);

      _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);

      uVar3 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);

      local_258 = PTR___NSConcreteStackBlock_001104f0;

      local_250 = 0xc2000000;

      local_24c = 0;

      local_248 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_65;

      local_240 = &___block_descriptor_90_e8_32s40s_e5_v8__0l;

      local_200 = local_159 & 1;

      local_238 = (*(code *)PTR__objc_retain_00110460)(local_40);

      local_230 = (*(code *)PTR__objc_retain_00110460)(local_1d0);

      uStack_220 = uStack_60;

      local_228 = local_68;

      uStack_210 = uStack_50;

      local_218 = local_58;

      local_208 = local_70;

      local_1ff = local_15a & 1;

      _dispatch_after(dVar9,uVar3,&local_258);

      (*(code *)PTR__objc_release_00110458)(uVar3);

      local_155 = 1;

      local_156 = 1;

      _objc_storeStrong(&local_230,0);

      _objc_storeStrong(&local_238,0);

      _objc_storeStrong(&local_1d0,0);

    }

    if ((local_155 & 1) == 0) {

      uVar3 = _objc_msgSend_presentingViewController(local_40,local_2a0);

      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

      _objc_msgSend_dismissViewControllerAnimated_completion_(uVar3,local_2a0,1,0);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    else if ((local_156 & 1) == 0) {

      _objc_msgSend_setDoneButtonsEnabled_(local_40,local_2a0,1);

    }

  }

  else {

    uVar3 = _objc_alloc(&objc::class_t::WCMTOActivityCroppedImageProvider);

    uVar5 = _objc_msgSend_image(local_40,local_2a0);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    lVar4 = local_70;

    lVar6 = _objc_msgSend_croppingStyle(local_40,local_2a0);

    local_a0 = _objc_msgSend_initWithImage_cropFrame_angle_circular_

                         (lVar6 + -1,local_68,uStack_60,local_58,uStack_50,uVar3,local_2a0,uVar5,

                          lVar4,lVar6 + -1 == 0);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    uVar3 = _objc_alloc(&objc::class_t::WCMTOCroppedImageAttributes);

    lVar4 = local_70;

    uVar5 = _objc_msgSend_image(local_40,local_2a0);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    local_b8 = _objc_msgSend_size(uVar5,local_2a0);

    local_a8 = _objc_msgSend_initWithCroppedFrame_angle_originalImageSize_

                         (local_68,uVar3,local_2a0,lVar4);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    local_38 = local_a0;

    local_30 = local_a8;

    uVar3 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2a0,&local_38,2);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    local_c0 = _objc_msgSend_mutableCopy(uVar3,local_2a0);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_msgSend_activityItems(local_40,local_2a0);

    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    (*(code *)PTR__objc_release_00110458)();

    uVar3 = local_c0;

    uVar5 = uStack_60;

    uVar10 = local_58;

    uVar11 = uStack_50;

    if (lVar4 != 0) {

      uVar5 = _objc_msgSend_activityItems(local_40,local_2a0);

      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

      _objc_msgSend_addObjectsFromArray_(uVar3,local_2a0);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      uVar5 = uStack_60;

      uVar10 = local_58;

      uVar11 = uStack_50;

    }

    uVar7 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);

    uVar3 = local_c0;

    uVar8 = _objc_msgSend_applicationActivities(local_40,local_2a0);

    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);

    local_c8 = _objc_msgSend_initWithActivityItems_applicationActivities_(uVar7,local_2a0,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    uVar3 = _objc_msgSend_excludedActivityTypes(local_40,local_2a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    _objc_msgSend_setExcludedActivityTypes_(local_c8,local_2a0);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_setModalPresentationStyle_(local_c8,local_2a0,7);

    uVar3 = _objc_msgSend_toolbar(local_40,local_2a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar7 = _objc_msgSend_popoverPresentationController(local_c8,local_2a0);

    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);

    _objc_msgSend_setSourceView_(uVar7,local_2a0,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar7);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_msgSend_toolbar(local_40,local_2a0);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    local_e8 = _objc_msgSend_doneButtonFrame(uVar3,local_2a0);

    uStack_e0 = uVar5;

    local_d8 = uVar10;

    uStack_d0 = uVar11;

    uVar5 = _objc_msgSend_popoverPresentationController(local_c8,local_2a0);

    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);

    _objc_msgSend_setSourceRect_(local_e8,uStack_e0,local_d8,uStack_d0,uVar5,local_2a0);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    _objc_msgSend_presentViewController_animated_completion_(local_40,local_2a0,local_c8,1,0);

    _objc_initWeak(auStack_118,local_c8);

    local_148 = PTR___NSConcreteStackBlock_001104f0;

    local_140 = 0xc2000000;

    local_13c = 0;

    local_138 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_2;

    local_130 = &___block_descriptor_48_e8_32s40w_e45_v36__0__NSString_8B16__NSArray_20__NSError_28l

    ;

    local_128 = (*(code *)PTR__objc_retain_00110460)(local_40);

    _objc_copyWeak(auStack_120,auStack_118);

    _objc_msgSend_setCompletionWithItemsHandler_(local_c8,local_2a0,&local_148);

    _objc_destroyWeak(auStack_120);

    _objc_storeStrong(&local_128,0);

    _objc_destroyWeak(auStack_118);

    _objc_storeStrong(&local_c8,0);

    _objc_storeStrong(&local_c0,0);

    _objc_storeStrong(&local_a8,0);

    _objc_storeStrong(&local_a0,0);

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

}






// ---- [d6] cancelButtonTapped @0xc56cc ----
// CALLERS: buttonTapped:, _objc_msgSend$cancelButtonTapped
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::cancelButtonTapped(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cancelButtonTapped);

}






// ---- [d6] doneButtonTapped @0xc572c ----
// CALLERS: commitCurrentCrop, buttonTapped:, _objc_msgSend$doneButtonTapped
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::doneButtonTapped(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_doneButtonTapped);

}






// ---- [d6] rotateCounterclockwiseButtonTapped @0xc578c ----
// CALLERS: buttonTapped:, setRotateCounterclockwiseButtonTapped:, .cxx_destruct, _objc_msgSend$rotateCounterclockwiseButtonTapped
// CALLEES: rotateCounterclockwiseButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::rotateCounterclockwiseButtonTapped(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_rotateCounterclockwiseButtonTapped);

}






// ---- [d6] rotateClockwiseButtonTapped @0xc57ec ----
// CALLERS: buttonTapped:, setRotateClockwiseButtonTapped:, .cxx_destruct, _objc_msgSend$rotateClockwiseButtonTapped
// CALLEES: rotateClockwiseButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::rotateClockwiseButtonTapped(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_rotateClockwiseButtonTapped);

}






// ---- [d6] clampButtonTapped @0xc584c ----
// CALLERS: buttonTapped:, setClampButtonTapped:, .cxx_destruct, _objc_msgSend$clampButtonTapped
// CALLEES: clampButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::clampButtonTapped(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_clampButtonTapped);

}






// ---- [d6] resetButtonTapped @0xc58ac ----
// CALLERS: buttonTapped:, setResetButtonTapped:, .cxx_destruct, _objc_msgSend$resetButtonTapped
// CALLEES: resetButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::resetButtonTapped(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_resetButtonTapped);

}






// ---- [d6] doneButtonColor @0xaa208 ----
// CALLERS: setDoneButtonColor:, .cxx_destruct, _objc_msgSend$doneButtonColor
// CALLEES: toolbar, doneButtonColor


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::doneButtonColor(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_38;

  

  _objc_msgSend_toolbar(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_doneButtonColor(uVar1,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d6] _compatibilityInitializeAvailabilityCheck @0xc6320 ----
// CALLERS: ___isOSVersionAtLeast, ___isPlatformVersionAtLeast
// CALLEES: _initializeAvailabilityCheck, __initializeAvailabilityCheck


void _compatibilityInitializeAvailabilityCheck(void)



{

  __initializeAvailabilityCheck(1);

  return;

}






// ---- [d6] _initializeAvailabilityCheck @0xc6478 ----
// CALLERS: _compatibilityInitializeAvailabilityCheck, ___isPlatformVersionAtLeast, __initializeAvailabilityCheck
// CALLEES: __initializeAvailabilityCheck


void _initializeAvailabilityCheck(void)



{

  __initializeAvailabilityCheck(0);

  return;

}






// ---- [d6] dataMediator @0x6739c ----
// CALLERS: rebuild, showToView:containerSize:, reloadData, currentData, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_2, collectionView:numberOfItemsInSection:, collectionView:cellForItemAtIndexPath:, scrollViewDidScroll:
// CALLEES: setPreloadCount:, _WCMYBIBLowMemory, initWithBrowser:, initWithBrowser:, setDataCacheCountLimit:, setPreloadCount:


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::dataMediator(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  ID IVar4;

  undefined4 uVar5;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_dataMediator) == 0) {

    uVar1 = _objc_alloc(&objc::class_t::WCMYBIBDataMediator);

    uVar1 = _objc_msgSend_initWithBrowser_(uVar1,local_28,param_1);

    uVar2 = *(undefined8 *)(param_1 + (long)_dataMediator);

    *(undefined8 *)(param_1 + (long)_dataMediator) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar3 = _WCMYBIBLowMemory();

    uVar5 = 9;

    if ((uVar3 & 1) == 0) {

      uVar5 = 0x1b;

    }

    _objc_msgSend_setDataCacheCountLimit_

              (*(undefined8 *)(param_1 + (long)_dataMediator),local_28,uVar5);

    uVar3 = _WCMYBIBLowMemory();

    uVar5 = 0;

    if ((uVar3 & 1) == 0) {

      uVar5 = 2;

    }

    _objc_msgSend_setPreloadCount_(*(undefined8 *)(param_1 + (long)_dataMediator),local_28,uVar5);

  }

  IVar4 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_dataMediator));

  return IVar4;

}






// ---- [d6] currentPage @0x67834 ----
// CALLERS: updateGallery, pumpGallery, build, pageNumberChanged, showToView:containerSize:, reloadData, currentData, implementGetBaseInfoProtocol:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBImageBrowser::currentPage(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_currentPage);

}






// ---- [d6] dataForCellAtIndex: @0x8bc74 ----
// CALLERS: showToView:containerSize:, currentData, collectionView:cellForItemAtIndexPath:, preloadWithPage:, _objc_msgSend$dataForCellAtIndex:, _objc_msgSend$wcm_yb_imageBrowser:dataForCellAtIndex:
// CALLEES: implementGetBaseInfoProtocol:, dataSourceArray, dataSource, numberOfCells


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x18 bytes */



ID WCMYBIBDataMediator::dataForCellAtIndex_(ID param_1,SEL param_2,long_long param_3)



{

  long lVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 uVar4;

  undefined8 local_f8;

  undefined8 local_d0;

  undefined8 local_b0;

  undefined8 local_a0;

  undefined8 local_90;

  undefined8 local_80;

  undefined8 local_70;

  undefined8 local_60;

  undefined8 local_50;

  long local_48;

  long_long local_40;

  SEL local_38;

  ID local_30;

  undefined8 local_28;

  

  local_40 = param_3;

  local_38 = param_2;

  local_30 = param_1;

  if (((long)param_3 < 0) ||

     (lVar1 = _objc_msgSend_numberOfCells(param_1,local_d0), lVar1 + -1 < (long)param_3)) {

    local_28 = 0;

  }

  else {

    uVar4 = *(undefined8 *)(local_30 + 0x10);

    _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_d0,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKey_(uVar4,local_d0);

    local_48 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (local_48 == 0) {

      uVar2 = _objc_loadWeakRetained(local_30 + 8);

      _objc_msgSend_dataSource(uVar2,local_d0);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 == 0) {

        local_90 = _objc_loadWeakRetained(local_30 + 8);

        _objc_msgSend_dataSourceArray(local_90,local_d0);

        local_a0 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_objectAtIndexedSubscript_(local_a0,local_d0,local_40);

        local_f8 = _objc_retainAutoreleasedReturnValue();

        local_b0 = local_f8;

      }

      else {

        local_50 = _objc_loadWeakRetained(local_30 + 8);

        _objc_msgSend_dataSource(local_50,local_d0);

        local_60 = _objc_retainAutoreleasedReturnValue();

        local_70 = _objc_loadWeakRetained(local_30 + 8);

        _objc_msgSend_wcm_yb_imageBrowser_dataForCellAtIndex_(local_60,local_d0,local_70,local_40);

        local_f8 = _objc_retainAutoreleasedReturnValue();

        local_80 = local_f8;

      }

      _objc_storeStrong(&local_48,local_f8);

      if (lVar1 == 0) {

        (*(code *)PTR__objc_release_00110458)(local_b0);

        (*(code *)PTR__objc_release_00110458)(local_a0);

        (*(code *)PTR__objc_release_00110458)(local_90);

      }

      else {

        (*(code *)PTR__objc_release_00110458)(local_80);

        (*(code *)PTR__objc_release_00110458)(local_70);

        (*(code *)PTR__objc_release_00110458)(local_60);

        (*(code *)PTR__objc_release_00110458)(local_50);

      }

      (*(code *)PTR__objc_release_00110458)(lVar1);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      lVar1 = local_48;

      uVar4 = *(undefined8 *)(local_30 + 0x10);

      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_d0,local_40);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setObject_forKey_(uVar4,local_d0,lVar1);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      uVar2 = _objc_loadWeakRetained(local_30 + 8);

      _objc_msgSend_implementGetBaseInfoProtocol_(uVar2,local_d0,local_48);

      (*(code *)PTR__objc_release_00110458)(uVar2);

    }

    local_28 = (*(code *)PTR__objc_retain_00110460)(local_48);

    _objc_storeStrong(&local_48,0);

  }

  IVar3 = _objc_autoreleaseReturnValue(local_28);

  return IVar3;

}






// ---- [d6] showSheetView @0x86064 ----
// CALLERS: wcm_yb_respondsToLongPress, ___33-[WCMYBIBToolViewHandler_topView]_block_invoke, _objc_msgSend$showSheetView
// CALLEES: currentData, containerView, currentOrientation, wcm_yb_currentOrientation, wcm_yb_currentOrientation, wcm_yb_containerView, currentDataShouldHideSaveButton, sheetView, saveAction, wcm_yb_containerView


/* Function Stack Size: 0x10 bytes */



void WCMYBIBToolViewHandler::showSheetView(ID param_1,SEL param_2)



{

  uint uVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 local_40;

  

  uVar2 = _objc_msgSend_currentDataShouldHideSaveButton(param_1);

  if ((uVar2 & 1) == 0) {

    _objc_msgSend_sheetView(param_1,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_actions(uVar3,local_40);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_saveAction(param_1,local_40);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = _objc_msgSend_containsObject_(uVar4,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    if ((uVar1 & 1) == 0) {

      _objc_msgSend_sheetView(param_1,local_40);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_actions(uVar3,local_40);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_saveAction(param_1,local_40);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_addObject_(uVar4,local_40);

      (*(code *)PTR__objc_release_00110458)(uVar5);

      (*(code *)PTR__objc_release_00110458)(uVar4);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

  }

  else {

    _objc_msgSend_sheetView(param_1,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_actions(uVar3,local_40);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_saveAction(param_1,local_40);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_removeObject_(uVar4,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_msgSend_sheetView(param_1,local_40);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_wcm_yb_containerView(param_1,local_40);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_wcm_yb_currentOrientation(param_1,local_40);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  uVar5 = (**(code **)(lVar6 + 0x10))();

  _objc_msgSend_showToView_orientation_(uVar3,local_40,uVar4,uVar5);

  (*(code *)PTR__objc_release_00110458)(lVar6);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  return;

}






// ---- [d6] hideTailoringImageView @0x6d168 ----
// CALLERS: prepareForReuse, wcm_yb_orientationWillChangeWithExpectOrientation:, hideBrowser, respondsToTapSingle:, respondsToTapDouble:, respondsToPan:, scrollViewWillBeginZooming:withView:, scrollViewWillBeginDragging:
// CALLEES: tailoringImageView


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageCell::hideTailoringImageView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_tailoringImageView) != 0) {

    _objc_msgSend_tailoringImageView(param_1,local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setHidden_(uVar1,local_30,1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  return;

}






// ---- [d6] hideAuxiliaryView @0x6d1dc ----
// CALLERS: prepareForReuse, hideBrowser, wcm_yb_imageData:startLoadingWithStatus:, respondsToTapSingle:, _objc_msgSend$hideAuxiliaryView
// CALLEES: auxiliaryViewHandler, wcm_yb_auxiliaryViewHandler, wcm_yb_auxiliaryViewHandler


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageCell::hideAuxiliaryView(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  _objc_msgSend_wcm_yb_auxiliaryViewHandler(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (**(code **)(lVar1 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_wcm_yb_hideLoadingWithContainer_(uVar2,local_38,param_1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(lVar1);

  _objc_msgSend_wcm_yb_auxiliaryViewHandler(param_1,local_38);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  (**(code **)(lVar1 + 0x10))();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_wcm_yb_hideToastWithContainer_(uVar2,local_38,param_1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(lVar1);

  return;

}






// ---- [d6] hideBrowser @0x6d2ac ----
// CALLERS: implementOperateBrowserProtocol:, respondsToTapSingle:, respondsToPan:, wcm_yb_hideBrowser, setWcm_yb_hideBrowser:, .cxx_destruct, _objc_msgSend$hideBrowser, _objc_msgSend$setWcm_yb_hideBrowser:
// CALLEES: setDelegate:, hideTailoringImageView, hideAuxiliaryView, wcm_yb_hideBrowser, wcm_yb_cellData, setDelegate:, setDelegate:, setDelegate:


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageCell::hideBrowser(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 local_30;

  

  _objc_msgSend_wcm_yb_cellData(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setDelegate_(uVar1,local_30,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_hideTailoringImageView(param_1,local_30);

  _objc_msgSend_hideAuxiliaryView(param_1,local_30);

  _objc_msgSend_wcm_yb_hideBrowser(param_1,local_30);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (**(code **)(lVar2 + 0x10))();

  (*(code *)PTR__objc_release_00110458)(lVar2);

  *(undefined1 *)(param_1 + (long)_interacting) = 0;

  return;

}






// ---- [d6] wcm_yb_isRotating @0x708d0 ----
// CALLERS: respondsToTapSingle:, respondsToTapDouble:, respondsToPan:, setWcm_yb_isRotating:, .cxx_destruct, _objc_msgSend$wcm_yb_isRotating
// CALLEES: isRotating


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_isRotating(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_isRotating);

}






// ---- [d6] wcm_yb_hideBrowser @0x709f0 ----
// CALLERS: hideBrowser, respondsToTapSingle:, setWcm_yb_hideBrowser:, .cxx_destruct, _objc_msgSend$wcm_yb_hideBrowser
// CALLEES: hideBrowser


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_hideBrowser(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_hideBrowser);

}






// ---- [d6] wcm_yb_cellData @0x70ab0 ----
// CALLERS: hide, prepareForReuse, setWcm_yb_cellData:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage, cuttingImage_, ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke_2, ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke.8
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_cellData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_cellData);

}






// ---- [d6] singleTouchBlock @0x7d404 ----
// CALLERS: respondsToTapSingle:, _objc_msgSend$singleTouchBlock
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::singleTouchBlock(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xf0);

}






// ---- [d6] isRotating @0x8b738 ----
// CALLERS: implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_4, scrollViewDidScroll:, respondsToTapSingle:, respondsToTapDouble:, respondsToPan:, wcm_yb_isRotating, setWcm_yb_isRotating:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBScreenRotationHandler::isRotating(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 0x38) & 1;

}






// ---- [d6] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d6] viewForZoomingInScrollView: @0x702e4 ----
// CALLERS: respondsToTapDouble:, _objc_msgSend$viewForZoomingInScrollView:
// CALLEES: imageView, imageScrollView, imageView


/* Function Stack Size: 0x18 bytes */



ID WCMYBIBImageCell::viewForZoomingInScrollView_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_imageScrollView(local_18,local_50);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_imageView(uVar1,local_50);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_28,0);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d6] viewForZoomingInScrollView: @0xb5864 ----
// CALLERS: respondsToTapDouble:, _objc_msgSend$viewForZoomingInScrollView:
// CALLEES: backgroundContainerView


/* Function Stack Size: 0x18 bytes */



ID WCMTOCropView::viewForZoomingInScrollView_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_backgroundContainerView(local_18,local_48);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d6] _CGPointMake @0x77d0 ----
// CALLERS: positionIndicator, layoutIndicatorContent, drawRing:color:, _WCMSoftenMediaEdges, viewDidLayoutSubviews, viewDidAppear:, respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGPointMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d6] hideStatusBar @0x63c2c ----
// CALLERS: ___46-[WCMYBImageBrowser_showToView:containerSize:]_block_invoke, implementOperateBrowserProtocol:, ___53-[WCMYBImageBrowser_implementOperateBrowserProtocol:]_block_invoke.36, respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke.19, wcm_yb_hideStatusBar, setWcm_yb_hideStatusBar:, .cxx_destruct
// CALLEES: shouldHideStatusBar


/* Function Stack Size: 0x10 bytes */



void WCMYBImageBrowser::hideStatusBar(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 local_30;

  

  uVar1 = _objc_msgSend_shouldHideStatusBar(param_1);

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_30);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setStatusBarHidden_(uVar2,local_30,1);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  return;

}






// ---- [d6] currentOrientation @0x67698 ----
// CALLERS: showToView:containerSize:, hide, implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke, showTailoringImageView:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:
// CALLEES: rotationHandler, currentOrientation


/* Function Stack Size: 0x10 bytes */



long_long WCMYBImageBrowser::currentOrientation(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long_long lVar2;

  undefined8 local_38;

  

  _objc_msgSend_rotationHandler(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = _objc_msgSend_currentOrientation(uVar1,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return lVar2;

}






// ---- [d6] disable @0x6a67c ----
// CALLERS: respondsToPan:, _objc_msgSend$disable
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBInteractionProfile::disable(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 8) & 1;

}






// ---- [d6] dismissScale @0x6a6c4 ----
// CALLERS: respondsToPan:, _objc_msgSend$dismissScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBInteractionProfile::dismissScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x10);

}






// ---- [d6] dismissVelocityY @0x6a704 ----
// CALLERS: respondsToPan:, _objc_msgSend$dismissVelocityY
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBInteractionProfile::dismissVelocityY(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x18);

}






// ---- [d6] restoreDuration @0x6a744 ----
// CALLERS: respondsToPan:, _objc_msgSend$restoreDuration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBInteractionProfile::restoreDuration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x20);

}






// ---- [d6] triggerDistance @0x6a784 ----
// CALLERS: respondsToPan:, _objc_msgSend$triggerDistance
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBInteractionProfile::triggerDistance(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x28);

}






// ---- [d6] ___CGPointEqualToPoint @0x6f910 ----
// CALLERS: respondsToPan:
// CALLEES: (叶)


bool ___CGPointEqualToPoint(double param_1,double param_2,double param_3,double param_4)



{

  return param_1 == param_3 && param_2 == param_4;

}






// ---- [d6] restoreInteractionWithDuration: @0x6f994 ----
// CALLERS: updateImageLayoutWithOrientation:previousImageSize:, respondsToPan:, _objc_msgSend$restoreInteractionWithDuration:
// CALLEES: currentOrientation, wcm_yb_currentOrientation, wcm_yb_containerSize, wcm_yb_currentOrientation, wcm_yb_containerSize, wcm_yb_containerSize, wcm_yb_currentOrientation


/* Function Stack Size: 0x18 bytes */



void __thiscall

WCMYBIBImageCell::restoreInteractionWithDuration_

          (WCMYBIBImageCell *this,ID param_1,SEL param_2,double param_3)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 local_100;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  long local_90;

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined8 uStack_58;

  long local_50;

  undefined8 local_48;

  undefined8 uStack_40;

  double local_38;

  ID local_30;

  WCMYBIBImageCell *local_28;

  

  local_38 = param_3;

  local_30 = param_1;

  local_28 = this;

  _objc_msgSend_wcm_yb_containerSize(this);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_wcm_yb_currentOrientation(local_28,local_100);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = (**(code **)(lVar2 + 0x10))();

  local_48 = (**(code **)(lVar1 + 0x10))(lVar1,uVar3);

  uStack_40 = in_d1;

  (*(code *)PTR__objc_release_00110458)(lVar2);

  (*(code *)PTR__objc_release_00110458)(lVar1);

  local_88 = PTR___NSConcreteStackBlock_001104f0;

  local_80 = 0xc2000000;

  local_7c = 0;

  local_78 = ___51__WCMYBIBImageCell_restoreInteractionWithDuration___block_invoke;

  local_70 = &___block_descriptor_56_e8_32s_e5_v8__0l;

  local_68 = (*(code *)PTR__objc_retain_00110460)(local_28);

  uStack_58 = uStack_40;

  local_60 = local_48;

  local_50 = _objc_retainBlock();

  local_a8 = (*(code *)PTR__objc_retain_00110460)(local_28);

  uStack_98 = uStack_40;

  local_a0 = local_48;

  local_90 = _objc_retainBlock();

  if (0.0 < local_38) {

    _objc_msgSend_animateWithDuration_animations_completion_

              (local_38,&_OBJC_CLASS___UIView,local_100,local_50,local_90);

  }

  else {

    (**(code **)(local_50 + 0x10))();

    (**(code **)(local_90 + 0x10))(local_90,0);

  }

  _objc_storeStrong(&local_90);

  _objc_storeStrong(&local_a8,0);

  _objc_storeStrong(&local_50,0);

  _objc_storeStrong(&local_68,0);

  return;

}






// ---- [d6] wcm_yb_currentOrientation @0x706e0 ----
// CALLERS: showTailoringImageView:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, respondsToPan:, restoreInteractionWithDuration:, setWcm_yb_currentOrientation:, .cxx_destruct
// CALLEES: currentOrientation


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_currentOrientation(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_currentOrientation);

}






// ---- [d6] wcm_yb_containerSize @0x70740 ----
// CALLERS: updateImageLayoutWithOrientation:previousImageSize:, showTailoringImageView:, respondsToPan:, restoreInteractionWithDuration:, setWcm_yb_containerSize:, .cxx_destruct, bestSizeOfCompressing, bestSizeOfCuttingWithOriginSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_containerSize(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_containerSize);

}






// ---- [d6] wcm_yb_collectionView @0x70810 ----
// CALLERS: respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke.19, setWcm_yb_collectionView:, .cxx_destruct, _objc_msgSend$wcm_yb_collectionView
// CALLEES: collection, collectionView


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_collectionView(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_collectionView);

}






// ---- [d6] wcm_yb_hideStatusBar @0x70990 ----
// CALLERS: respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke.19, setWcm_yb_hideStatusBar:, .cxx_destruct, _objc_msgSend$wcm_yb_hideStatusBar
// CALLEES: hideStatusBar


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_hideStatusBar(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_hideStatusBar);

}






// ---- [d6] wcm_yb_hideToolViews @0x70a50 ----
// CALLERS: respondsToPan:, ___51-[WCMYBIBImageCell_restoreInteractionWithDuration:]_block_invoke.19, setWcm_yb_hideToolViews:, .cxx_destruct, _objc_msgSend$wcm_yb_hideToolViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_hideToolViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_hideToolViews);

}






// ---- [d6] wcm_yb_cellIsInCenter @0x70ad4 ----
// CALLERS: respondsToPan:, setWcm_yb_cellIsInCenter:, .cxx_destruct, _objc_msgSend$wcm_yb_cellIsInCenter
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_cellIsInCenter(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_cellIsInCenter);

}






// ---- [d6] wcm_yb_selfPage @0x70b34 ----
// CALLERS: respondsToPan:, setWcm_yb_selfPage:, .cxx_destruct, _objc_msgSend$wcm_yb_selfPage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_selfPage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_selfPage);

}






// ---- [d6] wcm_yb_currentPage @0x70b94 ----
// CALLERS: respondsToPan:, setWcm_yb_currentPage:, .cxx_destruct, wcm_yb_pageChanged, _objc_msgSend$wcm_yb_currentPage
// CALLEES: currentPage


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_currentPage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_currentPage);

}






// ---- [d6] wcm_yb_currentOrientation @0x7cbfc ----
// CALLERS: showTailoringImageView:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, respondsToPan:, restoreInteractionWithDuration:, bestSizeOfCompressing, bestSizeOfCuttingWithOriginSize:
// CALLEES: currentOrientation


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_currentOrientation(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x28);

}






// ---- [d6] wcm_yb_containerSize @0x7cc50 ----
// CALLERS: updateImageLayoutWithOrientation:previousImageSize:, showTailoringImageView:, respondsToPan:, restoreInteractionWithDuration:, bestSizeOfCompressing, bestSizeOfCuttingWithOriginSize:, layoutWithExpectOrientation:, _objc_msgSend$wcm_yb_containerSize
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_containerSize(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x30);

}






// ---- [d6] interactionProfile @0x7d3b4 ----
// CALLERS: respondsToPan:, _objc_msgSend$interactionProfile
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::interactionProfile(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xe8);

}






// ---- [d6] wcm_yb_containerSize @0x869ac ----
// CALLERS: updateImageLayoutWithOrientation:previousImageSize:, showTailoringImageView:, respondsToPan:, restoreInteractionWithDuration:, bestSizeOfCompressing, bestSizeOfCuttingWithOriginSize:, layoutWithExpectOrientation:, _objc_msgSend$wcm_yb_containerSize
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::wcm_yb_containerSize(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d6] wcm_yb_currentPage @0x86a00 ----
// CALLERS: respondsToPan:, wcm_yb_pageChanged, _objc_msgSend$wcm_yb_currentPage
// CALLEES: currentPage


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::wcm_yb_currentPage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x18);

}






// ---- [d6] wcm_yb_currentOrientation @0x86aa8 ----
// CALLERS: showTailoringImageView:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, respondsToPan:, restoreInteractionWithDuration:, bestSizeOfCompressing, bestSizeOfCuttingWithOriginSize:
// CALLEES: currentOrientation


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::wcm_yb_currentOrientation(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x28);

}






// ---- [d6] setImage:withType: @0x9e720 ----
// CALLERS: setImage:, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, initWithCoder:, _objc_msgSend$setImage:withType:
// CALLEES: setImage:, resetAnimated, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, imageChanged, stopAnimating


/* Function Stack Size: 0x20 bytes */



void WCMYYAnimatedImageView::setImage_withType_

               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)



{

  undefined8 local_78;

  ID local_70;

  class_t *local_68;

  ID local_60;

  class_t *local_58;

  ID local_50;

  class_t *local_48;

  ID local_40;

  class_t *local_38;

  unsigned_long_long local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = param_4;

  _objc_msgSend_stopAnimating(local_18,local_78);

  if (*(long *)(local_18 + (long)_link) != 0) {

    _objc_msgSend_resetAnimated(local_18,local_78);

  }

  _objc_storeStrong(local_18 + (long)_curFrame,0);

  if (local_30 != 0) {

    if (local_30 == 1) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"setImage:",local_28);

    }

    else if (local_30 == 2) {

      local_50 = local_18;

      local_48 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_50,"setHighlightedImage:",local_28);

    }

    else if (local_30 == 3) {

      local_60 = local_18;

      local_58 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_60,"setAnimationImages:",local_28);

    }

    else if (local_30 == 4) {

      local_70 = local_18;

      local_68 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_70,"setHighlightedAnimationImages:",local_28);

    }

  }

  _objc_msgSend_imageChanged(local_18,local_78);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d6] clickTextLabelBlock @0x810c0 ----
// CALLERS: respondsToTapTextlabel, setClickTextLabelBlock:, .cxx_destruct, _objc_msgSend$clickTextLabelBlock
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBLoadingView::clickTextLabelBlock(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_clickTextLabelBlock);

}






// ---- [d7] bestSizeOfCompressing @0x7a56c ----
// CALLERS: loadOriginImage_compress, _objc_msgSend$bestSizeOfCompressing
// CALLEES: currentOrientation, imageView, originImage, wcm_yb_currentOrientation, wcm_yb_containerSize, originImage, wcm_yb_currentOrientation, wcm_yb_containerSize, layout, wcm_yb_containerSize


/* Function Stack Size: 0x10 bytes */



CGSize WCMYBIBImageData::bestSizeOfCompressing(ID param_1,SEL param_2)



{

  CGSize CVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  double in_d1;

  undefined8 local_a0;

  double local_20;

  double dStack_18;

  

  _objc_msgSend_originImage(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 == 0) {

    dStack_18 = *(double *)(PTR__CGSizeZero_001108e0 + 8);

    local_20 = *(double *)PTR__CGSizeZero_001108e0;

  }

  else {

    _objc_msgSend_wcm_yb_currentOrientation(param_1,local_a0);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = (**(code **)(lVar2 + 0x10))();

    (*(code *)PTR__objc_release_00110458)(lVar2);

    _objc_msgSend_layout(param_1,local_a0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_wcm_yb_containerSize(param_1,local_a0);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    uVar6 = (**(code **)(lVar2 + 0x10))(lVar2,uVar3);

    _objc_msgSend_originImage(param_1,local_a0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_20 = (double)_objc_msgSend_size(uVar5,local_a0);

    _objc_msgSend_wcm_yb_imageViewFrameWithContainerSize_imageSize_orientation_

              (uVar6,uVar4,local_a0,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(lVar2);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    dStack_18 = in_d1;

  }

  CVar1.field1_0x8 = dStack_18;

  CVar1.field0_0x0 = local_20;

  return CVar1;

}






// ---- [d7] shouldCompressWithImageSize:scale: @0x7a504 ----
// CALLERS: shouldCompressWithImage:, ___41-[WCMYBIBImageData_defaultDecodeDecision]_block_invoke, _objc_msgSend$shouldCompressWithImageSize:scale:
// CALLEES: shouldCompress, compressingSize


/* Function Stack Size: 0x28 bytes */



bool WCMYBIBImageData::shouldCompressWithImageSize_scale_

               (ID param_1,SEL param_2,CGSize param_3,double param_4)



{

  double dVar1;

  

  dVar1 = (double)_objc_msgSend_compressingSize(param_1);

  return (bool)(dVar1 < param_3.field0_0x0 * param_4 * param_3.field1_0x8 * param_4);

}






// ---- [d7] minimumAspectRatio @0xab8f0 ----
// CALLERS: updateCropBoxFrameWithGesturePoint:, setMinimumAspectRatio:, _objc_msgSend$minimumAspectRatio
// CALLEES: cropView, minimumAspectRatio


/* Function Stack Size: 0x10 bytes */



double WCMTOCropViewController::minimumAspectRatio(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  double dVar2;

  undefined8 local_38;

  

  _objc_msgSend_cropView(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  dVar2 = (double)_objc_msgSend_minimumAspectRatio(uVar1,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return dVar2;

}






// ---- [d7] checkForCanReset @0xbb054 ----
// CALLERS: performInitialSetup, layoutInitialImage, updateCropBoxFrameWithGesturePoint:, resetLayoutToDefaultAnimated:, scrollViewDidEndDecelerating:, scrollViewDidEndZooming:withView:atScale:, ___41-[WCMTOCropView_setAspectRatio:animated:]_block_invoke, rotateImageNinetyDegreesAnimated:clockwise:completion:
// CALLEES: angle, angle, angle, original, setCanBeReset:, cropBoxFrame, angle, scrollView, originalCropBoxSize, originalContentOffset


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::checkForCanReset(ID param_1,SEL param_2)



{

  bool bVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  double in_d2;

  double in_d3;

  undefined8 local_110;

  bool local_31;

  

  lVar2 = _objc_msgSend_angle(param_1);

  if (lVar2 == 0) {

    _objc_msgSend_scrollView(param_1,local_110);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    dVar5 = (double)_objc_msgSend_zoomScale(uVar3,local_110);

    _objc_msgSend_scrollView(param_1,local_110);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    dVar6 = (double)_objc_msgSend_minimumZoomScale(uVar4,local_110);

    dVar6 = dVar6 + 1.1920928955078125e-07;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    if (dVar5 <= dVar6) {

      _objc_msgSend_cropBoxFrame(param_1,local_110);

      dVar5 = (double)_objc_msgSend_originalCropBoxSize(param_1,local_110);

      bVar1 = true;

      if ((long)in_d2 == (long)dVar5) {

        _objc_msgSend_cropBoxFrame(param_1,local_110);

        _objc_msgSend_originalCropBoxSize(param_1,local_110);

        bVar1 = (long)in_d3 != (long)dVar6;

      }

      if (bVar1) {

        local_31 = true;

      }

      else {

        _objc_msgSend_scrollView(param_1,local_110);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        dVar5 = (double)_objc_msgSend_contentOffset(uVar3,local_110);

        dVar7 = (double)_objc_msgSend_originalContentOffset(param_1,local_110);

        local_31 = true;

        if ((long)dVar5 == (long)dVar7) {

          _objc_msgSend_scrollView(param_1,local_110);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_contentOffset(uVar4,local_110);

          lVar2 = (long)dVar6;

          _objc_msgSend_originalContentOffset(param_1,local_110);

          local_31 = lVar2 != (long)dVar6;

          (*(code *)PTR__objc_release_00110458)(uVar4);

        }

        (*(code *)PTR__objc_release_00110458)(uVar3);

      }

    }

    else {

      local_31 = true;

    }

  }

  else {

    local_31 = true;

  }

  _objc_msgSend_setCanBeReset_(param_1,local_110,local_31);

  return;

}






// ---- [d7] tappedEdge @0xbc21c ----
// CALLERS: updateCropBoxFrameWithGesturePoint:, setTappedEdge:, _objc_msgSend$tappedEdge
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropView::tappedEdge(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_tappedEdge);

}






// ---- [d7] cropOriginFrame @0xbc26c ----
// CALLERS: updateCropBoxFrameWithGesturePoint:, setCropOriginFrame:, _objc_msgSend$cropOriginFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropView::cropOriginFrame(ID param_1,SEL param_2)



{

  return *(CGRect *)(param_1 + (long)_cropOriginFrame);

}






// ---- [d7] resetTimer @0xbc354 ----
// CALLERS: dealloc, resetLayoutToDefaultAnimated:, startResetTimer, timerTriggered, cancelResetTimer, rotateImageNinetyDegreesAnimated:clockwise:completion:, setResetTimer:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::resetTimer(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_resetTimer);

}






// ---- [d7] setResetTimer: @0xbc378 ----
// CALLERS: startResetTimer, timerTriggered, cancelResetTimer, _objc_msgSend$setResetTimer:
// CALLEES: resetTimer


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setResetTimer_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_resetTimer,param_3);

  return;

}






// ---- [d7] cancelResetTimer @0xb5494 ----
// CALLERS: resetLayoutToDefaultAnimated:, startEditing, rotateImageNinetyDegreesAnimated:clockwise:completion:, _objc_msgSend$cancelResetTimer
// CALLEES: resetTimer, setResetTimer:


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::cancelResetTimer(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 local_28;

  

  _objc_msgSend_resetTimer(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_invalidate(uVar1,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_setResetTimer_(param_1,local_28,0);

  return;

}






// ---- [d7] disableForgroundMatching @0xbc3e0 ----
// CALLERS: matchForegroundToBackground, setDisableForgroundMatching:, _objc_msgSend$disableForgroundMatching
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::disableForgroundMatching(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_disableForgroundMatching) & 1;

}






// ---- [d7] baseMaximumZoomScale @0xbc724 ----
// CALLERS: performRelayoutForRotation, scrollViewDidZoom:, rotateImageNinetyDegreesAnimated:clockwise:completion:, captureStateForImageRotation, updateScrollViewMaximumZoomScale, setBaseMaximumZoomScale:, _objc_msgSend$baseMaximumZoomScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::baseMaximumZoomScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_baseMaximumZoomScale);

}






// ---- [d7] angle @0xab23c ----
// CALLERS: resetCropViewLayout, doneButtonTapped, item, performInitialSetup, resetLayoutToDefaultAnimated:, setAngle:, setEditing:resetCropBox:animated:, setAspectRatio:animated:
// CALLEES: cropView, angle, angle, angle


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropViewController::angle(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long_long lVar2;

  undefined8 local_38;

  

  _objc_msgSend_cropView(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = _objc_msgSend_angle(uVar1,local_38);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return lVar2;

}






// ---- [d7] angle @0xaca54 ----
// CALLERS: resetCropViewLayout, doneButtonTapped, angle, item, performInitialSetup, resetLayoutToDefaultAnimated:, setAngle:, setEditing:resetCropBox:animated:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOActivityCroppedImageProvider::angle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_angle);

}






// ---- [d7] angle @0xadf70 ----
// CALLERS: resetCropViewLayout, doneButtonTapped, angle, item, performInitialSetup, resetLayoutToDefaultAnimated:, setAngle:, setEditing:resetCropBox:animated:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCroppedImageAttributes::angle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 8);

}






// ---- [d7] toggleTranslucencyViewVisible: @0xb44d0 ----
// CALLERS: setCroppingViewsHidden:animated:, ___49-[WCMTOCropView_setCroppingViewsHidden:animated:]_block_invoke, setEditing:resetCropBox:animated:, ___50-[WCMTOCropView_setEditing:resetCropBox:animated:]_block_invoke, setSimpleRenderMode:animated:, ___46-[WCMTOCropView_setSimpleRenderMode:animated:]_block_invoke, _objc_msgSend$toggleTranslucencyViewVisible:
// CALLEES: translucencyView, translucencyEffect


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::toggleTranslucencyViewVisible_(ID param_1,SEL param_2,bool param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_30;

  

  _objc_msgSend_translucencyView(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  bVar1 = (param_3 & 1) == 0;

  if (bVar1) {

    local_48 = 0;

  }

  else {

    _objc_msgSend_translucencyEffect(param_1,local_50);

    local_48 = _objc_retainAutoreleasedReturnValue();

    local_30 = local_48;

  }

  _objc_msgSend_setEffect_(uVar2,local_50,local_48);

  if (!bVar1) {

    (*(code *)PTR__objc_release_00110458)(local_30);

  }

  (*(code *)PTR__objc_release_00110458)(uVar2);

  return;

}






// ---- [d7] moveCroppedContentToCenterAnimated: @0xb7dbc ----
// CALLERS: viewDidLayoutSubviews, setEditing:resetCropBox:animated:, ___41-[WCMTOCropView_setAspectRatio:animated:]_block_invoke, rotateImageNinetyDegreesAnimated:clockwise:completion:, _objc_msgSend$moveCroppedContentToCenterAnimated:
// CALLEES: matchForegroundToBackground, contentBounds, cropBoxFrame, internalLayoutDisabled, scrollView


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff00 : 0x000b8144 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::moveCroppedContentToCenterAnimated_(ID param_1,SEL param_2,bool param_3)



{

  bool bVar1;

  undefined *puVar2;

  ulong uVar3;

  undefined8 uVar4;

  dispatch_time_t dVar5;

  double dVar6;

  double in_d1;

  double dVar7;

  double dVar8;

  double in_d2;

  double in_d3;

  double local_250;

  double local_248;

  double local_218;

  undefined8 local_200;

  undefined *local_1f0;

  undefined4 local_1e8;

  undefined4 local_1e4;

  code *local_1e0;

  undefined *local_1d8;

  undefined8 local_1d0;

  uint local_1c8;

  undefined *local_1b8;

  undefined4 local_1b0;

  undefined4 local_1ac;

  code *local_1a8;

  undefined *local_1a0;

  undefined8 *local_198;

  undefined1 auStack_190 [8];

  double local_188;

  double local_180;

  double dStack_178;

  double local_170;

  double dStack_168;

  long local_160;

  undefined1 auStack_158 [8];

  double local_150;

  double local_140;

  double local_138;

  double local_128;

  undefined8 local_120;

  undefined8 *local_118;

  undefined4 local_110;

  undefined4 local_10c;

  char *local_108;

  double local_100;

  double dStack_f8;

  undefined8 local_f0;

  double local_e8;

  double local_e0;

  double local_d8;

  double local_d0;

  double dStack_c8;

  undefined8 local_b8;

  undefined8 local_b0;

  double local_a8;

  double local_a0;

  double local_98;

  double local_90;

  double local_88;

  double local_80;

  double local_78;

  double dStack_70;

  double local_68;

  double dStack_60;

  double local_58;

  double local_50;

  double local_48;

  double local_40;

  byte local_31;

  SEL local_30;

  ID local_28;

  

  local_31 = (byte)param_3;

  local_30 = param_2;

  local_28 = param_1;

  uVar3 = _objc_msgSend_internalLayoutDisabled(param_1);

  if ((uVar3 & 1) == 0) {

    local_58 = (double)_objc_msgSend_contentBounds(local_28,local_200);

    local_50 = in_d1;

    local_48 = in_d2;

    local_40 = in_d3;

    local_78 = (double)_objc_msgSend_cropBoxFrame(local_28,local_200);

    if ((1.1920928955078125e-07 <= in_d2) && (1.1920928955078125e-07 <= in_d3)) {

      dStack_70 = in_d1;

      local_68 = in_d2;

      dStack_60 = in_d3;

      dVar6 = (double)_CGRectGetWidth(local_58,local_50,local_48,local_40);

      local_88 = (double)_CGRectGetWidth(local_78,dStack_70,local_68,dStack_60);

      local_88 = dVar6 / local_88;

      dVar6 = (double)_CGRectGetHeight(local_58,local_50,local_48,local_40);

      local_90 = (double)_CGRectGetHeight(local_78,dStack_70,local_68,dStack_60);

      local_90 = dVar6 / local_90;

      local_218 = local_90;

      if (local_88 < local_90) {

        local_218 = local_88;

      }

      local_98 = local_218;

      local_80 = local_218;

      local_a8 = (double)_CGRectGetMidX(local_78,dStack_70,local_68,dStack_60);

      local_a0 = (double)_CGRectGetMidY(local_78,dStack_70,local_68,dStack_60);

      local_b8 = _CGRectGetMidX(local_58,local_50,local_48,local_40);

      local_b0 = _CGRectGetMidY(local_58,local_50,local_48,local_40);

      dVar6 = local_a8;

      local_68 = (double)(float)(int)(local_68 * local_80);

      dStack_60 = (double)(float)(int)(dStack_60 * local_80);

      local_78 = local_58 + (double)(float)(int)((local_48 - local_68) * 0.5);

      dVar7 = (double)(float)(int)((local_40 - dStack_60) * 0.5);

      dStack_70 = local_50 + dVar7;

      dStack_c8 = *(double *)(PTR__CGPointZero_00110850 + 8);

      local_d0 = *(double *)PTR__CGPointZero_00110850;

      _objc_msgSend_scrollView(local_28,local_200);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      local_e0 = (double)_objc_msgSend_contentOffset(uVar4,local_200);

      local_d0 = (dVar6 + local_e0) * local_80;

      dVar8 = local_80;

      local_d8 = dVar7;

      (*(code *)PTR__objc_release_00110458)(uVar4);

      dVar6 = local_a0;

      _objc_msgSend_scrollView(local_28,local_200);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      local_f0 = _objc_msgSend_contentOffset(uVar4,local_200);

      dStack_c8 = (dVar6 + dVar8) * local_80;

      local_e8 = dVar8;

      (*(code *)PTR__objc_release_00110458)(uVar4);

      local_118 = &local_120;

      local_120 = 0;

      local_110 = 0x10000000;

      local_10c = 0x30;

      local_108 = "";

      local_128 = -local_78;

      local_248 = local_128;

      if (local_128 < local_100) {

        local_248 = local_100;

      }

      local_138 = local_248;

      local_100 = local_248;

      local_140 = -dStack_70;

      local_250 = local_140;

      if (local_140 < dStack_f8) {

        local_250 = dStack_f8;

      }

      local_150 = local_250;

      dStack_f8 = local_250;

      _objc_initWeak(auStack_158,local_28);

      local_1b8 = PTR___NSConcreteStackBlock_001104f0;

      local_1b0 = 0xc2000000;

      local_1ac = 0;

      local_1a8 = ___52__WCMTOCropView_moveCroppedContentToCenterAnimated___block_invoke;

      local_1a0 = &___block_descriptor_88_e8_32r40w_e5_v8__0l;

      _objc_copyWeak(auStack_190,auStack_158);

      local_188 = local_80;

      dStack_178 = dStack_70;

      local_180 = local_78;

      dStack_168 = dStack_60;

      local_170 = local_68;

      local_198 = &local_120;

      local_160 = _objc_retainBlock();

      bVar1 = (local_31 & 1) != 0;

      if (bVar1) {

        _objc_msgSend_matchForegroundToBackground(local_28,local_200);

        dVar5 = _dispatch_time(0,10000000);

        puVar2 = PTR___dispatch_main_q_00110528;

        _objc_retainAutoreleaseReturnValue();

        uVar4 = _objc_retainAutoreleasedReturnValue(puVar2);

        local_1f0 = PTR___NSConcreteStackBlock_001104f0;

        local_1e8 = 0xc2000000;

        local_1e4 = 0;

        local_1e0 = ___52__WCMTOCropView_moveCroppedContentToCenterAnimated___block_invoke_22;

        local_1d8 = &___block_descriptor_40_e8_32bs_e5_v8__0l;

        local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_160);

        _dispatch_after(dVar5,uVar4,&local_1f0);

        (*(code *)PTR__objc_release_00110458)(uVar4);

        _objc_storeStrong(&local_1d0,0);

      }

      else {

        (**(code **)(local_160 + 0x10))();

      }

      local_1c8 = (uint)!bVar1;

      _objc_storeStrong(&local_160,0);

      _objc_destroyWeak(auStack_190);

      _objc_destroyWeak(auStack_158);

      __Block_object_dispose(&local_120,8);

    }

  }

  return;

}






// ---- [d7] captureStateForImageRotation @0xbae88 ----
// CALLERS: performInitialSetup, layoutInitialImage, performRelayoutForRotation, setEditing:resetCropBox:animated:, rotateImageNinetyDegreesAnimated:clockwise:completion:, _objc_msgSend$captureStateForImageRotation
// CALLEES: cropBoxFrame, scrollView, setCropBoxLastEditedSize:, setCropBoxLastEditedZoomScale:, setCropBoxLastEditedMinZoomScale:, setCropBoxLastEditedMaxZoomScale:, baseMaximumZoomScale


/* Function Stack Size: 0x10 bytes */



void WCMTOCropView::captureStateForImageRotation(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_68;

  

  _objc_msgSend_cropBoxFrame(param_1);

  _objc_msgSend_setCropBoxLastEditedSize_(in_d2,in_d3,param_1,local_68);

  _objc_msgSend_scrollView(param_1,local_68);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_zoomScale(uVar1,local_68);

  _objc_msgSend_setCropBoxLastEditedZoomScale_(param_1,local_68);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_scrollView(param_1,local_68);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_minimumZoomScale(uVar1,local_68);

  _objc_msgSend_setCropBoxLastEditedMinZoomScale_(param_1,local_68);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_baseMaximumZoomScale(param_1,local_68);

  _objc_msgSend_setCropBoxLastEditedMaxZoomScale_(param_1,local_68);

  return;

}






// ---- [d7] angle @0xbbd0c ----
// CALLERS: resetCropViewLayout, doneButtonTapped, angle, item, performInitialSetup, resetLayoutToDefaultAnimated:, setAngle:, setEditing:resetCropBox:animated:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropView::angle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_angle);

}






// ---- [d7] alwaysShowCroppingGrid @0xbbec8 ----
// CALLERS: setAlwaysShowCroppingGrid:, setEditing:resetCropBox:animated:, _objc_msgSend$alwaysShowCroppingGrid
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::alwaysShowCroppingGrid(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_alwaysShowCroppingGrid) & 1;

}






// ---- [d7] setCropBoxLastEditedAngle: @0xbc608 ----
// CALLERS: performInitialSetup, layoutInitialImage, setEditing:resetCropBox:animated:, setAspectRatio:animated:, rotateImageNinetyDegreesAnimated:clockwise:completion:, _objc_msgSend$setCropBoxLastEditedAngle:
// CALLEES: cropBoxLastEditedAngle


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setCropBoxLastEditedAngle_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_cropBoxLastEditedAngle) = param_3;

  return;

}






// ---- [d7] imageSize @0xbb5c0 ----
// CALLERS: showToView:containerSize:, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, updateImageLayoutWithOrientation:previousImageSize:, bestSizeOfCompressing, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, layoutInitialImage, imageCropFrame
// CALLEES: image, image, angle, image, image, angle, image, angle, size, image


/* Function Stack Size: 0x10 bytes */



CGSize __thiscall WCMTOCropView::imageSize(WCMTOCropView *this,ID param_1,SEL param_2)



{

  CGSize CVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  double in_d1;

  undefined8 local_78;

  undefined8 local_20;

  undefined8 local_18;

  

  lVar2 = _objc_msgSend_angle(this);

  if (lVar2 + 0x5a != 0) {

    lVar2 = _objc_msgSend_angle(lVar2 + 0x5a,this,local_78);

    if (lVar2 + 0x10e != 0) {

      lVar2 = _objc_msgSend_angle(lVar2 + 0x10e,this,local_78);

      if (lVar2 + -0x5a != 0) {

        lVar2 = _objc_msgSend_angle(lVar2 + -0x5a,this,local_78);

        if (lVar2 + -0x10e != 0) {

          _objc_msgSend_image(lVar2 + -0x10e,this,local_78);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          local_20 = (double)_objc_msgSend_size(uVar3,local_78);

          _objc_msgSend_image(this,local_78);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_size(uVar4,local_78);

          (*(code *)PTR__objc_release_00110458)(uVar4);

          (*(code *)PTR__objc_release_00110458)(uVar3);

          local_18 = in_d1;

          goto LAB_000bb73c;

        }

      }

    }

  }

  _objc_msgSend_image(0,this,local_78);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_size(uVar3,local_78);

  _objc_msgSend_image(this,local_78);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_18 = (double)_objc_msgSend_size(uVar4,local_78);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  local_20 = in_d1;

LAB_000bb73c:

  CVar1.field1_0x8 = local_18;

  CVar1.field0_0x0 = local_20;

  return CVar1;

}






// ---- [d7] setCropBoxLastEditedSize: @0xbc5b4 ----
// CALLERS: setAspectRatio:animated:, captureStateForImageRotation, _objc_msgSend$setCropBoxLastEditedSize:
// CALLEES: cropBoxLastEditedSize


/* Function Stack Size: 0x20 bytes */



void WCMTOCropView::setCropBoxLastEditedSize_(ID param_1,SEL param_2,CGSize param_3)



{

  long lVar1;

  

  lVar1 = (long)_cropBoxLastEditedSize;

  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;

  *(double *)(param_1 + lVar1) = param_3.field0_0x0;

  return;

}






// ---- [d7] initialSetupPerformed @0xbc968 ----
// CALLERS: performInitialSetup, setImageCropFrame:, setAngle:, setAspectRatio:animated:, setInitialSetupPerformed:, _objc_msgSend$initialSetupPerformed
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::initialSetupPerformed(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_initialSetupPerformed) & 1;

}






// ---- [d7] dismissCropViewController @0xa8080 ----
// CALLERS: cancelButtonTapped, ___45-[WCMTOCropViewController_cancelButtonTapped]_block_invoke, _objc_msgSend$dismissCropViewController
// CALLEES: presenting, cropViewController:didFinishCancelled:, delegate, delegate, cropView, delegate, onDidFinishCancelled, delegate


/* Function Stack Size: 0x10 bytes */



void WCMTOCropViewController::dismissCropViewController(ID param_1,SEL param_2)



{

  bool bVar1;

  uint uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 local_60;

  

  _objc_msgSend_delegate(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_respondsToSelector(uVar3,"cropViewController:didFinishCancelled:");

  (*(code *)PTR__objc_release_00110458)(uVar3);

  bVar1 = (uVar2 & 1) != 0;

  if (bVar1) {

    _objc_msgSend_delegate(param_1,local_60);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_cropViewController_didFinishCancelled_(uVar3,local_60,param_1,1);

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_msgSend_onDidFinishCancelled(param_1,local_60);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)();

  if (lVar4 != 0) {

    _objc_msgSend_onDidFinishCancelled(param_1,local_60);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar5 + 0x10))(lVar5,1);

    (*(code *)PTR__objc_release_00110458)(lVar5);

  }

  if (lVar4 == 0 && !bVar1) {

    _objc_msgSend_navigationController(param_1,local_60);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    bVar1 = false;

    if (lVar4 != 0) {

      _objc_msgSend_navigationController(param_1,local_60);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_viewControllers(uVar3,local_60);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      uVar7 = _objc_msgSend_count(uVar6,local_60);

      bVar1 = 1 < uVar7;

      (*(code *)PTR__objc_release_00110458)(uVar6);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    (*(code *)PTR__objc_release_00110458)(lVar4);

    if (bVar1) {

      _objc_msgSend_navigationController(param_1,local_60);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_popViewControllerAnimated_(uVar3,local_60,1);

      _objc_unsafeClaimAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    else {

      _objc_msgSend_presentingViewController(param_1,local_60);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_dismissViewControllerAnimated_completion_(uVar3,local_60,1,0);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

  }

  return;

}






// ---- [d7] showCancelConfirmationDialog @0xabbd8 ----
// CALLERS: cancelButtonTapped, setShowCancelConfirmationDialog:, _objc_msgSend$showCancelConfirmationDialog
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::showCancelConfirmationDialog(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_showCancelConfirmationDialog) & 1;

}






// ---- [d7] visibleCancelButton @0xc5110 ----
// CALLERS: cancelButtonTapped, _objc_msgSend$visibleCancelButton
// CALLEES: cancelText, cancelTextButton, cancelIconButton


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::visibleCancelButton(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_40;

  undefined8 local_18;

  

  _objc_msgSend_cancelIconButton(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = _objc_msgSend_isHidden(uVar2,local_40);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (iVar1 == 0) {

    _objc_msgSend_cancelIconButton(param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_msgSend_cancelTextButton(param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  IVar3 = _objc_autoreleaseReturnValue(local_18);

  return IVar3;

}






// ---- [d7] presenting @0xfe68 ----
// CALLERS: animateTransition:, ___42-[WCMCommentTransition_animateTransition:]_block_invoke, ___42-[WCMCommentTransition_animateTransition:]_block_invoke.483, presentationControllerForPresentedViewController:presentingViewController:sourceViewController:, animationControllerForPresentedController:presentingController:sourceController:, animationControllerForPresentedController:presentingController:sourceController:, ___107-[WCMTOCropViewController_animationControllerForPresentedController:presentingController:sourceController:]_block_invoke, dismissCropViewController
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMCommentTransition::presenting(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 8) & 1;

}






// ---- [d7] cropViewController:didCropToImage:withRect:angle: @0x4f940 ----
// CALLERS: doneButtonTapped, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.65, _objc_msgSend$cropViewController:didCropToImage:withRect:angle:
// CALLEES: cropAccount, setCropAccount:, cropView


/* Function Stack Size: 0x48 bytes */



void WCMFeedController::cropViewController_didCropToImage_withRect_angle_

               (ID param_1,SEL param_2,ID param_3,ID param_4,CGRect param_5,long_long param_6)



{

  undefined8 uVar1;

  undefined8 local_f8;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long_long local_68;

  undefined8 local_60;

  undefined8 local_58;

  SEL local_50;

  ID local_48;

  double local_40;

  double local_38;

  double local_30;

  double local_28;

  

  local_28 = param_5.field1_0x10.field1_0x8;

  local_30 = param_5.field1_0x10.field0_0x0;

  local_38 = param_5.field0_0x0.field1_0x8;

  local_40 = param_5.field0_0x0.field0_0x0;

  local_58 = 0;

  local_50 = param_2;

  local_48 = param_1;

  _objc_storeStrong(&local_58,param_3);

  local_60 = 0;

  _objc_storeStrong(&local_60,param_4);

  local_68 = param_6;

  _objc_msgSend_cropAccount(local_48,local_f8);

  local_70 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCropAccount_(local_48,local_f8,0);

  uVar1 = local_58;

  local_88 = (*(code *)PTR__objc_retain_00110460)(local_48);

  local_80 = (*(code *)PTR__objc_retain_00110460)(local_60);

  local_78 = (*(code *)PTR__objc_retain_00110460)(local_70);

  _objc_msgSend_dismissViewControllerAnimated_completion_(uVar1,local_f8,1);

  _objc_storeStrong(&local_78,0);

  _objc_storeStrong(&local_80,0);

  _objc_storeStrong(&local_88,0);

  _objc_storeStrong(&local_70,0);

  _objc_storeStrong(&local_60,0);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d7] setDoneButtonsEnabled: @0xa9ac8 ----
// CALLERS: doneButtonTapped, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.64, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.65, _objc_msgSend$setDoneButtonsEnabled:
// CALLEES: toolbar, doneTextButton, doneIconButton


/* Function Stack Size: 0x14 bytes */



void WCMTOCropViewController::setDoneButtonsEnabled_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 local_48;

  

  _objc_msgSend_toolbar(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_doneTextButton(uVar1,local_48);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEnabled_(uVar2,local_48,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_msgSend_toolbar(param_1,local_48);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_doneIconButton(uVar1,local_48);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEnabled_(uVar2,local_48,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d7] imageCropFrame @0xab328 ----
// CALLERS: doneButtonTapped, _objc_msgSend$imageCropFrame
// CALLEES: cropView, imageCropFrame


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropViewController::imageCropFrame(ID param_1,SEL param_2)



{

  CGRect CVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_50;

  

  _objc_msgSend_cropView(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_imageCropFrame(uVar2,local_50);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  CVar1.field0_0x0.field1_0x8 = (double)in_d1;

  CVar1.field0_0x0.field0_0x0 = (double)uVar3;

  CVar1.field1_0x10.field0_0x0 = (double)in_d2;

  CVar1.field1_0x10.field1_0x8 = in_d3;

  return CVar1;

}






// ---- [d7] showActivitySheetOnDone @0xaba18 ----
// CALLERS: doneButtonTapped, setShowActivitySheetOnDone:, _objc_msgSend$showActivitySheetOnDone
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropViewController::showActivitySheetOnDone(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_showActivitySheetOnDone) & 1;

}






// ---- [d7] activityItems @0xabd0c ----
// CALLERS: doneButtonTapped, setActivityItems:, .cxx_destruct, _objc_msgSend$activityItems
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::activityItems(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_activityItems);

}






// ---- [d7] applicationActivities @0xabd6c ----
// CALLERS: ___ExportDiagnostics_block_invoke_2, doneButtonTapped, setApplicationActivities:, .cxx_destruct, _objc_msgSend$applicationActivities, _objc_msgSend$initWithActivityItems:applicationActivities:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::applicationActivities(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_applicationActivities);

}






// ---- [d7] excludedActivityTypes @0xabdcc ----
// CALLERS: doneButtonTapped, setExcludedActivityTypes:, .cxx_destruct, _objc_msgSend$excludedActivityTypes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::excludedActivityTypes(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_excludedActivityTypes);

}






// ---- [d7] setExcludedActivityTypes: @0xabdf0 ----
// CALLERS: doneButtonTapped, _objc_msgSend$setExcludedActivityTypes:
// CALLEES: excludedActivityTypes


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setExcludedActivityTypes_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_excludedActivityTypes,param_3);

  return;

}






// ---- [d7] onDidTapDone @0xabe8c ----
// CALLERS: doneButtonTapped, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke, setOnDidTapDone:, .cxx_destruct, _objc_msgSend$onDidTapDone
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::onDidTapDone(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_onDidTapDone);

}






// ---- [d7] onDidCropImageToRect @0xabf4c ----
// CALLERS: doneButtonTapped, setOnDidCropImageToRect:, .cxx_destruct, _objc_msgSend$onDidCropImageToRect
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::onDidCropImageToRect(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_onDidCropImageToRect);

}






// ---- [d7] onDidCropToRect @0xabfac ----
// CALLERS: doneButtonTapped, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.65, setOnDidCropToRect:, .cxx_destruct, _objc_msgSend$onDidCropToRect
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::onDidCropToRect(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_onDidCropToRect);

}






// ---- [d7] onDidCropToCircleImage @0xac00c ----
// CALLERS: doneButtonTapped, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.64, setOnDidCropToCircleImage:, .cxx_destruct, _objc_msgSend$onDidCropToCircleImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::onDidCropToCircleImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_onDidCropToCircleImage);

}






// ---- [d7] initWithImage:cropFrame:angle:circular: @0xac4b8 ----
// CALLERS: doneButtonTapped, _objc_msgSend$initWithImage:cropFrame:angle:circular:
// CALLEES: cropFrame, circular


/* Function Stack Size: 0x44 bytes */



ID WCMTOActivityCroppedImageProvider::initWithImage_cropFrame_angle_circular_

             (ID param_1,SEL param_2,ID param_3,CGRect param_4,long_long param_5,bool param_6)



{

  double *pdVar1;

  undefined8 uVar2;

  ID IVar3;

  ID local_68;

  class_t *local_60;

  byte local_51;

  long_long local_50;

  undefined8 local_48;

  SEL local_40;

  ID local_38;

  double local_30;

  double dStack_28;

  double local_20;

  double dStack_18;

  

  dStack_18 = param_4.field1_0x10.field1_0x8;

  local_20 = param_4.field1_0x10.field0_0x0;

  dStack_28 = param_4.field0_0x0.field1_0x8;

  local_30 = param_4.field0_0x0.field0_0x0;

  local_48 = 0;

  local_40 = param_2;

  local_38 = param_1;

  _objc_storeStrong(&local_48,param_3);

  IVar3 = local_38;

  local_51 = (byte)param_6;

  local_50 = param_5;

  uVar2 = _objc_opt_new(&_OBJC_CLASS___UIImage);

  local_38 = 0;

  local_68 = IVar3;

  local_60 = &objc::class_t::WCMTOActivityCroppedImageProvider;

  IVar3 = _objc_msgSendSuper2(&local_68,"initWithPlaceholderItem:");

  local_38 = IVar3;

  _objc_storeStrong(&local_38);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  if (IVar3 != 0) {

    _objc_storeStrong(local_38 + (long)_image,local_48);

    pdVar1 = (double *)(local_38 + (long)_cropFrame);

    pdVar1[1] = dStack_28;

    *pdVar1 = local_30;

    pdVar1[3] = dStack_18;

    pdVar1[2] = local_20;

    *(long_long *)(local_38 + (long)_angle) = local_50;

    *(byte *)(local_38 + (long)_circular) = local_51 & 1;

  }

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_48);

  _objc_storeStrong(&local_38,0);

  return IVar3;

}






// ---- [d7] cropFrame @0xac9cc ----
// CALLERS: doneButtonTapped, initWithImage:cropFrame:angle:circular:, item, setCropFrame:, _objc_msgSend$cropFrame, _objc_msgSend$initWithImage:cropFrame:angle:circular:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOActivityCroppedImageProvider::cropFrame(ID param_1,SEL param_2)



{

  return *(CGRect *)(param_1 + (long)_cropFrame);

}






// ---- [d7] circular @0xacaa4 ----
// CALLERS: doneButtonTapped, initWithImage:cropFrame:angle:circular:, item, setCircular:, -[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:], ___73-[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:]_block_invoke, _objc_msgSend$circular, _objc_msgSend$initWithImage:cropFrame:angle:circular:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOActivityCroppedImageProvider::circular(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_circular) & 1;

}






// ---- [d7] croppedImage @0xacb00 ----
// CALLERS: doneButtonTapped, activityViewController:itemForActivityType:, item, setCroppedImage:, .cxx_destruct, -[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:], ___73-[UIImage(WCMTOCropRotate)_wcm_croppedImageWithFrame:angle:circularClip:]_block_invoke, _objc_msgSend$croppedImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::croppedImage(ID param_1,SEL param_2)



{

  ID IVar1;

  

  IVar1 = _objc_getProperty(param_1,param_2,(long)_croppedImage,1);

  return IVar1;

}






// ---- [d7] initWithCroppedFrame:angle:originalImageSize: @0xade84 ----
// CALLERS: doneButtonTapped, _objc_msgSend$initWithCroppedFrame:angle:originalImageSize:
// CALLEES: originalImageSize, original


/* Function Stack Size: 0x48 bytes */



ID WCMTOCroppedImageAttributes::initWithCroppedFrame_angle_originalImageSize_

             (ID param_1,SEL param_2,CGRect param_3,long_long param_4,CGSize param_5)



{

  long lVar1;

  ID IVar2;

  ID local_68;

  class_t *local_60;

  long_long local_58;

  SEL local_50;

  long local_48;

  double local_40;

  double dStack_38;

  double local_30;

  double dStack_28;

  double local_20;

  double dStack_18;

  

  dStack_38 = param_5.field1_0x8;

  local_40 = param_5.field0_0x0;

  dStack_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  dStack_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_48 = 0;

  local_60 = &objc::class_t::WCMTOCroppedImageAttributes;

  local_68 = param_1;

  local_58 = param_4;

  local_50 = param_2;

  lVar1 = _objc_msgSendSuper2(&local_68,"init");

  local_48 = lVar1;

  _objc_storeStrong(&local_48);

  if (lVar1 != 0) {

    *(long_long *)(local_48 + 8) = local_58;

    *(double *)(local_48 + 0x28) = dStack_28;

    *(double *)(local_48 + 0x20) = local_30;

    *(double *)(local_48 + 0x38) = dStack_18;

    *(double *)(local_48 + 0x30) = local_20;

    *(double *)(local_48 + 0x18) = dStack_38;

    *(double *)(local_48 + 0x10) = local_40;

  }

  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_48);

  _objc_storeStrong(&local_48,0);

  return IVar2;

}






// ---- [d7] originalImageSize @0xae020 ----
// CALLERS: doneButtonTapped, initWithCroppedFrame:angle:originalImageSize:, _objc_msgSend$initWithCroppedFrame:angle:originalImageSize:
// CALLEES: original


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCroppedImageAttributes::originalImageSize(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d7] original @0xae070 ----
// CALLERS: updateGallery, requestGalleryOriginal:, doneButtonTapped, initWithCroppedFrame:angle:originalImageSize:, originalImageSize, checkForCanReset, originalCropBoxSize, setOriginalCropBoxSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::original(ID param_1,SEL param_2)



{

  return *(CGSize *)PTR__CGSizeZero_001108e0;

}






// ---- [d7] imageCropFrame @0xb67bc ----
// CALLERS: doneButtonTapped, imageCropFrame, _objc_msgSend$imageCropFrame
// CALLEES: imageSize, cropBoxFrame, scrollView


/* Function Stack Size: 0x10 bytes */



CGRect __thiscall WCMTOCropView::imageCropFrame(WCMTOCropView *this,ID param_1,SEL param_2)



{

  CGRect CVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double in_d1;

  double dVar9;

  double in_d2;

  double in_d3;

  double local_1c8;

  double local_1c0;

  double local_1b8;

  double local_1b0;

  double local_1a8;

  double local_1a0;

  double local_198;

  undefined8 local_180;

  double dStack_28;

  

  dVar3 = (double)_objc_msgSend_imageSize(this);

  dVar8 = in_d1;

  _objc_msgSend_scrollView(this,local_180);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar4 = (double)_objc_msgSend_contentSize(uVar2,local_180);

  dVar9 = dVar8;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_cropBoxFrame(this,local_180);

  _objc_msgSend_scrollView(this,local_180);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar5 = (double)_objc_msgSend_contentOffset(uVar2,local_180);

  dVar7 = dVar9;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_scrollView(this,local_180);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar6 = (double)_objc_msgSend_contentInset(uVar2,local_180);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  local_198 = in_d1 / dVar8;

  if (dVar3 / dVar4 < local_198) {

    local_198 = dVar3 / dVar4;

  }

  dVar7 = (double)(float)(int)(((double)(float)(int)dVar5 + dVar7) * (dVar3 / dVar4));

  local_1a0 = dVar3;

  if (dVar7 < dVar3) {

    local_1a0 = dVar7;

  }

  if (local_1a0 <= 0.0) {

    local_1a8 = 0.0;

  }

  else {

    local_1a8 = local_1a0;

  }

  dVar8 = (double)(float)(int)(((double)(float)(int)dVar9 + dVar6) * (in_d1 / dVar8));

  local_1b0 = in_d1;

  if (dVar8 < in_d1) {

    local_1b0 = dVar8;

  }

  if (local_1b0 <= 0.0) {

    local_1b8 = 0.0;

  }

  else {

    local_1b8 = local_1b0;

  }

  local_1c0 = (double)(float)(int)(in_d2 * local_198);

  if (dVar3 - local_1a8 < local_1c0) {

    local_1c0 = dVar3 - local_1a8;

  }

  if ((double)(long)in_d2 == (double)(long)in_d3) {

    dStack_28 = local_1c0;

  }

  else {

    dStack_28 = (double)(float)(int)(in_d3 * local_198);

  }

  local_1c8 = in_d1 - local_1b8;

  if (dStack_28 <= local_1c8) {

    local_1c8 = dStack_28;

  }

  CVar1.field0_0x0.field1_0x8 = local_1b8;

  CVar1.field0_0x0.field0_0x0 = local_1a8;

  CVar1.field1_0x10.field0_0x0 = local_1c0;

  CVar1.field1_0x10.field1_0x8 = local_1c8;

  return CVar1;

}






// ---- [d7] doneButtonFrame @0xc2e84 ----
// CALLERS: doneButtonTapped, _objc_msgSend$doneButtonFrame
// CALLEES: doneTextButton, doneIconButton


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropToolbar::doneButtonFrame(ID param_1,SEL param_2)



{

  CGRect CVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_58;

  undefined8 local_30;

  undefined8 local_28;

  undefined8 local_20;

  undefined8 local_18;

  

  _objc_msgSend_doneIconButton(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  iVar2 = _objc_msgSend_isHidden(uVar3,local_58);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if (iVar2 == 0) {

    _objc_msgSend_doneIconButton(param_1,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_30 = _objc_msgSend_frame(uVar3,local_58);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    local_28 = in_d1;

    local_20 = in_d2;

    local_18 = in_d3;

  }

  else {

    _objc_msgSend_doneTextButton(param_1,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_30 = _objc_msgSend_frame(uVar3,local_58);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    local_28 = in_d1;

    local_20 = in_d2;

    local_18 = in_d3;

  }

  CVar1.field0_0x0.field1_0x8 = (double)local_28;

  CVar1.field0_0x0.field0_0x0 = (double)local_30;

  CVar1.field1_0x10.field0_0x0 = (double)local_20;

  CVar1.field1_0x10.field1_0x8 = local_18;

  return CVar1;

}






// ---- [d7] doneButtonColor @0xc5404 ----
// CALLERS: doneButtonColor, _objc_msgSend$doneButtonColor
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropToolbar::doneButtonColor(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_doneButtonColor);

}






// ---- [d7] __initializeAvailabilityCheck @0xc6480 ----
// CALLERS: _compatibilityInitializeAvailabilityCheck, _initializeAvailabilityCheck
// CALLEES: _initializeAvailabilityCheck


void __initializeAvailabilityCheck(code *param_1)



{

  int iVar1;

  uint uVar2;

  undefined8 *puVar3;

  code *pcVar4;

  code *pcVar5;

  code *pcVar6;

  code *pcVar7;

  code *pcVar8;

  code *pcVar9;

  code *pcVar10;

  code *pcVar11;

  code *pcVar12;

  FILE *pFVar13;

  size_t sVar14;

  void *pvVar15;

  size_t sVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  undefined8 uVar22;

  char acStack_88 [32];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00110518;

  if ((((ulong)param_1 & 1) != 0) || (DAT_0012c6c0 == (undefined *)0x0)) {

    if (PTR___availability_version_check_00110520 != (undefined *)0x0) {

      DAT_0012c6c0 = PTR___availability_version_check_00110520;

    }

    if ((((ulong)param_1 & 1) != 0) || (DAT_0012c6c0 == (undefined *)0x0)) {

      puVar3 = (undefined8 *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull");

      param_1 = (code *)0x0;

      if (puVar3 != (undefined8 *)0x0) {

        uVar22 = *puVar3;

        pcVar4 = (code *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");

        param_1 = (code *)0x0;

        if (pcVar4 != (code *)0x0) {

          pcVar5 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");

          pcVar6 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");

          param_1 = pcVar6;

          if (pcVar5 != (code *)0x0 || pcVar6 != (code *)0x0) {

            pcVar7 = (code *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");

            param_1 = (code *)0x0;

            if (pcVar7 != (code *)0x0) {

              pcVar8 = (code *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");

              param_1 = (code *)0x0;

              if (pcVar8 != (code *)0x0) {

                pcVar9 = (code *)_dlsym(0xfffffffffffffffe,"CFGetTypeID");

                param_1 = (code *)0x0;

                if (pcVar9 != (code *)0x0) {

                  pcVar10 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID");

                  param_1 = (code *)0x0;

                  if (pcVar10 != (code *)0x0) {

                    pcVar11 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetCString");

                    param_1 = (code *)0x0;

                    if (pcVar11 != (code *)0x0) {

                      pcVar12 = (code *)_dlsym(0xfffffffffffffffe,"CFRelease");

                      param_1 = (code *)0x0;

                      if (pcVar12 != (code *)0x0) {

                        pFVar13 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r");

                        param_1 = (code *)0x0;

                        if (pFVar13 != (FILE *)0x0) {

                          _fseek(pFVar13,0,2);

                          sVar14 = _ftell(pFVar13);

                          if ((long)sVar14 < 0) {

                            pvVar15 = (void *)0x0;

                          }

                          else {

                            _rewind(pFVar13);

                            pvVar15 = _malloc(sVar14);

                            if (((pvVar15 != (void *)0x0) &&

                                (sVar16 = _fread(pvVar15,1,sVar14,pFVar13), sVar16 == sVar14)) &&

                               (lVar17 = (*pcVar4)(0,pvVar15,sVar14,uVar22), lVar17 != 0)) {

                              if (pcVar5 == (code *)0x0) {

                                lVar18 = (*pcVar6)(0,lVar17,0,0);

                              }

                              else {

                                lVar18 = (*pcVar5)();

                              }

                              if (lVar18 != 0) {

                                lVar19 = (*pcVar7)(0,"ProductVersion",0x600,uVar22);

                                if (lVar19 != 0) {

                                  lVar20 = (*pcVar8)(lVar18,lVar19);

                                  (*pcVar12)(lVar19);

                                  if (lVar20 != 0) {

                                    lVar19 = (*pcVar9)(lVar20);

                                    lVar21 = (*pcVar10)();

                                    if ((lVar19 == lVar21) &&

                                       (iVar1 = (*pcVar11)(lVar20,acStack_88,0x20,0x8000100),

                                       iVar1 != 0)) {

                                      _sscanf(acStack_88,"%d.%d.%d");

                                    }

                                  }

                                }

                                (*pcVar12)(lVar18);

                              }

                              (*pcVar12)(lVar17);

                            }

                          }

                          _free(pvVar15);

                          uVar2 = _fclose(pFVar13);

                          param_1 = (code *)(ulong)uVar2;

                        }

                      }

                    }

                  }

                }

              }

            }

          }

        }

      }

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(param_1);

  }

  return;

}






// ---- [d7] setPreloadCount: @0x67494 ----
// CALLERS: openGallery:, dataMediator, _objc_msgSend$setPreloadCount:
// CALLEES: dataMediator, setPreloadCount:


/* Function Stack Size: 0x18 bytes */



void WCMYBImageBrowser::setPreloadCount_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  undefined8 uVar1;

  undefined8 local_40;

  

  _objc_msgSend_dataMediator(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setPreloadCount_(uVar1,local_40,param_3);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}






// ---- [d7] _WCMYBIBLowMemory @0x838d4 ----
// CALLERS: dataMediator, init, cuttingZoomScale, ___WCMYBIBLowMemory_block_invoke
// CALLEES: (叶)


byte _WCMYBIBLowMemory(void)



{

  undefined8 local_20;

  long *local_18;

  

  local_18 = &_WCMYBIBLowMemory_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  return _WCMYBIBLowMemory_lowMemory & 1;

}






// ---- [d7] initWithBrowser: @0x893b0 ----
// CALLERS: dataMediator, rotationHandler, _objc_msgSend$initWithBrowser:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMYBIBScreenRotationHandler::initWithBrowser_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  ID local_38;

  class_t *local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_38 = local_18;

  local_18 = 0;

  local_30 = &objc::class_t::WCMYBIBScreenRotationHandler;

  IVar1 = _objc_msgSendSuper2(&local_38,"init");

  local_18 = IVar1;

  _objc_storeStrong(&local_18);

  if (IVar1 != 0) {

    _objc_storeWeak(local_18 + 8,local_28);

    *(undefined1 *)(local_18 + 0x38) = 0;

    *(undefined8 *)(local_18 + 0x48) = 0x1a;

    *(undefined8 *)(local_18 + 0x50) = 0x3fd0000000000000;

  }

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_28);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d7] initWithBrowser: @0x8b930 ----
// CALLERS: dataMediator, rotationHandler, _objc_msgSend$initWithBrowser:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMYBIBDataMediator::initWithBrowser_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID local_38;

  class_t *local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_38 = local_18;

  local_18 = 0;

  local_30 = &objc::class_t::WCMYBIBDataMediator;

  IVar1 = _objc_msgSendSuper2(&local_38,"init");

  local_18 = IVar1;

  _objc_storeStrong(&local_18);

  if (IVar1 != 0) {

    _objc_storeWeak(local_18 + 8,local_28);

    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);

    uVar3 = *(undefined8 *)(local_18 + 0x10);

    *(undefined8 *)(local_18 + 0x10) = uVar2;

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_28);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d7] setDataCacheCountLimit: @0x8c274 ----
// CALLERS: dataMediator, _objc_msgSend$setDataCacheCountLimit:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBDataMediator::setDataCacheCountLimit_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x18) = param_3;

  _objc_msgSend_setCountLimit_(*(undefined8 *)(param_1 + 0x10),param_2,param_3);

  return;

}






// ---- [d7] setPreloadCount: @0x8c2f0 ----
// CALLERS: openGallery:, dataMediator, setPreloadCount:, _objc_msgSend$setPreloadCount:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBDataMediator::setPreloadCount_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x20) = param_3;

  return;

}






// ---- [d7] implementGetBaseInfoProtocol: @0x65208 ----
// CALLERS: buildToolView, collectionView:cellForItemAtIndexPath:, dataForCellAtIndex:, _objc_msgSend$implementGetBaseInfoProtocol:
// CALLEES: collection, containerView, collectionView, currentOrientation, currentPage, isTransitioning, isShowTransitioning, isHideTransitioning, auxiliaryViewHandler, webImageMediator


/* Function Stack Size: 0x18 bytes */



void WCMYBImageBrowser::implementGetBaseInfoProtocol_(ID param_1,SEL param_2,ID param_3)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 local_250;

  undefined *local_238;

  undefined4 local_230;

  undefined4 local_22c;

  code *local_228;

  undefined *local_220;

  undefined1 auStack_218 [8];

  undefined *local_210;

  undefined4 local_208;

  undefined4 local_204;

  code *local_200;

  undefined *local_1f8;

  undefined1 auStack_1f0 [8];

  undefined *local_1e8;

  undefined4 local_1e0;

  undefined4 local_1dc;

  code *local_1d8;

  undefined *local_1d0;

  undefined1 auStack_1c8 [8];

  undefined *local_1c0;

  undefined4 local_1b8;

  undefined4 local_1b4;

  code *local_1b0;

  undefined *local_1a8;

  undefined1 auStack_1a0 [8];

  undefined *local_198;

  undefined4 local_190;

  undefined4 local_18c;

  code *local_188;

  undefined *local_180;

  undefined1 auStack_178 [8];

  undefined *local_170;

  undefined4 local_168;

  undefined4 local_164;

  code *local_160;

  undefined *local_158;

  undefined1 auStack_150 [8];

  undefined *local_148;

  undefined4 local_140;

  undefined4 local_13c;

  code *local_138;

  undefined *local_130;

  undefined1 auStack_128 [8];

  undefined *local_120;

  undefined4 local_118;

  undefined4 local_114;

  code *local_110;

  undefined *local_108;

  undefined1 auStack_100 [8];

  undefined *local_f8;

  undefined4 local_f0;

  undefined4 local_ec;

  code *local_e8;

  undefined *local_e0;

  undefined1 auStack_d8 [8];

  SEL local_d0;

  undefined *local_c8;

  undefined4 local_c0;

  undefined4 local_bc;

  code *local_b8;

  undefined *local_b0;

  undefined1 auStack_a8 [8];

  undefined *local_a0;

  undefined4 local_98;

  undefined4 local_94;

  code *local_90;

  undefined *local_88;

  undefined1 auStack_80 [8];

  undefined *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  code *local_68;

  undefined *local_60;

  undefined1 auStack_58 [24];

  undefined1 auStack_40 [8];

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  _objc_initWeak(auStack_40,local_28);

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_currentOrientation:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_78 = PTR___NSConcreteStackBlock_001104f0;

    local_70 = 0xc2000000;

    local_6c = 0;

    local_68 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke;

    local_60 = &___block_descriptor_40_e8_32w_e5_q8__0l;

    _objc_copyWeak(auStack_58,auStack_40);

    _objc_msgSend_setWcm_yb_currentOrientation_(uVar2,local_250,&local_78);

    _objc_destroyWeak(auStack_58);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_containerSize:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_a0 = PTR___NSConcreteStackBlock_001104f0;

    local_98 = 0xc2000000;

    local_94 = 0;

    local_90 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_46;

    local_88 = &___block_descriptor_40_e8_32w_e18__CGSize_dd_16__0q8l;

    _objc_copyWeak(auStack_80,auStack_40);

    _objc_msgSend_setWcm_yb_containerSize_(uVar2,local_250,&local_a0);

    _objc_destroyWeak(auStack_80);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_auxiliaryViewHandler:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_c8 = PTR___NSConcreteStackBlock_001104f0;

    local_c0 = 0xc2000000;

    local_bc = 0;

    local_b8 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_50;

    local_b0 = &___block_descriptor_40_e8_32w_e36___<WCMYBIBAuxiliaryViewHandler>_8__0l;

    _objc_copyWeak(auStack_a8,auStack_40);

    _objc_msgSend_setWcm_yb_auxiliaryViewHandler_(uVar2,local_250,&local_c8);

    _objc_destroyWeak(auStack_a8);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_webImageMediator:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_f8 = PTR___NSConcreteStackBlock_001104f0;

    local_f0 = 0xc2000000;

    local_ec = 0;

    local_e8 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_54;

    local_e0 = &___block_descriptor_48_e8_32w_e32___<WCMYBIBWebImageMediator>_8__0l;

    _objc_copyWeak(auStack_d8,auStack_40);

    local_d0 = local_30;

    _objc_msgSend_setWcm_yb_webImageMediator_(uVar2,local_250,&local_f8);

    _objc_destroyWeak(auStack_d8);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_currentPage:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_120 = PTR___NSConcreteStackBlock_001104f0;

    local_118 = 0xc2000000;

    local_114 = 0;

    local_110 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_63;

    local_108 = &___block_descriptor_40_e8_32w_e5_q8__0l;

    _objc_copyWeak(auStack_100,auStack_40);

    _objc_msgSend_setWcm_yb_currentPage_(uVar2,local_250,&local_120);

    _objc_destroyWeak(auStack_100);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_totalPage:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_148 = PTR___NSConcreteStackBlock_001104f0;

    local_140 = 0xc2000000;

    local_13c = 0;

    local_138 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_2;

    local_130 = &___block_descriptor_40_e8_32w_e5_q8__0l;

    _objc_copyWeak(auStack_128,auStack_40);

    _objc_msgSend_setWcm_yb_totalPage_(uVar2,local_250,&local_148);

    _objc_destroyWeak(auStack_128);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_backView:");

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_setWcm_yb_backView_(local_38,local_250,local_28);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_containerView:");

  if ((uVar1 & 1) != 0) {

    uVar2 = _objc_msgSend_containerView(local_28,local_250);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    _objc_msgSend_setWcm_yb_containerView_(local_38,local_250);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_collectionView:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_170 = PTR___NSConcreteStackBlock_001104f0;

    local_168 = 0xc2000000;

    local_164 = 0;

    local_160 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_3;

    local_158 = &___block_descriptor_40_e8_32w_e23___UICollectionView_8__0l;

    _objc_copyWeak(auStack_150,auStack_40);

    _objc_msgSend_setWcm_yb_collectionView_(uVar2,local_250,&local_170);

    _objc_destroyWeak(auStack_150);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_cellIsInCenter:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_198 = PTR___NSConcreteStackBlock_001104f0;

    local_190 = 0xc2000000;

    local_18c = 0;

    local_188 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_75;

    local_180 = &___block_descriptor_40_e8_32w_e5_B8__0l;

    _objc_copyWeak(auStack_178,auStack_40);

    _objc_msgSend_setWcm_yb_cellIsInCenter_(uVar2,local_250,&local_198);

    _objc_destroyWeak(auStack_178);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isTransitioning:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_1c0 = PTR___NSConcreteStackBlock_001104f0;

    local_1b8 = 0xc2000000;

    local_1b4 = 0;

    local_1b0 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_79;

    local_1a8 = &___block_descriptor_40_e8_32w_e5_B8__0l;

    _objc_copyWeak(auStack_1a0,auStack_40);

    _objc_msgSend_setWcm_yb_isTransitioning_(uVar2,local_250,&local_1c0);

    _objc_destroyWeak(auStack_1a0);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isShowTransitioning:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_1e8 = PTR___NSConcreteStackBlock_001104f0;

    local_1e0 = 0xc2000000;

    local_1dc = 0;

    local_1d8 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_2_82;

    local_1d0 = &___block_descriptor_40_e8_32w_e5_B8__0l;

    _objc_copyWeak(auStack_1c8,auStack_40);

    _objc_msgSend_setWcm_yb_isShowTransitioning_(uVar2,local_250,&local_1e8);

    _objc_destroyWeak(auStack_1c8);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isHideTransitioning:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_210 = PTR___NSConcreteStackBlock_001104f0;

    local_208 = 0xc2000000;

    local_204 = 0;

    local_200 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_3_85;

    local_1f8 = &___block_descriptor_40_e8_32w_e5_B8__0l;

    _objc_copyWeak(auStack_1f0,auStack_40);

    _objc_msgSend_setWcm_yb_isHideTransitioning_(uVar2,local_250,&local_210);

    _objc_destroyWeak(auStack_1f0);

  }

  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isRotating:");

  uVar2 = local_38;

  if ((uVar1 & 1) != 0) {

    local_238 = PTR___NSConcreteStackBlock_001104f0;

    local_230 = 0xc2000000;

    local_22c = 0;

    local_228 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_4;

    local_220 = &___block_descriptor_40_e8_32w_e5_B8__0l;

    _objc_copyWeak(auStack_218,auStack_40);

    _objc_msgSend_setWcm_yb_isRotating_(uVar2,local_250,&local_238);

    _objc_destroyWeak(auStack_218);

  }

  _objc_destroyWeak(auStack_40);

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d7] dataSourceArray @0x676f4 ----
// CALLERS: galleryImageData:, updateGallery, setDataSourceArray:, .cxx_destruct, numberOfCells, dataForCellAtIndex:, _objc_msgSend$dataSourceArray
// CALLEES: dataSource


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::dataSourceArray(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_dataSourceArray);

}






// ---- [d7] numberOfCells @0x8ba2c ----
// CALLERS: ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_2, collectionView:numberOfItemsInSection:, scrollViewDidScroll:, setCurrentPage:, dataForCellAtIndex:, _objc_msgSend$numberOfCells, _objc_msgSend$wcm_yb_numberOfCellsInImageBrowser:
// CALLEES: dataSourceArray, dataSource


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBDataMediator::numberOfCells(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long_long lVar6;

  undefined8 local_90;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 8);

  _objc_msgSend_dataSource(uVar1,local_90);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    uVar3 = _objc_loadWeakRetained(param_1 + 8);

    _objc_msgSend_dataSourceArray(uVar3,local_90);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar6 = _objc_msgSend_count(uVar4,local_90);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  else {

    uVar3 = _objc_loadWeakRetained(param_1 + 8);

    _objc_msgSend_dataSource(uVar3,local_90);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar5 = _objc_loadWeakRetained(param_1 + 8);

    lVar6 = _objc_msgSend_wcm_yb_numberOfCellsInImageBrowser_(uVar4,local_90);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  (*(code *)PTR__objc_release_00110458)(lVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return lVar6;

}






// ---- [d7] containerView @0x66d58 ----
// CALLERS: frameOfPresentedViewInContainerView, containerViewWillLayoutSubviews, presentationTransitionWillBegin, animateTransition:, build, buildToolView, rebuild, implementGetBaseInfoProtocol:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::containerView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_containerView) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBContainerView);

    uVar2 = *(undefined8 *)(param_1 + (long)_containerView);

    *(undefined8 *)(param_1 + (long)_containerView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(*(undefined8 *)(param_1 + (long)_containerView),local_30);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_containerView),local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setMasksToBounds_(uVar1,local_30,1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_containerView));

  return IVar3;

}






// ---- [d7] wcm_yb_containerView @0x7cca4 ----
// CALLERS: buildToolView, saveToPhotoAlbumCompleteWithError:, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.109, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.113, wcm_yb_containerViewIsReadied, showSheetView, _objc_msgSend$wcm_yb_containerView, _objc_msgSend$wcm_yb_containerViewIsReadied
// CALLEES: containerView


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_containerView(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + 0x38);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d7] currentDataShouldHideSaveButton @0x85df0 ----
// CALLERS: wcm_yb_pageChanged, showSheetView, _objc_msgSend$currentDataShouldHideSaveButton
// CALLEES: currentData, wcm_yb_allowSaveToPhotoAlbum, wcm_yb_saveToPhotoAlbum, allowSaveToPhotoAlbum, saveToPhotoAlbum, wcm_yb_currentData


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBToolViewHandler::currentDataShouldHideSaveButton(ID param_1,SEL param_2)



{

  byte bVar1;

  long lVar2;

  ulong uVar3;

  uint local_44;

  undefined8 local_40;

  uint local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSend_wcm_yb_currentData(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  (**(code **)(lVar2 + 0x10))();

  local_28 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(lVar2);

  uVar3 = _objc_opt_respondsToSelector(local_28,"wcm_yb_allowSaveToPhotoAlbum");

  local_30 = 0;

  if ((uVar3 & 1) != 0) {

    local_30 = _objc_msgSend_wcm_yb_allowSaveToPhotoAlbum(local_28,local_40);

  }

  bVar1 = _objc_opt_respondsToSelector(local_28,"wcm_yb_saveToPhotoAlbum");

  local_44 = 0;

  if ((local_30 & 1) != 0) {

    local_44 = (uint)(bVar1 & 1);

  }

  _objc_storeStrong(&local_28,0);

  return local_44 ^ 1;

}






// ---- [d7] sheetView @0x862d8 ----
// CALLERS: wcm_yb_hide:, wcm_yb_orientationWillChangeWithExpectOrientation:, showSheetView, ___35-[WCMYBIBToolViewHandler_sheetView]_block_invoke, ___36-[WCMYBIBToolViewHandler_saveAction]_block_invoke, _objc_msgSend$sheetView
// CALLEES: setCurrentdata:


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::sheetView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_70;

  undefined *local_50;

  undefined4 local_48;

  undefined4 local_44;

  code *local_40;

  undefined *local_38;

  undefined1 auStack_30 [8];

  undefined1 auStack_28 [8];

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  if (*(long *)(param_1 + 0x38) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBSheetView);

    uVar2 = *(undefined8 *)(local_18 + 0x38);

    *(undefined8 *)(local_18 + 0x38) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_initWeak(auStack_28,local_18);

    uVar1 = *(undefined8 *)(local_18 + 0x38);

    local_50 = PTR___NSConcreteStackBlock_001104f0;

    local_48 = 0xc2000000;

    local_44 = 0;

    local_40 = ___35__WCMYBIBToolViewHandler_sheetView__block_invoke;

    local_38 = &___block_descriptor_40_e8_32w_e28___<WCMYBIBDataProtocol>_8__0l;

    _objc_copyWeak(auStack_30,auStack_28);

    _objc_msgSend_setCurrentdata_(uVar1,local_70,&local_50);

    _objc_destroyWeak(auStack_30);

    _objc_destroyWeak(auStack_28);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + 0x38));

  return IVar3;

}






// ---- [d7] saveAction @0x86494 ----
// CALLERS: showSheetView, ___36-[WCMYBIBToolViewHandler_saveAction]_block_invoke, _objc_msgSend$saveAction
// CALLEES: sharedCopywriter, saveToPhotoAlbum, actionWithName:action:


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::saveAction(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 local_78;

  undefined *local_60;

  undefined4 local_58;

  undefined4 local_54;

  code *local_50;

  undefined *local_48;

  undefined1 auStack_40 [24];

  undefined1 auStack_28 [8];

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  if (*(long *)(param_1 + 0x48) == 0) {

    _objc_initWeak(auStack_28,param_1);

    uVar1 = _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_78);

    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);

    uVar2 = _objc_msgSend_saveToPhotoAlbum(uVar1,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);

    local_60 = PTR___NSConcreteStackBlock_001104f0;

    local_58 = 0xc2000000;

    local_54 = 0;

    local_50 = ___36__WCMYBIBToolViewHandler_saveAction__block_invoke;

    local_48 = &___block_descriptor_40_e8_32w_e31_v16__0__<WCMYBIBDataProtocol>_8l;

    _objc_copyWeak(auStack_40,auStack_28);

    uVar3 = _objc_msgSend_actionWithName_action_

                      (&objc::class_t::WCMYBIBSheetAction,local_78,uVar2,&local_60);

    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar4 = *(undefined8 *)(local_18 + 0x48);

    *(undefined8 *)(local_18 + 0x48) = uVar3;

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_destroyWeak(auStack_40);

    _objc_destroyWeak(auStack_28);

  }

  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(local_18 + 0x48));

  return IVar5;

}






// ---- [d7] wcm_yb_containerView @0x8694c ----
// CALLERS: saveToPhotoAlbumCompleteWithError:, wcm_yb_containerViewIsReadied, showSheetView, _objc_msgSend$wcm_yb_containerView
// CALLEES: containerView


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::wcm_yb_containerView(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + 8);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ---- [d7] showToView:orientation: @0x876c0 ----
// CALLERS: showSheetView, _objc_msgSend$showToView:orientation:
// CALLEES: _CGRectMake, _WCMYBIBPaddingByBrowserOrientation, tableView, actions, cellHeight, maxHeightScale, showDuration, showDuration, setFrame:


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x20 bytes */



void WCMYBIBSheetView::showToView_orientation_(ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  undefined8 *puVar1;

  undefined8 *puVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  double dVar6;

  double dVar7;

  undefined8 uVar8;

  double in_d2;

  double dVar9;

  double in_d3;

  double local_280;

  undefined8 local_240;

  undefined *local_228;

  undefined4 local_220;

  undefined4 local_21c;

  code *local_218;

  undefined *local_210;

  undefined8 local_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  double dStack_1e8;

  undefined8 local_1e0;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  double dStack_1a8;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 local_158;

  double local_150;

  double local_148;

  undefined8 local_138;

  double local_130;

  double local_128;

  double local_118;

  double local_110;

  undefined8 local_108;

  double local_f8;

  double local_e8;

  undefined8 local_e0;

  double local_d0;

  double local_c0;

  double local_b8;

  undefined8 local_b0;

  undefined8 local_68;

  undefined4 local_44;

  long_long local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  local_40 = param_4;

  _objc_msgSend_actions(local_28,local_240);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = _objc_msgSend_count(uVar3,local_240);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if (lVar4 == 0) {

    local_44 = 1;

  }

  else {

    _objc_msgSend_addSubview_(local_38,local_240,local_28);

    local_68 = _objc_msgSend_bounds(local_38,local_240);

    _objc_msgSend_setFrame_(local_68,local_28,local_240);

    local_b0 = _WCMYBIBPaddingByBrowserOrientation(local_40);

    local_b8 = in_d2;

    dVar6 = (double)_objc_msgSend_cellHeight(local_28,local_240);

    _objc_msgSend_actions(local_28,local_240);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = _objc_msgSend_count(uVar3,local_240);

    dVar7 = _kOffsetSpace + (double)(lVar4 + 1) * dVar6 + local_b8;

    dVar6 = local_b8;

    dVar9 = _kOffsetSpace;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    puVar1 = (undefined8 *)(local_28 + (long)_tableShowFrame);

    local_c0 = dVar7;

    local_e0 = _objc_msgSend_frame(local_28,local_240);

    puVar1[1] = dVar6;

    *puVar1 = local_e0;

    puVar1[3] = in_d3;

    puVar1[2] = dVar9;

    local_d0 = dVar9;

    dVar6 = (double)_objc_msgSend_maxHeightScale(local_28,local_240);

    local_108 = _objc_msgSend_bounds(local_28,local_240);

    local_e8 = dVar6 * in_d3;

    local_110 = local_c0;

    local_280 = local_e8;

    if (local_c0 <= local_e8) {

      local_280 = local_c0;

    }

    local_118 = local_280;

    *(double *)(local_28 + (long)_tableShowFrame + 0x18) = local_280;

    dVar6 = local_c0;

    local_f8 = dVar9;

    local_138 = _objc_msgSend_bounds(local_28,local_240);

    dVar7 = *(double *)(local_28 + (long)_tableShowFrame + 0x18);

    *(double *)(local_28 + (long)_tableShowFrame + 8) = in_d3 - dVar7;

    puVar1 = (undefined8 *)(local_28 + (long)_tableHideFrame);

    puVar2 = (undefined8 *)(local_28 + (long)_tableShowFrame);

    uVar3 = *puVar2;

    puVar1[1] = puVar2[1];

    *puVar1 = uVar3;

    uVar3 = puVar2[2];

    puVar1[3] = puVar2[3];

    puVar1[2] = uVar3;

    local_130 = dVar6;

    local_128 = dVar9;

    local_158 = _objc_msgSend_bounds(local_28,local_240);

    *(double *)(local_28 + (long)_tableHideFrame + 8) = in_d3;

    local_150 = dVar7;

    local_148 = dVar9;

    _objc_msgSend_blackColor(&_OBJC_CLASS___UIColor,local_240);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_colorWithAlphaComponent_(uVar3,local_240);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_28,local_240);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    puVar1 = (undefined8 *)(local_28 + (long)_tableHideFrame);

    uStack_178 = puVar1[1];

    local_180 = *puVar1;

    uStack_168 = puVar1[3];

    local_170 = puVar1[2];

    _objc_msgSend_tableView(local_28,local_240);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar3 = local_170;

    _objc_msgSend_setFrame_(local_180,uVar5,local_240);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_msgSend_tableView(local_28,local_240);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_1e0 = _objc_msgSend_frame(uVar5,local_240);

    uVar8 = 0;

    local_1c0 = _CGRectMake(0);

    uStack_1b8 = uVar8;

    local_1b0 = uVar3;

    dStack_1a8 = local_b8;

    _objc_msgSend_tableView(local_28,local_240);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_tableFooterView(uVar3,local_240);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uStack_1f8 = uStack_1b8;

    local_200 = local_1c0;

    dStack_1e8 = dStack_1a8;

    local_1f0 = local_1b0;

    _objc_msgSend_setBounds_(local_1c0,uStack_1b8,local_1b0,dStack_1a8,uVar8,local_240);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    uVar3 = _objc_msgSend_showDuration(local_28,local_240);

    local_228 = PTR___NSConcreteStackBlock_001104f0;

    local_220 = 0xc2000000;

    local_21c = 0;

    local_218 = ___43__WCMYBIBSheetView_showToView_orientation___block_invoke;

    local_210 = &___block_descriptor_40_e8_32s_e5_v8__0l;

    local_208 = (*(code *)PTR__objc_retain_00110460)(local_28);

    _objc_msgSend_animateWithDuration_animations_(uVar3,&_OBJC_CLASS___UIView,local_240,&local_228);

    _objc_storeStrong(&local_208,0);

    local_44 = 0;

  }

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d7] actions @0x88b6c ----
// CALLERS: showSheetView, showToView:orientation:, tableView:numberOfRowsInSection:, tableView:cellForRowAtIndexPath:, tableView:didSelectRowAtIndexPath:, _objc_msgSend$actions
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBSheetView::actions(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_actions);

}






// ---- [d7] tailoringImageView @0x70640 ----
// CALLERS: showTailoringImageView:, hideTailoringImageView, setTailoringImageView:, .cxx_destruct, _objc_msgSend$tailoringImageView
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::tailoringImageView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_tailoringImageView) == 0) {

    uVar1 = _objc_opt_new(&_OBJC_CLASS___UIImageView);

    uVar2 = *(undefined8 *)(param_1 + (long)_tailoringImageView);

    *(undefined8 *)(param_1 + (long)_tailoringImageView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setContentMode_(*(undefined8 *)(param_1 + (long)_tailoringImageView),local_28,1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_tailoringImageView));

  return IVar3;

}






// ---- [d7] wcm_yb_auxiliaryViewHandler @0x70930 ----
// CALLERS: hideAuxiliaryView, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageIsInvalidForData:, wcm_yb_imageData:downloadProgress:, wcm_yb_imageDownloadFailedForData:, setWcm_yb_auxiliaryViewHandler:
// CALLEES: auxiliaryViewHandler


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_auxiliaryViewHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_auxiliaryViewHandler);

}






// ---- [d7] wcm_yb_auxiliaryViewHandler @0x7cd04 ----
// CALLERS: hideAuxiliaryView, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageIsInvalidForData:, wcm_yb_imageData:downloadProgress:, wcm_yb_imageDownloadFailedForData:, saveToPhotoAlbumCompleteWithError:
// CALLEES: auxiliaryViewHandler


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_auxiliaryViewHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x40);

}






// ---- [d7] rotationHandler @0x67550 ----
// CALLERS: build, rebuild, showToView:containerSize:, hide, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.46, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_4, scrollViewDidScroll:
// CALLEES: initWithBrowser:, initWithBrowser:


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::rotationHandler(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_28;

  

  if (*(long *)(param_1 + (long)_rotationHandler) == 0) {

    uVar1 = _objc_alloc(&objc::class_t::WCMYBIBScreenRotationHandler);

    uVar1 = _objc_msgSend_initWithBrowser_(uVar1,local_28,param_1);

    uVar2 = *(undefined8 *)(param_1 + (long)_rotationHandler);

    *(undefined8 *)(param_1 + (long)_rotationHandler) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_rotationHandler));

  return IVar3;

}






// ---- [d7] currentOrientation @0x8b758 ----
// CALLERS: showToView:containerSize:, hide, currentOrientation, configContainerSize:, deviceOrientationDidChangeNotification:, _objc_msgSend$currentOrientation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBScreenRotationHandler::currentOrientation(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 0x40);

}






// ---- [d7] resetAnimated @0x9db04 ----
// CALLERS: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke.71, setHighlighted:, setImage:withType:, imageChanged, _objc_msgSend$resetAnimated
// CALLEES: currentAnimatedImageIndex


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::resetAnimated(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_a8;

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined *local_58;

  undefined4 local_50;

  undefined4 local_4c;

  code *local_48;

  undefined *local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  undefined8 local_20;

  long *local_18;

  

  lVar3 = (long)_onceToken;

  local_58 = PTR___NSConcreteStackBlock_001104f0;

  local_50 = 0xc2000000;

  local_4c = 0;

  local_48 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke;

  local_40 = &___block_descriptor_40_e8_32s_e5_v8__0l;

  local_30 = param_2;

  local_28 = param_1;

  local_38 = (*(code *)PTR__objc_retain_00110460)(param_1);

  local_18 = (long *)(param_1 + lVar3);

  local_20 = 0;

  _objc_storeStrong(&local_20,&local_58);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_28 + (long)_requestQueue),local_a8);

  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_28 + (long)_lock),0xffffffffffffffff);

  lVar3 = _objc_msgSend_count(*(undefined8 *)(local_28 + (long)_buffer),local_a8);

  if (lVar3 != 0) {

    local_60 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(local_28 + (long)_buffer));

    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

    uVar2 = *(undefined8 *)(local_28 + (long)_buffer);

    *(undefined8 *)(local_28 + (long)_buffer) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _dispatch_get_global_queue(-2,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_88 = PTR___NSConcreteStackBlock_001104f0;

    local_80 = 0xc2000000;

    local_7c = 0;

    local_78 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke_71;

    local_70 = &___block_descriptor_40_e8_32s_e5_v8__0l;

    local_68 = (*(code *)PTR__objc_retain_00110460)(local_60);

    _dispatch_async(uVar1,&local_88);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_68);

    _objc_storeStrong(&local_60,0);

  }

  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_28 + (long)_lock));

  _objc_msgSend_setPaused_(*(undefined8 *)(local_28 + (long)_link),local_a8,1);

  *(undefined8 *)(local_28 + (long)_time) = 0;

  if (*(long *)(local_28 + (long)_curIndex) != 0) {

    _objc_msgSend_willChangeValueForKey_(local_28,local_a8);

    *(undefined8 *)(local_28 + (long)_curIndex) = 0;

    _objc_msgSend_didChangeValueForKey_(local_28,local_a8,&cf_currentAnimatedImageIndex);

  }

  _objc_storeStrong(local_28 + (long)_curAnimatedImage);

  _objc_storeStrong(local_28 + (long)_curFrame,0);

  *(undefined8 *)(local_28 + (long)_curLoop) = 0;

  *(undefined8 *)(local_28 + (long)_totalLoop) = 0;

  *(undefined8 *)(local_28 + (long)_totalFrameCount) = 1;

  *(undefined1 *)(local_28 + (long)_loopEnd) = 0;

  *(undefined1 *)(local_28 + (long)_bufferMiss) = 0;

  *(undefined8 *)(local_28 + (long)_incrBufferCount) = 0;

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d7] setHighlightedImage: @0x9e23c ----
// CALLERS: initWithImage:highlightedImage:, setImage:withType:, initWithCoder:, _objc_msgSend$setHighlightedImage:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedImage(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,2);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d7] setAnimationImages: @0x9e2e4 ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_animationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,3);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d7] setHighlightedAnimationImages: @0x9e38c ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedAnimationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,4);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d7] imageChanged @0x9e8c8 ----
// CALLERS: setHighlighted:, setImage:withType:, _objc_msgSend$imageChanged
// CALLEES: _CGRectMake, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount, animatedImageContentsRectAtIndex:, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::imageChanged(ID param_1,SEL param_2)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_100;

  byte local_49;

  ulong local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  local_38 = _objc_msgSend_currentImageType(param_1);

  _objc_msgSend_imageForType_(local_28,local_100,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_48 = 0;

  local_49 = 0;

  local_40 = uVar2;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if ((((uVar4 & 1) != 0) &&

      (uVar4 = _objc_msgSend_conformsToProtocol_

                         (local_40,local_100,&objc::protocol_t::WCMYYAnimatedImage),

      (uVar4 & 1) != 0)) &&

     (local_48 = _objc_msgSend_animatedImageFrameCount(local_40,local_100), 1 < local_48)) {

    local_49 = _objc_opt_respondsToSelector(local_40,"animatedImageContentsRectAtIndex:");

    local_49 = local_49 & 1;

  }

  if ((local_49 == 0) && ((*(byte *)(local_28 + (long)_curImageHasContentsRect) & 1) != 0)) {

    _objc_msgSend_layer(local_28,local_100);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_msgSend_contentsRect(uVar2,local_100);

    _CGRectMake(0);

    uVar1 = _CGRectEqualToRect(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if ((uVar1 & 1) == 0) {

      _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_100);

      _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_100,1);

      in_d1 = 0;

      in_d3 = 0x3ff0000000000000;

      in_d2 = 0x3ff0000000000000;

      uVar3 = _CGRectMake(0);

      _objc_msgSend_layer(local_28,local_100);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setContentsRect_(uVar3,uVar2,local_100);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_100);

    }

  }

  *(byte *)(local_28 + (long)_curImageHasContentsRect) = local_49;

  if (local_49 != 0) {

    uVar2 = _objc_msgSend_animatedImageContentsRectAtIndex_(local_40,local_100,0);

    _objc_msgSend_setContentsRect_forImage_(uVar2,in_d1,in_d2,in_d3,local_28,local_100,local_40);

  }

  if (local_48 != 0 && local_48 - 1 != 0) {

    _objc_msgSend_resetAnimated(local_48 - 1,local_28,local_100);

    _objc_storeStrong(local_28 + (long)_curAnimatedImage,local_40);

    _objc_storeStrong(local_28 + (long)_curFrame,local_40);

    uVar2 = _objc_msgSend_animatedImageLoopCount

                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);

    *(undefined8 *)(local_28 + (long)_totalLoop) = uVar2;

    uVar2 = _objc_msgSend_animatedImageFrameCount

                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);

    *(undefined8 *)(local_28 + (long)_totalFrameCount) = uVar2;

    _objc_msgSend_calcMaxBufferCount(local_28,local_100);

  }

  _objc_msgSend_setNeedsDisplay(local_28,local_100);

  _objc_msgSend_didMoved(local_28,local_100);

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d7] stopAnimating @0x9eff0 ----
// CALLERS: setImage:withType:, step:, didMoved, _objc_msgSend$stopAnimating
// CALLEES: setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::stopAnimating(ID param_1,SEL param_2)



{

  undefined8 local_38;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMYYAnimatedImageView;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"stopAnimating");

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_18 + (long)_requestQueue),local_38);

  _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_38,1);

  _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_38,0);

  return;

}






// ---- [d8] layout @0x7d500 ----
// CALLERS: setDistanceBetweenPages:, distanceBetweenPages, updateImageLayoutWithOrientation:previousImageSize:, bestSizeOfCompressing, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, applicationDidChangedStatusBarOrientationNotification:, _objc_msgSend$layout
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::layout(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x108);

}






// ---- [d8] layout @0x8cbdc ----
// CALLERS: setDistanceBetweenPages:, distanceBetweenPages, updateImageLayoutWithOrientation:previousImageSize:, bestSizeOfCompressing, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, applicationDidChangedStatusBarOrientationNotification:, _objc_msgSend$layout
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCollectionView::layout(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_layout);

}






// ---- [d8] imageViewFrame @0xb7700 ----
// CALLERS: showToView:containerSize:, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, contentSizeWithContainerSize:imageViewFrame:, updateImageLayoutWithOrientation:previousImageSize:, bestSizeOfCompressing, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, dismissAnimatedFromParentViewController:withCroppedImage:toView:toFrame:setup:completion:, _objc_msgSend$contentSizeWithContainerSize:imageViewFrame:
// CALLEES: imageView, scrollView


/* Function Stack Size: 0x10 bytes */



CGRect WCMTOCropView::imageViewFrame(ID param_1,SEL param_2)



{

  CGRect CVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  undefined8 uVar5;

  double in_d1;

  undefined8 local_80;

  

  _objc_msgSend_scrollView(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar3 = (double)_objc_msgSend_contentOffset(uVar2,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_scrollView(param_1,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_contentOffset(uVar2,local_80);

  dVar4 = -in_d1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_scrollView(param_1,local_80);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_msgSend_contentSize(uVar2,local_80);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  CVar1.field0_0x0.field1_0x8 = dVar4;

  CVar1.field0_0x0.field0_0x0 = -dVar3;

  CVar1.field1_0x10.field0_0x0 = (double)uVar5;

  CVar1.field1_0x10.field1_0x8 = in_d1;

  return CVar1;

}






// ---- [d8] compressingSize @0x7d204 ----
// CALLERS: shouldCompressWithImageSize:scale:, cuttingZoomScale, _objc_msgSend$compressingSize
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBImageData::compressingSize(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0xb8);

}






// ---- [d8] minimumAspectRatio @0xbbe28 ----
// CALLERS: minimumAspectRatio, _objc_msgSend$minimumAspectRatio
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::minimumAspectRatio(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_minimumAspectRatio);

}






// ---- [d8] setCanBeReset: @0xb7810 ----
// CALLERS: scrollViewWillBeginDragging:, scrollViewWillBeginZooming:withView:, checkForCanReset, _objc_msgSend$setCanBeReset:
// CALLEES: delegate, delegate, cropViewDidBecomeResettable:, cropViewDidBecomeNonResettable:, cropView, delegate, delegate, canBeReset


/* Function Stack Size: 0x14 bytes */



void WCMTOCropView::setCanBeReset_(ID param_1,SEL param_2,bool param_3)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 local_38;

  

  if ((param_3 & 1) != (*(byte *)(param_1 + (long)_canBeReset) & 1)) {

    *(byte *)(param_1 + (long)_canBeReset) = (byte)param_3 & 1;

    if ((param_3 & 1) == 0) {

      _objc_msgSend_delegate(param_1,local_38);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar1 = _objc_opt_respondsToSelector(uVar2,"cropViewDidBecomeNonResettable:");

      (*(code *)PTR__objc_release_00110458)(uVar2);

      if ((uVar1 & 1) != 0) {

        _objc_msgSend_delegate(param_1,local_38);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_cropViewDidBecomeNonResettable_(uVar2,local_38,param_1);

        (*(code *)PTR__objc_release_00110458)(uVar2);

      }

    }

    else {

      _objc_msgSend_delegate(param_1,local_38);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar1 = _objc_opt_respondsToSelector(uVar2,"cropViewDidBecomeResettable:");

      (*(code *)PTR__objc_release_00110458)(uVar2);

      if ((uVar1 & 1) != 0) {

        _objc_msgSend_delegate(param_1,local_38);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_cropViewDidBecomeResettable_(uVar2,local_38,param_1);

        (*(code *)PTR__objc_release_00110458)(uVar2);

      }

    }

  }

  return;

}






// ---- [d8] originalCropBoxSize @0xbc7d0 ----
// CALLERS: checkForCanReset, setOriginalCropBoxSize:, _objc_msgSend$originalCropBoxSize
// CALLEES: original


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropView::originalCropBoxSize(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + (long)_originalCropBoxSize);

}






// ---- [d8] originalContentOffset @0xbc830 ----
// CALLERS: checkForCanReset, setOriginalContentOffset:, _objc_msgSend$originalContentOffset
// CALLEES: original


/* Function Stack Size: 0x10 bytes */



CGPoint WCMTOCropView::originalContentOffset(ID param_1,SEL param_2)



{

  return *(CGPoint *)(param_1 + (long)_originalContentOffset);

}






// ---- [d8] internalLayoutDisabled @0xbbb6c ----
// CALLERS: moveCroppedContentToCenterAnimated:, setInternalLayoutDisabled:, _objc_msgSend$internalLayoutDisabled
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::internalLayoutDisabled(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_internalLayoutDisabled) & 1;

}






// ---- [d8] setCropBoxLastEditedZoomScale: @0xbc658 ----
// CALLERS: scrollViewDidZoom:, captureStateForImageRotation, _objc_msgSend$setCropBoxLastEditedZoomScale:
// CALLEES: cropBoxLastEditedZoomScale


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setCropBoxLastEditedZoomScale_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_cropBoxLastEditedZoomScale) = param_3;

  return;

}






// ---- [d8] setCropBoxLastEditedMinZoomScale: @0xbc6a8 ----
// CALLERS: scrollViewDidZoom:, captureStateForImageRotation, _objc_msgSend$setCropBoxLastEditedMinZoomScale:
// CALLEES: cropBoxLastEditedMinZoomScale


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setCropBoxLastEditedMinZoomScale_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_cropBoxLastEditedMinZoomScale) = param_3;

  return;

}






// ---- [d8] setCropBoxLastEditedMaxZoomScale: @0xbc6f8 ----
// CALLERS: scrollViewDidZoom:, captureStateForImageRotation, _objc_msgSend$setCropBoxLastEditedMaxZoomScale:
// CALLEES: cropBoxLastEditedMaxZoomScale


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setCropBoxLastEditedMaxZoomScale_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + (long)_cropBoxLastEditedMaxZoomScale) = param_3;

  return;

}






// ---- [d8] cropBoxLastEditedAngle @0xbc5e4 ----
// CALLERS: rotateImageNinetyDegreesAnimated:clockwise:completion:, setCropBoxLastEditedAngle:, _objc_msgSend$cropBoxLastEditedAngle
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMTOCropView::cropBoxLastEditedAngle(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_cropBoxLastEditedAngle);

}






// ---- [d8] cropBoxLastEditedSize @0xbc584 ----
// CALLERS: rotateImageNinetyDegreesAnimated:clockwise:completion:, setCropBoxLastEditedSize:, _objc_msgSend$cropBoxLastEditedSize
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropView::cropBoxLastEditedSize(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + (long)_cropBoxLastEditedSize);

}






// ---- [d8] cropViewController:didFinishCancelled: @0x4fb28 ----
// CALLERS: dismissCropViewController, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke_2, _objc_msgSend$cropViewController:didFinishCancelled:
// CALLEES: setCropAccount:, cropView


/* Function Stack Size: 0x1c bytes */



void WCMFeedController::cropViewController_didFinishCancelled_

               (ID param_1,SEL param_2,ID param_3,bool param_4)



{

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_setCropAccount_(local_18,local_48,0);

  _objc_msgSend_dismissViewControllerAnimated_completion_(local_28,local_48,1,0);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d8] onDidFinishCancelled @0xabeec ----
// CALLERS: dismissCropViewController, ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke_2, setOnDidFinishCancelled:, .cxx_destruct, _objc_msgSend$onDidFinishCancelled
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::onDidFinishCancelled(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_onDidFinishCancelled);

}






// ---- [d8] cropAccount @0x5aee4 ----
// CALLERS: cropViewController:didCropToImage:withRect:angle:, setCropAccount:, .cxx_destruct, _objc_msgSend$cropAccount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMFeedController::cropAccount(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_cropAccount);

}






// ---- [d8] setCropAccount: @0x5af08 ----
// CALLERS: cropViewController:didCropToImage:withRect:angle:, cropViewController:didFinishCancelled:, cropHeaderImage:account:, _objc_msgSend$setCropAccount:
// CALLEES: cropAccount


/* Function Stack Size: 0x18 bytes */



void WCMFeedController::setCropAccount_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_cropAccount);

  return;

}






// ---- [d8] isTransitioning @0x678b4 ----
// CALLERS: galleryIsInteracting, implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.79, cuttingImage, ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke_2, ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke.8, wcm_yb_isTransitioning, setWcm_yb_isTransitioning:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImageBrowser::isTransitioning(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_transitioning) & 1;

}






// ---- [d8] isShowTransitioning @0x678e0 ----
// CALLERS: implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_2.82, _objc_msgSend$isShowTransitioning, _objc_msgSend$setWcm_yb_isShowTransitioning:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImageBrowser::isShowTransitioning(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_showTransitioning) & 1;

}






// ---- [d8] setWcm_yb_currentOrientation: @0x70704 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_currentOrientation:
// CALLEES: currentOrientation, wcm_yb_currentOrientation


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_currentOrientation_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_currentOrientation);

  return;

}






// ---- [d8] setWcm_yb_containerSize: @0x70764 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_containerSize:
// CALLEES: wcm_yb_containerSize


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_containerSize_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_containerSize);

  return;

}






// ---- [d8] setWcm_yb_backView: @0x707d4 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_backView:
// CALLEES: wcm_yb_backView


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_backView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_wcm_yb_backView,param_3);

  return;

}






// ---- [d8] setWcm_yb_collectionView: @0x70834 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_collectionView:
// CALLEES: collection, collectionView, wcm_yb_collectionView


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_collectionView_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_collectionView);

  return;

}






// ---- [d8] setWcm_yb_isTransitioning: @0x70894 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_isTransitioning:
// CALLEES: isTransitioning, wcm_yb_isTransitioning


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_isTransitioning_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_isTransitioning);

  return;

}






// ---- [d8] setWcm_yb_isRotating: @0x708f4 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_isRotating:
// CALLEES: wcm_yb_isRotating, isRotating


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_isRotating_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_isRotating);

  return;

}






// ---- [d8] setWcm_yb_auxiliaryViewHandler: @0x70954 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_auxiliaryViewHandler:
// CALLEES: auxiliaryViewHandler, wcm_yb_auxiliaryViewHandler


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_auxiliaryViewHandler_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_auxiliaryViewHandler);

  return;

}






// ---- [d8] setWcm_yb_cellIsInCenter: @0x70af8 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_cellIsInCenter:
// CALLEES: wcm_yb_cellIsInCenter


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_cellIsInCenter_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_cellIsInCenter);

  return;

}






// ---- [d8] setWcm_yb_currentPage: @0x70bb8 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_currentPage:
// CALLEES: currentPage, wcm_yb_currentPage


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageCell::setWcm_yb_currentPage_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_wcm_yb_currentPage);

  return;

}






// ---- [d8] setWcm_yb_isHideTransitioning: @0x7cbc4 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_isHideTransitioning:
// CALLEES: isHideTransitioning


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setWcm_yb_isHideTransitioning_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x20);

  return;

}






// ---- [d8] setWcm_yb_containerView: @0x7ccd0 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_containerView:
// CALLEES: containerView


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setWcm_yb_containerView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + 0x38,param_3);

  return;

}






// ---- [d8] setWcm_yb_webImageMediator: @0x7cd74 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_webImageMediator:
// CALLEES: webImageMediator


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setWcm_yb_webImageMediator_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x48);

  return;

}






// ---- [d8] setWcm_yb_totalPage: @0x86a70 ----
// CALLERS: implementGetBaseInfoProtocol:, _objc_msgSend$setWcm_yb_totalPage:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBToolViewHandler::setWcm_yb_totalPage_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x20);

  return;

}






// ---- [d8] wcm_yb_allowSaveToPhotoAlbum @0x7b374 ----
// CALLERS: currentDataShouldHideSaveButton, _objc_msgSend$wcm_yb_allowSaveToPhotoAlbum
// CALLEES: allowSaveToPhotoAlbum


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBImageData::wcm_yb_allowSaveToPhotoAlbum(ID param_1,SEL param_2)



{

  bool bVar1;

  

  bVar1 = _objc_msgSend_allowSaveToPhotoAlbum(param_1);

  return bVar1;

}






// ---- [d8] wcm_yb_saveToPhotoAlbum @0x7b3a0 ----
// CALLERS: ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.106, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.109, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_3, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.113, currentDataShouldHideSaveButton
// CALLEES: saveToPhotoAlbum, getPhotoAlbumAuthorizationSuccess:failed:


/* Function Stack Size: 0x10 bytes */



void WCMYBIBImageData::wcm_yb_saveToPhotoAlbum(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 local_1a8;

  undefined8 local_108;

  undefined *local_100;

  undefined4 local_f8;

  undefined4 local_f4;

  code *local_f0;

  undefined *local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined *local_c0;

  undefined4 local_b8;

  undefined4 local_b4;

  code *local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined *local_90;

  undefined4 local_88;

  undefined4 local_84;

  code *local_80;

  undefined *local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined *local_60;

  undefined4 local_58;

  undefined4 local_54;

  code *local_50;

  undefined *local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  puVar1 = PTR___NSConcreteStackBlock_001104f0;

  local_60 = PTR___NSConcreteStackBlock_001104f0;

  local_58 = 0xc2000000;

  local_54 = 0;

  local_50 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke;

  local_48 = &___block_descriptor_40_e8_32s_e16_v16__0__NSData_8l;

  local_30 = param_2;

  local_28 = param_1;

  local_40 = (*(code *)PTR__objc_retain_00110460)(param_1);

  local_38 = _objc_retainBlock();

  local_90 = puVar1;

  local_88 = 0xc2000000;

  local_84 = 0;

  local_80 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_106;

  local_78 = &___block_descriptor_40_e8_32s_e17_v16__0__UIImage_8l;

  local_70 = (*(code *)PTR__objc_retain_00110460)(local_28);

  local_68 = _objc_retainBlock();

  local_c0 = puVar1;

  local_b8 = 0xc2000000;

  local_b4 = 0;

  local_b0 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_109;

  local_a8 = &___block_descriptor_40_e8_32s_e5_v8__0l;

  local_a0 = (*(code *)PTR__objc_retain_00110460)(local_28);

  local_98 = _objc_retainBlock();

  local_100 = puVar1;

  local_f8 = 0xc2000000;

  local_f4 = 0;

  local_f0 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_2_110;

  local_e8 = &___block_descriptor_64_e8_32s40bs48bs56bs_e5_v8__0l;

  local_e0 = (*(code *)PTR__objc_retain_00110460)(local_28);

  local_d8 = (*(code *)PTR__objc_retain_00110460)(local_38);

  local_d0 = (*(code *)PTR__objc_retain_00110460)(local_98);

  local_c8 = (*(code *)PTR__objc_retain_00110460)(local_68);

  local_108 = (*(code *)PTR__objc_retain_00110460)(local_28);

  _objc_msgSend_getPhotoAlbumAuthorizationSuccess_failed_

            (&objc::class_t::WCMYBIBPhotoAlbumManager,local_1a8,&local_100);

  _objc_storeStrong(&local_108);

  _objc_storeStrong(&local_c8,0);

  _objc_storeStrong(&local_d0,0);

  _objc_storeStrong(&local_d8,0);

  _objc_storeStrong(&local_e0,0);

  _objc_storeStrong(&local_98,0);

  _objc_storeStrong(&local_a0,0);

  _objc_storeStrong(&local_68,0);

  _objc_storeStrong(&local_70,0);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d8] allowSaveToPhotoAlbum @0x7d120 ----
// CALLERS: wcm_yb_allowSaveToPhotoAlbum, currentDataShouldHideSaveButton, _objc_msgSend$allowSaveToPhotoAlbum, _objc_msgSend$wcm_yb_allowSaveToPhotoAlbum
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBImageData::allowSaveToPhotoAlbum(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 0x19) & 1;

}






// ---- [d8] saveToPhotoAlbum @0x83070 ----
// CALLERS: saveToPhotoAlbumCompleteWithError:, UIImageWriteToSavedPhotosAlbum_completedWithImage:error:context:, wcm_yb_saveToPhotoAlbum, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.106, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.109, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::saveToPhotoAlbum(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x50);

}






// ---- [d8] wcm_yb_currentData @0x86afc ----
// CALLERS: currentDataShouldHideSaveButton, ___35-[WCMYBIBToolViewHandler_sheetView]_block_invoke, ___33-[WCMYBIBToolViewHandler_topView]_block_invoke, _objc_msgSend$wcm_yb_currentData
// CALLEES: currentData


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBToolViewHandler::wcm_yb_currentData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x30);

}






// ---- [d8] setCurrentdata: @0x88de0 ----
// CALLERS: sheetView, _objc_msgSend$setCurrentdata:
// CALLEES: currentdata


/* Function Stack Size: 0x18 bytes */



void WCMYBIBSheetView::setCurrentdata_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)_currentdata);

  return;

}






// ---- [d8] actionWithName:action: @0x86ca0 ----
// CALLERS: saveAction, _objc_msgSend$actionWithName:action:
// CALLEES: setName:, setAction:


/* Function Stack Size: 0x20 bytes */



ID WCMYBIBSheetAction::actionWithName_action_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_68;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  local_38 = _objc_opt_new(&objc::class_t::WCMYBIBSheetAction);

  _objc_msgSend_setName_(local_38,local_68,local_28);

  _objc_msgSend_setAction_(local_38,local_68,local_30);

  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d8] _WCMYBIBPaddingByBrowserOrientation @0x83de8 ----
// CALLERS: layoutWithExpectOrientation:, showToView:orientation:
// CALLEES: _UIDeviceOrientationIsLandscape, _WCMYBIBIsIphoneXSeries, _WCMYBIBStatusbarHeight, _WCMYBIBSafeAreaBottomHeight


undefined1  [16] _WCMYBIBPaddingByBrowserOrientation(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  ulong local_98;

  uint local_7c;

  undefined8 local_78;

  ulong local_30;

  

  local_30 = *(ulong *)PTR__UIEdgeInsetsZero_001100b0;

  uVar1 = _WCMYBIBIsIphoneXSeries();

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_78);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_statusBarOrientation(uVar2,local_78);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    uVar1 = _UIDeviceOrientationIsLandscape(param_1);

    if ((uVar1 & 1) == 0) {

      if (param_1 + -1 == 0) {

        local_30 = _WCMYBIBStatusbarHeight(0);

        if (lVar3 == 1) {

          _WCMYBIBSafeAreaBottomHeight(0);

        }

      }

      else {

        _WCMYBIBStatusbarHeight(param_1 + -1);

        if (lVar3 == 1) {

          local_98 = _WCMYBIBSafeAreaBottomHeight(0);

        }

        else {

          local_98 = 0;

        }

        local_30 = local_98;

      }

      uVar1 = _UIDeviceOrientationIsLandscape(lVar3);

      if ((uVar1 & 1) != 0) {

        _WCMYBIBSafeAreaBottomHeight();

      }

    }

    else {

      local_7c = 0;

      if (param_1 != lVar3) {

        local_7c = _UIDeviceOrientationIsLandscape(lVar3);

      }

      if (param_1 != lVar3) {

        if ((local_7c & 1) != 0) {

          local_30 = _WCMYBIBSafeAreaBottomHeight();

        }

      }

      else {

        _WCMYBIBSafeAreaBottomHeight();

        local_30 = 0;

      }

      _WCMYBIBSafeAreaBottomHeight();

      _WCMYBIBStatusbarHeight();

    }

  }

  auVar4._8_8_ = 0;

  auVar4._0_8_ = local_30;

  return auVar4;

}






// ---- [d8] showDuration @0x8ead8 ----
// CALLERS: showToView:orientation:, wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:, _objc_msgSend$showDuration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBAnimatedTransition::showDuration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x18);

}






// ---- [d8] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}






// ---- [d8] animatedImageFrameCount @0x69f4c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageLoopCount @0x69f84 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageFrameCount @0x8f170 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: contentRects


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  return uVar1;

}






// ---- [d8] animatedImageLoopCount @0x8f1a8 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d8] animatedImageContentsRectAtIndex: @0x8f2ac ----
// CALLERS: contentsRectForCALayerAtIndex:, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, _objc_msgSend$animatedImageContentsRectAtIndex:
// CALLEES: contentRects


/* Function Stack Size: 0x18 bytes */



CGRect WCMYYSpriteSheetImage::animatedImageContentsRectAtIndex_

                 (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  CGRect CVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_60;

  undefined8 local_30;

  undefined8 uStack_28;

  undefined8 local_20;

  double dStack_18;

  

  uVar2 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  if (param_3 < uVar2) {

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(param_1 + (long)_contentRects),local_60,param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_30 = _objc_msgSend_CGRectValue(uVar3,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uStack_28 = in_d1;

    local_20 = in_d2;

    dStack_18 = in_d3;

  }

  else {

    uStack_28 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);

    local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;

    dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_20 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

  }

  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;

  CVar1.field0_0x0.field0_0x0 = (double)local_30;

  CVar1.field1_0x10.field0_0x0 = (double)local_20;

  CVar1.field1_0x10.field1_0x8 = dStack_18;

  return CVar1;

}






// ---- [d8] animatedImageFrameCount @0x9087c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageLoopCount @0x908b4 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d8] animatedImageFrameCount @0x9c370 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: imagePath, imageData


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  undefined8 local_30;

  undefined8 local_18;

  

  if (*(long *)(param_1 + (long)_imagePaths) == 0) {

    if (*(long *)(param_1 + (long)_imageDatas) == 0) {

      local_18 = 1;

    }

    else {

      local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_30);

    }

  }

  else {

    local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_30);

  }

  return local_18;

}






// ---- [d8] animatedImageLoopCount @0x9c410 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d8] conformsToProtocol: @0x9ce14 ----
// CALLERS: ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110, imageChanged, encodeWithCoder:, _objc_msgSend$conformsToProtocol:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



bool _YYImageWeakProxy::conformsToProtocol_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);

  bVar1 = _objc_msgSend_conformsToProtocol_(uVar2,local_50,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return bVar1;

}






// ---- [d8] curImage @0x9d58c ----
// CALLERS: main, setCurImage:, .cxx_destruct, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::curImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_curImage);

}






// ---- [d8] imageForType: @0x9e4b8 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$imageForType:
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x18 bytes */



ID WCMYYAnimatedImageView::imageForType_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ID IVar1;

  undefined8 local_40;

  undefined8 local_18;

  

  if (param_3 == 0) {

    local_18 = 0;

  }

  else if (param_3 == 1) {

    _objc_msgSend_image(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 2) {

    _objc_msgSend_highlightedImage(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 3) {

    _objc_msgSend_animationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 4) {

    _objc_msgSend_highlightedAnimationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_18 = 0;

  }

  IVar1 = _objc_autoreleaseReturnValue(local_18);

  return IVar1;

}






// ---- [d8] currentImageType @0x9e5b0 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$currentImageType
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentImageType(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_40;

  undefined8 local_28;

  

  local_28 = 0;

  uVar1 = _objc_msgSend_isHighlighted(param_1);

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_highlightedAnimationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_highlightedImage(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 2;

      }

    }

    else {

      local_28 = 4;

    }

  }

  if (local_28 == 0) {

    _objc_msgSend_animationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_image(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 1;

      }

    }

    else {

      local_28 = 3;

    }

  }

  return local_28;

}






// ---- [d8] calcMaxBufferCount @0x9ecb0 ----
// CALLERS: main, imageChanged, _objc_msgSend$calcMaxBufferCount
// CALLEES: animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, maxBufferSize, __YYDeviceMemoryTotal, __YYDeviceMemoryFree


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::calcMaxBufferCount(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  ulong local_90;

  ulong local_88;

  double local_80;

  double local_78;

  ulong local_40;

  long local_28;

  

  local_28 = _objc_msgSend_animatedImageBytesPerFrame

                       (*(undefined8 *)(param_1 + (long)_curAnimatedImage));

  if (local_28 == 0) {

    local_28 = 0x400;

  }

  lVar1 = __YYDeviceMemoryTotal();

  lVar2 = __YYDeviceMemoryFree();

  local_80 = (double)lVar2 * 0.6;

  if ((double)lVar1 * 0.2 < local_80) {

    local_80 = (double)lVar1 * 0.2;

  }

  local_88 = (ulong)local_80;

  if ((long)local_88 < 0xa00000) {

    local_88 = 0xa00000;

  }

  local_40 = local_88;

  if (*(long *)(param_1 + (long)_maxBufferSize) != 0) {

    if (*(ulong *)(param_1 + (long)_maxBufferSize) < local_88) {

      local_90 = *(ulong *)(param_1 + (long)_maxBufferSize);

    }

    else {

      local_90 = local_88;

    }

    local_40 = local_90;

  }

  local_78 = (double)(long)local_40 / (double)local_28;

  if (1.0 <= local_78) {

    if (512.0 < local_78) {

      local_78 = 512.0;

    }

  }

  else {

    local_78 = 1.0;

  }

  *(long *)(param_1 + (long)_maxBufferCount) = (long)local_78;

  return;

}






// ---- [d8] setContentsRect:forImage: @0x9ffd8 ----
// CALLERS: imageChanged, step:, _objc_msgSend$setContentsRect:forImage:
// CALLEES: _CGRectMake, size


/* Function Stack Size: 0x38 bytes */



void WCMYYAnimatedImageView::setContentsRect_forImage_

               (ID param_1,SEL param_2,CGRect param_3,ID param_4)



{

  ulong uVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  undefined8 local_140;

  undefined8 local_80;

  double dStack_78;

  double local_70;

  double dStack_68;

  long local_58;

  SEL local_50;

  ID local_48;

  double local_40;

  double local_38;

  double local_30;

  double local_28;

  

  local_28 = param_3.field1_0x10.field1_0x8;

  local_30 = param_3.field1_0x10.field0_0x0;

  local_38 = param_3.field0_0x0.field1_0x8;

  local_40 = param_3.field0_0x0.field0_0x0;

  local_58 = 0;

  local_50 = param_2;

  local_48 = param_1;

  _objc_storeStrong(&local_58,param_4);

  dStack_78 = 0.0;

  dStack_68 = 1.0;

  local_70 = 1.0;

  local_80 = _CGRectMake(0);

  if (((local_58 != 0) &&

      (dVar5 = dStack_78, dVar3 = (double)_objc_msgSend_size(local_58,local_140), 0.01 < dVar3)) &&

     (0.01 < dVar5)) {

    dVar4 = local_40 / dVar3;

    dStack_78 = local_38 / dVar5;

    local_70 = local_30 / dVar3;

    dStack_68 = local_28 / dVar5;

    _CGRectMake(0);

    local_80 = _CGRectIntersection(dVar4);

    uVar1 = _CGRectIsNull(local_80,dStack_78,local_70,dStack_68);

    if (((uVar1 & 1) != 0) ||

       (uVar1 = _CGRectIsEmpty(local_80,dStack_78,local_70,dStack_68), (uVar1 & 1) != 0)) {

      dStack_78 = 0.0;

      dStack_68 = 1.0;

      local_70 = 1.0;

      local_80 = _CGRectMake(0);

    }

  }

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_140);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_140,1);

  _objc_msgSend_layer(local_48,local_140);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setContentsRect_(local_80,dStack_78,local_70,dStack_68,uVar2,local_140);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_140);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d8] didMoved @0xa026c ----
// CALLERS: imageChanged, didMoveToWindow, didMoveToSuperview, _objc_msgSend$didMoved
// CALLEES: stopAnimating, startAnimating, autoPlayAnimatedImage


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::didMoved(ID param_1,SEL param_2)



{

  bool bVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  undefined8 local_40;

  

  uVar2 = _objc_msgSend_autoPlayAnimatedImage(param_1);

  if ((uVar2 & 1) != 0) {

    _objc_msgSend_superview(param_1,local_40);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    bVar1 = false;

    if (lVar3 != 0) {

      _objc_msgSend_window(param_1,local_40);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      bVar1 = lVar4 != 0;

      (*(code *)PTR__objc_release_00110458)(lVar4);

    }

    (*(code *)PTR__objc_release_00110458)(lVar3);

    if (bVar1) {

      _objc_msgSend_startAnimating(param_1,local_40);

    }

    else {

      _objc_msgSend_stopAnimating(param_1,local_40);

    }

  }

  return;

}






// ---- [d8] setCurrentIsPlayingAnimation: @0xa1060 ----
// CALLERS: stopAnimating, startAnimating, _objc_msgSend$setCurrentIsPlayingAnimation:
// CALLEES: currentIsPlayingAnimation


/* Function Stack Size: 0x14 bytes */



void WCMYYAnimatedImageView::setCurrentIsPlayingAnimation_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_currentIsPlayingAnimation) = (byte)param_3 & 1;

  return;

}






// ---- [d9] cropViewDidBecomeResettable: @0xa63e8 ----
// CALLERS: setCanBeReset:, _objc_msgSend$cropViewDidBecomeResettable:
// CALLEES: cropView, toolbar, setResetButtonEnabled:


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::cropViewDidBecomeResettable_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_toolbar(local_18,local_48);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setResetButtonEnabled_(uVar1,local_48,1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d9] cropViewDidBecomeNonResettable: @0xa646c ----
// CALLERS: setCanBeReset:, _objc_msgSend$cropViewDidBecomeNonResettable:
// CALLEES: cropView, toolbar, setResetButtonEnabled:


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::cropViewDidBecomeNonResettable_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_toolbar(local_18,local_48);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setResetButtonEnabled_(uVar1,local_48,0);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d9] canBeReset @0xbba48 ----
// CALLERS: setCanBeReset:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMTOCropView::canBeReset(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_canBeReset) & 1;

}






// ---- [d9] cropBoxLastEditedZoomScale @0xbc634 ----
// CALLERS: rotateImageNinetyDegreesAnimated:clockwise:completion:, setCropBoxLastEditedZoomScale:, _objc_msgSend$cropBoxLastEditedZoomScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::cropBoxLastEditedZoomScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_cropBoxLastEditedZoomScale);

}






// ---- [d9] cropBoxLastEditedMinZoomScale @0xbc684 ----
// CALLERS: rotateImageNinetyDegreesAnimated:clockwise:completion:, setCropBoxLastEditedMinZoomScale:, _objc_msgSend$cropBoxLastEditedMinZoomScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::cropBoxLastEditedMinZoomScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_cropBoxLastEditedMinZoomScale);

}






// ---- [d9] cropBoxLastEditedMaxZoomScale @0xbc6d4 ----
// CALLERS: rotateImageNinetyDegreesAnimated:clockwise:completion:, setCropBoxLastEditedMaxZoomScale:, _objc_msgSend$cropBoxLastEditedMaxZoomScale
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMTOCropView::cropBoxLastEditedMaxZoomScale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_cropBoxLastEditedMaxZoomScale);

}






// ---- [d9] wcm_yb_isTransitioning @0x70870 ----
// CALLERS: cuttingImage, ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke_2, ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke.8, setWcm_yb_isTransitioning:, .cxx_destruct, _objc_msgSend$wcm_yb_isTransitioning
// CALLEES: isTransitioning


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_isTransitioning(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_isTransitioning);

}






// ---- [d9] getPhotoAlbumAuthorizationSuccess:failed: @0x84674 ----
// CALLERS: wcm_yb_saveToPhotoAlbum, _objc_msgSend$getPhotoAlbumAuthorizationSuccess:failed:
// CALLEES: (叶)


/* Function Stack Size: 0x20 bytes */



void WCMYBIBPhotoAlbumManager::getPhotoAlbumAuthorizationSuccess_failed_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,undefined4 param_6)



{

  undefined8 local_78;

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined8 local_48;

  undefined8 local_40;

  long local_38;

  long local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  local_38 = _objc_msgSend_authorizationStatus(&_OBJC_CLASS___PHPhotoLibrary,local_78);

  if (local_38 == 0) {

    local_68 = PTR___NSConcreteStackBlock_001104f0;

    local_60 = 0xc2000000;

    local_5c = 0;

    local_58 = 

    ___69__WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess_failed___block_invoke;

    local_50 = &___block_descriptor_48_e8_32bs40bs_e8_v16__0q8l;

    local_48 = (*(code *)PTR__objc_retain_00110460)(local_28);

    local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);

    _objc_msgSend_requestAuthorization_(&_OBJC_CLASS___PHPhotoLibrary,local_78,&local_68);

    _objc_storeStrong(&local_40);

    _objc_storeStrong(&local_48,0);

  }

  else if (local_38 == 1) {

    if (local_30 != 0) {

      (**(code **)(local_30 + 0x10))();

    }

  }

  else if (local_38 == 2) {

    if (local_30 != 0) {

      (**(code **)(local_30 + 0x10))();

    }

  }

  else if ((local_38 == 3) && (local_28 != 0)) {

    (**(code **)(local_28 + 0x10))();

  }

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d9] currentdata @0x88dbc ----
// CALLERS: tableView:didSelectRowAtIndexPath:, setCurrentdata:, .cxx_destruct, _objc_msgSend$currentdata
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBSheetView::currentdata(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_currentdata);

}






// ---- [d9] setName: @0x86d8c ----
// CALLERS: actionWithName:action:, _objc_msgSend$setName:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBSheetAction::setName_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,8);

  return;

}






// ---- [d9] setAction: @0x86de0 ----
// CALLERS: actionWithName:action:, _objc_msgSend$setAction:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBSheetAction::setAction_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);

  return;

}






// ---- [d9] _UIDeviceOrientationIsLandscape @0x67f28 ----
// CALLERS: fillTypeByOrientation:, _WCMYBIBPaddingByBrowserOrientation, configContainerSize:, containerSizeWithOrientation:
// CALLEES: (叶)


bool _UIDeviceOrientationIsLandscape(long param_1)



{

  return param_1 == 3 || param_1 == 4;

}






// ---- [d9] _WCMYBIBIsIphoneXSeries @0x839f0 ----
// CALLERS: _WCMYBIBPaddingByBrowserOrientation, supportSystemOrientationMask
// CALLEES: _WCMYBIBStatusbarHeight


bool _WCMYBIBIsIphoneXSeries(void)



{

  double dVar1;

  

  dVar1 = (double)_WCMYBIBStatusbarHeight();

  return 20.0 < dVar1;

}






// ---- [d9] _WCMYBIBStatusbarHeight @0x83a10 ----
// CALLERS: _WCMYBIBIsIphoneXSeries, _WCMYBIBPaddingByBrowserOrientation
// CALLEES: delegate, delegate, delegate, delegate


undefined1  [16] _WCMYBIBStatusbarHeight(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  double in_d3;

  undefined8 local_78;

  double local_18;

  

  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_78);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_delegate(uVar1,local_78);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_window(uVar2,local_78);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_18 = (double)_objc_msgSend_safeAreaInsets(uVar3,local_78);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (local_18 <= 0.0) {

    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_78);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_statusBarFrame(uVar1,local_78);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    local_18 = in_d3;

  }

  if (local_18 <= 0.0) {

    local_18 = 20.0;

  }

  auVar4._8_8_ = 0;

  auVar4._0_8_ = local_18;

  return auVar4;

}






// ---- [d9] _WCMYBIBSafeAreaBottomHeight @0x83b54 ----
// CALLERS: _WCMYBIBPaddingByBrowserOrientation
// CALLEES: delegate, delegate, delegate, delegate


undefined1  [16]

_WCMYBIBSafeAreaBottomHeight(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined8 local_58;

  

  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_58);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_delegate(uVar1,local_58);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_window(uVar2,local_58);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_safeAreaInsets(uVar3,local_58);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  auVar4._8_8_ = 0;

  auVar4._0_8_ = param_3;

  return auVar4;

}






// ---- [d9] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d9] loopCount @0x8f3c8 ----
// CALLERS: animatedImageLoopCount, initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, animatedImageLoopCount, animatedImageLoopCount, initWithImagePaths:oneFrameDuration:loopCount:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:oneFrameDuration:loopCount:, initWithImageDataArray:frameDurations:loopCount:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d9] loopCount @0x97748 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb8);

}






// ---- [d9] loopCount @0x9a214 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d9] contentRects @0x8f380 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, contentsRectForCALayerAtIndex:, animatedImageFrameCount, animatedImageContentsRectAtIndex:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::contentRects(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_contentRects);

}






// ---- [d9] animatedImageBytesPerFrame @0x69fbc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d9] animatedImageBytesPerFrame @0x8f1cc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return 0;

}






// ---- [d9] animatedImageBytesPerFrame @0x908ec ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d9] animatedImageBytesPerFrame @0x9c434 ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_oneFrameBytes);

}






// ---- [d9] maxBufferSize @0xa10b4 ----
// CALLERS: calcMaxBufferCount, setMaxBufferSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::maxBufferSize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_maxBufferSize);

}






// ---- [d9] __YYDeviceMemoryTotal @0xa11d4 ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryTotal(void)



{

  undefined8 uVar1;

  undefined8 local_30;

  long local_18;

  

  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_18 = _objc_msgSend_physicalMemory(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (local_18 < -1) {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d9] __YYDeviceMemoryFree @0xa124c ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryFree(void)



{

  kern_return_t kVar1;

  uint local_64 [15];

  vm_size_t local_28;

  mach_msg_type_number_t local_20;

  host_t local_1c;

  long local_18;

  

  local_1c = _mach_host_self();

  local_20 = 0xf;

  kVar1 = _host_page_size(local_1c,&local_28);

  if (kVar1 == 0) {

    kVar1 = _host_statistics(local_1c,2,(host_info_t)local_64,&local_20);

    if (kVar1 == 0) {

      local_18 = local_64[0] * local_28;

    }

    else {

      local_18 = -1;

    }

  }

  else {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d9] startAnimating @0x9f080 ----
// CALLERS: didMoved, _objc_msgSend$startAnimating
// CALLEES: imageForType:, currentImageType, setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::startAnimating(ID param_1,SEL param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 local_48;

  ID local_40;

  class_t *local_38;

  undefined8 local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  local_28 = _objc_msgSend_currentImageType(param_1);

  if ((local_28 == 3) || (local_28 == 4)) {

    _objc_msgSend_imageForType_(0,local_18,local_48,local_28);

    local_30 = _objc_retainAutoreleasedReturnValue();

    lVar1 = _objc_msgSend_count(local_30,local_48);

    if (lVar1 != 0) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"startAnimating");

      _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);

    }

    _objc_storeStrong(&local_30,0);

  }

  else if ((*(long *)(local_18 + (long)_curAnimatedImage) != 0) &&

          (uVar2 = _objc_msgSend_isPaused(*(undefined8 *)(local_18 + (long)_link),local_48),

          (uVar2 & 1) != 0)) {

    *(undefined8 *)(local_18 + (long)_curLoop) = 0;

    *(undefined1 *)(local_18 + (long)_loopEnd) = 0;

    _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_48,0);

    _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);

  }

  return;

}






// ---- [d9] currentIsPlayingAnimation @0xa1034 ----
// CALLERS: isAnimating, setCurrentIsPlayingAnimation:, _objc_msgSend$currentIsPlayingAnimation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::currentIsPlayingAnimation(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_currentIsPlayingAnimation) & 1;

}






// ---- [d10] setResetButtonEnabled: @0xc2d28 ----
// CALLERS: cropViewDidBecomeResettable:, cropViewDidBecomeNonResettable:, _objc_msgSend$setResetButtonEnabled:
// CALLEES: resetButton


/* Function Stack Size: 0x14 bytes */



void WCMTOCropToolbar::setResetButtonEnabled_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 local_40;

  

  _objc_msgSend_resetButton(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setEnabled_(uVar1,local_40,param_3 & 1);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  return;

}





