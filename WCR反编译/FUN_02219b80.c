// FUN_02219b80 @ 02219b80

undefined1  [16] FUN_02219b80(long param_1)

{
  undefined1 auVar1 [16];
  long local_20;
  TargetClassDescriptor *local_18;
  
  local_20 = DAT_028e6508;
  local_18 = (TargetClassDescriptor *)0x0;
  if (DAT_028e6508 == 0) {
    local_18 = &TargetClassDescriptor_024ef718;
    _swift_getSingletonMetadata();
    local_20 = param_1;
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

