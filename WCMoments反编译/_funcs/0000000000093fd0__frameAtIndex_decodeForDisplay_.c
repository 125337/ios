// _frameAtIndex:decodeForDisplay: @0x93fd0

/* Function Stack Size: 0x1c bytes */

ID WCMYYImageDecoder::_frameAtIndex_decodeForDisplay_
             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ID IVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 local_110;
  long local_f8;
  uint local_ec;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_64;
  long local_60;
  byte local_52;
  byte local_51;
  undefined8 local_50;
  byte local_41;
  unsigned_long_long local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  
  local_41 = (byte)param_4;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  uVar3 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x70));
  if (param_3 < uVar3) {
    _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(local_30 + 0x70),local_110,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_50 = _objc_msgSend_copy(uVar4,local_110);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_51 = 0;
    local_52 = 0;
    if ((*(long *)(local_30 + 0xa0) != 5) && ((local_41 & 1) != 0)) {
      local_52 = 1;
    }
    if ((*(byte *)(local_30 + 0x78) & 1) == 0) {
      local_60 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                           (local_30,local_110,local_40,local_52,&local_51);
      if (local_60 == 0) {
        local_28 = 0;
        local_64 = 1;
      }
      else {
        if ((((local_41 & 1) != 0) && ((local_51 & 1) == 0)) &&
           (local_70 = _WCMYYCGImageCreateDecodedCopy(local_60,1), local_70 != 0)) {
          _CFRelease(local_60);
          local_60 = local_70;
          local_51 = 1;
        }
        _objc_msgSend_imageWithCGImage_scale_orientation_
                  (*(undefined8 *)(local_30 + 0xa8),&_OBJC_CLASS___UIImage,local_110,local_60,
                   *(undefined8 *)(local_30 + 0x60));
        local_78 = _objc_retainAutoreleasedReturnValue();
        _CFRelease(local_60);
        if (local_78 == 0) {
          local_28 = 0;
        }
        else {
          _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_78,local_110,local_51 & 1);
          _objc_msgSend_setImage_(local_50,local_110,local_78);
          local_28 = (*(code *)PTR__objc_retain_00110460)(local_50);
        }
        local_64 = 1;
        _objc_storeStrong(&local_78,0);
      }
    }
    else {
      uVar3 = _objc_msgSend__createBlendContextIfNeeded(local_30,local_110);
      if ((uVar3 & 1) == 0) {
        local_28 = 0;
        local_64 = 1;
      }
      else {
        local_80 = 0;
        lVar8 = *(long *)(local_30 + 0x80);
        lVar5 = _objc_msgSend_index(local_50,local_110);
        if (lVar8 + 1 == lVar5) {
          local_80 = _objc_msgSend__newBlendedImageWithFrame_(0,local_30,local_110,local_50);
          *(unsigned_long_long *)(local_30 + 0x80) = local_40;
        }
        else {
          *(undefined8 *)(local_30 + 0x80) = 0x7fffffffffffffff;
          uVar4 = *(undefined8 *)(local_30 + 0x88);
          uVar12 = NEON_ucvtf(*(undefined8 *)(local_30 + 0xc0));
          uVar13 = NEON_ucvtf(*(undefined8 *)(local_30 + 200));
          uVar11 = 0;
          local_a0 = _CGRectMake(0);
          local_98 = uVar11;
          local_90 = uVar12;
          local_88 = uVar13;
          _CGContextClearRect(local_a0,uVar11,uVar12,uVar13,uVar4);
          lVar5 = _objc_msgSend_blendFromIndex(local_50,local_110);
          lVar8 = _objc_msgSend_index(local_50,local_110);
          if (lVar5 - lVar8 == 0) {
            local_a8 = _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_
                                 (local_30,local_110,local_40,0,0);
            if (local_a8 != 0) {
              uVar4 = *(undefined8 *)(local_30 + 0x88);
              uVar3 = _objc_msgSend_offsetX(local_50,local_110);
              uVar6 = _objc_msgSend_offsetY(local_50,local_110);
              dVar9 = (double)uVar6;
              uVar6 = _objc_msgSend_width(local_50,local_110);
              dVar10 = (double)uVar6;
              uVar6 = _objc_msgSend_height(local_50,local_110);
              dVar14 = (double)uVar6;
              local_c8 = _CGRectMake((double)uVar3);
              local_c0 = dVar9;
              local_b8 = dVar10;
              local_b0 = dVar14;
              _CGContextDrawImage(local_c8,dVar9,dVar10,dVar14,uVar4,local_a8);
              _CFRelease(local_a8);
            }
            local_80 = _CGBitmapContextCreateImage(*(undefined8 *)(local_30 + 0x88));
            lVar5 = _objc_msgSend_dispose(local_50,local_110);
            if (lVar5 == 1) {
              uVar4 = *(undefined8 *)(local_30 + 0x88);
              uVar3 = _objc_msgSend_offsetX(local_50,local_110);
              uVar6 = _objc_msgSend_offsetY(local_50,local_110);
              dVar9 = (double)uVar6;
              uVar6 = _objc_msgSend_width(local_50,local_110);
              dVar10 = (double)uVar6;
              uVar6 = _objc_msgSend_height(local_50,local_110);
              dVar14 = (double)uVar6;
              local_e8 = _CGRectMake((double)uVar3);
              local_e0 = dVar9;
              local_d8 = dVar10;
              local_d0 = dVar14;
              _CGContextClearRect(local_e8,dVar9,dVar10,dVar14,uVar4);
            }
            *(unsigned_long_long *)(local_30 + 0x80) = local_40;
          }
          else {
            for (local_ec = _objc_msgSend_blendFromIndex(lVar5 - lVar8,local_50,local_110);
                uVar1 = local_ec, uVar2 = _objc_msgSend_index(local_50,local_110), uVar1 <= uVar2;
                local_ec = local_ec + 1) {
              uVar6 = (ulong)local_ec;
              uVar3 = _objc_msgSend_index(local_50,local_110);
              IVar7 = local_30;
              if (uVar6 == uVar3) {
                if (local_80 == 0) {
                  local_80 = _objc_msgSend__newBlendedImageWithFrame_(local_30,local_110,local_50);
                }
              }
              else {
                _objc_msgSend_objectAtIndexedSubscript_
                          (*(undefined8 *)(local_30 + 0x70),local_110,local_ec);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend__blendImageWithFrame_(IVar7,local_110);
                (*(code *)PTR__objc_release_00110458)(uVar4);
              }
            }
            *(unsigned_long_long *)(local_30 + 0x80) = local_40;
          }
        }
        if (local_80 == 0) {
          local_28 = 0;
          local_64 = 1;
        }
        else {
          _objc_msgSend_imageWithCGImage_scale_orientation_
                    (*(undefined8 *)(local_30 + 0xa8),&_OBJC_CLASS___UIImage,local_110,local_80,
                     *(undefined8 *)(local_30 + 0x60));
          local_f8 = _objc_retainAutoreleasedReturnValue();
          _CFRelease(local_80);
          if (local_f8 == 0) {
            local_28 = 0;
          }
          else {
            _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_f8,local_110,1);
            _objc_msgSend_setImage_(local_50,local_110,local_f8);
            if ((local_52 & 1) != 0) {
              _objc_msgSend_setWidth_(local_50,local_110,*(undefined8 *)(local_30 + 0xc0));
              _objc_msgSend_setHeight_(local_50,local_110,*(undefined8 *)(local_30 + 200));
              _objc_msgSend_setOffsetX_(local_50,local_110);
              _objc_msgSend_setOffsetY_(local_50,local_110,0);
              _objc_msgSend_setDispose_(local_50,local_110,0);
              _objc_msgSend_setBlend_(local_50,local_110,0);
            }
            local_28 = (*(code *)PTR__objc_retain_00110460)(local_50);
          }
          local_64 = 1;
          _objc_storeStrong(&local_f8,0);
        }
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_28 = 0;
  }
  IVar7 = _objc_autoreleaseReturnValue(local_28);
  return IVar7;
}

