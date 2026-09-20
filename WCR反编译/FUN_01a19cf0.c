// FUN_01a19cf0 @ 01a19cf0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char FUN_01a19cf0(undefined8 param_1,byte param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint local_134;
  long local_e0;
  uint local_d8;
  byte local_d1;
  undefined8 local_d0;
  char local_c5;
  undefined4 local_c4;
  ulong local_c0 [6];
  uint local_8c;
  char local_88;
  uint local_80;
  byte local_79;
  ulong local_78;
  char local_69;
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
  
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_e0 = 0;
  local_d8 = param_3;
  local_d1 = param_2;
  _objc_storeStrong(&local_e0,param_4);
  bVar2 = local_d1;
  uVar1 = local_d8;
  local_78 = 0;
  _objc_storeStrong(&local_78,local_d0);
  local_79 = bVar2 & 1;
  local_80 = uVar1;
  _memset(local_c0,0,0x40);
  uVar4 = local_78;
  FUN_01139098(local_78,local_79 & 1,local_80,local_c0);
  if ((uVar4 & 1) != 0) {
    local_58 = local_c0;
    local_5c = local_80;
    if (((local_58 == (ulong *)0x0) || (local_88 == '\0')) || (local_8c != local_80)) {
      local_49 = false;
    }
    else {
      FUN_00a59890(0);
      local_68 = uVar4;
      if (((local_58[5] == uVar4) && (uVar6 = local_58[2], FUN_00a4ec00(), uVar6 == uVar4)) &&
         (uVar6 = local_58[3], FUN_01138c10(), uVar6 == uVar4)) {
        if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
          local_49 = false;
        }
        else if ((local_58[4] == 0) ||
                ((local_58[4] + 1 == 0 ||
                 (_mach_continuous_time(local_58[4] + 1), uVar4 < local_58[4])))) {
          local_30 = local_58;
          local_34 = local_5c;
          if (local_58 == (ulong *)0x0) {
            local_28 = 0;
          }
          else {
            local_38 = local_5c & 0x1f;
            if (local_38 == 0) {
              local_134 = (uint)local_58[6];
            }
            else {
              local_134 = (int)local_58[6] << (ulong)local_38 |
                          (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
            }
            local_3c = local_134;
            local_48 = FUN_009dea6c;
            local_28 = (ulong)local_134 ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
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
    if (local_49 != false) {
      if ((local_88 == '\x03') || (local_88 == '\x02')) {
        local_69 = local_88;
      }
      else {
        local_69 = '\x01';
      }
      goto LAB_01a1a0b8;
    }
  }
  local_69 = '\x01';
LAB_01a1a0b8:
  local_c4 = 1;
  _objc_storeStrong(&local_78,0);
  cVar3 = local_69;
  if (local_69 != '\x03') {
    if (local_69 == '\x02') {
      if (local_e0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setOn__0269dc80,0);
      }
      FUN_01a76024();
    }
    else if (local_e0 != 0) {
      lVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isOn_0269d560);
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setOn__0269dc80,(uint)lVar5 ^ 1);
    }
  }
  local_c5 = cVar3;
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d0,0);
  return local_c5;
}

