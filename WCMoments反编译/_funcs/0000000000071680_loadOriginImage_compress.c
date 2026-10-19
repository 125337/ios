// loadOriginImage_compress @0x71680

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

