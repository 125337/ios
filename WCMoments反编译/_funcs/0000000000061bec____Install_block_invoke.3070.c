// ___Install_block_invoke.3070 @0x61bec

void ___Install_block_invoke_3070(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = param_1;
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_30 = (*(code *)PTR__objc_retain_00110460)(local_20);
  _dispatch_async(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

