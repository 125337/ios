// ___InstallMessageStyleHooks_block_invoke_2 @0x62414

void ___InstallMessageStyleHooks_block_invoke_2
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = param_1;
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),local_28,local_30);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_getAssociatedObject(local_20,&_MessageStyleKey);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _StyleMessageCell(local_40);
  }
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

