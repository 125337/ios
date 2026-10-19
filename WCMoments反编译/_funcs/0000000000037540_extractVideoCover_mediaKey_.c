// extractVideoCover:mediaKey: @0x37540

/* Function Stack Size: 0x20 bytes */

void WCMFeedController::extractVideoCover_mediaKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_e8;
  uint local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  byte local_61;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  _Call(local_38,&cf_pathForSightData,PTR____NSArray0__struct_00110718);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _Text();
  local_48 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  lVar3 = _objc_msgSend_length(local_48,local_e8);
  local_51 = 0;
  local_61 = 0;
  local_dc = 1;
  if (lVar3 != 0) {
    _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_e8);
    local_50 = _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    uVar4 = _objc_msgSend_fileExistsAtPath_(local_50,local_e8,local_48);
    local_dc = 1;
    if ((uVar4 & 1) != 0) {
      _objc_msgSend_videoRequests(local_28,local_e8);
      local_60 = _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_dc = _objc_msgSend_containsObject_(local_60,local_e8,local_40);
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_50);
  }
  bVar1 = (local_dc & 1) == 0;
  if (bVar1) {
    _objc_msgSend_videoRequests(local_28,local_e8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addObject_(uVar2,local_e8,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_account(local_28,local_e8);
    local_70 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_assetHandler(local_28,local_e8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_root(uVar2,local_e8);
    local_78 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_assetHandler(local_28,local_e8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_accountToken(uVar2,local_e8);
    local_80 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_initWeak(auStack_88,local_28);
    _dispatch_get_global_queue(0x11,0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_d8 = PTR___NSConcreteStackBlock_001104f0;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = ___48__WCMFeedController_extractVideoCover_mediaKey___block_invoke;
    local_c0 = &___block_descriptor_80_e8_32s40s48s56s64s72w_e5_v8__0l;
    local_b8 = (*(code *)PTR__objc_retain_00110460)(local_48);
    local_b0 = (*(code *)PTR__objc_retain_00110460)(local_40);
    local_a8 = (*(code *)PTR__objc_retain_00110460)(local_78);
    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_80);
    local_98 = (*(code *)PTR__objc_retain_00110460)(local_70);
    _objc_copyWeak(auStack_90,auStack_88);
    _dispatch_async(uVar2,&local_d8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  local_68 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

