// FUN_00771264 @ 00771264

byte FUN_00771264(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 local_28;
  double local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28,param_2);
  local_11 = 250.0 < local_20;
  if ((bool)local_11) {
    bVar1 = 889.0 < local_20;
    FUN_00771c78(local_20,local_28);
    FUN_0076bfd0();
    FUN_007721b0(bVar1);
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

