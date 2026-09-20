// FUN_003cbad4 @ 003cbad4

void FUN_003cbad4(double param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double local_70;
  double local_68;
  
  FUN_003cbc3c(&cf_cell_headimg_left_margin);
  dVar1 = param_1;
  FUN_003cbcb0(&cf_cell_headimg_size);
  local_70 = dVar1;
  FUN_003cbc3c(&cf_cell_namelabel_left_margin);
  dVar2 = local_70;
  FUN_003cbc3c(&cf_cell_timelabel_right_margin);
  if ((param_1 <= 0.5) || (dVar1 <= 0.5)) {
    local_68 = 0.0;
  }
  else {
    local_68 = param_1 + dVar1 * 0.5;
  }
  if ((param_1 <= 0.5) || (dVar1 <= 0.5)) {
    local_70 = 0.0;
  }
  else {
    local_70 = param_1 + dVar1 + local_70;
  }
  if (param_2 != (double *)0x0) {
    *param_2 = local_68;
  }
  if (param_3 != (double *)0x0) {
    *param_3 = local_70;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = dVar2;
  }
  return;
}

