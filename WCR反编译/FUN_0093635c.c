// FUN_0093635c @ 0093635c

ulong FUN_0093635c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  ppuVar1 = &local_38;
  local_38 = (undefined8 *)0x0;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_009363d4(ppuVar1,param_3,param_4);
  FUN_009364ac(local_38,local_18,local_20);
  if (local_38 != (undefined8 *)0x0) {
    _free(*local_38);
  }
  _free(local_38);
  return (ulong)ppuVar1 & 0xffffffff;
}

