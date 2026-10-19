// ============ 功能链 44  根: ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2 @0x7b7b4 ============
// 节点 14，按调用深度排序，自上而下读

// ---- [d0] ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2 @0x7b7b4 ----
// CALLERS: (根)
// CALLEES: saveToPhotoAlbumCompleteWithError:, wcm_yb_saveToPhotoAlbum, saveToPhotoAlbum


void ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_2

               (long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 local_50;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_20 = 0;

  local_18 = param_1;

  _objc_storeStrong();

  local_28 = 0;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_saveToPhotoAlbumCompleteWithError_

            (*(undefined8 *)(param_1 + 0x20),local_50,local_28);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- [d1] saveToPhotoAlbumCompleteWithError: @0x7af30 ----
// CALLERS: UIImageWriteToSavedPhotosAlbum_completedWithImage:error:context:, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2, _objc_msgSend$saveToPhotoAlbumCompleteWithError:
// CALLEES: containerView, auxiliaryViewHandler, wcm_yb_auxiliaryViewHandler, wcm_yb_containerView, wcm_yb_auxiliaryViewHandler, sharedCopywriter, saveToPhotoAlbumSuccess, saveToPhotoAlbumFailed, saveToPhotoAlbum, wcm_yb_containerView


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::saveToPhotoAlbumCompleteWithError_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 local_58;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  if (local_28 == 0) {

    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_58);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_wcm_yb_containerView(local_18,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_58);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_saveToPhotoAlbumSuccess(uVar4,local_58);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_wcm_yb_showCorrectToastWithContainer_text_(uVar2,local_58,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(lVar1);

  }

  else {

    _objc_msgSend_wcm_yb_auxiliaryViewHandler(local_18,local_58);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_wcm_yb_containerView(local_18,local_58);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_sharedCopywriter(&objc::class_t::WCMYBIBCopywriter,local_58);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_saveToPhotoAlbumFailed(uVar4,local_58);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_wcm_yb_showIncorrectToastWithContainer_text_(uVar2,local_58,uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    (*(code *)PTR__objc_release_00110458)(lVar1);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d1] wcm_yb_saveToPhotoAlbum @0x7b3a0 ----
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






// ---- [d1] saveToPhotoAlbum @0x83070 ----
// CALLERS: saveToPhotoAlbumCompleteWithError:, UIImageWriteToSavedPhotosAlbum_completedWithImage:error:context:, wcm_yb_saveToPhotoAlbum, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.106, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke.109, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::saveToPhotoAlbum(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x50);

}






// ---- [d2] containerView @0x66d58 ----
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






// ---- [d2] auxiliaryViewHandler @0x67a28 ----
// CALLERS: initValue, implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.50, setAuxiliaryViewHandler:, .cxx_destruct, hideAuxiliaryView, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::auxiliaryViewHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_auxiliaryViewHandler);

}






// ---- [d2] wcm_yb_auxiliaryViewHandler @0x70930 ----
// CALLERS: hideAuxiliaryView, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageIsInvalidForData:, wcm_yb_imageData:downloadProgress:, wcm_yb_imageDownloadFailedForData:, setWcm_yb_auxiliaryViewHandler:
// CALLEES: auxiliaryViewHandler


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCell::wcm_yb_auxiliaryViewHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_wcm_yb_auxiliaryViewHandler);

}






// ---- [d2] wcm_yb_containerView @0x7cca4 ----
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






// ---- [d2] wcm_yb_auxiliaryViewHandler @0x7cd04 ----
// CALLERS: hideAuxiliaryView, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageIsInvalidForData:, wcm_yb_imageData:downloadProgress:, wcm_yb_imageDownloadFailedForData:, saveToPhotoAlbumCompleteWithError:
// CALLEES: auxiliaryViewHandler


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_auxiliaryViewHandler(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x40);

}






// ---- [d2] sharedCopywriter @0x82934 ----
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






// ---- [d2] saveToPhotoAlbumSuccess @0x82fc8 ----
// CALLERS: saveToPhotoAlbumCompleteWithError:, _objc_msgSend$saveToPhotoAlbumSuccess
// CALLEES: saveToPhotoAlbum


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::saveToPhotoAlbumSuccess(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x40);

}






// ---- [d2] saveToPhotoAlbumFailed @0x8301c ----
// CALLERS: saveToPhotoAlbumCompleteWithError:, _objc_msgSend$saveToPhotoAlbumFailed
// CALLEES: saveToPhotoAlbum


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::saveToPhotoAlbumFailed(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d2] wcm_yb_containerView @0x8694c ----
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






// ---- [d2] getPhotoAlbumAuthorizationSuccess:failed: @0x84674 ----
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





