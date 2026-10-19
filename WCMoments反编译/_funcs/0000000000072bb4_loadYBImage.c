// loadYBImage @0x72bb4

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

