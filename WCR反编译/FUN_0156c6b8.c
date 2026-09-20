// FUN_0156c6b8 @ 0156c6b8

uint FUN_0156c6b8(long param_1)

{
  uint local_1c;
  long local_18;
  
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  local_1c = 0;
  local_18 = param_1;
  if (param_1 != 0) {
    FUN_01564574();
    local_1c = (uint)param_1;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

