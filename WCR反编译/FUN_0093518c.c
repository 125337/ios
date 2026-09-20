// FUN_0093518c @ 0093518c

int FUN_0093518c(void)

{
  int local_14;
  
  if (DAT_026f4c38 < 0) {
    FUN_00934804();
    if (DAT_028ce7b0 == '\0') {
      local_14 = -1;
    }
    else {
      DAT_026f4c38 = _open(&DAT_028ce7b0,0x601);
      local_14 = DAT_026f4c38;
    }
  }
  else {
    local_14 = DAT_026f4c38;
  }
  return local_14;
}

