// FUN_003b4ff8 @ 003b4ff8

void FUN_003b4ff8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_78;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_78 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_78 = local_20;
  }
  local_28 = param_2;
  _objc_storeStrong(&local_20,local_78);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  uVar2 = local_20;
  if (uVar1 < 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  else {
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_003b5ce4;
    local_40 = &DAT_0257cb08;
    local_38 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_sortedArrayUsingComparator__0269fae8,&local_58);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  local_2c = 1;
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

