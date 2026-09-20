// FUN_021c7aac @ 021c7aac

ulong FUN_021c7aac(ulong *param_1,long *param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  if (local_18 == 0) {
    local_18 = 0xff;
    _swift_getTypeByMangledNameInContextInMetadataState
              (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0);
    local_18 = local_18 | 1;
    *param_1 = local_18;
  }
  return local_18 & 0xfffffffffffffffe;
}

