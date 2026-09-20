// FUN_01601904 @ 01601904

long FUN_01601904(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_015fafb8(local_20,local_28);
  if (((uVar1 & 1) == 0) &&
     ((uVar2 = local_28, FUN_016054b4(local_28,PTR_s_isFavour_0269ff28), (uVar2 & 1) != 0 ||
      (uVar2 = local_28, FUN_016054b4(local_28,PTR_s_isContactSessionTop_026b06b0), (uVar2 & 1) != 0
      )))) {
    local_18 = 2;
  }
  else {
    local_18 = (long)(int)(uint)((uVar1 & 1) != 0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

