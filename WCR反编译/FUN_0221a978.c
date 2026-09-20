// FUN_0221a978 @ 0221a978

undefined1  [16] FUN_0221a978(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = DAT_028c7690;
  local_18 = (undefined *)0x0;
  if (DAT_028c7690 == 0) {
    local_18 = PTR___s7SwiftUI10EdgeInsetsVN_02578758;
    __s7Combine9PublishedVMa();
    local_20 = param_1;
    if (local_18 == (undefined *)0x0) {
      local_18 = (undefined *)0x0;
      DAT_028c7690 = param_1;
    }
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

