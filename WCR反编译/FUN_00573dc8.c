// FUN_00573dc8 @ 00573dc8

void FUN_00573dc8(undefined8 param_1,undefined8 param_2,uint param_3,code *param_4)

{
  byte bVar1;
  byte local_38;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  bVar1 = (byte)puVar2;
  local_38 = 0;
  if ((param_3 & 1) != 0) {
    FUN_00573bb4();
    local_38 = bVar1 ^ 1;
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(local_18,param_2,local_38 & 1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

