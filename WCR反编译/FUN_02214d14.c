// FUN_02214d14 @ 02214d14

void FUN_02214d14(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x18);
  local_30 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_02219c1c(&local_30,auStack_40);
  uStack_48 = uStack_28;
  local_50 = local_30;
  puVar1 = &DAT_028c7598;
  local_58 = param_1;
  FUN_021c77d4(&DAT_028c7598,&DAT_0233bdf0);
  __s7SwiftUI5StateV12wrappedValuexvs(&local_58,puVar1);
  FUN_02219c58(&local_50);
  return;
}

