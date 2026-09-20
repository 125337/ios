// FUN_0006fa28 @ 0006fa28

uint FUN_0006fa28(void)

{
  uint local_14;
  
  if ((DAT_028c7e78 & 1) == 0) {
    FUN_0006e628();
  }
  local_14 = 1;
  if ((((DAT_028c7ef0 & 1) == 0) &&
      ((((DAT_028c7f00 & 1) == 0 || (local_14 = 1, DAT_028c7f08 <= 0.0)) &&
       (local_14 = 1, (DAT_028c7f10 & 1) == 0)))) &&
     (((DAT_028c7f20 & 1) == 0 || (local_14 = 1, DAT_028c7f28 <= 0.0)))) {
    local_14 = 1;
    FUN_00072588();
  }
  return local_14 & 1;
}

