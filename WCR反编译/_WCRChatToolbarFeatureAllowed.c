// _WCRChatToolbarFeatureAllowed @ 00eedb84

bool _WCRChatToolbarFeatureAllowed(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_fc;
  ulong local_c8 [6];
  uint local_94;
  char local_90;
  uint local_88;
  byte local_81;
  ulong local_80;
  uint local_74;
  ulong *local_70;
  ulong local_68;
  uint local_5c;
  ulong *local_58;
  bool local_49;
  code *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulong *local_30;
  ulong local_28;
  
  local_80 = 0;
  _objc_storeStrong(&local_80,&cf_chat_toolbar);
  local_81 = 0;
  local_88 = 0xa41c6e90;
  _memset(local_c8,0,0x40);
  uVar2 = local_80;
  FUN_01139098(local_80,local_81 & 1,local_88,local_c8);
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    local_70 = local_c8;
    local_74 = local_88;
    local_5c = local_88;
    local_58 = local_70;
    if (((local_70 == (ulong *)0x0) || (local_90 == '\0')) || (local_94 != local_88)) {
      local_49 = false;
    }
    else {
      FUN_00a59890(0);
      local_68 = uVar2;
      if (((local_58[5] == uVar2) && (uVar3 = local_58[2], FUN_00a4ec00(), uVar3 == uVar2)) &&
         (uVar3 = local_58[3], FUN_01138c10(), uVar3 == uVar2)) {
        if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
          local_49 = false;
        }
        else if ((local_58[4] == 0) ||
                ((local_58[4] + 1 == 0 ||
                 (_mach_continuous_time(local_58[4] + 1), uVar2 < local_58[4])))) {
          local_30 = local_58;
          local_34 = local_5c;
          if (local_58 == (ulong *)0x0) {
            local_28 = 0;
          }
          else {
            local_38 = local_5c & 0x1f;
            if (local_38 == 0) {
              local_fc = (uint)local_58[6];
            }
            else {
              local_fc = (int)local_58[6] << (ulong)local_38 |
                         (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
            }
            local_3c = local_fc;
            local_48 = FUN_009dea6c;
            local_28 = (ulong)local_fc ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
                       local_58[2] ^ local_58[3] << 7 ^ local_58[4] >> 0xb ^
                       (ulong)(byte)local_58[7] << 0x35 ^
                       (ulong)*(byte *)((long)local_58 + 0x39) << 0x2d ^ 0x9dea6c;
          }
          local_49 = (*local_58 ^ local_58[1]) == local_28;
        }
        else {
          local_49 = false;
        }
      }
      else {
        local_49 = false;
      }
    }
    bVar1 = false;
    if (local_49 != false) {
      bVar1 = (char)local_70[7] == '\x03';
    }
  }
  _objc_storeStrong(&local_80,0);
  return bVar1;
}

