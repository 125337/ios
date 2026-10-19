// _TraceVideo @0x1e0c0

void _TraceVideo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 local_68;
  undefined8 local_40;
  uint local_34;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  _VideoNumber(local_20,0);
  local_30 = _objc_retainAutoreleasedReturnValue();
  bVar1 = local_30 != 0;
  if (bVar1) {
    local_40 = _objc_msgSend_mutableCopy(local_28,local_68);
    _objc_msgSend_setObject_forKeyedSubscript_(local_40,local_68,local_30,&cf_video);
    _Trace(local_18,local_40);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

