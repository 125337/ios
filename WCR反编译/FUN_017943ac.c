// FUN_017943ac @ 017943ac

/* WARNING: Removing unreachable block (ram,0x017944ec) */
/* WARNING: Removing unreachable block (ram,0x01794500) */
/* WARNING: Removing unreachable block (ram,0x01794504) */
/* WARNING: Removing unreachable block (ram,0x0179450c) */
/* WARNING: Removing unreachable block (ram,0x01794520) */
/* WARNING: Removing unreachable block (ram,0x01794524) */
/* WARNING: Removing unreachable block (ram,0x01794530) */
/* WARNING: Removing unreachable block (ram,0x01794538) */
/* WARNING: Removing unreachable block (ram,0x01794438) */
/* WARNING: Removing unreachable block (ram,0x01794454) */
/* WARNING: Removing unreachable block (ram,0x01794458) */
/* WARNING: Removing unreachable block (ram,0x01794460) */
/* WARNING: Removing unreachable block (ram,0x01794474) */
/* WARNING: Removing unreachable block (ram,0x01794478) */
/* WARNING: Removing unreachable block (ram,0x01794484) */
/* WARNING: Removing unreachable block (ram,0x0179448c) */

double FUN_017943ac(double param_1,undefined8 param_2,undefined8 param_3)

{
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_70;
  long local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double local_30;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_60 = param_1;
  local_58 = param_1;
  local_50 = param_3;
  if (DAT_028e4030 != 0) {
    local_70 = local_48;
    local_68 = DAT_028e4030;
    _objc_msgSendSuper(&local_70,param_3);
    local_60 = param_1;
  }
  local_30 = local_58;
  if ((ABS(local_58) == INFINITY) || (local_58 <= 0.0)) {
    local_40 = local_60;
  }
  else {
    if (88.0 <= local_58) {
      local_f8 = 88.0;
    }
    else {
      local_f8 = local_58;
    }
    if (local_f8 <= local_60) {
      local_100 = local_60;
    }
    else {
      local_100 = local_f8;
    }
    if (local_100 <= local_58) {
      local_108 = local_100;
    }
    else {
      local_108 = local_58;
    }
    local_40 = local_108;
  }
  _objc_storeStrong(&local_48,0);
  return local_40;
}

