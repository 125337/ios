// FUN_00870ebc @ 00870ebc

uint FUN_00870ebc(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_24;
  
  if ((DAT_028cd869 & 1) == 0) {
    (*DAT_028cd840)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

