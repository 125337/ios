// _wcm_yy_png_info_create @0x94f08

void * _wcm_yy_png_info_create(int *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  uint local_94;
  uint *local_90;
  int local_84;
  undefined4 local_80;
  byte local_79;
  void *local_78;
  int local_6c;
  undefined4 *local_68;
  uint *local_60;
  uint *local_58;
  byte local_4d;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_28;
  uint local_24;
  int *local_20;
  void *local_18;
  
  if (param_2 < 0x20) {
    local_18 = (void *)0x0;
  }
  else if (*param_1 == 0x474e5089) {
    if (param_1[1] == 0xa1a0a0d) {
      local_28 = 0x10;
      local_24 = param_2;
      local_20 = param_1;
      local_30 = _malloc(0x100);
      if (local_30 == (uint *)0x0) {
        local_18 = (void *)0x0;
      }
      else {
        local_34 = 8;
        local_38 = 0;
        local_3c = local_28;
        local_40 = 0;
        local_44 = -1;
        local_48 = 0;
        local_4c = -1;
        local_4d = 0;
        do {
          if (local_3c <= local_38) {
            local_58 = _realloc(local_30,(ulong)(local_3c + local_28) * 0x10);
            if (local_58 == (uint *)0x0) {
              _free(local_30);
              return (void *)0x0;
            }
            local_3c = local_3c + local_28;
            local_30 = local_58;
          }
          local_60 = local_30 + (ulong)local_38 * 4;
          local_68 = (undefined4 *)((long)local_20 + (ulong)local_34);
          *local_60 = local_34;
          uVar4 = _wcm_yy_swap_endian_uint32(*local_68);
          local_60[2] = uVar4;
          if ((ulong)local_24 < (ulong)*local_60 + (ulong)local_60[2] + 0xc) {
            _free(local_30);
            return (void *)0x0;
          }
          local_60[1] = local_68[1];
          if ((ulong)local_24 < (ulong)*local_60 + (ulong)local_60[2] + 8) break;
          uVar4 = _wcm_yy_swap_endian_uint32
                            (*(undefined4 *)((long)local_68 + (ulong)local_60[2] + 8));
          local_60[3] = uVar4;
          local_38 = local_38 + 1;
          local_34 = local_34 + local_60[2] + 0xc;
          uVar4 = local_60[1];
          if (uVar4 == 0x444e4549) {
            local_34 = local_24;
          }
          else if (uVar4 == 0x4c546361) {
            if (local_60[2] == 8) {
              local_4c = _wcm_yy_swap_endian_uint32(local_68[2]);
              local_40 = _wcm_yy_swap_endian_uint32(local_68[3]);
            }
            else {
              local_4d = 1;
            }
          }
          else if ((uVar4 == 0x4c546366) || (uVar4 == 0x54416466)) {
            if (local_60[1] == 0x4c546366) {
              if (local_60[2] == 0x1a) {
                local_48 = local_48 + 1;
              }
              else {
                local_4d = 1;
              }
            }
            if (local_60[2] < 5) {
              local_4d = 1;
            }
            else {
              local_6c = _wcm_yy_swap_endian_uint32(local_68[2]);
              if (local_44 + 1 == local_6c) {
                local_44 = local_44 + 1;
              }
              else {
                local_4d = 1;
              }
            }
          }
        } while (local_34 + 0xc <= local_24);
        if (((local_38 < 3) || (local_30[1] != 0x52444849)) || (local_30[2] != 0xd)) {
          _free(local_30);
          local_18 = (void *)0x0;
        }
        else {
          local_78 = _calloc(1,0x48);
          if (local_78 == (void *)0x0) {
            _free(local_30);
            local_18 = (void *)0x0;
          }
          else {
            *(uint **)((long)local_78 + 0x10) = local_30;
            *(uint *)((long)local_78 + 0x18) = local_38;
            _wcm_yy_png_chunk_IHDR_read(local_78,(long)local_20 + (ulong)*local_30 + 8);
            if ((((local_4d & 1) == 0) && (local_4c == local_48)) && (0 < local_4c)) {
              local_79 = 0;
              local_80 = 0;
              uVar5 = _wcm_yy_png_validate_animation_chunk_order
                                (*(undefined8 *)((long)local_78 + 0x10),
                                 *(undefined4 *)((long)local_78 + 0x18),&local_80,&local_79);
              if ((uVar5 & 1) == 0) {
                return local_78;
              }
              *(undefined4 *)((long)local_78 + 0x2c) = local_40;
              *(int *)((long)local_78 + 0x28) = local_4c;
              *(byte *)((long)local_78 + 0x44) = local_79 & 1;
              *(undefined4 *)((long)local_78 + 0x40) = local_80;
              pvVar6 = _calloc((long)local_4c,0x28);
              *(void **)((long)local_78 + 0x20) = pvVar6;
              if (*(long *)((long)local_78 + 0x20) == 0) {
                _wcm_yy_png_info_release(local_78);
                return (void *)0x0;
              }
              pvVar6 = _calloc((ulong)*(uint *)((long)local_78 + 0x18),4);
              *(void **)((long)local_78 + 0x30) = pvVar6;
              if (*(long *)((long)local_78 + 0x30) == 0) {
                _wcm_yy_png_info_release(local_78);
                return (void *)0x0;
              }
              local_84 = -1;
              local_90 = *(uint **)((long)local_78 + 0x30);
              for (local_94 = 0; local_94 < *(uint *)((long)local_78 + 0x18);
                  local_94 = local_94 + 1) {
                puVar1 = (uint *)(*(long *)((long)local_78 + 0x10) + (long)(int)local_94 * 0x10);
                uVar4 = puVar1[1];
                if (uVar4 != 0x4c546361) {
                  if (uVar4 == 0x4c546366) {
                    local_84 = local_84 + 1;
                    piVar2 = (int *)(*(long *)((long)local_78 + 0x20) + (long)local_84 * 0x28);
                    *piVar2 = local_94 + 1;
                    _wcm_yy_png_chunk_fcTL_read(piVar2 + 3,(long)local_20 + (ulong)*puVar1 + 8);
                  }
                  else if (uVar4 == 0x54414449) {
                    if (*(int *)((long)local_78 + 0x40) == 0) {
                      *(uint *)((long)local_78 + 0x40) = local_94;
                    }
                    if ((local_79 & 1) != 0) {
                      lVar3 = *(long *)((long)local_78 + 0x20) + (long)local_84 * 0x28;
                      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
                      *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + puVar1[2] + 0xc;
                    }
                  }
                  else if (uVar4 == 0x54416466) {
                    lVar3 = *(long *)((long)local_78 + 0x20) + (long)local_84 * 0x28;
                    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
                    *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + puVar1[2] + 0xc;
                  }
                  else {
                    *local_90 = local_94;
                    local_90 = local_90 + 1;
                    *(uint *)((long)local_78 + 0x3c) =
                         *(int *)((long)local_78 + 0x3c) + puVar1[2] + 0xc;
                    *(int *)((long)local_78 + 0x38) = *(int *)((long)local_78 + 0x38) + 1;
                  }
                }
              }
            }
            local_18 = local_78;
          }
        }
      }
    }
    else {
      local_18 = (void *)0x0;
    }
  }
  else {
    local_18 = (void *)0x0;
  }
  return local_18;
}

