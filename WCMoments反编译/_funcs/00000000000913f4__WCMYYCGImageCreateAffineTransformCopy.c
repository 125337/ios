// _WCMYYCGImageCreateAffineTransformCopy @0x913f4

long _WCMYYCGImageCreateAffineTransformCopy
               (double param_1,double param_2,long param_3,void *param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_12c;
  undefined1 auStack_128 [48];
  long local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  uint local_4c;
  void *local_48;
  long local_40;
  double local_38;
  double local_30;
  
  if (param_3 != 0) {
    local_4c = param_5;
    local_48 = param_4;
    local_40 = param_3;
    local_38 = param_1;
    local_30 = param_2;
    local_58 = _CGImageGetWidth(param_3);
    local_60 = _CGImageGetHeight(local_40);
    local_68 = (long)local_38;
    local_70 = (long)local_30;
    if ((((local_58 != 0) && (local_60 != 0)) && (local_68 != 0)) && (local_70 != 0)) {
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      uStack_a8 = 0;
      local_b0 = (void *)0x0;
      uStack_98 = 0;
      local_a0 = 0;
      lStack_c8 = 0;
      local_d0 = (void *)0x0;
      lStack_b8 = 0;
      local_c0 = 0;
      uStack_e8 = 0;
      local_f0 = (void *)0x0;
      uStack_d8 = 0;
      local_e0 = 0;
      uVar4 = _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat(local_40,&local_b0,4);
      if ((uVar4 & 1) != 0) {
        local_f8 = _WCMYYImageByteAlign(local_68 << 2,0x20);
        local_d0 = _malloc(local_70 * local_f8);
        if (local_d0 != (void *)0x0) {
          local_c0 = local_68;
          lStack_c8 = local_70;
          lStack_b8 = local_f8;
          _memcpy(auStack_128,param_4,0x30);
          local_12c = 0;
          lVar5 = _vImageAffineWarpCG_ARGB8888(&local_b0,&local_d0,0,auStack_128,&local_12c,4);
          if (lVar5 == 0) {
            _free(local_b0);
            local_b0 = (void *)0x0;
            local_78 = _CGDataProviderCreateWithData
                                 (local_d0,local_d0,local_70 * local_f8,
                                  _WCMYYCGDataProviderReleaseDataCallback);
            lVar3 = local_68;
            lVar2 = local_70;
            lVar5 = local_f8;
            if (local_78 != 0) {
              local_d0 = (void *)0x0;
              uVar6 = _WCMYYCGColorSpaceGetDeviceRGB();
              local_88 = _CGImageCreate(lVar3,lVar2,8,0x20,lVar5,uVar6,4,local_78);
              if (local_88 != 0) {
                _CFRelease(local_78);
                local_78 = 0;
                iVar1 = (local_4c & 0x1f) - 4;
                if ((iVar1 == 0) && (iVar1 = 0, (local_4c & 0x7000) != 0x2000)) {
                  return local_88;
                }
                uVar4 = _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat
                                  (iVar1,local_88,&local_f0,local_4c);
                if ((uVar4 & 1) != 0) {
                  _CFRelease(local_88);
                  local_88 = 0;
                  local_80 = _CGDataProviderCreateWithData
                                       (local_f0,local_f0,local_70 * local_f8,
                                        _WCMYYCGDataProviderReleaseDataCallback);
                  lVar3 = local_68;
                  lVar2 = local_70;
                  lVar5 = local_f8;
                  if (local_80 != 0) {
                    local_f0 = (void *)0x0;
                    uVar6 = _WCMYYCGColorSpaceGetDeviceRGB();
                    local_90 = _CGImageCreate(lVar3,lVar2,8,0x20,lVar5,uVar6,local_4c,local_80);
                    if (local_90 != 0) {
                      _CFRelease(local_80);
                      return local_90;
                    }
                    local_90 = 0;
                  }
                }
              }
            }
          }
        }
        if (local_b0 != (void *)0x0) {
          _free(local_b0);
        }
        if (local_d0 != (void *)0x0) {
          _free(local_d0);
        }
        if (local_f0 != (void *)0x0) {
          _free(local_f0);
        }
        if (local_78 != 0) {
          _CFRelease(local_78);
        }
        if (local_88 != 0) {
          _CFRelease(local_88);
        }
        if (local_80 != 0) {
          _CFRelease(local_80);
        }
      }
    }
  }
  return 0;
}

