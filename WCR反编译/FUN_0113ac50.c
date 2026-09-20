// FUN_0113ac50 @ 0113ac50

/* WARNING: Removing unreachable block (ram,0x0113adb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0113ac50(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_124;
  ulong local_e8 [6];
  uint local_b4;
  char local_b0;
  char local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  undefined4 local_84;
  undefined1 *local_80;
  long local_78;
  bool local_69;
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
  
  local_78 = 0;
  _objc_storeStrong(&local_78,param_1);
  lVar1 = local_78;
  local_80 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_80 != (undefined1 *)0x0) {
      *local_80 = 0;
    }
    local_69 = false;
    local_84 = 1;
    goto LAB_0113b094;
  }
  FUN_00a59890();
  local_90 = lVar1;
  _os_unfair_lock_lock();
  local_98 = DAT_028e35d8;
  uVar2 = DAT_028e35d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e35d0,PTR_s_objectForKeyedSubscript__0269d098,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar2;
  _os_unfair_lock_unlock(&DAT_028e35c8);
  if (((local_98 == 0) || (local_98 != local_90)) ||
     (uVar2 = local_a0, FUN_01139da8(0,local_a0,local_e8), (uVar2 & 1) == 0)) {
LAB_0113b014:
    if (local_80 != (undefined1 *)0x0) {
      *local_80 = 0;
    }
    local_69 = false;
  }
  else {
    local_58 = local_e8;
    local_5c = local_b4;
    if ((local_58 == (ulong *)0x0) || (local_b0 == '\0')) {
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
              local_124 = (uint)local_58[6];
            }
            else {
              local_124 = (int)local_58[6] << (ulong)local_38 |
                          (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
            }
            local_3c = local_124;
            local_48 = FUN_009dea6c;
            local_28 = (ulong)local_124 ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
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
    if (local_49 == false) goto LAB_0113b014;
    if (local_80 != (undefined1 *)0x0) {
      *local_80 = 1;
    }
    local_69 = local_a8 != '\0';
  }
  local_84 = 1;
  _objc_storeStrong(&local_a0,0);
LAB_0113b094:
  _objc_storeStrong(&local_78,0);
  return local_69 & 1;
}

