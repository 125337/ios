// FUN_01bf29b0 @ 01bf29b0

long FUN_01bf29b0(double param_1,byte param_2,undefined8 param_3,byte param_4)

{
  double local_68;
  double local_58;
  
  local_68 = (param_1 - 24.0) - 28.0;
  if (local_68 <= 0.0) {
    local_68 = 0.0;
  }
  local_58 = 74.0;
  if ((param_2 & 1) != 0) {
    local_58 = 162.0;
  }
  FUN_01be95f4(param_3);
  if (0.0 < local_68) {
    local_58 = local_58 + local_68 + 8.0;
  }
  local_58 = local_58 + 26.0;
  if ((param_4 & 1) != 0) {
    local_58 = local_58 + 40.0;
  }
  return (long)local_58;
}

