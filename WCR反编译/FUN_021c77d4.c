// FUN_021c77d4 @ 021c77d4

ulong FUN_021c77d4(ulong *param_1,long *param_2)

{
  undefined8 local_30;
  
  local_30 = *param_1;
  if (((local_30 & 1) == 1) || (local_30 == 0)) {
    local_30 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(local_30,*param_2 >> 0x20,0);
    *param_1 = local_30;
  }
  return local_30;
}

