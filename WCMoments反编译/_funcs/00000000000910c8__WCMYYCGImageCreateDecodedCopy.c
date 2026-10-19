// _WCMYYCGImageCreateDecodedCopy @0x910c8

undefined8 _WCMYYCGImageCreateDecodedCopy(long param_1,byte param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    lVar4 = _CGImageGetWidth(param_1);
    lVar5 = _CGImageGetHeight(param_1);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      local_18 = 0;
    }
    else if ((param_2 & 1) == 0) {
      uVar6 = _CGImageGetColorSpace(param_1);
      uVar10 = _CGImageGetBitsPerComponent(param_1);
      uVar11 = _CGImageGetBitsPerPixel(param_1);
      lVar7 = _CGImageGetBytesPerRow(param_1);
      uVar3 = _CGImageGetBitmapInfo(param_1);
      if (((lVar7 == 0) || (lVar4 == 0)) || (lVar5 == 0)) {
        local_18 = 0;
      }
      else {
        lVar8 = _CGImageGetDataProvider(param_1);
        if (lVar8 == 0) {
          local_18 = 0;
        }
        else {
          lVar8 = _CGDataProviderCopyData(lVar8);
          if (lVar8 == 0) {
            local_18 = 0;
          }
          else {
            lVar9 = _CGDataProviderCreateWithCFData(lVar8);
            _CFRelease(lVar8);
            if (lVar9 == 0) {
              local_18 = 0;
            }
            else {
              local_18 = _CGImageCreate(lVar4,lVar5,uVar10,uVar11,lVar7,uVar6,uVar3,lVar9);
              _CFRelease(lVar9);
            }
          }
        }
      }
    }
    else {
      uVar2 = _CGImageGetAlphaInfo(param_1);
      uVar2 = uVar2 & 0x1f;
      bVar1 = false;
      if (((uVar2 == 1) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 4)))) {
        bVar1 = true;
      }
      uVar2 = 2;
      if (!bVar1) {
        uVar2 = 6;
      }
      uVar6 = _WCMYYCGColorSpaceGetDeviceRGB();
      lVar7 = _CGBitmapContextCreate(0,lVar4,lVar5,8,0,uVar6,uVar2 | 0x2000);
      if (lVar7 == 0) {
        local_18 = 0;
      }
      else {
        uVar11 = NEON_ucvtf(lVar4);
        uVar12 = NEON_ucvtf(lVar5);
        uVar10 = 0;
        uVar6 = _CGRectMake(0);
        _CGContextDrawImage(uVar6,uVar10,uVar11,uVar12,lVar7,param_1);
        local_18 = _CGBitmapContextCreateImage(lVar7);
        _CFRelease(lVar7);
      }
    }
  }
  return local_18;
}

