// FUN_021c720c @ 021c720c

undefined1  [16] FUN_021c720c(long param_1)

{
  undefined1 auVar1 [16];
  long local_20;
  undefined *local_18;
  
  local_20 = DAT_028c6f30;
  local_18 = (undefined *)0x0;
  if (DAT_028c6f30 == 0) {
    local_18 = &DAT_0258da90;
    _swift_getForeignTypeMetadata();
    local_20 = param_1;
    if (local_18 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
      DAT_028c6f30 = param_1;
    }
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

