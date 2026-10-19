// ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke @0x73e30

void ___34__WCMYBIBImageData_loadImageBlock__block_invoke(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  dispatch_queue_t queue;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 local_d0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  uVar3 = _objc_msgSend_conformsToProtocol_
                    (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),param_2,
                     &objc::protocol_t::WCMYYAnimatedImage);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    _objc_retainAutorelease();
    uVar4 = _objc_msgSend_CGImage(uVar4,local_d0);
    lVar5 = _WCMYYCGImageCreateDecodedCopy(uVar4,*(byte *)(param_1 + 0x30) & 1);
    local_38 = lVar5;
    uVar8 = _objc_msgSend_scale(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
                                local_d0);
    uVar4 = _objc_msgSend_imageOrientation
                      (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),local_d0);
    _objc_msgSend_imageWithCGImage_scale_orientation_
              (uVar8,&_OBJC_CLASS___UIImage,local_d0,lVar5,uVar4);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    (*(code *)PTR__objc_release_00110458)(uVar8);
    if (local_38 != 0) {
      _CGImageRelease(local_38);
    }
  }
  pcVar6 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
  pcVar7 = _dispatch_queue_get_label(queue);
  iVar2 = _strcmp(pcVar6,pcVar7);
  (*(code *)PTR__objc_release_00110458)(queue);
  puVar1 = PTR___dispatch_main_q_00110528;
  if (iVar2 == 0) {
    local_68 = PTR___NSConcreteStackBlock_001104f0;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = ___34__WCMYBIBImageData_loadImageBlock__block_invoke_2;
    local_50 = &___block_descriptor_48_e8_32r40w_e5_v8__0l;
    _objc_copyWeak(auStack_40,param_1 + 0x28);
    local_48 = *(undefined8 *)(param_1 + 0x20);
    (*local_58)(&local_68);
    _objc_destroyWeak(auStack_40);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);
    local_a8 = PTR___NSConcreteStackBlock_001104f0;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = ___34__WCMYBIBImageData_loadImageBlock__block_invoke_3;
    local_90 = &___block_descriptor_48_e8_32r40w_e5_v8__0l;
    _objc_copyWeak(auStack_80,param_1 + 0x28);
    local_88 = *(undefined8 *)(param_1 + 0x20);
    _dispatch_async(uVar4,&local_a8);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_destroyWeak(auStack_80);
  }
  return;
}

