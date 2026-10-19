// ___31-[WCMYBIBImageData_loadYBImage]_block_invoke @0x73234

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

