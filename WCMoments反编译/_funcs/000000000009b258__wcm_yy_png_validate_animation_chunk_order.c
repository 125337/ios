// _wcm_yy_png_validate_animation_chunk_order @0x9b258

undefined1
_wcm_yy_png_validate_animation_chunk_order
          (long param_1,uint param_2,uint *param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint local_48;
  undefined1 local_41;
  uint local_40;
  int local_3c;
  int local_34;
  int local_2c;
  undefined1 local_1;
  
  if (param_2 < 3) {
    local_1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 0x52444849) {
    if (*(int *)(param_1 + (ulong)param_2 * 0x10 + -0xc) == 0x444e4549) {
      local_2c = 0;
      bVar3 = false;
      local_34 = 0;
      bVar4 = false;
      local_3c = 0;
      local_40 = 0;
      local_41 = 0;
      for (local_48 = 0; local_48 < param_2; local_48 = local_48 + 1) {
        lVar1 = param_1 + (ulong)local_48 * 0x10;
        iVar2 = *(int *)(lVar1 + 4);
        if (iVar2 == 0x4c546361) {
          if (bVar4) {
            return 0;
          }
          bVar4 = true;
        }
        else if (iVar2 == 0x4c546366) {
          if (local_48 + 1 == param_2) {
            return 0;
          }
          if ((*(int *)(lVar1 + 0x14) != 0x54416466) && (*(int *)(lVar1 + 0x14) != 0x54414449)) {
            return 0;
          }
          if ((local_3c == 0) && (*(int *)(lVar1 + 0x14) == 0x54414449)) {
            local_41 = 1;
          }
          local_3c = local_3c + 1;
        }
        else if (iVar2 == 0x52444849) {
          if (local_48 != 0) {
            return 0;
          }
          if (bVar3) {
            return 0;
          }
          bVar3 = true;
        }
        else if (iVar2 == 0x54414449) {
          if (local_2c != 0x54414449) {
            if (local_34 != 0) {
              return 0;
            }
            local_40 = local_48;
          }
          local_34 = local_34 + 1;
        }
        else if (((iVar2 == 0x54416466) && (local_2c != 0x54416466)) && (local_2c != 0x4c546366)) {
          return 0;
        }
        local_2c = *(int *)(lVar1 + 4);
      }
      if (bVar3) {
        if (local_34 == 0) {
          local_1 = 0;
        }
        else if (bVar4) {
          if (local_3c == 0) {
            local_1 = 0;
          }
          else {
            *param_3 = local_40;
            *param_4 = local_41;
            local_1 = 1;
          }
        }
        else {
          local_1 = 0;
        }
      }
      else {
        local_1 = 0;
      }
    }
    else {
      local_1 = 0;
    }
  }
  else {
    local_1 = 0;
  }
  return local_1;
}

