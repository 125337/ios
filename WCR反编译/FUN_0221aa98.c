// FUN_0221aa98 @ 0221aa98

undefined1  [16] FUN_0221aa98(long param_1)

{
  undefined1 auVar1 [16];
  long local_20;
  undefined *local_18;
  
  local_20 = DAT_028c76a0;
  local_18 = (undefined *)0x0;
  if (DAT_028c76a0 == 0) {
    local_18 = &DAT_028c7540;
    FUN_021c7aac(&DAT_028c7540,&DAT_0233bd48);
    __s7Combine9PublishedVMa();
    local_20 = param_1;
    if (local_18 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
      DAT_028c76a0 = param_1;
    }
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

