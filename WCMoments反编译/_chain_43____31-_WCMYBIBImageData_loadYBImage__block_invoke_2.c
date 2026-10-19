// ============ 功能链 43  根: ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2 @0x73580 ============
// 节点 34，按调用深度排序，自上而下读

// ---- [d0] ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2 @0x73580 ----
// CALLERS: (根)
// CALLEES: delegate, loadYBImage, setOriginImageAndLoadWithImage:, setLoadingStatus:, imageIsInvalid


void ___31__WCMYBIBImageData_loadYBImage__block_invoke_2(long param_1)



{

  undefined8 uVar1;

  undefined8 local_40;

  long local_28;

  long local_20;

  long local_18;

  

  local_20 = param_1;

  local_18 = param_1;

  local_28 = _objc_loadWeakRetained(param_1 + 0x28);

  if (local_28 != 0) {

    _objc_msgSend_setLoadingStatus_(local_28,local_40,0);

    if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {

      _objc_msgSend_delegate(local_28,local_40);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_wcm_yb_imageIsInvalidForData_(uVar1,local_40,local_28);

      (*(code *)PTR__objc_release_00110458)(uVar1);

    }

    else {

      _objc_msgSend_setOriginImageAndLoadWithImage_

                (local_28,local_40,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28))

      ;

    }

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d1] delegate @0x677c4 ----
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






// ---- [d1] loadYBImage @0x72bb4 ----
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






// ---- [d1] setOriginImageAndLoadWithImage: @0x7ad44 ----
// CALLERS: ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke.15, ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke_2, ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke_3, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_3, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_4, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2.71, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_3.72
// CALLEES: originImage, modifyImageWithModifier:image:completion:, originImageModifier


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setOriginImageAndLoadWithImage_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 local_80;

  undefined *local_68;

  undefined4 local_60;

  undefined4 local_5c;

  code *local_58;

  undefined *local_50;

  undefined1 auStack_48 [24];

  undefined1 auStack_30 [8];

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_initWeak(auStack_30,local_18);

  IVar1 = local_18;

  uVar2 = _objc_msgSend_originImageModifier(local_18,local_80);

  uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);

  uVar2 = local_28;

  local_68 = PTR___NSConcreteStackBlock_001104f0;

  local_60 = 0xc2000000;

  local_5c = 0;

  local_58 = ___51__WCMYBIBImageData_setOriginImageAndLoadWithImage___block_invoke;

  local_50 = &___block_descriptor_40_e8_32w_e17_v16__0__UIImage_8l;

  _objc_copyWeak(auStack_48,auStack_30);

  _objc_msgSend_modifyImageWithModifier_image_completion_(IVar1,local_80,uVar3,uVar2,&local_68);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  _objc_destroyWeak(auStack_48);

  _objc_destroyWeak(auStack_30);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d1] setLoadingStatus: @0x7c708 ----
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






// ---- [d1] imageIsInvalid @0x82ecc ----
// CALLERS: wcm_yb_imageIsInvalidForData:, loadData, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke_2, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke.15, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.80, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.82, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3.83
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::imageIsInvalid(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x28);

}






// ---- [d2] _WCMYBIBImageProcessingQueue @0x71934 ----
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






// ---- [d2] ___Block_byref_object_copy_ @0x731b4 ----
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






// ---- [d2] ___Block_byref_object_dispose_ @0x73208 ----
// CALLERS: loadYBImage, loadImageBlock
// CALLEES: (叶)


void ___Block_byref_object_dispose_(long param_1)



{

  _objc_storeStrong(param_1 + 0x28,0);

  return;

}






// ---- [d2] loadThumbImage @0x77b98 ----
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






// ---- [d2] defaultDecodeDecision @0x7a8c8 ----
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






// ---- [d2] imageName @0x7ce0c ----
// CALLERS: imageNamed:, imageNamed:decodeDecision:, loadData, loadYBImage, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], ___26-[WCMYBIBIconManager_init]_block_invoke, ___26-[WCMYBIBIconManager_init]_block_invoke_2
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageName(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x60);

}






// ---- [d2] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d2] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d2] shouldPreDecodeAsync @0x7d1bc ----
// CALLERS: loadYBImage, loadImageBlock, _objc_msgSend$shouldPreDecodeAsync
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBIBImageData::shouldPreDecodeAsync(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 0x1a) & 1;

}






// ---- [d2] originImage @0x6adf4 ----
// CALLERS: imageForKey:type:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage, cuttingImage_, loadData, loadOriginImage, loadOriginImage_compress, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageCachePack::originImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 8);

}






// ---- [d2] modifyImageWithModifier:image:completion: @0x7aae0 ----
// CALLERS: ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.9, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_2.12, ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke_4, ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke_2, ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke.96, ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke_2.99, ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke_4
// CALLEES: setLoadingStatus:


/* Function Stack Size: 0x28 bytes */



void WCMYBIBImageData::modifyImageWithModifier_image_completion_

               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,ID param_6,

               undefined4 param_7)



{

  undefined8 uVar1;

  long lVar2;

  ID IVar3;

  undefined8 local_d0;

  undefined *local_70;

  undefined4 local_68;

  undefined4 local_64;

  code *local_60;

  undefined *local_58;

  undefined8 local_50;

  undefined1 auStack_48 [8];

  undefined1 auStack_40 [8];

  long local_38;

  undefined8 local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = 0;

  _objc_storeStrong(&local_30,param_4);

  local_38 = 0;

  _objc_storeStrong(&local_38,param_5);

  if (local_28 == 0) {

    (**(code **)(local_38 + 0x10))(local_38,local_30);

  }

  else {

    _objc_msgSend_setLoadingStatus_(local_18,local_d0,4);

    _objc_initWeak(auStack_40,local_18);

    IVar3 = local_18;

    lVar2 = local_28;

    uVar1 = local_30;

    local_70 = PTR___NSConcreteStackBlock_001104f0;

    local_68 = 0xc2000000;

    local_64 = 0;

    local_60 = ___61__WCMYBIBImageData_modifyImageWithModifier_image_completion___block_invoke;

    local_58 = &___block_descriptor_48_e8_32bs40w_e17_v16__0__UIImage_8l;

    _objc_copyWeak(auStack_48,auStack_40);

    local_50 = (*(code *)PTR__objc_retain_00110460)(local_38);

    (**(code **)(lVar2 + 0x10))(lVar2,IVar3,uVar1,&local_70);

    _objc_storeStrong(&local_50,0);

    _objc_destroyWeak(auStack_48);

    _objc_destroyWeak(auStack_40);

  }

  _objc_storeStrong(&local_38);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d2] originImageModifier @0x7d268 ----
// CALLERS: setOriginImageAndLoadWithImage:, _objc_msgSend$originImageModifier
// CALLEES: originImage


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::originImageModifier(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 200);

}






// ---- [d3] webImageMediator @0x67b1c ----
// CALLERS: implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.54, setWebImageMediator:, .cxx_destruct, dealloc, loadURL_queryCache, loadURL_download, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBImageBrowser::webImageMediator(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_webImageMediator);

}






// ---- [d3] delegate @0x7c1fc ----
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






// ---- [d3] wcm_yb_webImageMediator @0x7cd58 ----
// CALLERS: dealloc, loadURL_queryCache, loadURL_download, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.80, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.82, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_3.83, loadThumbImage
// CALLEES: webImageMediator


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_webImageMediator(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d3] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d3] projectiveView @0x7d01c ----
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






// ---- [d3] thumbImage @0x7d07c ----
// CALLERS: loadThumbImage, _objc_msgSend$thumbImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::thumbImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xa0);

}






// ---- [d3] thumbURL @0x7d0cc ----
// CALLERS: loadThumbImage, _objc_msgSend$thumbURL
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::thumbURL(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0xa8);

}






// ---- [d3] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d3] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] delegate @0xab9a8 ----
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






// ---- [d3] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] delegate @0xbb9ac ----
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






// ---- [d4] isHideTransitioning @0x6790c ----
// CALLERS: implementGetBaseInfoProtocol:, ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke_3.85, delegate, wcm_yb_isHideTransitioning, setWcm_yb_isHideTransitioning:, _objc_msgSend$isHideTransitioning, _objc_msgSend$setWcm_yb_isHideTransitioning:, _objc_msgSend$wcm_yb_isHideTransitioning
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImageBrowser::isHideTransitioning(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_hideTransitioning) & 1;

}






// ---- [d4] wcm_yb_isHideTransitioning @0x7cba8 ----
// CALLERS: delegate, _objc_msgSend$wcm_yb_isHideTransitioning
// CALLEES: isHideTransitioning


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::wcm_yb_isHideTransitioning(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x20);

}





