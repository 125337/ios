// ___33-[WCMYBIBImageCell_cuttingImage_]_block_invoke @0x6c888

void ___33__WCMYBIBImageCell_cuttingImage___block_invoke(long param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  dispatch_queue_t queue;
  char *pcVar4;
  undefined8 uVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = param_1;
  if (local_30 == 0) {
    local_3c = 1;
  }
  else {
    pcVar3 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
    puVar1 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
    pcVar4 = _dispatch_queue_get_label(queue);
    iVar2 = _strcmp(pcVar3,pcVar4);
    (*(code *)PTR__objc_release_00110458)(queue);
    puVar1 = PTR___dispatch_main_q_00110528;
    if (iVar2 == 0) {
      local_78 = PTR___NSConcreteStackBlock_001104f0;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = ___33__WCMYBIBImageCell_cuttingImage___block_invoke_2;
      local_60 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
      _objc_copyWeak(auStack_48,param_1 + 0x28);
      local_58 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_50 = (*(code *)PTR__objc_retain_00110460)(local_30);
      (*local_68)(&local_78);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_58,0);
      _objc_destroyWeak(auStack_48);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_c0 = PTR___NSConcreteStackBlock_001104f0;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = ___33__WCMYBIBImageCell_cuttingImage___block_invoke_8;
      local_a8 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
      _objc_copyWeak(auStack_90,param_1 + 0x28);
      local_a0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_98 = (*(code *)PTR__objc_retain_00110460)(local_30);
      _dispatch_async(uVar5,&local_c0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_a0,0);
      _objc_destroyWeak(auStack_90);
    }
    local_3c = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

