// ___Install_block_invoke_2.3042 @0x61434

void ___Install_block_invoke_2_3042
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = param_1;
  _VideoMediaForArgs(local_28);
  local_40 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x28))(local_20,*(undefined8 *)(param_1 + 0x30),local_28,local_30);
  _TraceVideo(*(undefined8 *)(param_1 + 0x20),local_40,PTR____NSDictionary0__struct_00110720);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

