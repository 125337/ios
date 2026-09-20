// FUN_00868ecc @ 00868ecc

uint FUN_00868ecc(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_24;
  
  if ((DAT_028cd867 & 1) == 0) {
    (*DAT_028cd520)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

