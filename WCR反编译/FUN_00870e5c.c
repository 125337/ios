// FUN_00870e5c @ 00870e5c

uint FUN_00870e5c(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_24;
  
  if ((DAT_028cd869 & 1) == 0) {
    (*DAT_028cd838)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

