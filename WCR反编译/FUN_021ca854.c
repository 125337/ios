// FUN_021ca854 @ 021ca854

uint FUN_021ca854(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined8 unaff_x20;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  code *local_70;
  
  local_a0 = *(undefined8 *)(param_4 + 8);
  lVar2 = 0;
  local_98 = param_5;
  _swift_getAssociatedTypeWitness();
  local_90 = *(long *)(lVar2 + -8);
  local_b8 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar3 = param_2;
  local_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)(param_2,param_3);
  uVar1 = (uint)uVar3;
  lVar2 = -local_b8;
  local_b0 = extraout_x8 + 0xfU & 0xfffffffffffffff0;
  local_88 = auStack_c0 + lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = (long)(auStack_c0 + lVar2) - local_b0;
  local_a8 = extraout_x8_00 + 0xfU & 0xfffffffffffffff0;
  local_80 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = lVar2 - local_a8;
  __ss10SetAlgebraP8containsySb7ElementQzFTj();
  __sSY8rawValue03RawB0QzvgTj(local_80,param_3,local_a0);
  lVar4 = *(long *)(param_3 + -8);
  (**(code **)(lVar4 + 8))(unaff_x20);
  __sSY8rawValue03RawB0QzvgTj(local_88,param_3,local_a0);
  __sSz1ooiyxx_xtFZTj(lVar2,local_80,local_88,local_78,*(undefined8 *)(local_98 + 8));
  local_70 = *(code **)(local_90 + 8);
  (*local_70)(local_88,local_78);
  (*local_70)(local_80,local_78);
  __ss9OptionSetP8rawValuex03RawD0Qz_tcfCTj(unaff_x20,lVar2,param_3,param_4);
  (**(code **)(lVar4 + 0x10))(param_1,param_2,param_3);
  return (uVar1 ^ 1) & 1;
}

