// FUN_00933218 @ 00933218

void FUN_00933218(char *param_1,size_t param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong local_190;
  long local_188;
  long local_180;
  long local_178;
  char *local_170;
  char *local_168;
  long local_160;
  long local_158;
  char *local_148;
  char *local_140;
  size_t local_138;
  ulong local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined1 *local_110;
  char *local_108;
  char *local_100;
  size_t local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  char *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  uint local_64;
  size_t local_60;
  char *local_58;
  char local_50 [40];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = param_4;
  local_64 = param_3;
  local_60 = param_2;
  local_58 = param_1;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    lStack_88 = 0;
    local_90 = 0;
    lStack_78 = 0;
    local_80 = 0;
    if ((param_4 == 0) || ((_dladdr(param_4,&local_90), (int)param_4 == 0 || (local_90 == 0)))) {
      local_190 = (ulong)local_64;
      local_188 = local_70;
      _snprintf(local_58,local_60,"%2d  %p\n");
    }
    else {
      lVar1 = local_90;
      FUN_00933794(local_90,0x2f);
      if (lVar1 == 0) {
        local_b8 = local_90;
      }
      else {
        local_b8 = lVar1 + 1;
      }
      local_98 = local_b8;
      if (lStack_88 == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = local_70 - lStack_88;
      }
      local_a0 = local_c0;
      local_d0 = local_50;
      local_c8 = 0x28;
      _memset(local_d0,0,0x28);
      FUN_0093353c(lStack_88,local_d0,local_c8);
      if ((local_80 == 0) || (lStack_78 == 0)) {
        local_140 = local_58;
        local_138 = local_60;
        local_190 = (ulong)local_64;
        local_128 = local_70;
        local_120 = local_98;
        local_118 = local_a0;
        if (local_50[0] == '\0') {
          local_148 = "-";
        }
        else {
          local_148 = local_50;
        }
        local_188 = local_70;
        local_180 = local_98;
        local_178 = local_a0;
        local_170 = local_148;
        local_130 = local_190;
        _snprintf(local_58,local_60,"%2d  %p %s+0x%lx uuid=%s\n");
      }
      else {
        lVar1 = local_70 - lStack_78;
        local_158 = -lVar1;
        if (0 < lVar1) {
          local_158 = lVar1;
        }
        local_168 = "nearOK";
        if (0x400 < local_158) {
          local_168 = "nearUNREL";
        }
        local_100 = local_58;
        local_f8 = local_60;
        local_190 = (ulong)local_64;
        local_e8 = local_70;
        local_e0 = local_98;
        local_d8 = local_a0;
        if (local_50[0] == '\0') {
          local_108 = "-";
        }
        else {
          local_108 = local_50;
        }
        local_188 = local_70;
        local_180 = local_98;
        local_178 = local_a0;
        local_170 = local_108;
        local_160 = local_80;
        local_110 = (undefined1 *)&local_190;
        local_f0 = local_190;
        local_b0 = local_168;
        local_a8 = local_158;
        _snprintf(local_58,local_60,"%2d  %p %s+0x%lx uuid=%s  %s %s+0x%lx\n");
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

