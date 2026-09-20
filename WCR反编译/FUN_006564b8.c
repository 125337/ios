// FUN_006564b8 @ 006564b8

ulong FUN_006564b8(undefined8 param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong local_c8;
  ulong local_c0;
  char *local_20;
  ulong local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == (char *)0x0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    pcVar3 = local_20;
    _object_getClass();
    FUN_00655f20(pcVar3,param_2);
    if (pcVar3 == (char *)0x0) {
      local_18 = 0;
    }
    else {
      pcVar4 = pcVar3;
      _ivar_getOffset();
      _ivar_getTypeEncoding();
      pcVar1 = local_20;
      if ((local_20 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
        local_18 = 0;
      }
      else {
        iVar2 = _strcmp(pcVar3,"Q");
        if (iVar2 == 0) {
          local_18 = *(ulong *)(pcVar1 + (long)pcVar4);
        }
        else {
          iVar2 = _strcmp(pcVar3,"I");
          if (iVar2 == 0) {
            local_18 = (ulong)*(uint *)(pcVar1 + (long)pcVar4);
          }
          else {
            iVar2 = _strcmp(pcVar3,"Q");
            if (iVar2 == 0) {
              local_18 = *(ulong *)(pcVar1 + (long)pcVar4);
            }
            else {
              iVar2 = _strcmp(pcVar3,"q");
              if (iVar2 == 0) {
                local_c0 = *(ulong *)(pcVar1 + (long)pcVar4);
                if ((long)local_c0 < 1) {
                  local_c0 = 0;
                }
                local_18 = local_c0;
              }
              else {
                iVar2 = _strcmp(pcVar3,"i");
                if (iVar2 == 0) {
                  if (*(int *)(pcVar1 + (long)pcVar4) < 1) {
                    local_c8 = 0;
                  }
                  else {
                    local_c8 = (ulong)*(int *)(pcVar1 + (long)pcVar4);
                  }
                  local_18 = local_c8;
                }
                else {
                  iVar2 = _strcmp(pcVar3,"B");
                  if ((iVar2 == 0) || (iVar2 = _strcmp(pcVar3,"B"), iVar2 == 0)) {
                    local_18 = (ulong)(int)(uint)((pcVar1[(long)pcVar4] & 1U) != 0);
                  }
                  else {
                    local_18 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

