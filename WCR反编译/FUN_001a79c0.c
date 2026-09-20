// FUN_001a79c0 @ 001a79c0

void FUN_001a79c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long *local_98;
  long local_68 [3];
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_34 = param_5;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  lVar1 = local_28;
  FUN_001b02e8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == local_28) {
    local_98 = &local_30;
  }
  else {
    local_98 = &local_50;
  }
  lVar2 = *local_98;
  local_50 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68[0] = lVar2;
  (*DAT_028c8a40)(local_18,local_20,local_50,lVar2,local_34,local_40,local_48);
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

