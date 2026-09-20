// FUN_021c91ec @ 021c91ec

double FUN_021c91ec(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  undefined1 auStack_a0 [8];
  code *local_98;
  ulong local_90;
  code *local_88;
  ulong local_80;
  ulong local_78;
  code *local_70;
  double local_68;
  undefined8 local_60;
  long local_58;
  ulong local_50;
  undefined1 *local_48;
  undefined8 local_40;
  ulong local_38;
  double local_30;
  ulong local_28;
  
  local_58 = *(long *)(param_2 - 8);
  local_50 = *(long *)(local_58 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_60 = param_1;
  local_40 = param_3;
  local_38 = param_2;
  local_28 = param_2;
  (*(code *)PTR____chkstk_darwin_02578668)(param_3,param_1);
  local_48 = auStack_a0 + -local_50;
  (**(code **)(extraout_x8 + 0x10))(local_48);
  uVar1 = local_38;
  __sSz8bitWidthSivgTj(local_38,local_40);
  if ((long)uVar1 < 0x41) {
    uVar2 = local_38;
    __sSz8isSignedSbvgZTj(0x40 - uVar1,local_38,local_40);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_38;
      __sSz8_lowWordSuvgTj(local_38,local_40);
      local_88 = *(code **)(local_58 + 8);
      local_80 = uVar1;
      (*local_88)(local_60,local_38);
      (*local_88)(local_48,local_38);
      local_68 = (double)local_80;
    }
    else {
      uVar1 = local_38;
      __sSz8_lowWordSuvgTj(local_38,local_40);
      local_98 = *(code **)(local_58 + 8);
      local_90 = uVar1;
      (*local_98)(local_60,local_38);
      (*local_98)(local_48,local_38);
      local_68 = (double)(long)local_90;
    }
  }
  else {
    FUN_021cdd2c();
    local_78 = uVar1;
    FUN_021c8dc8();
    __sSBss17FixedWidthInteger14RawSignificandRpzrlE8_convert4fromx5value_Sb5exacttqd___tSzRd__lFZ
              (&local_30,local_48,PTR___sSdN_025789b8,local_38,local_78,local_40,uVar1);
    local_70 = *(code **)(local_58 + 8);
    (*local_70)(local_60,local_38);
    (*local_70)(local_48,local_38);
    local_68 = local_30;
  }
  return local_68;
}

