// storeHeaderImage:account: @0x50a98

/* Function Stack Size: 0x20 bytes */

void WCMFeedController::storeHeaderImage_account_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) || (lVar1 = _objc_msgSend_length(local_30,local_88), lVar1 == 0)) {
    local_34 = 1;
  }
  else {
    _objc_initWeak(auStack_40,local_18);
    _dispatch_get_global_queue(0x19,0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_001104f0;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = ___46__WCMFeedController_storeHeaderImage_account___block_invoke;
    local_60 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
    local_58 = (*(code *)PTR__objc_retain_00110460)(local_28);
    _objc_copyWeak(auStack_48,auStack_40);
    local_50 = (*(code *)PTR__objc_retain_00110460)(local_30);
    _dispatch_async(uVar2,&local_78);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(&local_50);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_58,0);
    _objc_destroyWeak(auStack_40);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

