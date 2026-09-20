// FUN_015c6174 @ 015c6174

void FUN_015c6174(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  local_50 = PTR___NSConcreteGlobalBlock_02578658;
  local_48 = 0xd0800000;
  local_44 = 0;
  local_40 = FUN_015d2e40;
  local_38 = &DAT_0257a9d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  local_18 = &DAT_028e3b68;
  local_20 = 0;
  _objc_storeStrong(&local_20,&local_50);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

