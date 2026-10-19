// ___InstallMessageStyleHooks_block_invoke_3 @0x62530

void ___InstallMessageStyleHooks_block_invoke_3
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_44;
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
  local_38 = param_1;
  local_30 = param_4;
  (**(code **)(param_1 + 0x20))(local_20,*(undefined8 *)(param_1 + 0x28),local_28,param_4);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_getAssociatedObject(local_20,&_MessageStyleKey);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  local_44 = 0;
  if (lVar1 != 0) {
    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);
    local_44 = _objc_opt_isKindOfClass(uVar3,uVar2);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_44 & 1) != 0) {
    _StyleMessageSectionHeader(local_40);
  }
  uVar3 = (*(code *)PTR__objc_retain_00110460)(local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

