// FUN_0113badc @ 0113badc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0113badc(byte param_1,byte param_2,uint param_3,ulong param_4,ulong param_5,long param_6,
                 ulong param_7)

{
  uint local_cc;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  uint local_78;
  uint local_74;
  byte local_70;
  byte local_6f;
  undefined1 local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  ulong local_48;
  uint local_40;
  byte local_3a;
  byte local_39;
  code *local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  ulong *local_20;
  ulong local_18;
  
  local_60 = param_7;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  local_3a = param_2;
  local_39 = param_1;
  _memset(&local_a8,0,0x48);
  local_68 = local_39 == 3;
  local_70 = local_39;
  local_6f = local_3a;
  local_74 = local_40;
  local_80 = local_48;
  local_98 = local_50;
  local_90 = local_58;
  local_88 = local_60;
  local_78 = _arc4random();
  _arc4random_buf(&local_a0,8);
  local_24 = local_40;
  if (&local_a8 == (ulong *)0x0) {
    local_18 = 0;
  }
  else {
    local_28 = local_40 & 0x1f;
    if (local_28 == 0) {
      local_cc = local_78;
    }
    else {
      local_cc = local_78 << (ulong)local_28 | local_78 >> (ulong)(0x20 - local_28 & 0x1f);
    }
    local_2c = local_cc;
    local_38 = FUN_009dea6c;
    local_18 = (ulong)local_cc ^ 0xc3a5f77e905041d1 ^ (ulong)local_40 << 1 ^ local_80 ^ local_98 ^
               local_90 << 7 ^ local_88 >> 0xb ^ (ulong)local_70 << 0x35 ^ (ulong)local_6f << 0x2d ^
               0x9dea6c;
  }
  local_a8 = local_a0 ^ local_18;
  local_20 = &local_a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithBytes_length__026a1aa8,&local_a8,0x48);
  return;
}

