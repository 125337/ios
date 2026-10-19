// _WCMYYCGImageCreateCopyWithOrientation @0x91f70

undefined8 _WCMYYCGImageCreateCopyWithOrientation(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_5a8 [48];
  undefined8 local_578;
  undefined8 local_570;
  undefined1 auStack_568 [48];
  undefined1 auStack_538 [48];
  undefined1 auStack_508 [48];
  undefined1 auStack_4d8 [48];
  undefined1 auStack_4a8 [48];
  undefined1 auStack_478 [48];
  undefined1 auStack_448 [48];
  undefined1 auStack_418 [48];
  undefined1 auStack_3e8 [48];
  undefined1 auStack_3b8 [48];
  undefined1 auStack_388 [48];
  undefined1 auStack_358 [48];
  undefined1 auStack_328 [48];
  undefined1 auStack_2f8 [48];
  undefined1 auStack_2c8 [48];
  undefined1 auStack_298 [48];
  undefined1 auStack_268 [48];
  undefined1 auStack_238 [48];
  undefined1 auStack_208 [48];
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [48];
  undefined1 auStack_148 [48];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [55];
  byte local_81;
  undefined1 auStack_80 [48];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_3;
    local_38 = param_2;
    local_30 = param_1;
    if (param_2 == 0) {
      local_28 = _CFRetain(param_1);
    }
    else {
      local_48 = _CGImageGetWidth(param_1);
      local_50 = _CGImageGetHeight(local_30);
      _memcpy(auStack_80,PTR__CGAffineTransformIdentity_00110738,0x30);
      local_81 = 0;
      if (local_38 == 1) {
        _WCMYYImageDegreesToRadians(0x4066800000000000);
        _CGAffineTransformMakeRotation();
        _memcpy(auStack_80,auStack_b8,0x30);
        dVar5 = (double)NEON_ucvtf(local_48);
        dVar6 = (double)NEON_ucvtf(local_50);
        _memcpy(auStack_118,auStack_80,0x30);
        _CGAffineTransformTranslate(-dVar5,-dVar6,auStack_118);
        _memcpy(auStack_80,auStack_e8,0x30);
      }
      else if (local_38 == 2) {
        _WCMYYImageDegreesToRadians(0x4056800000000000);
        _CGAffineTransformMakeRotation();
        _memcpy(auStack_80,auStack_148,0x30);
        dVar5 = (double)NEON_ucvtf(local_50);
        _memcpy(auStack_1a8,auStack_80,0x30);
        _CGAffineTransformTranslate(0x8000000000000000,-dVar5,auStack_1a8);
        _memcpy(auStack_80,auStack_178,0x30);
        local_81 = 1;
      }
      else if (local_38 == 3) {
        _WCMYYImageDegreesToRadians(0xc056800000000000);
        _CGAffineTransformMakeRotation();
        _memcpy(auStack_80,auStack_1d8,0x30);
        dVar5 = (double)NEON_ucvtf(local_48);
        _memcpy(auStack_238,auStack_80,0x30);
        _CGAffineTransformTranslate(-dVar5,0,auStack_238);
        _memcpy(auStack_80,auStack_208,0x30);
        local_81 = 1;
      }
      else if (local_38 == 4) {
        uVar4 = NEON_ucvtf(local_48);
        _memcpy(auStack_298,auStack_80,0x30);
        _CGAffineTransformTranslate(uVar4,0,auStack_298);
        _memcpy(auStack_80,auStack_268,0x30);
        _memcpy(auStack_2f8,auStack_80,0x30);
        _CGAffineTransformScale(0xbff0000000000000,0x3ff0000000000000,auStack_2f8);
        _memcpy(auStack_80,auStack_2c8,0x30);
      }
      else if (local_38 == 5) {
        uVar4 = NEON_ucvtf(local_50);
        _memcpy(auStack_358,auStack_80,0x30);
        _CGAffineTransformTranslate(0,uVar4,auStack_358);
        _memcpy(auStack_80,auStack_328,0x30);
        _memcpy(auStack_3b8,auStack_80,0x30);
        _CGAffineTransformScale(0x3ff0000000000000,0xbff0000000000000,auStack_3b8);
        _memcpy(auStack_80,auStack_388,0x30);
      }
      else if (local_38 == 6) {
        _WCMYYImageDegreesToRadians(0xc056800000000000);
        _CGAffineTransformMakeRotation();
        _memcpy(auStack_80,auStack_3e8,0x30);
        _memcpy(auStack_448,auStack_80,0x30);
        _CGAffineTransformScale(0x3ff0000000000000,0xbff0000000000000,auStack_448);
        _memcpy(auStack_80,auStack_418,0x30);
        dVar5 = (double)NEON_ucvtf(local_48);
        dVar6 = (double)NEON_ucvtf(local_50);
        _memcpy(auStack_4a8,auStack_80,0x30);
        _CGAffineTransformTranslate(-dVar5,-dVar6,auStack_4a8);
        _memcpy(auStack_80,auStack_478,0x30);
        local_81 = 1;
      }
      else if (local_38 == 7) {
        _WCMYYImageDegreesToRadians(0x4056800000000000);
        _CGAffineTransformMakeRotation();
        _memcpy(auStack_80,auStack_4d8,0x30);
        _memcpy(auStack_538,auStack_80,0x30);
        _CGAffineTransformScale(0x3ff0000000000000,0xbff0000000000000,auStack_538);
        _memcpy(auStack_80,auStack_508,0x30);
        local_81 = 1;
      }
      _memcpy(auStack_568,auStack_80,0x30);
      uVar3 = _CGAffineTransformIsIdentity(auStack_568);
      lVar2 = local_30;
      uVar1 = local_3c;
      if ((uVar3 & 1) == 0) {
        local_578 = NEON_ucvtf(local_48);
        local_570 = NEON_ucvtf(local_50);
        if ((local_81 & 1) != 0) {
          local_578 = NEON_ucvtf(local_50);
          local_570 = NEON_ucvtf(local_48);
        }
        _memcpy(auStack_5a8,auStack_80,0x30);
        local_28 = _WCMYYCGImageCreateAffineTransformCopy
                             (local_578,local_570,lVar2,auStack_5a8,uVar1);
      }
      else {
        local_28 = _CFRetain(local_30);
      }
    }
  }
  return local_28;
}

