// FUN_009359ac @ 009359ac

int FUN_009359ac(thread_act_t param_1,long *param_2,int param_3)

{
  bool bVar1;
  kern_return_t kVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  vm_size_t local_190;
  int local_184;
  ulong local_180;
  long local_178;
  long local_170;
  int local_168;
  mach_msg_type_number_t local_164;
  natural_t anStack_160 [58];
  ulong local_78;
  long local_70;
  long local_60;
  int local_4c;
  long *local_48;
  thread_act_t local_40;
  int local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_164 = 0x44;
  local_4c = param_3;
  local_48 = param_2;
  local_40 = param_1;
  kVar2 = _thread_get_state(param_1,6,anStack_160,&local_164);
  if (kVar2 == 0) {
    local_168 = 0;
    local_170 = local_60;
    local_178 = local_70;
    local_180 = local_78;
    if ((local_60 != 0) && (0 < local_4c)) {
      local_168 = 1;
      *local_48 = local_60;
    }
    if (((local_70 != 0) && (local_70 != local_60)) && (local_168 < local_4c)) {
      lVar4 = (long)local_168;
      local_168 = local_168 + 1;
      local_48[lVar4] = local_70;
    }
    local_184 = 0;
    while( true ) {
      bVar1 = false;
      if ((local_184 < 0x30) && (bVar1 = false, local_168 < local_4c)) {
        bVar1 = 0xfff < local_180;
      }
      if (!bVar1) break;
      local_38 = 0;
      local_30 = 0;
      local_190 = 0x10;
      kVar2 = _vm_read_overwrite(*(vm_map_t *)PTR__mach_task_self__025786a8,local_180,0x10,
                                 (vm_address_t)&local_38,&local_190);
      if ((kVar2 != 0) || (local_190 < 0x10)) break;
      uVar3 = local_38;
      FUN_00935d34(local_190 - 0x10,local_38,1);
      lVar4 = local_30;
      FUN_00935d34(local_30,0);
      if ((lVar4 != 0) && (local_168 < local_4c)) {
        lVar5 = (long)local_168;
        local_168 = local_168 + 1;
        local_48[lVar5] = lVar4;
      }
      if ((uVar3 <= local_180) || (0x100000 < uVar3 - local_180)) break;
      local_184 = local_184 + 1;
      local_180 = uVar3;
    }
    local_3c = local_168;
  }
  else {
    local_3c = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

