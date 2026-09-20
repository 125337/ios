// FUN_008a0bb0 @ 008a0bb0

bool FUN_008a0bb0(char *param_1)

{
  int iVar1;
  bool local_11;
  
  if (param_1 == (char *)0x0) {
    local_11 = true;
  }
  else {
    _class_getName();
    local_11 = false;
    if (param_1 != (char *)0x0) {
      iVar1 = _strcmp(param_1,"MMInputToolView");
      local_11 = iVar1 == 0;
    }
  }
  return local_11;
}

