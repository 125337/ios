// scheduleMediaReload @0x3217c

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::scheduleMediaReload(ID param_1,SEL param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  double local_38;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  uVar3 = _objc_msgSend_mediaReloadScheduled(param_1);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_setMediaReloadScheduled_(local_18,local_88,1);
    _objc_msgSend_account(local_18,local_88);
    local_28 = _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_30,local_18);
    uVar2 = _objc_msgSend_isFeedScrolling(local_18,local_88);
    local_38 = 0.16;
    if ((uVar2 & 1) == 0) {
      local_38 = 0.05;
    }
    dVar4 = _dispatch_time(0,(long)(local_38 * 1000000000.0));
    puVar1 = PTR___dispatch_main_q_00110528;
    _objc_retainAutoreleaseReturnValue();
    uVar5 = _objc_retainAutoreleasedReturnValue(puVar1);
    local_78 = PTR___NSConcreteStackBlock_001104f0;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = ___40__WCMFeedController_scheduleMediaReload__block_invoke;
    local_60 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;
    _objc_copyWeak();
    local_58 = (*(code *)PTR__objc_retain_00110460)(local_28);
    _dispatch_after(dVar4,uVar5,&local_78);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_storeStrong(&local_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

