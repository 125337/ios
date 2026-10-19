// ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2 @0x77144

void ___31__WCMYBIBImageData_loadPHAsset__block_invoke_2(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  dispatch_queue_t queue;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 local_d0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  uVar6 = local_30;
  local_38 = param_1;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_d0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_scale(uVar3,local_d0);
    _objc_msgSend_imageWithData_scale_decodeDecision_
              (&objc::class_t::WCMYBImage,local_d0,uVar6,*(undefined8 *)(param_1 + 0x28));
    local_48 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_initWeak(auStack_50,*(undefined8 *)(param_1 + 0x20));
    pcVar4 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
    puVar1 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
    pcVar5 = _dispatch_queue_get_label(queue);
    iVar2 = _strcmp(pcVar4,pcVar5);
    (*(code *)PTR__objc_release_00110458)(queue);
    puVar1 = PTR___dispatch_main_q_00110528;
    if (iVar2 == 0) {
      local_80 = PTR___NSConcreteStackBlock_001104f0;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = ___31__WCMYBIBImageData_loadPHAsset__block_invoke_3;
      local_68 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;
      _objc_copyWeak(auStack_58,auStack_50);
      local_60 = (*(code *)PTR__objc_retain_00110460)(local_48);
      (*local_70)(&local_80);
      _objc_storeStrong(&local_60,0);
      _objc_destroyWeak(auStack_58);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      uVar6 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_c0 = PTR___NSConcreteStackBlock_001104f0;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = ___31__WCMYBIBImageData_loadPHAsset__block_invoke_4;
      local_a8 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;
      _objc_copyWeak(auStack_98,auStack_50);
      local_a0 = (*(code *)PTR__objc_retain_00110460)(local_48);
      _dispatch_async(uVar6,&local_c0);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      _objc_storeStrong(&local_a0,0);
      _objc_destroyWeak(auStack_98);
    }
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    _objc_msgSend_setLoadingStatus_(*(undefined8 *)(param_1 + 0x20),local_d0,0);
    local_3c = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

