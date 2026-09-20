// FUN_0033bcc8 @ 0033bcc8

uint FUN_0033bcc8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint local_78;
  uint local_70;
  undefined8 local_20;
  uint local_14;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (DAT_028c9f10 == (code *)0x0) {
    local_70 = 0;
  }
  else {
    uVar3 = local_20;
    (*DAT_028c9f10)(local_20,param_2,param_3);
    uVar1 = (uint)uVar3;
    local_70 = uVar1;
  }
  FUN_0033a150();
  if ((uVar1 & 1) == 0) {
    local_14 = local_70;
  }
  else {
    if (local_70 < 100000) {
      local_78 = 100000;
    }
    else {
      local_78 = local_70;
    }
    local_14 = local_78;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

