// ============ 功能链 42  根: ___31-[WCMYBIBImageData_loadYBImage]_block_invoke @0x73234 ============
// 节点 56，按调用深度排序，自上而下读

// ---- [d0] ___31-[WCMYBIBImageData_loadYBImage]_block_invoke @0x73234 ----
// CALLERS: (根)
// CALLEES: imageNamed:decodeDecision:, imageWithContentsOfFile:decodeDecision:, imageWithData:scale:decodeDecision:, loadYBImage, imageName


void ___31__WCMYBIBImageData_loadYBImage__block_invoke(long param_1)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  char *pcVar7;

  dispatch_queue_t queue;

  char *pcVar8;

  undefined8 local_b0;

  undefined *local_a0;

  undefined4 local_98;

  undefined4 local_94;

  code *local_90;

  undefined *local_88;

  undefined8 local_80;

  undefined1 auStack_78 [24];

  undefined *local_60;

  undefined4 local_58;

  undefined4 local_54;

  code *local_50;

  undefined *local_48;

  undefined8 local_40;

  undefined1 auStack_38 [8];

  long local_30;

  long local_28;

  

  local_30 = param_1;

  local_28 = param_1;

  lVar3 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x20));

  if (lVar3 == 0) {

    lVar3 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x28),local_b0);

    if (lVar3 == 0) {

      lVar3 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x30),local_b0);

      if (lVar3 != 0) {

        uVar5 = *(undefined8 *)(param_1 + 0x30);

        _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_b0);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_scale(uVar4,local_b0);

        _objc_msgSend_imageWithData_scale_decodeDecision_

                  (&objc::class_t::WCMYBImage,local_b0,uVar5,*(undefined8 *)(param_1 + 0x38));

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);

        uVar6 = *(undefined8 *)(lVar3 + 0x28);

        *(undefined8 *)(lVar3 + 0x28) = uVar5;

        (*(code *)PTR__objc_release_00110458)(uVar6);

        (*(code *)PTR__objc_release_00110458)(uVar4);

      }

    }

    else {

      _objc_msgSend_imageWithContentsOfFile_decodeDecision_

                (&objc::class_t::WCMYBImage,local_b0,*(undefined8 *)(param_1 + 0x28),

                 *(undefined8 *)(param_1 + 0x38));

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);

      uVar5 = *(undefined8 *)(lVar3 + 0x28);

      *(undefined8 *)(lVar3 + 0x28) = uVar4;

      (*(code *)PTR__objc_release_00110458)(uVar5);

    }

  }

  else {

    _objc_msgSend_imageNamed_decodeDecision_

              (&objc::class_t::WCMYBImage,local_b0,*(undefined8 *)(param_1 + 0x20),

               *(undefined8 *)(param_1 + 0x38));

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);

    uVar5 = *(undefined8 *)(lVar3 + 0x28);

    *(undefined8 *)(lVar3 + 0x28) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar5);

  }

  pcVar7 = _dispatch_queue_get_label((dispatch_queue_t)0x0);

  puVar1 = PTR___dispatch_main_q_00110528;

  _objc_retainAutoreleaseReturnValue();

  queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);

  pcVar8 = _dispatch_queue_get_label(queue);

  iVar2 = _strcmp(pcVar7,pcVar8);

  (*(code *)PTR__objc_release_00110458)(queue);

  puVar1 = PTR___dispatch_main_q_00110528;

  if (iVar2 == 0) {

    local_60 = PTR___NSConcreteStackBlock_001104f0;

    local_58 = 0xc2000000;

    local_54 = 0;

    local_50 = ___31__WCMYBIBImageData_loadYBImage__block_invoke_2;

    local_48 = &___block_descriptor_48_e8_32r40w_e5_v8__0l;

    _objc_copyWeak(auStack_38,param_1 + 0x48);

    local_40 = *(undefined8 *)(param_1 + 0x40);

    (*local_50)(&local_60);

    _objc_destroyWeak(auStack_38);

  }

  else {

    _objc_retainAutoreleaseReturnValue();

    uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);

    local_a0 = PTR___NSConcreteStackBlock_001104f0;

    local_98 = 0xc2000000;

    local_94 = 0;

    local_90 = ___31__WCMYBIBImageData_loadYBImage__block_invoke_15;

    local_88 = &___block_descriptor_48_e8_32r40w_e5_v8__0l;

    _objc_copyWeak(auStack_78,param_1 + 0x48);

    local_80 = *(undefined8 *)(param_1 + 0x40);

    _dispatch_async(uVar4,&local_a0);

    (*(code *)PTR__objc_release_00110458)(uVar4);

    _objc_destroyWeak(auStack_78);

  }

  return;

}






// ---- [d1] imageNamed:decodeDecision: @0x685b8 ----
// CALLERS: imageNamed:, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, _objc_msgSend$imageNamed:decodeDecision:
// CALLEES: imageNamed:, __NSStringByAppendingNameScale, initWithData:scale:decodeDecision:, __NSBundlePreferredScales, imageName


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::imageNamed_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  ID IVar7;

  ulong uVar8;

  float fVar9;

  ulong local_1e0;

  ulong local_1d8;

  undefined **local_1a8;

  undefined8 local_198;

  undefined8 local_190;

  ID local_188;

  class_t *local_180;

  undefined1 auStack_178 [8];

  long local_170;

  long *local_168;

  undefined8 local_138;

  undefined8 local_130;

  int local_124;

  undefined8 local_120;

  bool local_111;

  undefined **local_110;

  undefined8 local_108;

  double local_100;

  long local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  int local_dc;

  undefined8 local_d8;

  undefined8 local_d0;

  SEL local_c8;

  ID local_c0;

  undefined8 local_b8;

  undefined1 auStack_b0 [128];

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_d0 = 0;

  local_c8 = param_2;

  local_c0 = param_1;

  _objc_storeStrong(&local_d0,param_3,param_3,param_4,param_5);

  local_d8 = 0;

  _objc_storeStrong(&local_d8,param_4);

  lVar2 = _objc_msgSend_length(local_d0,local_198);

  if (lVar2 == 0) {

    local_b8 = 0;

    local_dc = 1;

  }

  else {

    uVar3 = _objc_msgSend_hasSuffix_(local_d0,local_198,&cf__);

    if ((uVar3 & 1) == 0) {

      _objc_msgSend_stringByDeletingPathExtension(local_d0,local_198);

      local_e8 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_pathExtension(local_d0,local_198);

      local_f0 = _objc_retainAutoreleasedReturnValue();

      local_f8 = 0;

      local_100 = 1.0;

      lVar2 = _objc_msgSend_length(local_f0,local_198);

      local_111 = false;

      if (lVar2 == 0) {

        local_1a8 = &PTR__OBJC_CLASS___NSConstantArray_0010fb78;

      }

      else {

        local_30 = local_f0;

        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_198,&local_30,1);

        local_1a8 = (undefined **)_objc_retainAutoreleasedReturnValue();

        local_110 = local_1a8;

      }

      local_111 = lVar2 != 0;

      local_108 = (*(code *)PTR__objc_retain_00110460)(local_1a8);

      if ((local_111 & 1U) != 0) {

        (*(code *)PTR__objc_release_00110458)(local_110);

      }

      __NSBundlePreferredScales();

      local_120 = _objc_retainAutoreleasedReturnValue();

      local_124 = 0;

      while( true ) {

        uVar8 = (ulong)local_124;

        uVar3 = _objc_msgSend_count(local_120,local_198);

        if (uVar3 <= uVar8) break;

        _objc_msgSend_objectAtIndexedSubscript_(uVar8 - uVar3,local_120,local_198,(long)local_124);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        fVar9 = (float)_objc_msgSend_floatValue(uVar4,local_198);

        local_100 = (double)fVar9;

        (*(code *)PTR__objc_release_00110458)(uVar4);

        __NSStringByAppendingNameScale(local_100,local_e8);

        local_130 = _objc_retainAutoreleasedReturnValue();

        _memset(auStack_178,0,0x40);

        uVar4 = (*(code *)PTR__objc_retain_00110460)(local_108);

        local_1d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                              (uVar4,local_198,auStack_178,auStack_b0,0x10);

        if (local_1d8 != 0) {

          lVar2 = *local_168;

          local_1e0 = 0;

          do {

            do {

              if (*local_168 - lVar2 != 0) {

                _objc_enumerationMutation(*local_168 - lVar2,uVar4);

              }

              local_138 = *(undefined8 *)(local_170 + local_1e0 * 8);

              _objc_msgSend_mainBundle(&_OBJC_CLASS___NSBundle,local_198);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              _objc_msgSend_pathForResource_ofType_(uVar5,local_198,local_130,local_138);

              lVar6 = _objc_retainAutoreleasedReturnValue();

              lVar1 = local_f8;

              local_f8 = lVar6;

              (*(code *)PTR__objc_release_00110458)(lVar1);

              (*(code *)PTR__objc_release_00110458)(uVar5);

              if (local_f8 != 0) {

                local_dc = 5;

                goto LAB_00068954;

              }

              local_1e0 = local_1e0 + 1;

            } while (local_1e0 < local_1d8);

            local_1d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_

                                  (uVar4,local_198,auStack_178,auStack_b0,0x10);

            local_1e0 = 0;

          } while (local_1d8 != 0);

        }

        local_dc = 0;

LAB_00068954:

        (*(code *)PTR__objc_release_00110458)(uVar4);

        if (local_f8 == 0) {

          local_dc = 0;

        }

        else {

          local_dc = 2;

        }

        _objc_storeStrong(&local_130,0);

        if (local_dc != 0) break;

        local_124 = local_124 + 1;

      }

      lVar2 = _objc_msgSend_length(local_f8,local_198);

      if (lVar2 == 0) {

        local_188 = local_c0;

        local_180 = &objc::class_t::WCMYBImage;

        _objc_msgSendSuper2(&local_188,"imageNamed:",local_d0);

        local_b8 = _objc_retainAutoreleasedReturnValue();

        local_dc = 1;

      }

      else {

        _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_198,local_f8);

        local_190 = _objc_retainAutoreleasedReturnValue();

        lVar2 = _objc_msgSend_length(local_190,local_198);

        if (lVar2 == 0) {

          local_b8 = 0;

        }

        else {

          uVar4 = _objc_alloc(local_c0);

          local_b8 = _objc_msgSend_initWithData_scale_decodeDecision_

                               (local_100,uVar4,local_198,local_190,local_d8);

        }

        local_dc = 1;

        _objc_storeStrong(&local_190,0);

      }

      _objc_storeStrong(&local_120);

      _objc_storeStrong(&local_108,0);

      _objc_storeStrong(&local_f8,0);

      _objc_storeStrong(&local_f0,0);

      _objc_storeStrong(&local_e8,0);

    }

    else {

      local_b8 = 0;

      local_dc = 1;

    }

  }

  _objc_storeStrong(&local_d8);

  _objc_storeStrong(&local_d0,0);

  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar7 = _objc_autoreleaseReturnValue(0,local_b8);

  return IVar7;

}






// ---- [d1] imageWithContentsOfFile:decodeDecision: @0x68cec ----
// CALLERS: imageWithContentsOfFile:, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, _objc_msgSend$imageWithContentsOfFile:decodeDecision:
// CALLEES: initWithContentsOfFile:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::imageWithContentsOfFile_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_58;

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

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithContentsOfFile_decodeDecision_(uVar1,local_58,local_28,local_30);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d1] imageWithData:scale:decodeDecision: @0x68f0c ----
// CALLERS: imageWithData:scale:, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2.69, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke.70, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.79, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.81, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2.90
// CALLEES: initWithData:scale:decodeDecision:


/* Function Stack Size: 0x28 bytes */



ID WCMYBImage::imageWithData_scale_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_60;

  undefined8 local_38;

  double local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_5,param_6);

  local_38 = 0;

  local_30 = param_4;

  _objc_storeStrong(&local_38,param_5);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithData_scale_decodeDecision_

                    (local_30,uVar1,local_60,local_28,local_38);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

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






// ---- [d1] imageName @0x7ce0c ----
// CALLERS: imageNamed:, imageNamed:decodeDecision:, loadData, loadYBImage, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], ___26-[WCMYBIBIconManager_init]_block_invoke, ___26-[WCMYBIBIconManager_init]_block_invoke_2
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageName(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x60);

}






// ---- [d2] imageNamed: @0x68544 ----
// CALLERS: imageNamed:decodeDecision:, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], _objc_msgSend$imageNamed:, _objc_msgSend$imageNamed:decodeDecision:, _objc_msgSend$wcm_ybib_imageNamed:bundle:
// CALLEES: imageNamed:decodeDecision:, imageName


/* Function Stack Size: 0x18 bytes */



ID WCMYBImage::imageNamed_(ID param_1,SEL param_2,ID param_3)



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

  _objc_msgSend_imageNamed_decodeDecision_(local_18,local_48,local_28,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] __NSStringByAppendingNameScale @0x68b38 ----
// CALLERS: imageNamed:decodeDecision:, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], imageNamed:
// CALLEES: (叶)


void __NSStringByAppendingNameScale(double param_1,undefined8 param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 local_40;

  long local_20;

  undefined8 local_18;

  

  local_20 = 0;

  _objc_storeStrong(&local_20,param_2);

  if (local_20 == 0) {

    local_18 = 0;

  }

  else if (((ABS(param_1 - 1.0) <= 1.1920928955078125e-07) ||

           (lVar1 = _objc_msgSend_length(local_20,local_40), lVar1 == 0)) ||

          (uVar2 = _objc_msgSend_hasSuffix_(local_20,local_40,&cf__), lVar1 = local_20,

          (uVar2 & 1) != 0)) {

    local_18 = _objc_msgSend_copy(local_20,local_40);

  }

  else {

    _objc_msgSend_numberWithDouble_(param_1,&_OBJC_CLASS___NSNumber,local_40);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_stringByAppendingFormat_(lVar1,local_40,&cf____x);

    local_18 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_storeStrong(&local_20,0);

  _objc_autoreleaseReturnValue(local_18);

  return;

}






// ---- [d2] initWithData:scale:decodeDecision: @0x695a8 ----
// CALLERS: imageNamed:decodeDecision:, imageWithData:scale:decodeDecision:, initWithContentsOfFile:decodeDecision:, initWithData:decodeDecision:, initWithData:scale:, _objc_msgSend$initWithData:scale:decodeDecision:
// CALLEES: _CGSizeMake, scale, animatedImageType, animatedImageMemorySize, image, type, width, height, image, decoderWithData:scale:


/* Function Stack Size: 0x28 bytes */



ID WCMYBImage::initWithData_scale_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)



{

  ID IVar1;

  long lVar2;

  undefined8 uVar3;

  dispatch_semaphore_t pdVar4;

  ulong uVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  double dVar11;

  double local_d0;

  undefined8 local_90;

  long local_88;

  undefined8 local_80;

  undefined8 local_78;

  double local_70;

  byte local_61;

  undefined8 local_60;

  int local_54;

  long local_50;

  double local_48;

  undefined8 local_40;

  SEL local_38;

  ID local_30;

  ID local_28;

  

  local_40 = 0;

  local_38 = param_2;

  local_30 = param_1;

  _objc_storeStrong(&local_40,param_3,param_3,param_5,param_6);

  local_50 = 0;

  local_48 = param_4;

  _objc_storeStrong(&local_50,param_5);

  lVar2 = _objc_msgSend_length(local_40,local_90);

  if (lVar2 == 0) {

    local_28 = 0;

    local_54 = 1;

  }

  else {

    if (local_48 <= 0.0) {

      _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_90);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      local_48 = (double)_objc_msgSend_scale(uVar3,local_90);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    pdVar4 = _dispatch_semaphore_create(1);

    uVar3 = *(undefined8 *)(local_30 + (long)_preloadedLock);

    *(undefined8 *)(local_30 + (long)_preloadedLock) = pdVar4;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_autoreleasePoolPush();

    _objc_msgSend_decoderWithData_scale_

              (local_48,&objc::class_t::WCMYYImageDecoder,local_90,local_40);

    local_60 = _objc_retainAutoreleasedReturnValue();

    lVar2 = local_50;

    local_61 = 1;

    if (local_50 != 0) {

      uVar5 = _objc_msgSend_width(local_60,local_90);

      uVar6 = _objc_msgSend_height(local_60,local_90);

      dVar11 = (double)uVar6;

      local_78 = _CGSizeMake((double)uVar5);

      local_70 = dVar11;

      local_d0 = (double)_objc_msgSend_scale(local_60,local_90);

      if (local_d0 == 0.0) {

        local_d0 = 1.0;

      }

      local_61 = (**(code **)(lVar2 + 0x10))(local_78,local_70,local_d0);

    }

    _objc_msgSend_frameAtIndex_decodeForDisplay_(local_60,local_90,0,local_61 & 1);

    local_80 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_image(local_80,local_90);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    IVar1 = local_30;

    local_88 = lVar2;

    if (lVar2 == 0) {

      local_28 = 0;

      local_54 = 1;

    }

    else {

      _objc_retainAutorelease();

      uVar7 = _objc_msgSend_CGImage(lVar2,local_90);

      uVar10 = _objc_msgSend_scale(local_60,local_90);

      uVar8 = _objc_msgSend_imageOrientation(local_88,local_90);

      local_30 = 0;

      local_30 = _objc_msgSend_initWithCGImage_scale_orientation_(uVar10,IVar1,local_90,uVar7,uVar8)

      ;

      _objc_storeStrong(&local_30);

      if (local_30 == 0) {

        local_28 = 0;

        local_54 = 1;

      }

      else {

        uVar7 = _objc_msgSend_type(local_60,local_90);

        *(undefined8 *)(local_30 + (long)_animatedImageType) = uVar7;

        uVar5 = _objc_msgSend_frameCount(local_60,local_90);

        if (1 < uVar5) {

          _objc_storeStrong(local_30 + (long)_decoder,local_60);

          lVar2 = local_88;

          _objc_retainAutorelease();

          _objc_msgSend_CGImage(lVar2,local_90);

          lVar9 = _CGImageGetBytesPerRow();

          lVar2 = local_88;

          _objc_retainAutorelease();

          _objc_msgSend_CGImage(lVar2,local_90);

          lVar2 = _CGImageGetHeight();

          *(long *)(local_30 + (long)_bytesPerFrame) = lVar9 * lVar2;

          lVar9 = *(long *)(local_30 + (long)_bytesPerFrame);

          lVar2 = _objc_msgSend_frameCount(local_60,local_90);

          *(long *)(local_30 + (long)_animatedImageMemorySize) = lVar9 * lVar2;

        }

        _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_30,local_90,1);

        local_54 = 0;

      }

    }

    _objc_storeStrong(&local_88);

    _objc_storeStrong(&local_80,0);

    _objc_storeStrong(&local_60,0);

    _objc_autoreleasePoolPop(uVar3);

    if (local_54 == 0) {

      local_28 = (*(code *)PTR__objc_retain_00110460)(local_30);

      local_54 = 1;

    }

  }

  _objc_storeStrong(&local_50);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_30,0);

  return local_28;

}






// ---- [d2] __NSBundlePreferredScales @0x6a300 ----
// CALLERS: imageNamed:decodeDecision:, ____NSBundlePreferredScales_block_invoke, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], ____NSBundlePreferredScales_block_invoke, imageNamed:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


void __NSBundlePreferredScales(void)



{

  undefined8 local_20;

  long *local_18;

  

  local_18 = &__NSBundlePreferredScales_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  _objc_retainAutoreleaseReturnValue(__NSBundlePreferredScales_scales);

  return;

}






// ---- [d2] initWithContentsOfFile:decodeDecision: @0x69048 ----
// CALLERS: imageWithContentsOfFile:decodeDecision:, initWithContentsOfFile:, _objc_msgSend$initWithContentsOfFile:decodeDecision:
// CALLEES: __NSStringPathScale, initWithData:scale:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::initWithContentsOfFile_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_78;

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

  _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_78,local_28);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  IVar2 = local_18;

  local_38 = uVar1;

  __NSStringPathScale(local_28);

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_(IVar2,local_78,uVar1,local_30);

  IVar2 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_30,0);

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar2;

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






// ---- [d2] setLoadingStatus: @0x7c708 ----
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






// ---- [d3] scale @0x2d0d8 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMHeaderSizeController::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_scale);

}






// ---- [d3] animatedImageType @0x6a21c ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageType(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageType);

}






// ---- [d3] animatedImageMemorySize @0x6a240 ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageMemorySize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageMemorySize);

}






// ---- [d3] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d3] type @0x82db4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBCopywriter::type(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 8);

}






// ---- [d3] width @0x932d0 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x10);

}






// ---- [d3] height @0x93310 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x18);

}






// ---- [d3] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d3] decoderWithData:scale: @0x937e8 ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, _objc_msgSend$decoderWithData:scale:
// CALLEES: initWithScale:, updateData:final:, frameCount


/* Function Stack Size: 0x20 bytes */



ID WCMYYImageDecoder::decoderWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  undefined8 uVar1;

  long lVar2;

  ID IVar3;

  undefined8 local_58;

  undefined8 local_48;

  undefined4 local_3c;

  double local_38;

  long local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  local_38 = param_4;

  if (local_30 == 0) {

    local_18 = 0;

    local_3c = 1;

  }

  else {

    uVar1 = _objc_alloc(&objc::class_t::WCMYYImageDecoder);

    local_48 = _objc_msgSend_initWithScale_(local_38,uVar1,local_58);

    _objc_msgSend_updateData_final_(local_48,local_58,local_30,1);

    lVar2 = _objc_msgSend_frameCount(local_48,local_58);

    if (lVar2 == 0) {

      local_18 = 0;

    }

    else {

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_48);

    }

    local_3c = 1;

    _objc_storeStrong(&local_48,0);

  }

  _objc_storeStrong(&local_30,0);

  IVar3 = _objc_autoreleaseReturnValue(local_18);

  return IVar3;

}






// ---- [d3] frameAtIndex:decodeForDisplay: @0x93b68 ----
// CALLERS: initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, initWithData:scale:, animatedImageFrameAtIndex:, encodeImageWithDecoder:type:quality:, _objc_msgSend$_frameAtIndex:decodeForDisplay:, _objc_msgSend$frameAtIndex:decodeForDisplay:
// CALLEES: (叶)


/* Function Stack Size: 0x1c bytes */



ID WCMYYImageDecoder::frameAtIndex_decodeForDisplay_

             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_58;

  undefined8 local_38;

  byte local_29;

  unsigned_long_long local_28;

  SEL local_20;

  ID local_18;

  

  local_29 = (byte)param_4;

  local_38 = 0;

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));

  _objc_msgSend__frameAtIndex_decodeForDisplay_(local_18,local_58,local_28,local_29 & 1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = local_38;

  local_38 = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));

  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

}






// ---- [d3] type @0x976f4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xa0);

}






// ---- [d3] scale @0x97710 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYYImageDecoder::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0xa8);

}






// ---- [d3] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d3] width @0x97764 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xc0);

}






// ---- [d3] height @0x97780 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 200);

}






// ---- [d3] type @0x9a1f8 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x20);

}






// ---- [d3] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

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






// ---- [d3] __NSStringPathScale @0x69150 ----
// CALLERS: initWithContentsOfFile:decodeDecision:, ____NSStringPathScale_block_invoke, initWithContentsOfFile:, ____NSStringPathScale_block_invoke, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameAtIndex:, ____NSStringPathScale_block_invoke
// CALLEES: ____NSStringPathScale_block_invoke


undefined1  [16] __NSStringPathScale(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined8 local_e0;

  undefined *local_d8;

  undefined4 local_d0;

  undefined4 local_cc;

  code *local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  undefined8 *local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  undefined8 local_68;

  undefined8 local_60;

  undefined4 local_54;

  undefined8 local_50;

  ulong local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  

  local_50 = 0;

  _objc_storeStrong(&local_50,param_1);

  lVar1 = _objc_msgSend_length(local_50,local_e0);

  if ((lVar1 == 0) || (uVar2 = _objc_msgSend_hasSuffix_(local_50,local_e0,&cf__), (uVar2 & 1) != 0))

  {

    local_48 = 0x3ff0000000000000;

    local_54 = 1;

  }

  else {

    _objc_msgSend_stringByDeletingPathExtension(local_50,local_e0);

    local_60 = _objc_retainAutoreleasedReturnValue();

    local_78 = &local_80;

    local_80 = 0;

    local_70 = 0x20000000;

    local_6c = 0x20;

    local_68 = 0x3ff0000000000000;

    uVar3 = _objc_msgSend_regularExpressionWithPattern_options_error_

                      (&_OBJC_CLASS___NSRegularExpression,local_e0,&cf___0_9______0_9__x_,0x10,0);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar3 = local_60;

    local_88 = uVar4;

    local_a0 = _objc_msgSend_length(local_60,local_e0);

    local_38 = 0;

    local_30 = 0;

    local_a8 = 0;

    local_d8 = PTR___NSConcreteStackBlock_001104f0;

    local_d0 = 0xc2000000;

    local_cc = 0;

    local_c8 = ____NSStringPathScale_block_invoke;

    local_c0 = &___block_descriptor_48_e8_32s40r_e37_v32__0__NSTextCheckingResult_8Q16_B24l;

    local_b0 = &local_80;

    local_40 = local_a0;

    local_28 = local_a0;

    local_b8 = (*(code *)PTR__objc_retain_00110460)(local_50);

    _objc_msgSend_enumerateMatchesInString_options_range_usingBlock_

              (uVar4,local_e0,uVar3,0,local_a8,local_a0,&local_d8);

    local_48 = local_78[3];

    local_54 = 1;

    _objc_storeStrong(&local_b8);

    _objc_storeStrong(&local_88,0);

    __Block_object_dispose(&local_80,8);

    _objc_storeStrong(&local_60,0);

  }

  _objc_storeStrong(&local_50,0);

  auVar5._8_8_ = 0;

  auVar5._0_8_ = local_48;

  return auVar5;

}






// ---- [d3] delegate @0x677c4 ----
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






// ---- [d4] initWithScale: @0x93984 ----
// CALLERS: decoderWithData:scale:, init, _objc_msgSend$initWithScale:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMYYImageDecoder::initWithScale_(ID param_1,SEL param_2,double param_3)



{

  dispatch_semaphore_t pdVar1;

  undefined8 uVar2;

  ID IVar3;

  ID local_50;

  class_t *local_48;

  double local_40;

  SEL local_38;

  long local_30;

  pthread_mutexattr_t pStack_28;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_30 = 0;

  local_48 = &objc::class_t::WCMYYImageDecoder;

  local_50 = param_1;

  local_40 = param_3;

  local_38 = param_2;

  local_30 = _objc_msgSendSuper2(&local_50,"init");

  _objc_storeStrong(&local_30);

  if (local_40 <= 0.0) {

    local_40 = 1.0;

  }

  *(double *)(local_30 + 0xa8) = local_40;

  pdVar1 = _dispatch_semaphore_create(1);

  uVar2 = *(undefined8 *)(local_30 + 0x68);

  *(dispatch_semaphore_t *)(local_30 + 0x68) = pdVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _pthread_mutexattr_init(&pStack_28);

  _pthread_mutexattr_settype(&pStack_28,2);

  _pthread_mutex_init((pthread_mutex_t *)(local_30 + 8),&pStack_28);

  _pthread_mutexattr_destroy(&pStack_28);

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_30);

  _objc_storeStrong(&local_30,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return IVar3;

}






// ---- [d4] updateData:final: @0x93ac8 ----
// CALLERS: decoderWithData:scale:, _objc_msgSend$_updateData:final:, _objc_msgSend$updateData:final:
// CALLEES: (叶)


/* Function Stack Size: 0x1c bytes */



bool WCMYYImageDecoder::updateData_final_(ID param_1,SEL param_2,ID param_3,bool param_4)



{

  byte bVar1;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _pthread_mutex_lock((pthread_mutex_t *)(local_18 + 8));

  bVar1 = _objc_msgSend__updateData_final_(local_18,local_48,local_28,param_4 & 1);

  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));

  _objc_storeStrong(&local_28,0);

  return bVar1 & 1;

}






// ---- [d4] ____NSStringPathScale_block_invoke @0x6a448 ----
// CALLERS: __NSStringPathScale, __NSStringPathScale, __NSStringPathScale
// CALLEES: __NSStringPathScale


void ____NSStringPathScale_block_invoke(long param_1)



{

  ulong uVar1;

  long lVar2;

  long extraout_x1;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_a0;

  undefined8 local_40;

  long local_38;

  long local_30;

  long local_28;

  long local_20;

  long local_18;

  

  local_40 = 0;

  local_38 = param_1;

  _objc_storeStrong(&local_40);

  uVar1 = _objc_msgSend_range(local_40,local_a0);

  if (2 < uVar1) {

    uVar3 = *(undefined8 *)(param_1 + 0x20);

    lVar2 = _objc_msgSend_range(local_40,local_a0);

    lVar2 = lVar2 + 1;

    _objc_msgSend_range(local_40,local_a0);

    local_30 = extraout_x1 + -2;

    local_28 = lVar2;

    local_20 = lVar2;

    local_18 = local_30;

    _objc_msgSend_substringWithRange_(uVar3,local_a0,lVar2,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_msgSend_doubleValue(uVar3,local_a0);

    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_storeStrong(&local_40,0);

  return;

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





