// ___69+[WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess:failed:]_block_invoke @0x84840

void ___69__WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess_failed___block_invoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  dispatch_queue_t queue;
  char *pcVar4;
  undefined8 uVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = param_1;
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
    local_70 = PTR___NSConcreteStackBlock_001104f0;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = 
    ___69__WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess_failed___block_invoke_2;
    local_58 = &___block_descriptor_56_e8_32bs40bs_e5_v8__0l;
    local_40 = local_30;
    local_50 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
    local_48 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
    (*local_60)(&local_70);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);
    local_a8 = PTR___NSConcreteStackBlock_001104f0;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = 
    ___69__WCMYBIBPhotoAlbumManager_getPhotoAlbumAuthorizationSuccess_failed___block_invoke_6;
    local_90 = &___block_descriptor_56_e8_32bs40bs_e5_v8__0l;
    local_78 = local_30;
    local_88 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
    local_80 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
    _dispatch_async(uVar5,&local_a8);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
  }
  return;
}

