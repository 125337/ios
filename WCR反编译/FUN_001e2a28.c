// FUN_001e2a28 @ 001e2a28

ulong FUN_001e2a28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  ulong local_108;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  FUN_001e25f4(local_30,*(undefined8 *)(param_5 + 0x20));
  _CGRectGetMinX();
  dVar1 = param_1;
  FUN_001e25f4(local_38,*(undefined8 *)(param_5 + 0x20));
  _CGRectGetMinX(dVar1,param_2,param_3,param_4);
  if (dVar1 <= param_1) {
    local_108 = (ulong)(dVar1 < param_1);
  }
  else {
    local_108 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_108;
}

