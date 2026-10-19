// setLoadingStatus: @0x7c708

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageData::setLoadingStatus_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  dispatch_queue_t queue;
  char *pcVar4;
  undefined8 uVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  long_long local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  pcVar3 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue(puVar1);
  pcVar4 = _dispatch_queue_get_label(queue);
  iVar2 = _strcmp(pcVar3,pcVar4);
  (*(code *)PTR__objc_release_00110458)(queue);
  puVar1 = PTR___dispatch_main_q_00110528;
  if (iVar2 == 0) {
    local_58 = PTR___NSConcreteStackBlock_001104f0;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = ___37__WCMYBIBImageData_setLoadingStatus___block_invoke;
    local_40 = &___block_descriptor_48_e8_32s_e5_v8__0l;
    local_38 = (*(code *)PTR__objc_retain_00110460)(local_18);
    local_30 = local_28;
    (*local_48)(&local_58);
    _objc_storeStrong(&local_38,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);
    local_88 = PTR___NSConcreteStackBlock_001104f0;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = ___37__WCMYBIBImageData_setLoadingStatus___block_invoke_117;
    local_70 = &___block_descriptor_48_e8_32s_e5_v8__0l;
    local_68 = (*(code *)PTR__objc_retain_00110460)(local_18);
    local_60 = local_28;
    _dispatch_async(uVar5,&local_88);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_storeStrong(&local_68,0);
  }
  return;
}

