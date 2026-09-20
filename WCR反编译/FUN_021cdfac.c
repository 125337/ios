// FUN_021cdfac @ 021cdfac

undefined1  [16] FUN_021cdfac(long param_1)

{
  undefined1 auVar1 [16];
  long local_20;
  undefined *local_18;
  
  local_20 = DAT_028c7030;
  local_18 = (undefined *)0x0;
  if (DAT_028c7030 == 0) {
    local_18 = &DAT_0258db28;
    _swift_getForeignTypeMetadata();
    local_20 = param_1;
    if (local_18 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
      DAT_028c7030 = param_1;
    }
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

