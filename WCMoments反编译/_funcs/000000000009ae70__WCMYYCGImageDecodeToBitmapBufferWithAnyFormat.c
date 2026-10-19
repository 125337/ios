// _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat @0x9ae70

undefined1 _WCMYYCGImageDecodeToBitmapBufferWithAnyFormat(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long local_108;
  long local_100;
  long local_f8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_a8;
  long local_a0;
  long local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  uint local_80;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  long local_30;
  
  if ((((param_1 != 0) && (PTR__vImageConvert_AnyToAny_00110328 != (undefined *)0x0)) &&
      (param_3 != 0)) && (param_2 != (long *)0x0)) {
    local_40 = param_3;
    local_38 = param_2;
    local_30 = param_1;
    local_48 = _CGImageGetWidth(param_1);
    local_50 = _CGImageGetHeight(local_30);
    if ((local_48 != 0) && (local_50 != 0)) {
      *local_38 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      _memset(&local_90,0,0x28);
      local_90 = _CGImageGetBitsPerComponent(local_30);
      local_8c = _CGImageGetBitsPerPixel(local_30);
      local_88 = _CGImageGetColorSpace(local_30);
      uVar1 = _CGImageGetBitmapInfo(local_30);
      local_80 = _CGImageGetAlphaInfo(local_30);
      local_80 = uVar1 | local_80;
      local_68 = _vImageConverter_CreateWithCGImageFormat(&local_90,local_40,0,0);
      if (local_68 != 0) {
        local_98 = _CGImageGetDataProvider(local_30);
        if (local_98 == 0) {
          local_f8 = 0;
        }
        else {
          local_f8 = _CGDataProviderCopyData(local_98);
        }
        local_60 = local_f8;
        if (local_f8 == 0) {
          local_100 = 0;
        }
        else {
          local_100 = _CFDataGetLength(local_f8);
        }
        local_a0 = local_100;
        if (local_60 == 0) {
          local_108 = 0;
        }
        else {
          local_108 = _CFDataGetBytePtr(local_60);
        }
        local_a8 = local_108;
        if ((local_a0 != 0) && (local_108 != 0)) {
          uStack_b8 = 0;
          local_d0 = local_108;
          local_c0 = local_48;
          lStack_c8 = local_50;
          uStack_b8 = _CGImageGetBytesPerRow(local_30);
          local_58 = _vImageBuffer_Init(local_38,local_50,local_48,0x20,0);
          if ((local_58 == 0) &&
             (local_58 = _vImageConvert_AnyToAny(local_68,&local_d0,local_38,0,0), local_58 == 0)) {
            _CFRelease(local_68);
            _CFRelease(local_60);
            return 1;
          }
        }
      }
      if (local_68 != 0) {
        _CFRelease(local_68);
      }
      if (local_60 != 0) {
        _CFRelease(local_60);
      }
      if (*local_38 != 0) {
        _free((void *)*local_38);
      }
      *local_38 = 0;
    }
  }
  return 0;
}

