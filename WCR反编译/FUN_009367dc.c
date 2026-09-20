// FUN_009367dc @ 009367dc

void FUN_009367dc(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  vm_address_t address;
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  kern_return_t kVar6;
  uint local_7c;
  long *local_78;
  uint local_54;
  
  uVar2 = *(uint *)(param_2 + 0x44);
  address = param_3 + *(long *)(param_2 + 0x20);
  local_54 = 0;
  do {
    if (*(ulong *)(param_2 + 0x28) / 8 <= (ulong)local_54) {
      return;
    }
    uVar3 = *(uint *)(param_6 + (ulong)uVar2 * 4 + (ulong)local_54 * 4);
    if (((uVar3 != 0x40000000) && (uVar3 != 0x80000000)) && (uVar3 != 0xc0000000)) {
      pcVar1 = (char *)(param_5 + (ulong)*(uint *)(param_4 + (ulong)uVar3 * 0x10));
      bVar4 = false;
      local_78 = param_1;
      if (*pcVar1 != '\0') {
        bVar4 = pcVar1[1] != '\0';
      }
      for (; local_78 != (long *)0x0; local_78 = (long *)local_78[2]) {
        for (local_7c = 0; (ulong)local_7c < (ulong)local_78[1]; local_7c = local_7c + 1) {
          if ((bVar4) &&
             (iVar5 = _strcmp(pcVar1 + 1,*(char **)(*local_78 + (ulong)local_7c * 0x18)), iVar5 == 0
             )) {
            if ((*(long *)(*local_78 + (ulong)local_7c * 0x18 + 0x10) != 0) &&
               (*(long *)(address + (ulong)local_54 * 8) !=
                *(long *)(*local_78 + (ulong)local_7c * 0x18 + 8))) {
              **(undefined8 **)(*local_78 + (ulong)local_7c * 0x18 + 0x10) =
                   *(undefined8 *)(address + (ulong)local_54 * 8);
            }
            kVar6 = _vm_protect(*(vm_map_t *)PTR__mach_task_self__025786a8,address,
                                *(vm_size_t *)(param_2 + 0x28),0,0x13);
            if (kVar6 == 0) {
              *(undefined8 *)(address + (ulong)local_54 * 8) =
                   *(undefined8 *)(*local_78 + (ulong)local_7c * 0x18 + 8);
            }
            goto LAB_00936a88;
          }
        }
      }
    }
LAB_00936a88:
    local_54 = local_54 + 1;
  } while( true );
}

