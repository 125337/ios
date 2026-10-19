// ============ 功能链 75  根: _objc_msgSend$_newUnblendedImageAtIndex:extendToCanvas:decoded: @0xc7420 ============
// 节点 16，按调用深度排序，自上而下读

// ---- [d0] _objc_msgSend$_newUnblendedImageAtIndex:extendToCanvas:decoded: @0xc7420 ----
// CALLERS: (根)
// CALLEES: _newUnblendedImageAtIndex:extendToCanvas:decoded:


void _objc_msgSend__newUnblendedImageAtIndex_extendToCanvas_decoded_(undefined8 param_1)



{

  (*(code *)PTR__objc_msgSend_00110420)(param_1,"_newUnblendedImageAtIndex:extendToCanvas:decoded:")

  ;

  return;

}






// ---- [d1] _newUnblendedImageAtIndex:extendToCanvas:decoded: @0x95c9c ----
// CALLERS: _objc_msgSend$_newUnblendedImageAtIndex:extendToCanvas:decoded:
// CALLEES: _CGRectMake, bytes, _WCMYYCGColorSpaceGetDeviceRGB, _WCMYYCGImageCreateDecodedCopy, _WCMYYCGDataProviderReleaseDataCallback, width, height, offsetX, offsetY, _wcm_yy_png_copy_frame_data_at_index


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






// ---- [d2] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d2] bytes @0x2ef14 ----
// CALLERS: tableView:cellForRowAtIndexPath:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke, _Digest, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _encodeAPNG, _objc_msgSend$bytes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMCacheController::bytes(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytes);

}






// ---- [d2] _WCMYYCGColorSpaceGetDeviceRGB @0x90ec0 ----
// CALLERS: ___WCMYYCGColorSpaceGetDeviceRGB_block_invoke, _WCMYYCGColorSpaceIsDeviceRGB, _WCMYYCGImageCreateDecodedCopy, _WCMYYCGImageCreateAffineTransformCopy, _WCMYYCGImageDecodeToBitmapBufferWith32BitFormat, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _createBlendContextIfNeeded, _encodeAPNG
// CALLEES: (叶)


undefined8 _WCMYYCGColorSpaceGetDeviceRGB(void)



{

  undefined8 local_20;

  long *local_18;

  

  local_18 = &_WCMYYCGColorSpaceGetDeviceRGB_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  return _WCMYYCGColorSpaceGetDeviceRGB_space;

}






// ---- [d2] _WCMYYCGImageCreateDecodedCopy @0x910c8 ----
// CALLERS: ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, _frameAtIndex:decodeForDisplay:, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _newCGImageFromIndex:decoded:, -[UIImage(WCMYYImageCoder)_wcm_yy_imageByDecoded]
// CALLEES: _CGRectMake, _WCMYYCGColorSpaceGetDeviceRGB


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






// ---- [d2] _WCMYYCGDataProviderReleaseDataCallback @0x91d38 ----
// CALLERS: _WCMYYCGImageCreateAffineTransformCopy, _newUnblendedImageAtIndex:extendToCanvas:decoded:
// CALLEES: (叶)


void _WCMYYCGDataProviderReleaseDataCallback(void *param_1)



{

  if (param_1 != (void *)0x0) {

    _free(param_1);

  }

  return;

}






// ---- [d2] width @0x932d0 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x10);

}






// ---- [d2] height @0x93310 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x18);

}






// ---- [d2] offsetX @0x93350 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$offsetX
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::offsetX(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x20);

}






// ---- [d2] offsetY @0x93390 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$offsetY
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::offsetY(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d2] _wcm_yy_png_copy_frame_data_at_index @0x962f4 ----
// CALLERS: _newUnblendedImageAtIndex:extendToCanvas:decoded:
// CALLEES: _wcm_yy_swap_endian_uint32, _wcm_yy_png_chunk_IHDR_write


void * _wcm_yy_png_copy_frame_data_at_index(long param_1,long param_2,uint param_3,uint *param_4)



{

  undefined8 *puVar1;

  undefined4 uVar2;

  uLong uVar3;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined4 local_ac;

  uint *local_a8;

  uint local_9c;

  uint *local_98;

  uint local_90;

  uint local_8c;

  byte local_85;

  uint local_84;

  void *local_80;

  uint local_74;

  uint *local_70;

  uint *local_68;

  uint local_5c;

  long local_58;

  long local_50;

  void *local_48;

  undefined8 local_40;

  undefined1 uStack_38;

  undefined7 uStack_37;

  undefined1 local_30;

  undefined8 uStack_2f;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_68 = param_4;

  local_5c = param_3;

  local_58 = param_2;

  local_50 = param_1;

  if (param_3 < *(uint *)(param_2 + 0x28)) {

    local_70 = (uint *)(*(long *)(param_2 + 0x20) + (ulong)param_3 * 0x28);

    local_74 = *(int *)(param_2 + 0x3c) + 8 + local_70[2];

    if (((*(byte *)(param_2 + 0x44) & 1) == 0) || (param_3 != 0)) {

      local_74 = local_74 + local_70[1] * -4;

    }

    local_80 = _malloc((ulong)local_74);

    if (local_80 == (void *)0x0) {

      local_48 = (void *)0x0;

    }

    else {

      *local_68 = local_74;

      local_84 = 0;

      local_85 = 0;

      ___memcpy_chk(local_80,local_50,8,0xffffffffffffffff);

      local_84 = local_84 + 8;

      for (local_8c = 0; local_8c < *(uint *)(local_58 + 0x38); local_8c = local_8c + 1) {

        local_90 = *(uint *)(*(long *)(local_58 + 0x30) + (ulong)local_8c * 4);

        local_98 = (uint *)(*(long *)(local_58 + 0x10) + (ulong)local_90 * 0x10);

        if ((*(uint *)(local_58 + 0x40) <= local_90) && ((local_85 & 1) == 0)) {

          local_85 = 1;

          for (local_9c = 0; local_9c < local_70[1]; local_9c = local_9c + 1) {

            local_a8 = (uint *)(*(long *)(local_58 + 0x10) + (ulong)*local_70 * 0x10 +

                               (ulong)local_9c * 0x10);

            if (local_a8[1] == 0x54416466) {

              uVar2 = _wcm_yy_swap_endian_uint32(local_a8[2] - 4);

              *(undefined4 *)((long)local_80 + (ulong)local_84) = uVar2;

              *(undefined4 *)((long)local_80 + (ulong)local_84 + 4) = 0x54414449;

              ___memcpy_chk((long)local_80 + (ulong)local_84 + 8,local_50 + (ulong)*local_a8 + 0xc,

                            local_a8[2] - 4,0xffffffffffffffff);

              uVar3 = _crc32(0,(Bytef *)((long)local_80 + (ulong)local_84 + 4),local_a8[2]);

              local_ac = (undefined4)uVar3;

              uVar2 = _wcm_yy_swap_endian_uint32(uVar3 & 0xffffffff);

              *(undefined4 *)((long)local_80 + (ulong)local_a8[2] + (ulong)local_84 + 4) = uVar2;

              local_84 = local_84 + local_a8[2] + 8;

            }

            else {

              ___memcpy_chk((long)local_80 + (ulong)local_84,local_50 + (ulong)*local_a8,

                            local_a8[2] + 0xc,0xffffffffffffffff);

              local_84 = local_84 + local_a8[2] + 0xc;

            }

          }

        }

        if (local_98[1] == 0x52444849) {

          puVar1 = (undefined8 *)(local_50 + (ulong)*local_98);

          local_40 = *puVar1;

          uStack_38 = (undefined1)puVar1[1];

          uStack_2f._0_7_ = (undefined7)*(undefined8 *)((long)puVar1 + 0x11);

          uStack_2f._7_1_ = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x11) >> 0x38);

          uStack_37 = (undefined7)*(undefined8 *)((long)puVar1 + 9);

          local_30 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 9) >> 0x38);

          uStack_b8 = *(undefined8 *)(local_58 + 8);

          local_c0 = *(undefined8 *)(local_70 + 4);

          _wcm_yy_png_chunk_IHDR_write(&local_c0,&uStack_38);

          _crc32(0,(Bytef *)((long)&local_40 + 4),0x11);

          uVar2 = _wcm_yy_swap_endian_uint32();

                    /* WARNING: Ignoring partial resolution of indirect */

          uStack_2f._4_4_ = uVar2;

          uStack_2f._7_1_ = (undefined1)((uint)uVar2 >> 0x18);

          ___memcpy_chk((long)local_80 + (ulong)local_84,&local_40,0x19,0xffffffffffffffff);

          local_84 = local_84 + 0x19;

        }

        else {

          ___memcpy_chk((long)local_80 + (ulong)local_84,local_50 + (ulong)*local_98,

                        local_98[2] + 0xc,0xffffffffffffffff);

          local_84 = local_84 + local_98[2] + 0xc;

        }

      }

      local_48 = local_80;

    }

  }

  else {

    local_48 = (void *)0x0;

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {

    return local_48;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

}






// ---- [d2] width @0x97764 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xc0);

}






// ---- [d2] height @0x97780 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 200);

}






// ---- [d3] _wcm_yy_swap_endian_uint32 @0x998a0 ----
// CALLERS: _wcm_yy_png_info_create, _wcm_yy_png_copy_frame_data_at_index, _encodeAPNG, _wcm_yy_png_chunk_fcTL_write, _wcm_yy_png_chunk_IHDR_read, _wcm_yy_png_chunk_fcTL_read, _wcm_yy_png_chunk_IHDR_write
// CALLEES: (叶)


uint _wcm_yy_swap_endian_uint32(uint param_1)



{

  return (param_1 & 0xff00) << 8 | param_1 << 0x18 | (param_1 & 0xff0000) >> 8 | param_1 >> 0x18;

}






// ---- [d3] _wcm_yy_png_chunk_IHDR_write @0x9b788 ----
// CALLERS: _wcm_yy_png_copy_frame_data_at_index
// CALLEES: _wcm_yy_swap_endian_uint32


void _wcm_yy_png_chunk_IHDR_write(undefined4 *param_1,undefined4 *param_2)



{

  undefined4 uVar1;

  

  uVar1 = _wcm_yy_swap_endian_uint32(*param_1);

  *param_2 = uVar1;

  uVar1 = _wcm_yy_swap_endian_uint32(param_1[1]);

  param_2[1] = uVar1;

  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);

  *(undefined1 *)((long)param_2 + 9) = *(undefined1 *)((long)param_1 + 9);

  *(undefined1 *)((long)param_2 + 10) = *(undefined1 *)((long)param_1 + 10);

  *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)((long)param_1 + 0xb);

  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 3);

  return;

}





