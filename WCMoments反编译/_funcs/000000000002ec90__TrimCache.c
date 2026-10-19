// _TrimCache @0x2ec90

void _TrimCache(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _dispatch_get_global_queue(0x11,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_20 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _dispatch_async(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

