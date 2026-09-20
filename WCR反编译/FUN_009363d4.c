// FUN_009363d4 @ 009363d4

undefined4 FUN_009363d4(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  void *pvVar2;
  undefined4 local_14;
  
  plVar1 = _malloc(0x18);
  if (plVar1 == (long *)0x0) {
    local_14 = 0xffffffff;
  }
  else {
    pvVar2 = _malloc(param_3 * 0x18);
    *plVar1 = (long)pvVar2;
    if (*plVar1 == 0) {
      _free(plVar1);
      local_14 = 0xffffffff;
    }
    else {
      ___memcpy_chk(*plVar1,param_2,param_3 * 0x18,0xffffffffffffffff);
      plVar1[1] = param_3;
      plVar1[2] = *param_1;
      *param_1 = (long)plVar1;
      local_14 = 0;
    }
  }
  return local_14;
}

