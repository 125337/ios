// FUN_0150c198 @ 0150c198

bool FUN_0150c198(FILE *param_1,ulong param_2,void *param_3,size_t param_4)

{
  int iVar1;
  size_t sVar2;
  bool local_11;
  
  if ((((param_1 == (FILE *)0x0) || (param_3 == (void *)0x0)) || (param_4 == 0)) ||
     (0x7fffffffffffffff < param_2)) {
    local_11 = false;
  }
  else {
    iVar1 = _fseeko(param_1,param_2,0);
    if (iVar1 == 0) {
      sVar2 = _fread(param_3,1,param_4,param_1);
      local_11 = sVar2 == param_4;
    }
    else {
      local_11 = false;
    }
  }
  return local_11;
}

