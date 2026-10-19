// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.81 @0x766e0

void ___36__WCMYBIBImageData_loadURL_download__block_invoke_81(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  dispatch_queue_t queue;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 local_c8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_c8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_scale(uVar3,local_c8);
    _objc_msgSend_imageWithData_scale_decodeDecision_
              (&objc::class_t::WCMYBImage,local_c8,uVar6,*(undefined8 *)(param_1 + 0x30));
    local_38 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    pcVar4 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
    puVar1 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
    pcVar5 = _dispatch_queue_get_label(queue);
    iVar2 = _strcmp(pcVar4,pcVar5);
    (*(code *)PTR__objc_release_00110458)(queue);
    puVar1 = PTR___dispatch_main_q_00110528;
    if (iVar2 == 0) {
      local_70 = PTR___NSConcreteStackBlock_001104f0;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_2_82;
      local_58 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
      _objc_copyWeak(auStack_40,param_1 + 0x38);
      local_50 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_38);
      (*local_60)(&local_70);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
      _objc_destroyWeak(auStack_40);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      uVar3 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_b8 = PTR___NSConcreteStackBlock_001104f0;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_3_83;
      local_a0 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
      _objc_copyWeak(auStack_88,param_1 + 0x38);
      local_98 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
      local_90 = (*(code *)PTR__objc_retain_00110460)(local_38);
      _dispatch_async(uVar3,&local_b8);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_destroyWeak(auStack_88);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    _objc_msgSend_setLoadingStatus_(*(undefined8 *)(param_1 + 0x20),local_c8,0);
  }
  return;
}

