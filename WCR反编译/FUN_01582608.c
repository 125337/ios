// FUN_01582608 @ 01582608

void FUN_01582608(undefined8 param_1)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_34;
  long local_30;
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGImage_0269e0e8);
    local_30 = lVar1;
    if (lVar1 == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar2 = &local_34;
      local_34 = 0;
      _CGColorSpaceCreateDeviceRGB();
      _CGBitmapContextCreate(puVar2,1,1,8,4,lVar1,1);
      _CGColorSpaceRelease(lVar1);
      if (puVar2 == (uint *)0x0) {
        local_18 = (undefined *)0x0;
      }
      else {
        uVar5 = 0;
        uVar4 = 0;
        uVar7 = 0x3ff0000000000000;
        uVar6 = 0x3ff0000000000000;
        FUN_0152a0a0();
        _CGContextDrawImage(uVar4,uVar5,uVar6,uVar7,puVar2,local_30);
        _CGContextRelease(puVar2);
        if (DAT_02323db0 < (double)(local_34 >> 0x18) / 255.0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    ((double)(local_34 & 0xff) / 255.0,(double)(local_34 >> 8 & 0xff) / 255.0,
                     (double)(local_34 >> 0x10 & 0xff) / 255.0,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar3;
        }
        else {
          local_18 = (undefined *)0x0;
        }
      }
    }
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

