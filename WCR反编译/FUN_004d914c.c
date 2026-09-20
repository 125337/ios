// FUN_004d914c @ 004d914c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_004d914c(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint local_2cc;
  uint local_25c;
  undefined *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  code *local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  uint local_1d8;
  byte local_1d4;
  byte local_1cd;
  byte local_1bd [5];
  uint local_1b8;
  byte local_1b1;
  undefined8 local_1b0;
  undefined *local_1a8;
  byte local_19a;
  bool local_199;
  ulong local_198 [6];
  uint local_164;
  char local_160;
  byte *local_158;
  uint local_14c;
  undefined *local_148;
  byte local_13d;
  byte local_129;
  ulong local_128 [6];
  uint local_f4;
  char local_f0;
  undefined4 local_e4;
  uint local_e0;
  byte local_d9;
  undefined8 local_d8;
  undefined *local_d0;
  bool local_c1;
  undefined *local_c0;
  uint local_b4;
  ulong *local_b0;
  bool local_a1;
  code *local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  ulong *local_88;
  ulong local_80;
  uint local_74;
  ulong *local_70;
  undefined *local_68;
  uint local_5c;
  ulong *local_58;
  bool local_49;
  code *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulong *local_30;
  ulong local_28;
  
  local_1a8 = &DAT_028cad28;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,&cf_message_block);
  local_1b1 = 0;
  local_1b8 = 0xc91a47b2;
  if (local_1a8 == (undefined *)0x0) {
    local_19a = 0;
    local_1bd[1] = 1;
    local_1bd[2] = 0;
    local_1bd[3] = 0;
    local_1bd[4] = 0;
  }
  else {
    local_158 = local_1bd;
    local_148 = local_1a8;
    local_14c = 0xc91a47b2;
    local_1bd[0] = 0;
    if (local_1a8 == (undefined *)0x0) {
      local_13d = 0;
    }
    else {
      _os_unfair_lock_lock(local_1a8);
      _memcpy(local_198,local_148 + 8,0x40);
      puVar3 = local_148;
      _os_unfair_lock_unlock();
      local_b4 = local_14c;
      local_b0 = local_198;
      if (((local_198 == (ulong *)0x0) || (local_160 == '\0')) || (local_164 != local_14c)) {
        local_a1 = false;
      }
      else {
        FUN_00a59890(0);
        local_c0 = puVar3;
        if ((((undefined *)local_b0[5] == puVar3) &&
            (puVar5 = (undefined *)local_b0[2], FUN_00a4ec00(), puVar5 == puVar3)) &&
           (puVar5 = (undefined *)local_b0[3], FUN_01138c10(), puVar5 == puVar3)) {
          if (((char)local_b0[7] == '\x03') && (local_b0[5] == 0)) {
            local_a1 = false;
          }
          else if ((local_b0[4] == 0) ||
                  ((local_b0[4] + 1 == 0 ||
                   (_mach_continuous_time(local_b0[4] + 1), puVar3 < (undefined *)local_b0[4])))) {
            local_88 = local_b0;
            local_8c = local_b4;
            if (local_b0 == (ulong *)0x0) {
              local_80 = 0;
            }
            else {
              local_90 = local_b4 & 0x1f;
              if (local_90 == 0) {
                local_25c = (uint)local_b0[6];
              }
              else {
                local_25c = (int)local_b0[6] << (ulong)local_90 |
                            (uint)local_b0[6] >> (ulong)(0x20 - local_90 & 0x1f);
              }
              local_94 = local_25c;
              local_a0 = FUN_009dea6c;
              local_80 = (ulong)local_25c ^ 0xc3a5f77e905041d1 ^ (ulong)local_b4 << 1 ^ local_b0[5]
                         ^ local_b0[2] ^ local_b0[3] << 7 ^ local_b0[4] >> 0xb ^
                         (ulong)(byte)local_b0[7] << 0x35 ^
                         (ulong)*(byte *)((long)local_b0 + 0x39) << 0x2d ^ 0x9dea6c;
            }
            local_a1 = (*local_b0 ^ local_b0[1]) == local_80;
          }
          else {
            local_a1 = false;
          }
        }
        else {
          local_a1 = false;
        }
      }
      local_199 = local_a1;
      if ((local_a1 != false) && (local_158 != (byte *)0x0)) {
        *local_158 = local_160 == '\x03';
      }
      local_13d = local_199 & 1;
    }
    if (local_13d == 0) {
      puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      bVar2 = local_1b1;
      uVar1 = local_1b8;
      if (((ulong)puVar3 & 1) == 0) {
        local_1cd = 0;
        _os_unfair_lock_lock(local_1a8);
        if (local_1a8[0x48] == '\0') {
          local_1a8[0x48] = 1;
          local_1cd = 1;
        }
        _os_unfair_lock_unlock(local_1a8);
        puVar3 = PTR___dispatch_main_q_02578680;
        if ((local_1cd & 1) == 0) {
          local_19a = 0;
          local_1bd[1] = 1;
          local_1bd[2] = 0;
          local_1bd[3] = 0;
          local_1bd[4] = 0;
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_1b0;
          local_208 = PTR___NSConcreteStackBlock_02578660;
          local_200 = 0xc2000000;
          local_1fc = 0;
          local_1f8 = FUN_004d9bf0;
          local_1f0 = &DAT_0257cfb8;
          local_1e0 = local_1a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e8 = uVar4;
          local_1d4 = local_1b1 & 1;
          local_1d8 = local_1b8;
          _dispatch_async(puVar3,&local_208);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_19a = 0;
          local_1bd[1] = 1;
          local_1bd[2] = 0;
          local_1bd[3] = 0;
          local_1bd[4] = 0;
          _objc_storeStrong(&local_1e8,0);
        }
      }
      else {
        local_d0 = local_1a8;
        local_d8 = 0;
        _objc_storeStrong(&local_d8,local_1b0);
        local_d9 = bVar2 & 1;
        local_e0 = uVar1;
        if (local_d0 == (undefined *)0x0) {
          local_c1 = false;
        }
        else {
          _memset(local_128,0,0x40);
          uVar4 = local_d8;
          FUN_01139098(local_d8,local_d9 & 1,local_e0,local_128);
          local_129 = (byte)uVar4;
          _os_unfair_lock_lock(local_d0);
          local_d0[0x48] = 0;
          if ((local_129 & 1) == 0) {
            _memset(local_d0 + 8,0,0x40);
          }
          else {
            _memcpy(local_d0 + 8,local_128,0x40);
          }
          puVar3 = local_d0;
          _os_unfair_lock_unlock();
          local_c1 = false;
          if ((local_129 & 1) != 0) {
            local_70 = local_128;
            local_74 = local_e0;
            local_5c = local_e0;
            local_58 = local_70;
            if (((local_70 == (ulong *)0x0) || (local_f0 == '\0')) || (local_f4 != local_e0)) {
              local_49 = false;
            }
            else {
              FUN_00a59890(0);
              local_68 = puVar3;
              if ((((undefined *)local_58[5] == puVar3) &&
                  (puVar5 = (undefined *)local_58[2], FUN_00a4ec00(), puVar5 == puVar3)) &&
                 (puVar5 = (undefined *)local_58[3], FUN_01138c10(), puVar5 == puVar3)) {
                if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
                  local_49 = false;
                }
                else if ((local_58[4] == 0) ||
                        ((local_58[4] + 1 == 0 ||
                         (_mach_continuous_time(local_58[4] + 1), puVar3 < (undefined *)local_58[4])
                         ))) {
                  local_30 = local_58;
                  local_34 = local_5c;
                  if (local_58 == (ulong *)0x0) {
                    local_28 = 0;
                  }
                  else {
                    local_38 = local_5c & 0x1f;
                    if (local_38 == 0) {
                      local_2cc = (uint)local_58[6];
                    }
                    else {
                      local_2cc = (int)local_58[6] << (ulong)local_38 |
                                  (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
                    }
                    local_3c = local_2cc;
                    local_48 = FUN_009dea6c;
                    local_28 = (ulong)local_2cc ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^
                               local_58[5] ^ local_58[2] ^ local_58[3] << 7 ^ local_58[4] >> 0xb ^
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
            local_c1 = false;
            if (local_49 != false) {
              local_c1 = (char)local_70[7] == '\x03';
            }
          }
        }
        local_e4 = 1;
        _objc_storeStrong(&local_d8,0);
        local_19a = local_c1 & 1;
        local_1bd[1] = 1;
        local_1bd[2] = 0;
        local_1bd[3] = 0;
        local_1bd[4] = 0;
      }
    }
    else {
      local_19a = local_1bd[0] & 1;
      local_1bd[1] = 1;
      local_1bd[2] = 0;
      local_1bd[3] = 0;
      local_1bd[4] = 0;
    }
  }
  _objc_storeStrong(&local_1b0,0);
  return local_19a & 1;
}

