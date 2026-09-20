// FUN_008379c0 @ 008379c0

void FUN_008379c0(undefined8 param_1)

{
  undefined8 uVar1;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar2;
  dispatch_queue_attr_t local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  attr = (dispatch_queue_attr_t)0x0;
  local_20 = param_1;
  local_18 = param_1;
  _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = attr;
  pdVar2 = _dispatch_queue_create("com.wcrefine.page-background.decode",attr);
  uVar1 = DAT_028cd220;
  DAT_028cd220 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

