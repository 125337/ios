// _wcm_yy_png_copy_frame_data_at_index @0x962f4

void * _wcm_yy_png_copy_frame_data_at_index(long param_1,long param_2,uint param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uLong uVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_ac;
  uint *local_a8;
  uint local_9c;
  uint *local_98;
  uint local_90;
  uint local_8c;
  byte local_85;
  uint local_84;
  void *local_80;
  uint local_74;
  uint *local_70;
  uint *local_68;
  uint local_5c;
  long local_58;
  long local_50;
  void *local_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 local_30;
  undefined8 uStack_2f;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_68 = param_4;
  local_5c = param_3;
  local_58 = param_2;
  local_50 = param_1;
  if (param_3 < *(uint *)(param_2 + 0x28)) {
    local_70 = (uint *)(*(long *)(param_2 + 0x20) + (ulong)param_3 * 0x28);
    local_74 = *(int *)(param_2 + 0x3c) + 8 + local_70[2];
    if (((*(byte *)(param_2 + 0x44) & 1) == 0) || (param_3 != 0)) {
      local_74 = local_74 + local_70[1] * -4;
    }
    local_80 = _malloc((ulong)local_74);
    if (local_80 == (void *)0x0) {
      local_48 = (void *)0x0;
    }
    else {
      *local_68 = local_74;
      local_84 = 0;
      local_85 = 0;
      ___memcpy_chk(local_80,local_50,8,0xffffffffffffffff);
      local_84 = local_84 + 8;
      for (local_8c = 0; local_8c < *(uint *)(local_58 + 0x38); local_8c = local_8c + 1) {
        local_90 = *(uint *)(*(long *)(local_58 + 0x30) + (ulong)local_8c * 4);
        local_98 = (uint *)(*(long *)(local_58 + 0x10) + (ulong)local_90 * 0x10);
        if ((*(uint *)(local_58 + 0x40) <= local_90) && ((local_85 & 1) == 0)) {
          local_85 = 1;
          for (local_9c = 0; local_9c < local_70[1]; local_9c = local_9c + 1) {
            local_a8 = (uint *)(*(long *)(local_58 + 0x10) + (ulong)*local_70 * 0x10 +
                               (ulong)local_9c * 0x10);
            if (local_a8[1] == 0x54416466) {
              uVar2 = _wcm_yy_swap_endian_uint32(local_a8[2] - 4);
              *(undefined4 *)((long)local_80 + (ulong)local_84) = uVar2;
              *(undefined4 *)((long)local_80 + (ulong)local_84 + 4) = 0x54414449;
              ___memcpy_chk((long)local_80 + (ulong)local_84 + 8,local_50 + (ulong)*local_a8 + 0xc,
                            local_a8[2] - 4,0xffffffffffffffff);
              uVar3 = _crc32(0,(Bytef *)((long)local_80 + (ulong)local_84 + 4),local_a8[2]);
              local_ac = (undefined4)uVar3;
              uVar2 = _wcm_yy_swap_endian_uint32(uVar3 & 0xffffffff);
              *(undefined4 *)((long)local_80 + (ulong)local_a8[2] + (ulong)local_84 + 4) = uVar2;
              local_84 = local_84 + local_a8[2] + 8;
            }
            else {
              ___memcpy_chk((long)local_80 + (ulong)local_84,local_50 + (ulong)*local_a8,
                            local_a8[2] + 0xc,0xffffffffffffffff);
              local_84 = local_84 + local_a8[2] + 0xc;
            }
          }
        }
        if (local_98[1] == 0x52444849) {
          puVar1 = (undefined8 *)(local_50 + (ulong)*local_98);
          local_40 = *puVar1;
          uStack_38 = (undefined1)puVar1[1];
          uStack_2f._0_7_ = (undefined7)*(undefined8 *)((long)puVar1 + 0x11);
          uStack_2f._7_1_ = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x11) >> 0x38);
          uStack_37 = (undefined7)*(undefined8 *)((long)puVar1 + 9);
          local_30 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 9) >> 0x38);
          uStack_b8 = *(undefined8 *)(local_58 + 8);
          local_c0 = *(undefined8 *)(local_70 + 4);
          _wcm_yy_png_chunk_IHDR_write(&local_c0,&uStack_38);
          _crc32(0,(Bytef *)((long)&local_40 + 4),0x11);
          uVar2 = _wcm_yy_swap_endian_uint32();
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_2f._4_4_ = uVar2;
          uStack_2f._7_1_ = (undefined1)((uint)uVar2 >> 0x18);
          ___memcpy_chk((long)local_80 + (ulong)local_84,&local_40,0x19,0xffffffffffffffff);
          local_84 = local_84 + 0x19;
        }
        else {
          ___memcpy_chk((long)local_80 + (ulong)local_84,local_50 + (ulong)*local_98,
                        local_98[2] + 0xc,0xffffffffffffffff);
          local_84 = local_84 + local_98[2] + 0xc;
        }
      }
      local_48 = local_80;
    }
  }
  else {
    local_48 = (void *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
}

