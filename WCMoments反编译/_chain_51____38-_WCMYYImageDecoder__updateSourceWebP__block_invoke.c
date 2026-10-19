// ============ 功能链 51  根: ___38-[WCMYYImageDecoder__updateSourceWebP]_block_invoke @0x94930 ============
// 节点 37，按调用深度排序，自上而下读

// ---- [d0] ___38-[WCMYYImageDecoder__updateSourceWebP]_block_invoke @0x94930 ----
// CALLERS: (根)
// CALLEES: _updateSource, _updateSourceWebP


void ___38__WCMYYImageDecoder__updateSourceWebP__block_invoke(void)



{

  _NSLog(&

         cf___s__d_WebPisnotavailable_checkthedocumentationtoseehowtoinstallWebPcomponent_https___github_com_ibireme_WCMYYImage_installation

        );

  return;

}






// ---- [d1] _updateSource @0x94844 ----
// CALLERS: _updateData:final:, _updateSourceWebP, ___38-[WCMYYImageDecoder__updateSourceWebP]_block_invoke, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$_updateSource, _objc_msgSend$_updateSourceAPNG, _objc_msgSend$_updateSourceImageIO
// CALLEES: _updateSourceWebP, _updateSourceAPNG, _updateSourceImageIO


/* Function Stack Size: 0x10 bytes */



void WCMYYImageDecoder::_updateSource(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 local_30;

  

  if (*(long *)(param_1 + 0xa0) == 8) {

    _objc_msgSend__updateSourceAPNG(0,param_1,local_30);

  }

  else {

    lVar1 = *(long *)(param_1 + 0xa0) + -9;

    if (lVar1 == 0) {

      _objc_msgSend__updateSourceWebP(param_1,local_30);

    }

    else {

      _objc_msgSend__updateSourceImageIO(lVar1,param_1,local_30);

    }

  }

  return;

}






// ---- [d1] _updateSourceWebP @0x948bc ----
// CALLERS: _updateSource, ___38-[WCMYYImageDecoder__updateSourceWebP]_block_invoke, _objc_msgSend$_updateSourceWebP
// CALLEES: _updateSource


/* Function Stack Size: 0x10 bytes */



void WCMYYImageDecoder::_updateSourceWebP(ID param_1,SEL param_2)



{

  undefined8 local_20;

  long *local_18;

  

  local_18 = &__updateSourceWebP_onceToken;

  local_20 = 0;

  _objc_storeStrong(&local_20,&___block_literal_global_119);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  return;

}






// ---- [d2] _updateSourceAPNG @0x94978 ----
// CALLERS: _updateSource, _objc_msgSend$_updateSourceAPNG
// CALLEES: index, setIndex:, bytes, index, setIndex:, width, setWidth:, height, setHeight:, setOffsetX:


/* Function Stack Size: 0x10 bytes */



void WCMYYImageDecoder::_updateSourceAPNG(ID param_1,SEL param_2)



{

  int iVar1;

  bool bVar2;

  bool bVar3;

  bool bVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  long lVar9;

  undefined8 local_68;

  undefined8 local_50;

  uint local_44;

  uint local_40;

  byte local_39;

  undefined8 local_38;

  uint local_30;

  uint local_2c;

  uint *local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  _wcm_yy_png_info_release(*(undefined8 *)(param_1 + 0x58));

  *(undefined8 *)(local_18 + 0x58) = 0;

  _objc_msgSend__updateSourceImageIO(local_18,local_68);

  if ((*(long *)(local_18 + 0xb0) != 0) && ((*(byte *)(local_18 + 0x90) & 1) != 0)) {

    uVar5 = _objc_msgSend_bytes(*(undefined8 *)(local_18 + 0x98),local_68);

    uVar6 = _objc_msgSend_length(*(undefined8 *)(local_18 + 0x98),local_68);

    local_28 = (uint *)_wcm_yy_png_info_create(uVar5,uVar6);

    if (local_28 != (uint *)0x0) {

      if ((local_28[10] == 0) || ((local_28[10] == 1 && ((local_28[0x11] & 1) != 0)))) {

        _wcm_yy_png_info_release(local_28);

      }

      else {

        if (*(long *)(local_18 + 0x50) != 0) {

          _CFRelease(*(undefined8 *)(local_18 + 0x50));

          *(undefined8 *)(local_18 + 0x50) = 0;

        }

        local_2c = *local_28;

        local_30 = local_28[1];

        local_38 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

        local_39 = 0;

        local_40 = 0;

        for (local_44 = 0; local_44 < local_28[10]; local_44 = local_44 + 1) {

          local_50 = _objc_opt_new(&objc::class_t::_YYImageDecoderFrame);

          _objc_msgSend_addObject_(local_38,local_68,local_50);

          lVar9 = *(long *)(local_28 + 8) + (ulong)local_44 * 0x28;

          _objc_msgSend_setIndex_(local_50,local_68,local_44);

          _wcm_yy_png_delay_wcm_to_seconds

                    (*(undefined2 *)(lVar9 + 0x20),*(undefined2 *)(lVar9 + 0x22));

          _objc_msgSend_setDuration_(local_50,local_68);

          _objc_msgSend_setHasAlpha_(local_50,local_68,1);

          _objc_msgSend_setWidth_(local_50,local_68,*(undefined4 *)(lVar9 + 0x10));

          _objc_msgSend_setHeight_(local_50,local_68,*(undefined4 *)(lVar9 + 0x14));

          _objc_msgSend_setOffsetX_(local_50,local_68,*(undefined4 *)(lVar9 + 0x18));

          _objc_msgSend_setOffsetY_

                    (local_50,local_68,(local_30 - *(int *)(lVar9 + 0x1c)) - *(int *)(lVar9 + 0x14))

          ;

          uVar7 = _objc_msgSend_width(local_50,local_68);

          bVar3 = false;

          if (uVar7 == local_2c) {

            uVar7 = _objc_msgSend_height(local_50,local_68);

            bVar3 = uVar7 == local_30;

          }

          bVar4 = false;

          if (*(int *)(lVar9 + 0x18) == 0) {

            bVar4 = *(int *)(lVar9 + 0x1c) == 0;

          }

          bVar2 = false;

          if (bVar3) {

            bVar2 = bVar4;

          }

          _objc_msgSend_setIsFullSize_(local_50,local_68,bVar2);

          if (*(byte *)(lVar9 + 0x24) == 1) {

            _objc_msgSend_setDispose_(0,local_50,local_68,1);

          }

          else {

            iVar1 = *(byte *)(lVar9 + 0x24) - 2;

            if (iVar1 == 0) {

              _objc_msgSend_setDispose_(0,local_50,local_68,2);

            }

            else {

              _objc_msgSend_setDispose_(iVar1,local_50,local_68,0);

            }

          }

          iVar1 = *(byte *)(lVar9 + 0x25) - 1;

          if (iVar1 == 0) {

            _objc_msgSend_setBlend_(0,local_50,local_68,1);

          }

          else {

            _objc_msgSend_setBlend_(iVar1,local_50,local_68,0);

          }

          lVar9 = _objc_msgSend_blend(local_50,local_68);

          if ((lVar9 == 0) &&

             (uVar7 = _objc_msgSend_isFullSize(local_50,local_68), (uVar7 & 1) != 0)) {

            _objc_msgSend_setBlendFromIndex_(local_50,local_68,local_44);

            lVar9 = _objc_msgSend_dispose(local_50,local_68);

            if (lVar9 != 2) {

              local_40 = local_44;

            }

          }

          else {

            lVar9 = _objc_msgSend_dispose(local_50,local_68);

            if ((lVar9 == 1) &&

               (uVar7 = _objc_msgSend_isFullSize(0,local_50,local_68), (uVar7 & 1) != 0)) {

              _objc_msgSend_setBlendFromIndex_(local_50,local_68,local_40);

              local_40 = local_44 + 1;

            }

            else {

              _objc_msgSend_setBlendFromIndex_(local_50,local_68,local_40);

            }

          }

          lVar9 = _objc_msgSend_index(local_50,local_68);

          lVar8 = _objc_msgSend_blendFromIndex(local_50,local_68);

          if (lVar9 != lVar8) {

            local_39 = 1;

          }

          _objc_storeStrong(lVar9 != lVar8,&local_50,0);

        }

        *(ulong *)(local_18 + 0xc0) = (ulong)local_2c;

        *(ulong *)(local_18 + 200) = (ulong)local_30;

        uVar5 = _objc_msgSend_count(local_38,local_68);

        *(undefined8 *)(local_18 + 0xb0) = uVar5;

        *(ulong *)(local_18 + 0xb8) = (ulong)local_28[0xb];

        *(byte *)(local_18 + 0x78) = local_39 & 1;

        *(uint **)(local_18 + 0x58) = local_28;

        _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_18 + 0x68),0xffffffffffffffff);

        _objc_storeStrong(local_18 + 0x70,local_38);

        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + 0x68));

        _objc_storeStrong(&local_38,0);

      }

    }

  }

  return;

}






// ---- [d2] _updateSourceImageIO @0x95748 ----
// CALLERS: _updateSource, _updateSourceAPNG, _objc_msgSend$_updateSourceImageIO
// CALLEES: setIndex:, _WCMYYUIImageOrientationFromEXIFValue, setIndex:, setWidth:, setHeight:, setDuration:, setHasAlpha:, setIsFullSize:, setBlendFromIndex:, _updateSource


/* Function Stack Size: 0x10 bytes */



void WCMYYImageDecoder::_updateSourceImageIO(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 local_90;

  long local_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 local_60;

  long local_58;

  undefined8 local_50;

  ulong local_48;

  undefined8 local_40;

  long local_38;

  long local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  *(undefined8 *)(param_1 + 0xc0) = 0;

  *(undefined8 *)(param_1 + 200) = 0;

  *(undefined8 *)(param_1 + 0x60) = 0;

  *(undefined8 *)(param_1 + 0xb8) = 0;

  local_20 = param_2;

  local_18 = param_1;

  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x68),0xffffffffffffffff);

  _objc_storeStrong(local_18 + 0x70,0);

  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + 0x68));

  if (*(long *)(local_18 + 0x50) == 0) {

    if ((*(byte *)(local_18 + 0x90) & 1) == 0) {

      uVar1 = _CGImageSourceCreateIncremental(0);

      *(undefined8 *)(local_18 + 0x50) = uVar1;

      if (*(long *)(local_18 + 0x50) != 0) {

        _CGImageSourceUpdateData

                  (*(undefined8 *)(local_18 + 0x50),*(undefined8 *)(local_18 + 0x98),0);

      }

    }

    else {

      uVar1 = _CGImageSourceCreateWithData(*(undefined8 *)(local_18 + 0x98),0);

      *(undefined8 *)(local_18 + 0x50) = uVar1;

    }

  }

  else {

    _CGImageSourceUpdateData

              (*(undefined8 *)(local_18 + 0x50),*(undefined8 *)(local_18 + 0x98),

               *(byte *)(local_18 + 0x90) & 1);

  }

  if (*(long *)(local_18 + 0x50) != 0) {

    uVar1 = _CGImageSourceGetCount(*(undefined8 *)(local_18 + 0x50));

    *(undefined8 *)(local_18 + 0xb0) = uVar1;

    if (*(long *)(local_18 + 0xb0) != 0) {

      if ((*(byte *)(local_18 + 0x90) & 1) == 0) {

        *(undefined8 *)(local_18 + 0xb0) = 1;

      }

      else {

        if (*(long *)(local_18 + 0xa0) == 8) {

          *(undefined8 *)(local_18 + 0xb0) = 1;

        }

        if ((*(long *)(local_18 + 0xa0) == 7) &&

           (local_28 = _CGImageSourceCopyProperties(*(undefined8 *)(local_18 + 0x50),0),

           local_28 != 0)) {

          local_30 = _CFDictionaryGetValue

                               (local_28,*(undefined8 *)PTR__kCGImagePropertyGIFDictionary_00110298)

          ;

          if ((local_30 != 0) &&

             (local_38 = _CFDictionaryGetValue

                                   (local_30,*(undefined8 *)

                                              PTR__kCGImagePropertyGIFLoopCount_001102a0),

             local_38 != 0)) {

            _CFNumberGetValue(local_38,0xf,local_18 + 0xb8);

          }

          _CFRelease(local_28);

        }

      }

      local_40 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

      for (local_48 = 0; local_48 < *(ulong *)(local_18 + 0xb0); local_48 = local_48 + 1) {

        local_50 = _objc_opt_new(&objc::class_t::_YYImageDecoderFrame);

        _objc_msgSend_setIndex_(local_50,local_90,local_48);

        _objc_msgSend_setBlendFromIndex_(local_50,local_90,local_48);

        _objc_msgSend_setHasAlpha_(local_50,local_90,1);

        _objc_msgSend_setIsFullSize_(local_50,local_90,1);

        _objc_msgSend_addObject_(local_40,local_90,local_50);

        local_58 = _CGImageSourceCopyPropertiesAtIndex(*(undefined8 *)(local_18 + 0x50),local_48,0);

        if (local_58 != 0) {

          local_60 = 0;

          local_68 = 0;

          local_70 = 0;

          local_78 = 0;

          lVar2 = _CFDictionaryGetValue

                            (local_58,*(undefined8 *)PTR__kCGImagePropertyPixelWidth_001102c0);

          if (lVar2 != 0) {

            _CFNumberGetValue(lVar2,0xf,&local_70);

          }

          lVar2 = _CFDictionaryGetValue

                            (local_58,*(undefined8 *)PTR__kCGImagePropertyPixelHeight_001102b8);

          if (lVar2 != 0) {

            _CFNumberGetValue(lVar2,0xf,&local_78);

          }

          if ((*(long *)(local_18 + 0xa0) == 7) &&

             (lVar2 = _CFDictionaryGetValue

                                (local_58,*(undefined8 *)PTR__kCGImagePropertyGIFDictionary_00110298

                                ), lVar2 != 0)) {

            local_80 = _CFDictionaryGetValue

                                 (lVar2,*(undefined8 *)

                                         PTR__kCGImagePropertyGIFUnclampedDelayTime_001102a8);

            if (local_80 == 0) {

              local_80 = _CFDictionaryGetValue

                                   (lVar2,*(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_00110290)

              ;

            }

            if (local_80 != 0) {

              _CFNumberGetValue(local_80,0xd,&local_60);

            }

          }

          _objc_msgSend_setWidth_(local_50,local_90,local_70);

          _objc_msgSend_setHeight_(local_50,local_90,local_78);

          _objc_msgSend_setDuration_(local_60,local_50,local_90);

          if ((local_48 == 0) && (*(long *)(local_18 + 0xc0) + *(long *)(local_18 + 200) == 0)) {

            *(undefined8 *)(local_18 + 0xc0) = local_70;

            *(undefined8 *)(local_18 + 200) = local_78;

            lVar2 = _CFDictionaryGetValue

                              (local_58,*(undefined8 *)PTR__kCGImagePropertyOrientation_001102b0);

            if (lVar2 != 0) {

              _CFNumberGetValue(lVar2,0xf,&local_68);

              uVar1 = _WCMYYUIImageOrientationFromEXIFValue(local_68);

              *(undefined8 *)(local_18 + 0x60) = uVar1;

            }

          }

          _CFRelease(local_58);

        }

        _objc_storeStrong(&local_50,0);

      }

      _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_18 + 0x68),0xffffffffffffffff);

      _objc_storeStrong(local_18 + 0x70,local_40);

      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + 0x68));

      _objc_storeStrong(&local_40,0);

    }

  }

  return;

}






// ---- [d3] index @0x2b1f4 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMVideoController::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + _index);

}






// ---- [d3] setIndex: @0x2b218 ----
// CALLERS: settleVideo, openVideo:, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setIndex_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_index) = param_3;

  return;

}






// ---- [d3] bytes @0x2ef14 ----
// CALLERS: tableView:cellForRowAtIndexPath:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke, _Digest, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _encodeAPNG, _objc_msgSend$bytes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMCacheController::bytes(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytes);

}






// ---- [d3] index @0x93290 ----
// CALLERS: updateVideoCounts, viewDidLayoutSubviews, viewDidAppear:, prepareVideoAtIndex:, prepareVideoPaths:index:offset:, warmNeighbors, activateVideo, extendVideoQueue:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



char * WCMYYImageFrame::index(char *param_1,int param_2)



{

  return *(char **)(param_1 + 8);

}






// ---- [d3] setIndex: @0x932ac ----
// CALLERS: settleVideo, openVideo:, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 8) = param_3;

  return;

}






// ---- [d3] width @0x932d0 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x10);

}






// ---- [d3] setWidth: @0x932ec ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setWidth:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setWidth_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x10) = param_3;

  return;

}






// ---- [d3] height @0x93310 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x18);

}






// ---- [d3] setHeight: @0x9332c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setHeight:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setHeight_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x18) = param_3;

  return;

}






// ---- [d3] setOffsetX: @0x9336c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setOffsetX:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setOffsetX_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x20) = param_3;

  return;

}






// ---- [d3] setOffsetY: @0x933ac ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setOffsetY:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setOffsetY_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x28) = param_3;

  return;

}






// ---- [d3] setDuration: @0x933ec ----
// CALLERS: showLoading, startAnimation, startImageViewAnimation, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setDuration:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setDuration_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + 0x30) = param_3;

  return;

}






// ---- [d3] dispose @0x93410 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$dispose
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::dispose(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x38);

}






// ---- [d3] setDispose: @0x9342c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setDispose:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setDispose_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x38) = param_3;

  return;

}






// ---- [d3] blend @0x93450 ----
// CALLERS: _updateSourceAPNG, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$blend
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::blend(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x40);

}






// ---- [d3] setBlend: @0x9346c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setBlend:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setBlend_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x40) = param_3;

  return;

}






// ---- [d3] setHasAlpha: @0x935f4 ----
// CALLERS: copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setHasAlpha:
// CALLEES: (叶)


/* Function Stack Size: 0x14 bytes */



void _YYImageDecoderFrame::setHasAlpha_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + 0x50) = (byte)param_3 & 1;

  return;

}






// ---- [d3] isFullSize @0x9361c ----
// CALLERS: _updateSourceAPNG, _objc_msgSend$isFullSize
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool _YYImageDecoderFrame::isFullSize(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + 0x51) & 1;

}






// ---- [d3] setIsFullSize: @0x9363c ----
// CALLERS: copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIsFullSize:
// CALLEES: (叶)


/* Function Stack Size: 0x14 bytes */



void _YYImageDecoderFrame::setIsFullSize_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + 0x51) = (byte)param_3 & 1;

  return;

}






// ---- [d3] blendFromIndex @0x93664 ----
// CALLERS: _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$blendFromIndex
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long _YYImageDecoderFrame::blendFromIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x58);

}






// ---- [d3] setBlendFromIndex: @0x93680 ----
// CALLERS: copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setBlendFromIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void _YYImageDecoderFrame::setBlendFromIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x58) = param_3;

  return;

}






// ---- [d3] _wcm_yy_png_info_release @0x93754 ----
// CALLERS: dealloc, _updateSourceAPNG, _wcm_yy_png_info_create, _encodeAPNG
// CALLEES: (叶)


void _wcm_yy_png_info_release(void *param_1)



{

  if (param_1 != (void *)0x0) {

    if (*(long *)((long)param_1 + 0x10) != 0) {

      _free(*(void **)((long)param_1 + 0x10));

    }

    if (*(long *)((long)param_1 + 0x20) != 0) {

      _free(*(void **)((long)param_1 + 0x20));

    }

    if (*(long *)((long)param_1 + 0x30) != 0) {

      _free(*(void **)((long)param_1 + 0x30));

    }

    _free(param_1);

  }

  return;

}






// ---- [d3] _wcm_yy_png_info_create @0x94f08 ----
// CALLERS: _updateSourceAPNG, _encodeAPNG
// CALLEES: _wcm_yy_png_info_release, _wcm_yy_swap_endian_uint32, _wcm_yy_png_chunk_IHDR_read, _wcm_yy_png_validate_animation_chunk_order, _wcm_yy_png_chunk_fcTL_read


void * _wcm_yy_png_info_create(int *param_1,uint param_2)



{

  uint *puVar1;

  int *piVar2;

  long lVar3;

  uint uVar4;

  ulong uVar5;

  void *pvVar6;

  uint local_94;

  uint *local_90;

  int local_84;

  undefined4 local_80;

  byte local_79;

  void *local_78;

  int local_6c;

  undefined4 *local_68;

  uint *local_60;

  uint *local_58;

  byte local_4d;

  int local_4c;

  int local_48;

  int local_44;

  undefined4 local_40;

  uint local_3c;

  uint local_38;

  uint local_34;

  uint *local_30;

  uint local_28;

  uint local_24;

  int *local_20;

  void *local_18;

  

  if (param_2 < 0x20) {

    local_18 = (void *)0x0;

  }

  else if (*param_1 == 0x474e5089) {

    if (param_1[1] == 0xa1a0a0d) {

      local_28 = 0x10;

      local_24 = param_2;

      local_20 = param_1;

      local_30 = _malloc(0x100);

      if (local_30 == (uint *)0x0) {

        local_18 = (void *)0x0;

      }

      else {

        local_34 = 8;

        local_38 = 0;

        local_3c = local_28;

        local_40 = 0;

        local_44 = -1;

        local_48 = 0;

        local_4c = -1;

        local_4d = 0;

        do {

          if (local_3c <= local_38) {

            local_58 = _realloc(local_30,(ulong)(local_3c + local_28) * 0x10);

            if (local_58 == (uint *)0x0) {

              _free(local_30);

              return (void *)0x0;

            }

            local_3c = local_3c + local_28;

            local_30 = local_58;

          }

          local_60 = local_30 + (ulong)local_38 * 4;

          local_68 = (undefined4 *)((long)local_20 + (ulong)local_34);

          *local_60 = local_34;

          uVar4 = _wcm_yy_swap_endian_uint32(*local_68);

          local_60[2] = uVar4;

          if ((ulong)local_24 < (ulong)*local_60 + (ulong)local_60[2] + 0xc) {

            _free(local_30);

            return (void *)0x0;

          }

          local_60[1] = local_68[1];

          if ((ulong)local_24 < (ulong)*local_60 + (ulong)local_60[2] + 8) break;

          uVar4 = _wcm_yy_swap_endian_uint32

                            (*(undefined4 *)((long)local_68 + (ulong)local_60[2] + 8));

          local_60[3] = uVar4;

          local_38 = local_38 + 1;

          local_34 = local_34 + local_60[2] + 0xc;

          uVar4 = local_60[1];

          if (uVar4 == 0x444e4549) {

            local_34 = local_24;

          }

          else if (uVar4 == 0x4c546361) {

            if (local_60[2] == 8) {

              local_4c = _wcm_yy_swap_endian_uint32(local_68[2]);

              local_40 = _wcm_yy_swap_endian_uint32(local_68[3]);

            }

            else {

              local_4d = 1;

            }

          }

          else if ((uVar4 == 0x4c546366) || (uVar4 == 0x54416466)) {

            if (local_60[1] == 0x4c546366) {

              if (local_60[2] == 0x1a) {

                local_48 = local_48 + 1;

              }

              else {

                local_4d = 1;

              }

            }

            if (local_60[2] < 5) {

              local_4d = 1;

            }

            else {

              local_6c = _wcm_yy_swap_endian_uint32(local_68[2]);

              if (local_44 + 1 == local_6c) {

                local_44 = local_44 + 1;

              }

              else {

                local_4d = 1;

              }

            }

          }

        } while (local_34 + 0xc <= local_24);

        if (((local_38 < 3) || (local_30[1] != 0x52444849)) || (local_30[2] != 0xd)) {

          _free(local_30);

          local_18 = (void *)0x0;

        }

        else {

          local_78 = _calloc(1,0x48);

          if (local_78 == (void *)0x0) {

            _free(local_30);

            local_18 = (void *)0x0;

          }

          else {

            *(uint **)((long)local_78 + 0x10) = local_30;

            *(uint *)((long)local_78 + 0x18) = local_38;

            _wcm_yy_png_chunk_IHDR_read(local_78,(long)local_20 + (ulong)*local_30 + 8);

            if ((((local_4d & 1) == 0) && (local_4c == local_48)) && (0 < local_4c)) {

              local_79 = 0;

              local_80 = 0;

              uVar5 = _wcm_yy_png_validate_animation_chunk_order

                                (*(undefined8 *)((long)local_78 + 0x10),

                                 *(undefined4 *)((long)local_78 + 0x18),&local_80,&local_79);

              if ((uVar5 & 1) == 0) {

                return local_78;

              }

              *(undefined4 *)((long)local_78 + 0x2c) = local_40;

              *(int *)((long)local_78 + 0x28) = local_4c;

              *(byte *)((long)local_78 + 0x44) = local_79 & 1;

              *(undefined4 *)((long)local_78 + 0x40) = local_80;

              pvVar6 = _calloc((long)local_4c,0x28);

              *(void **)((long)local_78 + 0x20) = pvVar6;

              if (*(long *)((long)local_78 + 0x20) == 0) {

                _wcm_yy_png_info_release(local_78);

                return (void *)0x0;

              }

              pvVar6 = _calloc((ulong)*(uint *)((long)local_78 + 0x18),4);

              *(void **)((long)local_78 + 0x30) = pvVar6;

              if (*(long *)((long)local_78 + 0x30) == 0) {

                _wcm_yy_png_info_release(local_78);

                return (void *)0x0;

              }

              local_84 = -1;

              local_90 = *(uint **)((long)local_78 + 0x30);

              for (local_94 = 0; local_94 < *(uint *)((long)local_78 + 0x18);

                  local_94 = local_94 + 1) {

                puVar1 = (uint *)(*(long *)((long)local_78 + 0x10) + (long)(int)local_94 * 0x10);

                uVar4 = puVar1[1];

                if (uVar4 != 0x4c546361) {

                  if (uVar4 == 0x4c546366) {

                    local_84 = local_84 + 1;

                    piVar2 = (int *)(*(long *)((long)local_78 + 0x20) + (long)local_84 * 0x28);

                    *piVar2 = local_94 + 1;

                    _wcm_yy_png_chunk_fcTL_read(piVar2 + 3,(long)local_20 + (ulong)*puVar1 + 8);

                  }

                  else if (uVar4 == 0x54414449) {

                    if (*(int *)((long)local_78 + 0x40) == 0) {

                      *(uint *)((long)local_78 + 0x40) = local_94;

                    }

                    if ((local_79 & 1) != 0) {

                      lVar3 = *(long *)((long)local_78 + 0x20) + (long)local_84 * 0x28;

                      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;

                      *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + puVar1[2] + 0xc;

                    }

                  }

                  else if (uVar4 == 0x54416466) {

                    lVar3 = *(long *)((long)local_78 + 0x20) + (long)local_84 * 0x28;

                    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;

                    *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + puVar1[2] + 0xc;

                  }

                  else {

                    *local_90 = local_94;

                    local_90 = local_90 + 1;

                    *(uint *)((long)local_78 + 0x3c) =

                         *(int *)((long)local_78 + 0x3c) + puVar1[2] + 0xc;

                    *(int *)((long)local_78 + 0x38) = *(int *)((long)local_78 + 0x38) + 1;

                  }

                }

              }

            }

            local_18 = local_78;

          }

        }

      }

    }

    else {

      local_18 = (void *)0x0;

    }

  }

  else {

    local_18 = (void *)0x0;

  }

  return local_18;

}






// ---- [d3] _wcm_yy_png_delay_wcm_to_seconds @0x956ec ----
// CALLERS: _updateSourceAPNG
// CALLEES: (叶)


undefined1  [16] _wcm_yy_png_delay_wcm_to_seconds(ushort param_1,ushort param_2)



{

  undefined1 auVar1 [16];

  undefined8 local_8;

  

  if (param_2 == 0) {

    local_8 = (double)param_1 / 100.0;

  }

  else {

    local_8 = (double)param_1 / (double)param_2;

  }

  auVar1._8_8_ = 0;

  auVar1._0_8_ = local_8;

  return auVar1;

}






// ---- [d3] width @0x97764 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xc0);

}






// ---- [d3] height @0x97780 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 200);

}






// ---- [d3] _WCMYYUIImageOrientationFromEXIFValue @0x91d74 ----
// CALLERS: _updateSourceImageIO
// CALLEES: (叶)


undefined8 _WCMYYUIImageOrientationFromEXIFValue(long param_1)



{

  undefined8 local_8;

  

  if (param_1 == 1) {

    local_8 = 0;

  }

  else if (param_1 == 2) {

    local_8 = 4;

  }

  else if (param_1 == 3) {

    local_8 = 1;

  }

  else if (param_1 == 4) {

    local_8 = 5;

  }

  else if (param_1 == 5) {

    local_8 = 6;

  }

  else if (param_1 == 6) {

    local_8 = 3;

  }

  else if (param_1 == 7) {

    local_8 = 7;

  }

  else if (param_1 == 8) {

    local_8 = 2;

  }

  else {

    local_8 = 0;

  }

  return local_8;

}






// ---- [d4] _wcm_yy_swap_endian_uint32 @0x998a0 ----
// CALLERS: _wcm_yy_png_info_create, _wcm_yy_png_copy_frame_data_at_index, _encodeAPNG, _wcm_yy_png_chunk_fcTL_write, _wcm_yy_png_chunk_IHDR_read, _wcm_yy_png_chunk_fcTL_read, _wcm_yy_png_chunk_IHDR_write
// CALLEES: (叶)


uint _wcm_yy_swap_endian_uint32(uint param_1)



{

  return (param_1 & 0xff00) << 8 | param_1 << 0x18 | (param_1 & 0xff0000) >> 8 | param_1 >> 0x18;

}






// ---- [d4] _wcm_yy_png_chunk_IHDR_read @0x9b1c0 ----
// CALLERS: _wcm_yy_png_info_create
// CALLEES: _wcm_yy_swap_endian_uint32


void _wcm_yy_png_chunk_IHDR_read(undefined4 *param_1,undefined4 *param_2)



{

  undefined4 uVar1;

  

  uVar1 = _wcm_yy_swap_endian_uint32(*param_2);

  *param_1 = uVar1;

  uVar1 = _wcm_yy_swap_endian_uint32(param_2[1]);

  param_1[1] = uVar1;

  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);

  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);

  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);

  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);

  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);

  return;

}






// ---- [d4] _wcm_yy_png_validate_animation_chunk_order @0x9b258 ----
// CALLERS: _wcm_yy_png_info_create
// CALLEES: (叶)


undefined1

_wcm_yy_png_validate_animation_chunk_order

          (long param_1,uint param_2,uint *param_3,undefined1 *param_4)



{

  long lVar1;

  int iVar2;

  bool bVar3;

  bool bVar4;

  uint local_48;

  undefined1 local_41;

  uint local_40;

  int local_3c;

  int local_34;

  int local_2c;

  undefined1 local_1;

  

  if (param_2 < 3) {

    local_1 = 0;

  }

  else if (*(int *)(param_1 + 4) == 0x52444849) {

    if (*(int *)(param_1 + (ulong)param_2 * 0x10 + -0xc) == 0x444e4549) {

      local_2c = 0;

      bVar3 = false;

      local_34 = 0;

      bVar4 = false;

      local_3c = 0;

      local_40 = 0;

      local_41 = 0;

      for (local_48 = 0; local_48 < param_2; local_48 = local_48 + 1) {

        lVar1 = param_1 + (ulong)local_48 * 0x10;

        iVar2 = *(int *)(lVar1 + 4);

        if (iVar2 == 0x4c546361) {

          if (bVar4) {

            return 0;

          }

          bVar4 = true;

        }

        else if (iVar2 == 0x4c546366) {

          if (local_48 + 1 == param_2) {

            return 0;

          }

          if ((*(int *)(lVar1 + 0x14) != 0x54416466) && (*(int *)(lVar1 + 0x14) != 0x54414449)) {

            return 0;

          }

          if ((local_3c == 0) && (*(int *)(lVar1 + 0x14) == 0x54414449)) {

            local_41 = 1;

          }

          local_3c = local_3c + 1;

        }

        else if (iVar2 == 0x52444849) {

          if (local_48 != 0) {

            return 0;

          }

          if (bVar3) {

            return 0;

          }

          bVar3 = true;

        }

        else if (iVar2 == 0x54414449) {

          if (local_2c != 0x54414449) {

            if (local_34 != 0) {

              return 0;

            }

            local_40 = local_48;

          }

          local_34 = local_34 + 1;

        }

        else if (((iVar2 == 0x54416466) && (local_2c != 0x54416466)) && (local_2c != 0x4c546366)) {

          return 0;

        }

        local_2c = *(int *)(lVar1 + 4);

      }

      if (bVar3) {

        if (local_34 == 0) {

          local_1 = 0;

        }

        else if (bVar4) {

          if (local_3c == 0) {

            local_1 = 0;

          }

          else {

            *param_3 = local_40;

            *param_4 = local_41;

            local_1 = 1;

          }

        }

        else {

          local_1 = 0;

        }

      }

      else {

        local_1 = 0;

      }

    }

    else {

      local_1 = 0;

    }

  }

  else {

    local_1 = 0;

  }

  return local_1;

}






// ---- [d4] _wcm_yy_png_chunk_fcTL_read @0x9b694 ----
// CALLERS: _wcm_yy_png_info_create
// CALLEES: _wcm_yy_swap_endian_uint32, _wcm_yy_swap_endian_uint16


void _wcm_yy_png_chunk_fcTL_read(undefined4 *param_1,undefined4 *param_2)



{

  undefined2 uVar1;

  undefined4 uVar2;

  

  uVar2 = _wcm_yy_swap_endian_uint32(*param_2);

  *param_1 = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_2[1]);

  param_1[1] = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_2[2]);

  param_1[2] = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_2[3]);

  param_1[3] = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_2[4]);

  param_1[4] = uVar2;

  uVar1 = _wcm_yy_swap_endian_uint16(*(undefined2 *)(param_2 + 5));

  *(undefined2 *)(param_1 + 5) = uVar1;

  uVar1 = _wcm_yy_swap_endian_uint16(*(undefined2 *)((long)param_2 + 0x16));

  *(undefined2 *)((long)param_1 + 0x16) = uVar1;

  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);

  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);

  return;

}






// ---- [d5] _wcm_yy_swap_endian_uint16 @0x9b760 ----
// CALLERS: _wcm_yy_png_chunk_fcTL_write, _wcm_yy_png_chunk_fcTL_read
// CALLEES: (叶)


uint _wcm_yy_swap_endian_uint16(ushort param_1)



{

  undefined1 local_2;

  

  local_2 = (byte)param_1;

  return (int)(param_1 & 0xff00) >> 8 | (uint)local_2 << 8;

}





