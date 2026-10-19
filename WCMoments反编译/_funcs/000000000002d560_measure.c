// measure @0x2d560

/* Function Stack Size: 0x10 bytes */

void WCMCacheController::measure(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_root(param_1);
  local_28 = _objc_retainAutoreleasedReturnValue();
  _dispatch_get_global_queue(0x11,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_38 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_30 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _dispatch_async(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

