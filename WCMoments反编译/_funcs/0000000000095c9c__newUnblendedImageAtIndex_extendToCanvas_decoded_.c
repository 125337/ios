// _newUnblendedImageAtIndex:extendToCanvas:decoded: @0x95c9c

/* Function Stack Size: 0x24 bytes */

CGImage * WCMYYImageDecoder::_newUnblendedImageAtIndex_extendToCanvas_decoded_
                    (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4,bool *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  CGImage *pCVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_128;
  CGImage *local_f8;
  undefined4 local_d8;
  undefined4 local_d4;
  CGImage *local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  CGImage *local_a0;
  long local_98;
  long local_90;
  CGImage *local_88;
  undefined8 local_80;
  bool *local_78;
  byte local_69;
  ulong local_68;
  SEL local_60;
  ID local_58;
  CGImage *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_69 = (byte)param_4;
  local_78 = param_5;
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_1;
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && (param_3 != 0)) {
    local_50 = (CGImage *)0x0;
  }
  else {
    uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x70),local_128);
    if (local_68 < uVar1) {
      _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(local_58 + 0x70),local_128,local_68);
      local_80 = _objc_retainAutoreleasedReturnValue();
      uVar1 = local_68;
      if (*(long *)(local_58 + 0x50) == 0) {
        if (*(long *)(local_58 + 0x58) == 0) {
          local_50 = (CGImage *)0x0;
        }
        else {
          local_d8 = 0;
          uVar2 = _objc_msgSend_bytes(*(undefined8 *)(local_58 + 0x98),local_128);
          pvVar5 = (void *)_wcm_yy_png_copy_frame_data_at_index
                                     (uVar2,*(undefined8 *)(local_58 + 0x58),local_68,&local_d8);
          if (pvVar5 == (void *)0x0) {
            local_50 = (CGImage *)0x0;
          }
          else {
            lVar4 = _CGDataProviderCreateWithData
                              (pvVar5,pvVar5,local_d8,_WCMYYCGDataProviderReleaseDataCallback);
            if (lVar4 == 0) {
              _free(pvVar5);
              local_50 = (CGImage *)0x0;
            }
            else {
              lVar6 = _CGImageSourceCreateWithDataProvider(lVar4,0);
              if (lVar6 == 0) {
                _CFRelease(lVar4);
                local_50 = (CGImage *)0x0;
              }
              else {
                _CFRelease(lVar4);
                lVar4 = _CGImageSourceGetCount(lVar6);
                if (lVar4 == 0) {
                  _CFRelease(0xffffffffffffffff,lVar6);
                  local_50 = (CGImage *)0x0;
                }
                else {
                  local_48 = *(undefined8 *)PTR__kCGImageSourceShouldCache_001102d8;
                  local_40 = PTR____kCFBooleanTrue_00110730;
                  _objc_msgSend_dictionaryWithObjects_forKeys_count_
                            (&_OBJC_CLASS___NSDictionary,local_128,&local_40,&local_48,1);
                  uVar2 = _objc_retainAutoreleasedReturnValue();
                  local_f8 = (CGImage *)_CGImageSourceCreateImageAtIndex(lVar6,0);
                  (*(code *)PTR__objc_release_00110458)(uVar2);
                  _CFRelease(lVar6);
                  if (local_f8 == (CGImage *)0x0) {
                    local_50 = (CGImage *)0x0;
                  }
                  else {
                    if ((local_69 & 1) != 0) {
                      uVar8 = *(undefined8 *)(local_58 + 0xc0);
                      uVar9 = *(undefined8 *)(local_58 + 200);
                      uVar2 = _WCMYYCGColorSpaceGetDeviceRGB();
                      lVar4 = _CGBitmapContextCreate(0,uVar8,uVar9,8,0,uVar2,&DAT_00002002);
                      if (lVar4 != 0) {
                        uVar1 = _objc_msgSend_offsetX(local_80,local_128);
                        uVar7 = _objc_msgSend_offsetY(local_80,local_128);
                        dVar11 = (double)uVar7;
                        uVar7 = _objc_msgSend_width(local_80,local_128);
                        dVar10 = (double)uVar7;
                        uVar7 = _objc_msgSend_height(local_80,local_128);
                        dVar12 = (double)uVar7;
                        uVar2 = _CGRectMake((double)uVar1);
                        _CGContextDrawImage(uVar2,dVar11,dVar10,dVar12,lVar4,local_f8);
                        _CFRelease(local_f8);
                        local_f8 = (CGImage *)_CGBitmapContextCreateImage(lVar4);
                        _CFRelease(lVar4);
                        if (local_78 != (bool *)0x0) {
                          *(undefined1 *)local_78 = 1;
                        }
                      }
                    }
                    local_50 = local_f8;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar8 = *(undefined8 *)(local_58 + 0x50);
        local_38 = *(undefined8 *)PTR__kCGImageSourceShouldCache_001102d8;
        local_30 = PTR____kCFBooleanTrue_00110730;
        _objc_msgSend_dictionaryWithObjects_forKeys_count_
                  (&_OBJC_CLASS___NSDictionary,local_128,&local_30,&local_38,1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        pCVar3 = (CGImage *)_CGImageSourceCreateImageAtIndex(uVar8,uVar1);
        (*(code *)PTR__objc_release_00110458)(uVar2);
        local_88 = pCVar3;
        if ((pCVar3 != (CGImage *)0x0) && ((local_69 & 1) != 0)) {
          local_90 = _CGImageGetWidth(pCVar3);
          local_98 = _CGImageGetHeight(local_88);
          if ((local_90 == *(long *)(local_58 + 0xc0)) && (local_98 == *(long *)(local_58 + 200))) {
            local_a0 = (CGImage *)_WCMYYCGImageCreateDecodedCopy(local_88,1);
            if (local_a0 != (CGImage *)0x0) {
              _CFRelease(local_88);
              local_88 = local_a0;
              if (local_78 != (bool *)0x0) {
                *(undefined1 *)local_78 = 1;
              }
            }
          }
          else {
            uVar8 = *(undefined8 *)(local_58 + 0xc0);
            uVar9 = *(undefined8 *)(local_58 + 200);
            uVar2 = _WCMYYCGColorSpaceGetDeviceRGB();
            lVar4 = _CGBitmapContextCreate(0,uVar8,uVar9,8,0,uVar2,&DAT_00002002);
            local_a8 = lVar4;
            if (lVar4 != 0) {
              dVar11 = (double)(ulong)(*(long *)(local_58 + 200) - local_98);
              uVar2 = NEON_ucvtf(local_90);
              uVar8 = NEON_ucvtf(local_98);
              local_c8 = _CGRectMake(0);
              local_c0 = dVar11;
              local_b8 = uVar2;
              local_b0 = uVar8;
              _CGContextDrawImage(local_c8,dVar11,uVar2,uVar8,lVar4,local_88);
              local_d0 = (CGImage *)_CGBitmapContextCreateImage(local_a8);
              _CFRelease(local_a8);
              if (local_d0 != (CGImage *)0x0) {
                _CFRelease(local_88);
                local_88 = local_d0;
                if (local_78 != (bool *)0x0) {
                  *(undefined1 *)local_78 = 1;
                }
              }
            }
          }
        }
        local_50 = local_88;
      }
      local_d4 = 1;
      _objc_storeStrong(&local_80,0);
    }
    else {
      local_50 = (CGImage *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

