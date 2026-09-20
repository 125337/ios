// FUN_022163b8 @ 022163b8

void FUN_022163b8(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  double local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_58;
  undefined1 auStack_50 [16];
  long local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = param_2;
  local_38 = param_1;
  FUN_02214ae8();
  uVar1 = param_1;
  FUN_0220ff58();
  _swift_release(param_1);
  if ((uVar1 & 1) != 0) {
    uStack_28 = *(undefined8 *)(param_2 + 0x18);
    local_30 = *(undefined8 *)(param_2 + 0x10);
    FUN_02219c1c(&local_30,auStack_50);
    uStack_68 = uStack_28;
    local_70 = local_30;
    puVar2 = &DAT_028c7598;
    FUN_021c77d4(&DAT_028c7598,&DAT_0233bdf0);
    __s7SwiftUI5StateV12wrappedValuexvg(&local_58);
    local_88 = local_58 + DAT_02323d40;
    uStack_78 = uStack_28;
    local_80 = local_30;
    local_58 = local_88;
    __s7SwiftUI5StateV12wrappedValuexvs(&local_88,puVar2);
    FUN_02219c58(&local_80);
  }
  return;
}

