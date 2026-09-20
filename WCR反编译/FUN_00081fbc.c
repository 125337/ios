// FUN_00081fbc @ 00081fbc

void FUN_00081fbc(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,byte param_5
                 )

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [64];
  undefined4 local_48;
  byte local_41;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_41 = param_5;
  local_40 = param_4;
  local_31 = param_3;
  if (local_28 == 0) {
    local_48 = 1;
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_0007814c(auStack_88,local_30);
      puVar2 = auStack_b8;
      _memcpy(puVar2,auStack_88,0x30);
      FUN_0007017c();
      lVar1 = local_28;
      if (((ulong)puVar2 & 1) == 0) {
        FUN_0006faf4(local_28);
      }
      else {
        _memcpy(auStack_e8,auStack_88,0x30);
        FUN_00072ca4(lVar1,auStack_e8,local_41 & 1);
      }
    }
    else {
      FUN_00082144(local_28,param_4,param_5 & 1);
    }
    local_48 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

