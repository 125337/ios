// FUN_0066d09c @ 0066d09c

void FUN_0066d09c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined8 local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  uint local_194;
  ulong local_190;
  ulong local_188;
  uint local_17c;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  undefined1 *local_158;
  ulong local_150;
  ulong local_148;
  uint local_140;
  uint local_13c;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  uint local_10c;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  uint local_dc;
  uint local_d8;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  byte local_7b;
  byte local_7a;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  local_98 = param_1;
  local_90 = param_2;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,local_90);
  local_88 = local_30;
  local_51 = 0;
  bVar1 = local_30 == 0;
  if (bVar1) {
    uVar2 = local_28;
    FUN_0066e298();
    local_a8 = uVar2;
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar2;
    local_50 = uVar2;
  }
  else {
    local_a0 = local_30;
  }
  local_b0 = local_a0;
  local_51 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_b0;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar2 = local_38;
  FUN_00662d08();
  local_b8 = uVar2;
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  FUN_00663124(uVar2,local_38);
  local_c0 = uVar2;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_68 = uVar2;
  FUN_00655d64(local_28,"m_messageLabel");
  local_c8 = uVar3;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_70 = uVar3;
  FUN_00655d64(local_28,"m_greenLabel");
  local_d0 = uVar2;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_78 = uVar2;
  FUN_00662c28();
  local_d4 = (undefined4)uVar3;
  local_79 = (byte)uVar3;
  uVar2 = local_38;
  FUN_00662c98();
  local_d8 = (uint)uVar2;
  local_7a = (byte)uVar2;
  local_dc = 1;
  if ((local_79 & 1) == 0) {
    local_dc = local_d8 & 0xff;
  }
  local_7b = (byte)local_dc & 1;
  local_f0 = local_28;
  uVar2 = local_38;
  FUN_0066db9c();
  local_e8 = uVar2;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_60;
  local_100 = uVar2;
  FUN_0066db9c();
  local_f8 = uVar3;
  _objc_retainAutoreleasedReturnValue();
  local_118 = local_68;
  local_10c = (uint)local_7b;
  uVar2 = local_68;
  local_120 = uVar3;
  FUN_0065ebf0();
  uVar3 = local_78;
  local_108 = uVar2;
  FUN_0066e498();
  local_128 = uVar3;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_70;
  local_138 = uVar3;
  FUN_0066e498();
  local_130 = uVar2;
  _objc_retainAutoreleasedReturnValue();
  local_200 = local_f0;
  local_1f8 = local_100;
  local_1f0 = local_120;
  local_1e8 = local_118;
  local_1e0 = (ulong)local_10c & 1;
  local_1d8 = local_108;
  local_1d0 = local_138;
  local_1c8 = uVar2;
  local_158 = (undefined1 *)&local_200;
  local_150 = uVar2;
  FUN_00657450(&cf_M);
  (*(code *)PTR__objc_release_02578630)(local_150);
  (*(code *)PTR__objc_release_02578630)(local_138);
  (*(code *)PTR__objc_release_02578630)(local_120);
  (*(code *)PTR__objc_release_02578630)(local_100);
  FUN_0066ce54(&cf_A,local_28,local_38);
  local_148 = local_70;
  local_140 = (uint)local_79;
  local_13c = (uint)local_7a;
  if ((local_79 & 1) == 0) {
    local_168 = 0;
  }
  else {
    uVar2 = local_38;
    FUN_0066f1b8();
    local_168 = uVar2;
    local_160 = uVar2;
  }
  FUN_0066e658(local_148,local_140 & 1,local_13c & 1,local_168);
  FUN_0066f3fc(local_28,local_7b & 1);
  uVar3 = local_28;
  FUN_00655d64(local_28,"m_greenLabel");
  local_170 = uVar3;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_78;
  local_78 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_17c = (uint)local_7b;
  uVar2 = local_78;
  FUN_0066e498();
  local_178 = uVar2;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_70;
  local_190 = uVar2;
  FUN_0066e498();
  local_188 = uVar3;
  _objc_retainAutoreleasedReturnValue();
  local_200 = (ulong)local_17c & 1;
  local_1f8 = local_190;
  local_1f0 = uVar3;
  local_1a8 = uVar3;
  FUN_00657450(&cf_M);
  (*(code *)PTR__objc_release_02578630)(local_1a8);
  (*(code *)PTR__objc_release_02578630)(local_190);
  FUN_0066ce54(&cf_A,local_28,local_38);
  local_1a0 = local_38;
  local_194 = (uint)local_7b;
  if (local_78 == 0) {
    local_1b0 = local_70;
  }
  else {
    local_1b0 = local_78;
  }
  FUN_006702ac(&cf_MainFrameItemView,local_38,local_194 & 1,local_1b0);
  local_1b8 = 0;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,local_1b8);
  _objc_storeStrong(&local_68,local_1b8);
  _objc_storeStrong(&local_60,local_1b8);
  _objc_storeStrong(&local_38,local_1b8);
  _objc_storeStrong(&local_30,local_1b8);
  _objc_storeStrong(&local_28,local_1b8);
  return;
}

