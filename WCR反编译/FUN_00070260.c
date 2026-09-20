// FUN_00070260 @ 00070260

void FUN_00070260(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [68];
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    if ((DAT_028c7e78 & 1) == 0) {
      FUN_0006e628();
    }
    FUN_000701ec(auStack_60);
    puVar2 = auStack_90;
    _memcpy(puVar2,auStack_60,0x30);
    FUN_0007017c();
    lVar1 = local_18;
    if (((ulong)puVar2 & 1) == 0) {
      local_1c = 1;
    }
    else {
      _memcpy(auStack_c0,auStack_60,0x30);
      FUN_00072ca4(lVar1,auStack_c0,1);
      local_1c = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

