// FUN_010a1f64 @ 010a1f64

undefined8 FUN_010a1f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_28;
  FUN_010a2044();
  lVar2 = local_30;
  FUN_010a2044();
  if (lVar1 < lVar2) {
    local_18 = 1;
  }
  else if (lVar2 < lVar1) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

