// ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke @0x7461c

/* WARNING: Type propagation algorithm not settling */

void ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  dispatch_queue_t pdVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 local_128;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  long local_38 [3];
  
  local_38[1] = 0;
  local_38[2] = param_1;
  _objc_storeStrong(local_38 + 1);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_3);
  local_40 = param_1;
  if ((local_38[0] == 0) || (lVar3 = _objc_msgSend_length(local_38[0],local_128), lVar3 == 0)) {
    pcVar4 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
    puVar1 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    pdVar5 = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
    pcVar6 = _dispatch_queue_get_label(pdVar5);
    iVar2 = _strcmp(pcVar4,pcVar6);
    (*(code *)PTR__objc_release_00110458)(pdVar5);
    puVar1 = PTR___dispatch_main_q_00110528;
    if (iVar2 == 0) {
      local_68 = PTR___NSConcreteStackBlock_001104f0;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke_2;
      local_50 = &___block_descriptor_40_e8_32s_e5_v8__0l;
      local_48 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      (*local_58)(&local_68);
      _objc_storeStrong(&local_48,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      uVar7 = _objc_retainAutoreleasedReturnValue(puVar1);
      local_90 = PTR___NSConcreteStackBlock_001104f0;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke_68;
      local_78 = &___block_descriptor_40_e8_32s_e5_v8__0l;
      local_70 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      _dispatch_async(uVar7,&local_90);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      _objc_storeStrong(&local_70,0);
    }
    local_94 = 1;
  }
  else {
    pcVar4 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
    _WCMYBIBImageProcessingQueue();
    pdVar5 = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue();
    pcVar6 = _dispatch_queue_get_label(pdVar5);
    iVar2 = _strcmp(pcVar4,pcVar6);
    (*(code *)PTR__objc_release_00110458)(pdVar5);
    if (iVar2 == 0) {
      local_d0 = PTR___NSConcreteStackBlock_001104f0;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke_2_69;
      local_b8 = &___block_descriptor_56_e8_32s40s48bs_e5_v8__0l;
      local_b0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_a8 = (*(code *)PTR__objc_retain_00110460)(local_38[0]);
      local_a0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
      (*local_c0)(&local_d0);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_b0,0);
    }
    else {
      _WCMYBIBImageProcessingQueue();
      uVar7 = _objc_retainAutoreleasedReturnValue();
      local_108 = PTR___NSConcreteStackBlock_001104f0;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = ___38__WCMYBIBImageData_loadURL_queryCache__block_invoke_70;
      local_f0 = &___block_descriptor_56_e8_32s40s48bs_e5_v8__0l;
      local_e8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
      local_e0 = (*(code *)PTR__objc_retain_00110460)(local_38[0]);
      local_d8 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
      _dispatch_async(uVar7,&local_108);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_e8,0);
    }
    local_94 = 0;
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  return;
}

