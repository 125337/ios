// ___Install_block_invoke_2.3055 @0x617d0

void ___Install_block_invoke_2_3055
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = param_1;
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),local_28,local_30,local_38)
  ;
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_48 = (*(code *)PTR__objc_retain_00110460)(local_20);
  _dispatch_async(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

