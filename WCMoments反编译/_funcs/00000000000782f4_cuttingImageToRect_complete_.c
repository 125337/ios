// cuttingImageToRect:complete: @0x782f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

void WCMYBIBImageData::cuttingImageToRect_complete_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  dispatch_queue_t queue;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_168;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  dStack_28 = param_3.field1_0x10.field1_0x8;
  local_30 = param_3.field1_0x10.field0_0x0;
  dStack_38 = param_3.field0_0x0.field1_0x8;
  local_40 = param_3.field0_0x0.field0_0x0;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_4,param_4,param_5);
  if ((*(byte *)(local_48 + 0x18) & 1) == 0) {
    _objc_msgSend_originImage(local_48,local_168);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar2 == 0) {
      local_5c = 1;
    }
    else {
      local_60 = _objc_msgSend_increase(*(undefined8 *)(local_48 + 0x10),local_168);
      local_98 = PTR___NSConcreteStackBlock_001104f0;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke;
      local_80 = &___block_descriptor_44_e8_32s_e5_B8__0l;
      local_78 = (*(code *)PTR__objc_retain_00110460)(local_48);
      local_70 = local_60;
      local_68 = _objc_retainBlock(&local_98);
      pcVar3 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
      _WCMYBIBImageProcessingQueue();
      queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue();
      pcVar4 = _dispatch_queue_get_label(queue);
      iVar1 = _strcmp(pcVar3,pcVar4);
      (*(code *)PTR__objc_release_00110458)(queue);
      if (iVar1 == 0) {
        local_f0 = PTR___NSConcreteStackBlock_001104f0;
        local_e8 = 0xc2000000;
        local_e4 = 0;
        local_e0 = ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke_95;
        local_d8 = &___block_descriptor_88_e8_32s40bs48bs_e5_v8__0l;
        local_c8 = (*(code *)PTR__objc_retain_00110460)(local_68);
        local_c0 = (*(code *)PTR__objc_retain_00110460)(local_58);
        local_d0 = (*(code *)PTR__objc_retain_00110460)(local_48);
        dStack_b0 = dStack_38;
        local_b8 = local_40;
        dStack_a0 = dStack_28;
        local_a8 = local_30;
        (*local_e0)();
        _objc_storeStrong(&local_d0);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_c8,0);
      }
      else {
        _WCMYBIBImageProcessingQueue();
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_120 = (*(code *)PTR__objc_retain_00110460)(local_68);
        local_118 = (*(code *)PTR__objc_retain_00110460)(local_58);
        local_128 = (*(code *)PTR__objc_retain_00110460)(local_48);
        dStack_108 = dStack_38;
        local_110 = local_40;
        dStack_f8 = dStack_28;
        local_100 = local_30;
        _dispatch_async(uVar5);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        _objc_storeStrong(&local_128);
        _objc_storeStrong(&local_118,0);
        _objc_storeStrong(&local_120,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_78,0);
      local_5c = 0;
    }
  }
  else {
    local_5c = 1;
  }
  _objc_storeStrong(&local_58,0);
  return;
}

