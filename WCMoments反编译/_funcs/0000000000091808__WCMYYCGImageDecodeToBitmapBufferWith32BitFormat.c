// _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat @0x91808

undefined1 _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_c8;
  size_t local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_70;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  long local_50;
  long local_48;
  uint local_3c;
  long *local_38;
  long local_30;
  
  if ((param_1 == 0) || (param_2 == (long *)0x0)) {
    return 0;
  }
  local_3c = param_3;
  local_38 = param_2;
  local_30 = param_1;
  local_48 = _CGImageGetWidth(param_1);
  local_50 = _CGImageGetHeight(local_30);
  if ((local_48 == 0) || (local_50 == 0)) {
    return 0;
  }
  local_51 = 0;
  local_52 = 0;
  local_53 = 0;
  local_54 = 0;
  uVar1 = local_3c & 0x1f;
  if (uVar1 == 1) {
    local_51 = 1;
    local_53 = 1;
  }
  else if (uVar1 == 2) {
    local_51 = 1;
    local_53 = 1;
    local_52 = 1;
  }
  else if (uVar1 == 3) {
    local_51 = 1;
  }
  else if (uVar1 == 4) {
    local_51 = 1;
    local_52 = 1;
  }
  else if (uVar1 != 5) {
    if (uVar1 != 6) {
      return 0;
    }
    local_52 = 1;
  }
  uVar1 = local_3c & 0x7000;
  if (uVar1 == 0) {
    local_54 = 1;
  }
  else if (uVar1 != 0x2000) {
    if (uVar1 != 0x4000) {
      return 0;
    }
    local_54 = 1;
  }
  _memset(&local_80,0,0x28);
  local_80 = 8;
  local_7c = 0x20;
  local_78 = _WCMYYCGColorSpaceGetDeviceRGB();
  local_70 = local_3c;
  *local_38 = 0;
  uVar3 = _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat(local_30,local_38,&local_80);
  lVar2 = local_48;
  lVar5 = local_50;
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if (((local_51 & 1) == 0) || ((local_53 & 1) != 0)) {
    local_84 = local_3c & 0x701f;
  }
  else {
    local_84 = 2;
    if ((local_52 & 1) == 0) {
      local_84 = 1;
    }
    local_84 = local_3c & 0x7000 | local_84;
  }
  uVar4 = _WCMYYCGColorSpaceGetDeviceRGB();
  lVar5 = _CGBitmapContextCreate(0,lVar2,lVar5,8,0,uVar4,local_84);
  local_90 = lVar5;
  if (lVar5 != 0) {
    uVar7 = NEON_ucvtf(local_48);
    uVar8 = NEON_ucvtf(local_50);
    uVar4 = 0;
    local_b0 = _CGRectMake(0);
    local_a8 = uVar4;
    local_a0 = uVar7;
    local_98 = uVar8;
    _CGContextDrawImage(local_b0,uVar4,uVar7,uVar8,lVar5,local_30);
    local_b8 = _CGBitmapContextGetBytesPerRow(local_90);
    local_c0 = local_50 * local_b8;
    local_c8 = _CGBitmapContextGetData(local_90);
    if ((local_c0 != 0) && (local_c8 != 0)) {
      pvVar6 = _malloc(local_c0);
      *local_38 = (long)pvVar6;
      local_38[2] = local_48;
      local_38[1] = local_50;
      local_38[3] = local_b8;
      if (*local_38 != 0) {
        if (((local_51 & 1) == 0) || ((local_53 & 1) != 0)) {
          ___memcpy_chk(*local_38,local_c8,local_c0,0xffffffffffffffff);
        }
        else {
          local_f0 = local_c8;
          local_e0 = local_48;
          lStack_e8 = local_50;
          lStack_d8 = local_b8;
          if (((local_52 & 1) == 0) || ((local_54 & 1) == 0)) {
            local_f8 = _vImageUnpremultiplyData_RGBA8888(&local_f0,local_38,0);
          }
          else {
            local_f8 = _vImageUnpremultiplyData_ARGB8888(&local_f0,local_38,0);
          }
          if (local_f8 != 0) goto LAB_00091c98;
        }
        _CFRelease(local_90);
        return 1;
      }
    }
  }
LAB_00091c98:
  if (local_90 != 0) {
    _CFRelease(local_90);
  }
  if (*local_38 != 0) {
    _free((void *)*local_38);
  }
  *local_38 = 0;
  return 0;
}

