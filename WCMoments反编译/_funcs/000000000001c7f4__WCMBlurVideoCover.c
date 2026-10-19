// _WCMBlurVideoCover @0x1c7f4

void _WCMBlurVideoCover(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_28 == 0) {
    (**(code **)(local_30 + 0x10))(local_30,0);
    local_34 = 1;
  }
  else {
    local_18 = &_WCMBlurVideoCover_once;
    local_20 = 0;
    _objc_storeStrong(&local_20,&___block_literal_global_2955);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    _objc_msgSend_objectForKey_(_WCMBlurVideoCover_cache,local_88,local_28);
    local_40 = _objc_retainAutoreleasedReturnValue();
    bVar1 = local_40 == 0;
    if (bVar1) {
      _dispatch_get_global_queue(0x19,0);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      local_70 = PTR___NSConcreteStackBlock_001104f0;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = ___WCMBlurVideoCover_block_invoke_2;
      local_58 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
      local_50 = (*(code *)PTR__objc_retain_00110460)(local_28);
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_30);
      _dispatch_async(uVar2,&local_70);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
    }
    else {
      (**(code **)(local_30 + 0x10))(local_30,local_40);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

