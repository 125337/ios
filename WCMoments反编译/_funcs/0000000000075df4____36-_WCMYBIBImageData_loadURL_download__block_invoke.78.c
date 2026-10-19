// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.78 @0x75df4

void ___36__WCMYBIBImageData_loadURL_download__block_invoke_78
               (long param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  char *pcVar2;
  dispatch_queue_t queue;
  char *pcVar3;
  undefined8 uVar4;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_40 = param_1;
  local_31 = param_3;
  if ((param_3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    pcVar2 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
    _WCMYBIBImageProcessingQueue();
    queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue();
    pcVar3 = _dispatch_queue_get_label(queue);
    iVar1 = _strcmp(pcVar2,pcVar3);
    (*(code *)PTR__objc_release_00110458)(queue);
    if (iVar1 == 0) {
      local_88 = PTR___NSConcreteStackBlock_001104f0;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_2_79;
      local_70 = &___block_descriptor_64_e8_32s40s48bs56w_e5_v8__0l;
      local_68 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_60 = (*(code *)PTR__objc_retain_00110460)(local_30);
      local_58 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
      _objc_copyWeak(auStack_50,param_1 + 0x30);
      (*local_78)(&local_88);
      _objc_destroyWeak(auStack_50);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_68,0);
    }
    else {
      _WCMYBIBImageProcessingQueue();
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_d8 = PTR___NSConcreteStackBlock_001104f0;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_81;
      local_c0 = &___block_descriptor_64_e8_32s40s48bs56w_e5_v8__0l;
      local_b8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_b0 = (*(code *)PTR__objc_retain_00110460)(local_30);
      local_a8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
      _objc_copyWeak(auStack_a0,param_1 + 0x30);
      _dispatch_async(uVar4,&local_d8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_b8,0);
    }
    local_44 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

