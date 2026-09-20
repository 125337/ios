// FUN_009364ac @ 009364ac

void FUN_009364ac(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint local_a0;
  uint local_9c;
  uint local_74;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  undefined1 auStack_48 [32];
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _dladdr(param_2,auStack_48);
  if ((int)param_2 != 0) {
    local_58 = (int *)0x0;
    local_60 = (int *)0x0;
    local_68 = (int *)0x0;
    local_70 = (int *)(local_20 + 0x20);
    for (local_74 = 0; local_74 < *(uint *)(local_20 + 0x10); local_74 = local_74 + 1) {
      if (*local_70 == 0x19) {
        iVar6 = _strcmp((char *)(local_70 + 2),"__LINKEDIT");
        if (iVar6 == 0) {
          local_58 = local_70;
        }
      }
      else if (*local_70 == 2) {
        local_60 = local_70;
      }
      else if (*local_70 == 0xb) {
        local_68 = local_70;
      }
      local_70 = (int *)((long)local_70 + (ulong)(uint)local_70[1]);
    }
    if ((((local_60 != (int *)0x0) && (local_68 != (int *)0x0)) && (local_58 != (int *)0x0)) &&
       (local_68[0xf] != 0)) {
      lVar5 = (local_28 + *(long *)(local_58 + 6)) - *(long *)(local_58 + 10);
      uVar2 = local_60[2];
      uVar3 = local_60[4];
      uVar4 = local_68[0xe];
      local_70 = (int *)(local_20 + 0x20);
      for (local_9c = 0; local_9c < *(uint *)(local_20 + 0x10); local_9c = local_9c + 1) {
        if ((*local_70 == 0x19) &&
           ((iVar6 = _strcmp((char *)(local_70 + 2),"__DATA"), iVar6 == 0 ||
            (iVar6 = _strcmp((char *)(local_70 + 2),"__DATA_CONST"), iVar6 == 0)))) {
          for (local_a0 = 0; local_a0 < (uint)local_70[0x10]; local_a0 = local_a0 + 1) {
            piVar1 = local_70 + (ulong)local_a0 * 0x14 + 0x12;
            if ((char)piVar1[0x10] == '\a') {
              FUN_009367dc(0,local_18,piVar1,local_28,lVar5 + (ulong)uVar2,lVar5 + (ulong)uVar3,
                           lVar5 + (ulong)uVar4);
            }
            if ((char)piVar1[0x10] == '\x06') {
              FUN_009367dc(0,local_18,piVar1,local_28,lVar5 + (ulong)uVar2,lVar5 + (ulong)uVar3,
                           lVar5 + (ulong)uVar4);
            }
          }
        }
        local_70 = (int *)((long)local_70 + (ulong)(uint)local_70[1]);
      }
    }
  }
  return;
}

