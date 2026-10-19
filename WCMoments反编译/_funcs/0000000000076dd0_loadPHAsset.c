// loadPHAsset @0x76dd0

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

