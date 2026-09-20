// FUN_02214d94 @ 02214d94

undefined8 FUN_02214d94(void)

{
  long unaff_x20;
  undefined8 local_68 [3];
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
  FUN_021c77d4(&DAT_028c7598,&DAT_0233bdf0);
  __s7SwiftUI5StateV14projectedValueAA7BindingVyxGvg(local_68);
  FUN_02219c58(&local_30);
  return local_68[0];
}

