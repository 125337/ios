// colorAtPixel:inImage: @ 019113f8

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRefineColorPickerController::colorAtPixel_inImage_
          (WCRefineColorPickerController *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  undefined *puVar4;
  double in_d0;
  double dVar5;
  double in_d1;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_160;
  double local_150;
  double local_140;
  double local_d0;
  double local_c8;
  double local_c0;
  uint local_8c;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  long local_50;
  SEL local_48;
  ID local_40;
  double local_38;
  double local_30;
  undefined *local_28;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  local_38 = in_d0;
  local_30 = in_d1;
  _objc_storeStrong(&local_50,param_3.field0_0x0,param_3.field0_0x0,param_3.field1_0x8);
  lVar1 = local_50;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGImage_0269e0e8);
  local_58 = lVar1;
  if (lVar1 == 0) {
    local_28 = (undefined *)0x0;
  }
  else {
    _CGImageGetWidth();
    lVar2 = local_58;
    local_68 = lVar1;
    _CGImageGetHeight();
    local_78 = (long)local_38;
    local_80 = (long)local_30;
    local_70 = lVar2;
    if ((((local_78 < 0) || (local_80 < 0)) || (local_68 <= local_78)) || (lVar2 <= local_80)) {
      local_28 = (undefined *)0x0;
    }
    else {
      _CGColorSpaceCreateDeviceRGB(local_80 - lVar2);
      puVar3 = &local_8c;
      local_8c = 0;
      local_88 = lVar2;
      _CGBitmapContextCreate(puVar3,1,1,8,4,lVar2,0x4001);
      _CGColorSpaceRelease(local_88);
      if (puVar3 == (uint *)0x0) {
        local_28 = (undefined *)0x0;
      }
      else {
        _CGContextSetBlendMode(puVar3,0x11);
        dVar5 = (double)-local_78;
        dVar6 = (double)-((local_70 + -1) - local_80);
        uVar7 = NEON_ucvtf(local_68);
        uVar8 = NEON_ucvtf(local_70);
        FUN_018f7960();
        _CGContextDrawImage(dVar5,dVar6,uVar7,uVar8,puVar3,local_58);
        _CGContextRelease(puVar3);
        local_c0 = (double)(local_8c & 0xff) / 255.0;
        local_c8 = (double)(local_8c >> 8 & 0xff) / 255.0;
        local_d0 = (double)(local_8c >> 0x10 & 0xff) / 255.0;
        dVar5 = (double)(local_8c >> 0x18) / 255.0;
        if (0.0 < dVar5) {
          local_c0 = local_c0 / dVar5;
          local_c8 = local_c8 / dVar5;
          local_d0 = local_d0 / dVar5;
        }
        if (1.0 <= local_c0) {
          local_140 = 1.0;
        }
        else {
          local_140 = local_c0;
        }
        if (1.0 <= local_c8) {
          local_150 = 1.0;
        }
        else {
          local_150 = local_c8;
        }
        if (1.0 <= local_d0) {
          local_160 = 1.0;
        }
        else {
          local_160 = local_d0;
        }
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,local_150,local_160,dVar5,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar4;
      }
    }
  }
  local_5c = 1;
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

