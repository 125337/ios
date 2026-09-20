// FUN_022193cc @ 022193cc

undefined8 FUN_022193cc(undefined8 param_1,undefined8 param_2)

{
  void *aBlock;
  undefined8 unaff_x20;
  undefined8 local_60;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = PTR___NSConcreteStackBlock_02578660;
  local_38 = 0x42000000;
  local_34 = 0;
  local_30 = FUN_0221945c;
  local_28 = &DAT_0258f040;
  local_20 = param_1;
  local_18 = param_2;
  aBlock = __Block_copy(&local_40);
  FUN_022226a0(unaff_x20,local_60);
  __Block_release(aBlock);
  _swift_release(local_18);
  return unaff_x20;
}

