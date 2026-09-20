// FUN_015890ac @ 015890ac

void FUN_015890ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_90;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  long *local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  FUN_0157e588();
  local_18 = &DAT_028e3a98;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586ae0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar2 = local_28;
  uVar1 = DAT_028e3930;
  local_38 = &local_30;
  local_30 = 0;
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_015898cc;
  local_48 = &DAT_02586b00;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  _dispatch_sync(uVar1,&local_60);
  if (local_30 == 0) {
    local_90 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_90 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_90);
  return;
}

