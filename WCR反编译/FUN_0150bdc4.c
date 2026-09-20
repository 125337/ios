// FUN_0150bdc4 @ 0150bdc4

ulong FUN_0150bdc4(ulong param_1,int *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong local_c0;
  ulong local_a8;
  int local_9c;
  ulong local_98;
  ulong local_90;
  uint local_88;
  uint local_84;
  long local_80;
  ulong local_78;
  byte local_6d;
  uint local_6c;
  int local_68;
  int local_64;
  ulong *local_60;
  int *local_58;
  ulong local_50;
  ulong local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [12];
  int local_20;
  undefined1 auStack_1c [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0xffffffffffffffff;
  }
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  FUN_0150c198(param_1,0,&local_20,8);
  if ((param_1 & 1) == 0) {
    local_48 = 0xffffffffffffffff;
  }
  else {
    local_64 = local_20;
    if (local_20 + 0x1120531 == 0) {
      if (local_58 != (int *)0x0) {
        *local_58 = local_20;
      }
      local_48 = 0;
    }
    else {
      local_68 = (int)&local_20;
      FUN_0150c26c(local_20 + 0x1120531);
      if ((local_68 == -0x35014542) || (local_68 == -0x35014541)) {
        local_6c = (uint)auStack_1c;
        FUN_0150c26c();
        if ((local_6c == 0) || (0x10 < local_6c)) {
          local_48 = 0xffffffffffffffff;
        }
        else {
          local_6d = local_68 == -0x35014541;
          local_78 = 0x20;
          if (!(bool)local_6d) {
            local_78 = 0x14;
          }
          local_80 = 8;
          for (local_84 = 0; local_84 < local_6c; local_84 = local_84 + 1) {
            if ((0x1f < local_78 && local_78 - 0x20 != 0) ||
               (uVar2 = local_50,
               FUN_0150c198(local_78 - 0x20,local_50,local_80,auStack_40,local_78), (uVar2 & 1) == 0
               )) {
              local_48 = 0xffffffffffffffff;
              goto LAB_0150c160;
            }
            uVar1 = (uint)auStack_40;
            FUN_0150c26c();
            local_88 = uVar1;
            if ((local_6d & 1) == 0) {
              puVar4 = auStack_38;
              FUN_0150c26c();
              local_a8 = (ulong)puVar4 & 0xffffffff;
            }
            else {
              puVar4 = auStack_38;
              FUN_0150c26c();
              puVar3 = auStack_34;
              FUN_0150c26c();
              local_a8 = (ulong)puVar3 & 0xffffffff | (long)puVar4 << 0x20;
            }
            local_90 = local_a8;
            if ((local_6d & 1) == 0) {
              puVar4 = auStack_34;
              FUN_0150c26c();
              local_c0 = (ulong)puVar4 & 0xffffffff;
            }
            else {
              puVar4 = auStack_30;
              FUN_0150c26c();
              puVar3 = auStack_2c;
              FUN_0150c26c();
              local_c0 = (ulong)puVar3 & 0xffffffff | (long)puVar4 << 0x20;
            }
            local_98 = local_c0;
            if ((local_6c * local_78 + 8 <= local_90) && (0x1f < local_c0)) {
              if (((local_88 >> 0x18 & 1) != 0) && ((local_88 & 0xfeffffff) == 0xc)) {
                local_9c = 0;
                uVar2 = local_50;
                FUN_0150c198(0,local_50,local_90,&local_9c,4);
                if (((uVar2 & 1) != 0) && (local_9c == -0x1120531)) {
                  if (local_58 != (int *)0x0) {
                    *local_58 = -0x1120531;
                  }
                  if (local_60 != (ulong *)0x0) {
                    *local_60 = local_98;
                  }
                  local_48 = local_90;
                  goto LAB_0150c160;
                }
              }
              local_80 = local_80 + local_78;
            }
          }
          local_48 = 0xffffffffffffffff;
        }
      }
      else {
        local_48 = 0xffffffffffffffff;
      }
    }
  }
LAB_0150c160:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

