// FUN_0069687c @ 0069687c

undefined1 FUN_0069687c(double param_1,ulong param_2)

{
  undefined1 local_11;
  
  FUN_0069569c();
  if ((param_2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    if (1.0 <= param_1 - DAT_028cbd68) {
      local_11 = 1;
      DAT_028cbd68 = param_1;
    }
    else {
      local_11 = 0;
    }
  }
  return local_11;
}

