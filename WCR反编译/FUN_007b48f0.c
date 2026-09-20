// FUN_007b48f0 @ 007b48f0

void FUN_007b48f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_20 = (undefined8 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (undefined8 *)0x0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    puVar1 = local_20;
    _object_getClass();
    _class_getInstanceVariable(puVar1,param_2);
    if (puVar1 == (undefined8 *)0x0) {
      local_18 = 0;
    }
    else {
      puVar1 = local_20;
      FUN_007b4a10(local_20,param_2);
      uVar2 = *puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

