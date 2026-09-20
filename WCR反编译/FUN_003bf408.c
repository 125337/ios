// FUN_003bf408 @ 003bf408

byte FUN_003bf408(undefined8 param_1,undefined8 param_2)

{
  byte local_11;
  
  if ((DAT_028ca168 & 1) == 0) {
    if (DAT_028ca160 == (code *)0x0) {
      local_11 = 1;
    }
    else {
      (*DAT_028ca160)(param_1,param_2);
      local_11 = (byte)param_1 & 1;
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

