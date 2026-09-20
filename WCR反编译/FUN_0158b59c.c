// FUN_0158b59c @ 0158b59c

void FUN_0158b59c(long param_1)

{
  long local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = param_1;
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_0158ba88;
    local_40 = &DAT_025797b0;
    local_18 = &DAT_028e3ab0;
    local_20 = 0;
    local_38 = param_1;
    _objc_storeStrong(&local_20,&local_58);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    if (DAT_028e3aa8 == 0) {
      local_68 = local_30;
    }
    else {
      local_68 = DAT_028e3aa8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_68;
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

