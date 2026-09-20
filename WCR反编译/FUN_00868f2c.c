// FUN_00868f2c @ 00868f2c

uint FUN_00868f2c(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_24;
  
  if ((DAT_028cd867 & 1) == 0) {
    (*DAT_028cd528)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

