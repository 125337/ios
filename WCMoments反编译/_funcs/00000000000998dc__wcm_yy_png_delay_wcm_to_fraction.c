// _wcm_yy_png_delay_wcm_to_fraction @0x998dc

void _wcm_yy_png_delay_wcm_to_fraction(double param_1,undefined2 *param_2,undefined2 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long alStack_c0 [2];
  undefined8 *local_b0;
  long local_a8;
  undefined8 *local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined1 *local_48;
  double local_40;
  long local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  double local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if (param_1 < 255.0) {
    if (0.00392156862745098 < param_1) {
      local_38 = 10;
      local_40 = 0.00196078431372549;
      alStack_c0[1] = 0x50;
      local_48 = (undefined1 *)alStack_c0;
      (*(code *)PTR____chkstk_darwin_00110500)();
      puVar2 = (undefined8 *)((long)alStack_c0 - (alStack_c0[1] + 0xfU & 0xfffffffffffffff0));
      local_a8 = local_38 << 3;
      local_b0 = puVar2;
      local_90 = puVar2;
      (*(code *)PTR____chkstk_darwin_00110500)();
      puVar2 = (undefined8 *)((long)puVar2 - (local_a8 + 0xfU & 0xfffffffffffffff0));
      local_98 = local_38 << 3;
      local_a0 = puVar2;
      local_88 = puVar2;
      (*(code *)PTR____chkstk_darwin_00110500)();
      puVar4 = local_88;
      puVar3 = local_90;
      local_80 = (long)puVar2 - (local_98 + 0xfU & 0xfffffffffffffff0);
      local_70 = 0;
      local_78 = 0;
      *local_90 = 0;
      *puVar4 = 1;
      puVar3[1] = 1;
      puVar4[1] = 0;
      for (local_68 = 2; local_68 < local_38; local_68 = local_68 + 1) {
        *(long *)(local_80 + local_68 * 8) = (long)(double)(long)(double)(long)local_20;
        plVar1 = local_b0 + local_68;
        *plVar1 = *(long *)(local_80 + local_68 * 8) * plVar1[-1] + plVar1[-2];
        plVar1 = local_a0 + local_68;
        *plVar1 = *(long *)(local_80 + local_68 * 8) * plVar1[-1] + plVar1[-2];
        if ((0xff < (long)local_b0[local_68]) || (0xff < (long)local_a0[local_68])) break;
        local_70 = local_b0[local_68];
        local_78 = local_a0[local_68];
        if (ABS(local_20 - (double)*(long *)(local_80 + local_68 * 8)) < local_40) break;
        local_20 = 1.0 / (local_20 - (double)*(long *)(local_80 + local_68 * 8));
      }
      if ((local_70 == 0) || (local_78 == 0)) {
        *local_28 = 1;
        *local_30 = 100;
      }
      else {
        *local_28 = (short)local_70;
        *local_30 = (short)local_78;
      }
    }
    else {
      *param_2 = 1;
      *param_3 = 0xff;
    }
  }
  else {
    *param_2 = 0xff;
    *param_3 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
}

