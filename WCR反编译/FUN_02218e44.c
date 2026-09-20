// FUN_02218e44 @ 02218e44

void FUN_02218e44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = &DAT_028c7658;
  local_50 = param_2;
  local_38 = param_1;
  local_30 = param_1;
  local_28 = param_2;
  FUN_021c77d4(&DAT_028c7658,&DAT_0233be50);
  local_68 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_40 = auStack_70 + -local_68;
  lVar2 = 0;
  local_48 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(local_40,1);
  _swift_retain(local_50);
  uVar3 = local_48;
  __sScMMa();
  __sScM6sharedScMvgZ();
  local_60 = uVar3;
  FUN_0221a654();
  puVar1 = &DAT_0258ebf8;
  local_58 = uVar3;
  _swift_allocObject(&DAT_0258ebf8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = local_60;
  *(undefined8 *)(puVar1 + 0x18) = local_58;
  *(undefined8 *)(puVar1 + 0x20) = local_38;
  *(undefined8 *)(puVar1 + 0x28) = local_50;
  FUN_022182c0(local_48,local_48,local_40,&DAT_0233be60,puVar1,PTR___sytN_02578b10 + 8);
  _swift_release();
  return;
}

