// FUN_002f78d4 @ 002f78d4

void FUN_002f78d4(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  uint local_38;
  ulong local_30;
  double local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  bVar1 = false;
  local_38 = 0;
  if ((DAT_02323db0 < param_1) && (local_38 = 0, (DAT_028c9ab9 & 1) == 0)) {
    uVar2 = local_18;
    FUN_002fca60();
    local_38 = 0;
    if ((uVar2 & 1) != 0) {
      local_30 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_026dfdc8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = (uint)uVar2;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  local_28 = param_1;
  if ((local_38 & 1) != 0) {
    local_28 = 0.0;
  }
  if (DAT_028c9a98 != (code *)0x0) {
    (*DAT_028c9a98)(local_28,local_18,param_3);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

