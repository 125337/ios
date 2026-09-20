// FUN_022103a8 @ 022103a8

void FUN_022103a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_2;
  _swift_bridgeObjectRetain();
  puVar1 = &DAT_028c7540;
  local_20 = param_2;
  FUN_021c77d4(&DAT_028c7540,&DAT_0233bd48);
  FUN_022194d8(param_1,&local_20,puVar1);
  _swift_bridgeObjectRelease(param_2);
  return;
}

