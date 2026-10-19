// ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.75 @0x75aa4

void ___36__WCMYBIBImageData_loadURL_download__block_invoke_75
               (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  dispatch_queue_t queue;
  char *pcVar4;
  undefined8 uVar5;
  double local_d0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  double local_90;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  double local_50;
  double local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_d0 = ((double)param_2 * 1.0) / (double)param_3;
  if (local_d0 == 0.0) {
    local_d0 = 0.0;
  }
  local_48 = local_d0;
  local_40 = param_1;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
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
    local_68 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_2;
    local_60 = &___block_descriptor_48_e8_32w_e5_v8__0l;
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    local_50 = local_48;
    (*local_68)(&local_78);
    _objc_destroyWeak(auStack_58);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);
    local_b8 = PTR___NSConcreteStackBlock_001104f0;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = ___36__WCMYBIBImageData_loadURL_download__block_invoke_76;
    local_a0 = &___block_descriptor_48_e8_32w_e5_v8__0l;
    _objc_copyWeak(auStack_98,param_1 + 0x20);
    local_90 = local_48;
    _dispatch_async(uVar5,&local_b8);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_destroyWeak(auStack_98);
  }
  return;
}

