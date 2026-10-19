// ___44-[WCMYBIBImageData_loadOriginImage_compress]_block_invoke.11 @0x722d4

void ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_11(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  dispatch_queue_t queue;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_d8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_d8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_scale(uVar3,local_d8);
    _UIGraphicsBeginImageContextWithOptions
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar6,0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_originImage(*(undefined8 *)(param_1 + 0x20),local_d8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = 0;
    local_50 = _CGRectMake(0);
    local_48 = uVar6;
    local_40 = uVar7;
    local_38 = uVar8;
    _objc_msgSend_drawInRect_(local_50,uVar6,uVar7,uVar8,uVar3,local_d8);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
      _UIGraphicsGetImageFromCurrentImageContext();
      local_58 = _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      pcVar4 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
      puVar1 = PTR___dispatch_main_q_00110528;
      _objc_retainAutoreleaseReturnValue();
      queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
      pcVar5 = _dispatch_queue_get_label(queue);
      iVar2 = _strcmp(pcVar4,pcVar5);
      (*(code *)PTR__objc_release_00110458)(queue);
      puVar1 = PTR___dispatch_main_q_00110528;
      if (iVar2 == 0) {
        local_88 = PTR___NSConcreteStackBlock_001104f0;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_2_12;
        local_70 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;
        _objc_copyWeak(auStack_60,param_1 + 0x28);
        local_68 = (*(code *)PTR__objc_retain_00110460)(local_58);
        (*local_78)(&local_88);
        _objc_storeStrong(&local_68,0);
        _objc_destroyWeak(auStack_60);
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        uVar3 = _objc_retainAutoreleasedReturnValue(puVar1);
        local_c8 = PTR___NSConcreteStackBlock_001104f0;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = ___44__WCMYBIBImageData_loadOriginImage_compress__block_invoke_4;
        local_b0 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;
        _objc_copyWeak(auStack_a0,param_1 + 0x28);
        local_a8 = (*(code *)PTR__objc_retain_00110460)(local_58);
        _dispatch_async(uVar3,&local_c8);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_storeStrong(&local_a8,0);
        _objc_destroyWeak(auStack_a0);
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      _UIGraphicsEndImageContext();
      _objc_msgSend_setLoadingStatus_(*(undefined8 *)(param_1 + 0x20),local_d8,0);
    }
  }
  else {
    _objc_msgSend_setLoadingStatus_(*(undefined8 *)(param_1 + 0x20),local_d8,0);
  }
  return;
}

