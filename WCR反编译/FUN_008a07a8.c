// FUN_008a07a8 @ 008a07a8

undefined1 FUN_008a07a8(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint local_54;
  int *local_50;
  uint local_38;
  
  puVar2 = param_1;
  __dyld_image_count();
  local_38 = 0;
  do {
    if ((uint)puVar2 <= local_38) {
      return 0;
    }
    piVar3 = (int *)(ulong)local_38;
    __dyld_get_image_header(local_38 - (uint)puVar2);
    if (((piVar3 != (int *)0x0) && (piVar3[3] == 2)) && (*piVar3 == -0x1120531)) {
      local_50 = piVar3 + 8;
      for (local_54 = 0; local_54 < (uint)piVar3[4]; local_54 = local_54 + 1) {
        if ((*local_50 == 0x19) &&
           (iVar1 = _strncmp((char *)(local_50 + 2),"__TEXT",0x10), iVar1 == 0)) {
          lVar6 = *(long *)(local_50 + 6);
          uVar4 = (ulong)local_38;
          __dyld_get_image_vmaddr_slide();
          uVar4 = lVar6 + uVar4;
          lVar6 = *(long *)(local_50 + 8);
          uVar5 = (ulong)local_38;
          __dyld_get_image_name();
          if ((uVar5 != 0) && (uVar4 < uVar4 + lVar6)) {
            *param_1 = uVar4;
            *param_2 = uVar4 + lVar6;
            *param_3 = uVar5;
            return 1;
          }
          return 0;
        }
        local_50 = (int *)((long)local_50 + (ulong)(uint)local_50[1]);
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}

