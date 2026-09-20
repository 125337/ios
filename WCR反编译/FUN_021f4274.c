// FUN_021f4274 @ 021f4274

void FUN_021f4274(long param_1,code *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  code *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = param_1 + 0x10;
  local_38 = param_2;
  local_30 = param_3;
  _swift_beginAccess(local_28,auStack_50,0x20,0);
  bVar1 = *(byte *)(param_1 + 0x10);
  _swift_endAccess(auStack_50);
  if ((bVar1 & 1) == 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_68,0x21,0);
    *(undefined1 *)(param_1 + 0x10) = 1;
    _swift_endAccess(auStack_68);
    FUN_0219fb8c(param_2,param_3);
    if (param_2 != (code *)0x0) {
      (*param_2)();
      _swift_release(param_3);
    }
  }
  return;
}

