// FUN_01139098 @ 01139098

byte FUN_01139098(undefined8 param_1,byte param_2,uint param_3,void *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_1e4;
  uint local_1ac;
  ulong local_160;
  long local_158 [2];
  long local_148;
  ulong local_130 [6];
  uint local_fc;
  char local_f8;
  undefined *local_e8;
  undefined4 local_dc;
  ulong local_d8;
  void *local_d0;
  uint local_c8;
  byte local_c1;
  ulong local_c0;
  byte local_b1;
  undefined *local_b0;
  uint local_a4;
  ulong *local_a0;
  bool local_91;
  undefined *local_90;
  uint local_84;
  ulong *local_80;
  bool local_71;
  code *local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  ulong *local_58;
  ulong local_50;
  code *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulong *local_30;
  ulong local_28;
  
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_d0 = param_4;
  local_c8 = param_3;
  local_c1 = param_2;
  if (param_4 != (void *)0x0) {
    ___memset_chk(param_4,0,0x40,0xffffffffffffffff);
  }
  uVar2 = local_c0;
  FUN_011399d0(local_c0,0,local_c1 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_b1 = 0;
    local_dc = 1;
    goto LAB_0113999c;
  }
  uVar2 = local_d8;
  FUN_01139b54();
  if ((uint)uVar2 != local_c8) {
    local_b1 = 0;
    local_dc = 1;
    goto LAB_0113999c;
  }
  FUN_01139c70(0);
  if ((uVar2 & 1) != 0) {
    FUN_01139ce8();
    local_b1 = 0;
    local_dc = 1;
    goto LAB_0113999c;
  }
  _os_unfair_lock_lock();
  puVar3 = DAT_028e35d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e35d0,PTR_s_objectForKeyedSubscript__0269d098,local_d8);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  _os_unfair_lock_unlock(&DAT_028e35c8);
  puVar3 = local_e8;
  FUN_01139da8(local_e8,local_130);
  if (((ulong)puVar3 & 1) == 0) {
LAB_0113950c:
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_01139ce8();
      local_b1 = 0;
      local_dc = 1;
    }
    else {
      FUN_00a5a528();
      uVar2 = local_c0;
      FUN_01139ef0(local_c0,local_c1 & 1,local_c8,local_158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = &DAT_028e35c8;
      local_160 = uVar2;
      _os_unfair_lock_lock();
      if (DAT_028e35d0 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = DAT_028e35d0;
        DAT_028e35d0 = puVar4;
        (*(code *)PTR__objc_release_02578630)();
      }
      FUN_00a4ec00();
      lVar1 = local_148;
      local_158[0] = local_158[0] - (long)puVar3;
      if (local_158[0] == 0) {
        FUN_00a59890();
        local_158[0] = lVar1 - (long)puVar3;
        if (local_158[0] != 0) goto LAB_01139668;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e35d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,local_d8);
        if (local_148 != 0) {
          DAT_028e35d8 = local_148;
        }
        _objc_storeStrong(&local_e8,local_160);
      }
      else {
LAB_01139668:
        _objc_storeStrong(local_158[0],&local_e8,0);
      }
      _os_unfair_lock_unlock(&DAT_028e35c8);
      puVar3 = local_e8;
      FUN_01139da8(local_e8,local_130);
      if (((ulong)puVar3 & 1) == 0) {
LAB_01139928:
        local_b1 = 0;
      }
      else {
        local_a0 = local_130;
        local_a4 = local_c8;
        if (((local_a0 == (ulong *)0x0) || (local_f8 == '\0')) || (local_fc != local_c8)) {
          local_91 = false;
        }
        else {
          FUN_00a59890(0);
          local_b0 = puVar3;
          if ((((undefined *)local_a0[5] == puVar3) &&
              (puVar4 = (undefined *)local_a0[2], FUN_00a4ec00(), puVar4 == puVar3)) &&
             (puVar4 = (undefined *)local_a0[3], FUN_01138c10(), puVar4 == puVar3)) {
            if (((char)local_a0[7] == '\x03') && (local_a0[5] == 0)) {
              local_91 = false;
            }
            else if ((local_a0[4] == 0) ||
                    ((local_a0[4] + 1 == 0 ||
                     (_mach_continuous_time(local_a0[4] + 1), puVar3 < (undefined *)local_a0[4]))))
            {
              local_30 = local_a0;
              local_34 = local_a4;
              if (local_a0 == (ulong *)0x0) {
                local_28 = 0;
              }
              else {
                local_38 = local_a4 & 0x1f;
                if (local_38 == 0) {
                  local_1e4 = (uint)local_a0[6];
                }
                else {
                  local_1e4 = (int)local_a0[6] << (ulong)local_38 |
                              (uint)local_a0[6] >> (ulong)(0x20 - local_38 & 0x1f);
                }
                local_3c = local_1e4;
                local_48 = FUN_009dea6c;
                local_28 = (ulong)local_1e4 ^ 0xc3a5f77e905041d1 ^ (ulong)local_a4 << 1 ^
                           local_a0[5] ^ local_a0[2] ^ local_a0[3] << 7 ^ local_a0[4] >> 0xb ^
                           (ulong)(byte)local_a0[7] << 0x35 ^
                           (ulong)*(byte *)((long)local_a0 + 0x39) << 0x2d ^ 0x9dea6c;
              }
              local_91 = (*local_a0 ^ local_a0[1]) == local_28;
            }
            else {
              local_91 = false;
            }
          }
          else {
            local_91 = false;
          }
        }
        if (local_91 == false) goto LAB_01139928;
        if (local_d0 != (void *)0x0) {
          _memcpy(local_d0,local_130,0x40);
        }
        local_b1 = 1;
      }
      local_dc = 1;
      _objc_storeStrong(&local_160,0);
    }
  }
  else {
    local_80 = local_130;
    local_84 = local_c8;
    if (((local_80 == (ulong *)0x0) || (local_f8 == '\0')) || (local_fc != local_c8)) {
      local_71 = false;
    }
    else {
      FUN_00a59890(0);
      local_90 = puVar3;
      if ((((undefined *)local_80[5] == puVar3) &&
          (puVar4 = (undefined *)local_80[2], FUN_00a4ec00(), puVar4 == puVar3)) &&
         (puVar4 = (undefined *)local_80[3], FUN_01138c10(), puVar4 == puVar3)) {
        if (((char)local_80[7] == '\x03') && (local_80[5] == 0)) {
          local_71 = false;
        }
        else if ((local_80[4] == 0) ||
                ((local_80[4] + 1 == 0 ||
                 (_mach_continuous_time(local_80[4] + 1), puVar3 < (undefined *)local_80[4])))) {
          local_58 = local_80;
          local_5c = local_84;
          if (local_80 == (ulong *)0x0) {
            local_50 = 0;
          }
          else {
            local_60 = local_84 & 0x1f;
            if (local_60 == 0) {
              local_1ac = (uint)local_80[6];
            }
            else {
              local_1ac = (int)local_80[6] << (ulong)local_60 |
                          (uint)local_80[6] >> (ulong)(0x20 - local_60 & 0x1f);
            }
            local_64 = local_1ac;
            local_70 = FUN_009dea6c;
            local_50 = (ulong)local_1ac ^ 0xc3a5f77e905041d1 ^ (ulong)local_84 << 1 ^ local_80[5] ^
                       local_80[2] ^ local_80[3] << 7 ^ local_80[4] >> 0xb ^
                       (ulong)(byte)local_80[7] << 0x35 ^
                       (ulong)*(byte *)((long)local_80 + 0x39) << 0x2d ^ 0x9dea6c;
          }
          local_71 = (*local_80 ^ local_80[1]) == local_50;
        }
        else {
          local_71 = false;
        }
      }
      else {
        local_71 = false;
      }
    }
    if (local_71 == false) goto LAB_0113950c;
    if (local_d0 != (void *)0x0) {
      _memcpy(local_d0,local_130,0x40);
    }
    local_b1 = 1;
    local_dc = 1;
  }
  _objc_storeStrong(&local_e8,0);
LAB_0113999c:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c0,0);
  return local_b1 & 1;
}

