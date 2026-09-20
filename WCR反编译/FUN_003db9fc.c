// FUN_003db9fc @ 003db9fc

void FUN_003db9fc(long param_1,byte param_2,long *param_3,undefined1 *param_4)

{
  undefined1 local_29;
  undefined8 local_28;
  
  local_29 = 0;
  local_28 = param_1;
  if ((param_1 == 0) && ((param_2 & 1) != 0)) {
    local_28 = 1;
    local_29 = 1;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_28;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = local_29;
  }
  return;
}

