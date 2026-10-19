// loadImageBlock @0x7390c

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

