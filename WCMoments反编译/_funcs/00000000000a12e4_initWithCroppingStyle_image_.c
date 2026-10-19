// initWithCroppingStyle:image: @0xa12e4

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

