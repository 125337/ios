// FUN_005182c4 @ 005182c4

void FUN_005182c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_58;
  bool local_39;
  undefined8 local_38;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_0051890c();
  if (((ulong)puVar1 & 1) == 0) {
    local_39 = DAT_028cb090 == (code *)0x0;
    if (local_39) {
      local_58 = 0;
    }
    else {
      local_58 = local_20;
      (*DAT_028cb090)(local_20,param_2);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_58;
    }
    local_39 = !local_39;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

