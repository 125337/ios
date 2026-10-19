// ============ 功能链 52  根: encodeToFile: @0x99df8 ============
// 节点 21，按调用深度排序，自上而下读

// ---- [d0] encodeToFile: @0x99df8 ----
// CALLERS: (根)
// CALLEES: _imageIOAvaliable, _encodeWithImageIO, encode


/* Function Stack Size: 0x18 bytes */



bool WCMYYImageEncoder::encodeToFile_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  ulong uVar2;

  undefined8 local_48;

  long local_40;

  undefined4 local_34;

  undefined8 local_30;

  SEL local_28;

  ID local_20;

  byte local_11;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  lVar1 = _objc_msgSend_count(*(undefined8 *)(local_20 + 8),local_48);

  if ((lVar1 == 0) || (lVar1 = _objc_msgSend_length(local_30,local_48), lVar1 == 0)) {

    local_11 = 0;

    local_34 = 1;

  }

  else {

    uVar2 = _objc_msgSend__imageIOAvaliable(local_20,local_48);

    if ((uVar2 & 1) == 0) {

      _objc_msgSend_encode(local_20,local_48);

      local_40 = _objc_retainAutoreleasedReturnValue();

      if (local_40 == 0) {

        local_11 = 0;

      }

      else {

        local_11 = _objc_msgSend_writeToFile_atomically_(local_40,local_48,local_30,1);

        local_11 = local_11 & 1;

      }

      local_34 = 1;

      _objc_storeStrong(&local_40,0);

    }

    else {

      local_11 = _objc_msgSend__encodeWithImageIO_(local_20,local_48,local_30);

      local_11 = local_11 & 1;

      local_34 = 1;

    }

  }

  _objc_storeStrong(&local_30,0);

  return local_11 & 1;

}






// ---- [d1] _imageIOAvaliable @0x97e70 ----
// CALLERS: encode, encodeToFile:, _objc_msgSend$_imageIOAvaliable
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYImageEncoder::_imageIOAvaliable(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 local_38;

  undefined1 local_11;

  

  lVar1 = *(long *)(param_1 + 0x20);

  if (lVar1 - 1U < 7) {

    lVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 8),local_38);

    local_11 = lVar1 != 0;

  }

  else if (lVar1 == 8) {

    lVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 8),local_38);

    local_11 = lVar1 == 1;

  }

  else if (lVar1 == 9) {

    local_11 = false;

  }

  else {

    local_11 = false;

  }

  return (uint)local_11;

}






// ---- [d1] _encodeWithImageIO @0x98944 ----
// CALLERS: _encodeWithImageIO:, encode, encodeToFile:, _objc_msgSend$_encodeWithImageIO, _objc_msgSend$_encodeWithImageIO:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageEncoder::_encodeWithImageIO(ID param_1,SEL param_2)



{

  long lVar1;

  ID IVar2;

  undefined8 local_58;

  undefined8 local_50;

  byte local_41;

  undefined8 local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_28 = param_2;

  local_20 = param_1;

  local_30 = _objc_opt_new(&_OBJC_CLASS___NSMutableData);

  if (*(long *)(local_20 + 0x20) == 7) {

    local_50 = _objc_msgSend_count(*(undefined8 *)(local_20 + 8),local_58);

  }

  else {

    local_50 = 1;

  }

  lVar1 = _objc_msgSend__newImageDestination_imageCount_(local_20,local_58,local_30,local_50);

  local_41 = 0;

  if (lVar1 != 0) {

    _objc_msgSend__encodeImageWithDestination_imageCount_(local_20,local_58,lVar1,local_50);

    local_41 = _CGImageDestinationFinalize(lVar1);

    _CFRelease(lVar1);

  }

  if (((local_41 & 1) == 0) || (lVar1 = _objc_msgSend_length(local_30,local_58), lVar1 == 0)) {

    local_18 = 0;

  }

  else {

    local_18 = (*(code *)PTR__objc_retain_00110460)(local_30);

  }

  _objc_storeStrong(&local_30,0);

  IVar2 = _objc_autoreleaseReturnValue(local_18);

  return IVar2;

}






// ---- [d1] encode @0x99d1c ----
// CALLERS: encodeToFile:, encodeImage:type:quality:, encodeImageWithDecoder:type:quality:, _objc_msgSend$encode
// CALLEES: _imageIOAvaliable, _encodeWithImageIO, _encodeAPNG, _encodeWebP


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageEncoder::encode(ID param_1,SEL param_2)



{

  long lVar1;

  ulong uVar2;

  ID IVar3;

  undefined8 local_30;

  undefined8 local_18;

  

  lVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 8));

  if (lVar1 == 0) {

    local_18 = 0;

  }

  else {

    uVar2 = _objc_msgSend__imageIOAvaliable(param_1,local_30);

    if ((uVar2 & 1) == 0) {

      if (*(long *)(param_1 + 0x20) == 8) {

        _objc_msgSend__encodeAPNG(0,param_1,local_30);

        local_18 = _objc_retainAutoreleasedReturnValue();

      }

      else if (*(long *)(param_1 + 0x20) == 9) {

        _objc_msgSend__encodeWebP(0,param_1,local_30);

        local_18 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        local_18 = 0;

      }

    }

    else {

      _objc_msgSend__encodeWithImageIO(param_1,local_30);

      local_18 = _objc_retainAutoreleasedReturnValue();

    }

  }

  IVar3 = _objc_autoreleaseReturnValue(local_18);

  return IVar3;

}






// ---- [d2] _encodeAPNG @0x98b50 ----
// CALLERS: encode, _objc_msgSend$_encodeAPNG
// CALLEES: _CGRectMake, _CGSizeMake, bytes, _WCMYYCGColorSpaceGetDeviceRGB, _WCMYYCGImageCreateEncodedData, _wcm_yy_png_info_release, _wcm_yy_png_info_create, _wcm_yy_swap_endian_uint32, _wcm_yy_png_delay_wcm_to_fraction, _wcm_yy_png_chunk_fcTL_write


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x10 bytes */



ID WCMYYImageEncoder::_encodeAPNG(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  ID IVar6;

  ulong uVar7;

  double dVar8;

  double in_d1;

  double dVar9;

  double dVar10;

  undefined8 local_238;

  undefined4 local_204;

  Bytef *local_200;

  undefined4 local_1f4;

  undefined4 local_1f0;

  undefined4 local_1ec;

  uint *local_1e8;

  uint local_1dc;

  int local_1d8;

  undefined4 uStack_1d4;

  ulong local_1d0;

  undefined8 local_1c8;

  undefined4 local_1c0;

  undefined4 *local_1b8;

  undefined8 local_1b0;

  int local_1a4;

  int local_1a0;

  int iStack_19c;

  ulong local_198;

  undefined8 local_190;

  undefined4 local_188;

  uint *local_180;

  uint local_174;

  int local_170;

  byte local_16a;

  byte local_169;

  undefined8 local_168;

  long local_160;

  undefined8 local_158;

  long local_150;

  long local_148;

  undefined8 local_140;

  double local_138;

  double local_130;

  double local_128;

  long local_120;

  long local_118;

  double local_110;

  double local_108;

  long local_100;

  double local_f8;

  double local_f0;

  int local_e4;

  long local_e0;

  int local_d4;

  long local_d0;

  long local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  SEL local_b0;

  ID local_a8;

  undefined8 local_a0;

  undefined4 local_94;

  Bytef local_90 [30];

  undefined4 local_72;

  undefined4 local_6e;

  Bytef local_6a [30];

  undefined4 local_4c;

  undefined4 local_48;

  Bytef aBStack_44 [4];

  undefined4 local_40;

  undefined4 uStack_3c;

  undefined4 local_38;

  undefined4 local_30;

  undefined4 local_2c;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_b0 = param_2;

  local_a8 = param_1;

  local_b8 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  local_c0 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  local_c8 = 0;

  local_d0 = 0;

  for (local_d4 = 0; uVar7 = (ulong)local_d4,

      uVar1 = _objc_msgSend_count(*(undefined8 *)(local_a8 + 8),local_238), uVar7 < uVar1;

      local_d4 = local_d4 + 1) {

    local_e0 = _objc_msgSend__newCGImageFromIndex_decoded_(local_a8,local_238,(long)local_d4,1);

    if (local_e0 == 0) {

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

    uVar1 = _CGImageGetWidth(local_e0);

    uVar7 = _CGImageGetHeight(local_e0);

    dVar9 = (double)uVar7;

    local_f8 = (double)_CGSizeMake((double)uVar1);

    uVar3 = local_c0;

    local_f0 = dVar9;

    _objc_msgSend_valueWithCGSize_(local_f8,dVar9,&_OBJC_CLASS___NSValue,local_238);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_addObject_(uVar3,local_238);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    dVar9 = (double)NEON_ucvtf(local_c8);

    if (dVar9 < local_f8) {

      local_c8 = (long)local_f8;

    }

    dVar9 = (double)NEON_ucvtf(local_d0);

    if (dVar9 < local_f0) {

      local_d0 = (long)local_f0;

    }

    local_100 = _WCMYYCGImageCreateEncodedData(0x3ff0000000000000,local_e0,8);

    _CFRelease(local_e0);

    if (local_100 == 0) {

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

    _objc_msgSend_addObject_(local_b8,local_238,local_100);

    _CFRelease(local_100);

    if ((local_f8 < 1.0) || (in_d1 = 1.0, local_f0 < 1.0)) {

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

  }

  _objc_msgSend_firstObject(local_c0,local_238);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_110 = (double)_objc_msgSend_CGSizeValue(uVar3,local_238);

  local_108 = in_d1;

  (*(code *)PTR__objc_release_00110458)(uVar3);

  dVar9 = (double)NEON_ucvtf(local_c8);

  if ((local_110 < dVar9) || (dVar9 = (double)NEON_ucvtf(local_d0), local_108 < dVar9)) {

    local_118 = _objc_msgSend__newCGImageFromIndex_decoded_(local_a8,local_238,0,1);

    lVar5 = local_c8;

    lVar4 = local_d0;

    if (local_118 == 0) {

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

    uVar3 = _WCMYYCGColorSpaceGetDeviceRGB();

    lVar4 = _CGBitmapContextCreate(0,lVar5,lVar4,8,0,uVar3,&DAT_00002002);

    local_120 = lVar4;

    if (lVar4 == 0) {

      _CFRelease(local_118);

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

    dVar8 = (double)NEON_ucvtf(local_d0);

    dVar8 = dVar8 - local_108;

    dVar9 = local_110;

    dVar10 = local_108;

    local_140 = _CGRectMake(0);

    local_138 = dVar8;

    local_130 = dVar9;

    local_128 = dVar10;

    _CGContextDrawImage(local_140,dVar8,dVar9,dVar10,lVar4,local_118);

    _CFRelease(local_118);

    local_148 = _CGBitmapContextCreateImage(local_120);

    _CFRelease(local_120);

    if (local_148 == 0) {

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

    local_150 = _WCMYYCGImageCreateEncodedData(0x3ff0000000000000,local_148,8);

    if (local_150 == 0) {

      _CFRelease(local_148);

      local_a0 = 0;

      local_e4 = 1;

      goto LAB_00099818;

    }

    _objc_msgSend_setObject_atIndexedSubscript_(local_b8,local_238,local_150,0);

    _CFRelease(local_150);

  }

  _objc_msgSend_objectAtIndexedSubscript_(local_b8,local_238,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_158 = uVar3;

  _objc_retainAutorelease();

  uVar3 = _objc_msgSend_bytes(uVar3,local_238);

  uVar2 = _objc_msgSend_length(local_158,local_238);

  local_160 = _wcm_yy_png_info_create(uVar3,uVar2);

  if (local_160 == 0) {

    local_a0 = 0;

    local_e4 = 1;

  }

  else {

    local_168 = _objc_opt_new(&_OBJC_CLASS___NSMutableData);

    local_169 = 0;

    local_16a = 0;

    local_170 = 0;

    local_30 = 0x474e5089;

    local_2c = 0xa1a0a0d;

    _objc_msgSend_appendBytes_length_(local_168,local_238,&local_30,8);

    for (local_174 = 0; local_174 < *(uint *)(local_160 + 0x18); local_174 = local_174 + 1) {

      local_180 = (uint *)(*(long *)(local_160 + 0x10) + (long)(int)local_174 * 0x10);

      if (((local_169 & 1) == 0) && (local_180[1] == 0x54414449)) {

        local_169 = 1;

        aBStack_44[0] = '\0';

        aBStack_44[1] = '\0';

        aBStack_44[2] = '\0';

        aBStack_44[3] = '\0';

        local_48 = 0;

        uStack_3c = 0;

        local_40 = 0;

        local_38 = 0;

        local_48 = _wcm_yy_swap_endian_uint32(8);

        builtin_memcpy(aBStack_44,"acTL",4);

        _objc_msgSend_count(local_b8,local_238);

        local_40 = _wcm_yy_swap_endian_uint32();

        uStack_3c = _wcm_yy_swap_endian_uint32(*(undefined8 *)(local_a8 + 0x28));

        _crc32(0,aBStack_44,0xc);

        local_38 = _wcm_yy_swap_endian_uint32();

        _objc_msgSend_appendBytes_length_(local_168,local_238,&local_48,0x14);

        local_190 = 0;

        local_188 = 0;

        _local_1a0 = CONCAT44((int)local_110,local_170);

        local_198 = (ulong)(uint)(int)local_108;

        _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(local_a8 + 0x10),local_238,0);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_doubleValue(uVar3,local_238);

        _wcm_yy_png_delay_wcm_to_fraction((long)&local_190 + 4,(long)&local_190 + 6);

        (*(code *)PTR__objc_release_00110458)(uVar3);

        local_188 = CONCAT22(local_188._2_2_,1);

        _memset(&local_6e,0,0x26);

        local_6e = _wcm_yy_swap_endian_uint32(0x1a);

        builtin_memcpy(local_6a,"fcTL",4);

        _wcm_yy_png_chunk_fcTL_write(&local_1a0,local_6a + 4);

        _crc32(0,local_6a,0x1e);

        local_4c = _wcm_yy_swap_endian_uint32();

        _objc_msgSend_appendBytes_length_(local_168,local_238,&local_6e,0x26);

        local_170 = local_170 + 1;

      }

      if ((((local_16a & 1) == 0) && ((local_169 & 1) != 0)) && (local_180[1] != 0x54414449)) {

        local_16a = 1;

        for (local_1a4 = 1; uVar7 = (ulong)local_1a4,

            uVar1 = _objc_msgSend_count(local_b8,local_238), uVar7 < uVar1;

            local_1a4 = local_1a4 + 1) {

          _objc_msgSend_objectAtIndexedSubscript_(local_b8,local_238,(long)local_1a4);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          local_1b0 = uVar3;

          _objc_retainAutorelease();

          uVar3 = _objc_msgSend_bytes(uVar3,local_238);

          uVar2 = _objc_msgSend_length(local_1b0,local_238);

          local_1b8 = (undefined4 *)_wcm_yy_png_info_create(uVar3,uVar2);

          if (local_1b8 == (undefined4 *)0x0) {

            _wcm_yy_png_info_release(local_160);

            local_a0 = 0;

            local_e4 = 1;

          }

          else {

            local_1c8 = 0;

            local_1c0 = 0;

            _local_1d8 = CONCAT44(*local_1b8,local_170);

            local_1d0 = (ulong)(uint)local_1b8[1];

            _objc_msgSend_objectAtIndexedSubscript_

                      (*(undefined8 *)(local_a8 + 0x10),local_238,(long)local_1a4);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            _objc_msgSend_doubleValue(uVar3,local_238);

            _wcm_yy_png_delay_wcm_to_fraction((long)&local_1c8 + 4,(long)&local_1c8 + 6);

            (*(code *)PTR__objc_release_00110458)(uVar3);

            local_1c0 = CONCAT22(local_1c0._2_2_,1);

            _memset(&local_94,0,0x26);

            local_94 = _wcm_yy_swap_endian_uint32(0x1a);

            builtin_memcpy(local_90,"fcTL",4);

            _wcm_yy_png_chunk_fcTL_write(&local_1d8,local_90 + 4);

            _crc32(0,local_90,0x1e);

            local_72 = _wcm_yy_swap_endian_uint32();

            _objc_msgSend_appendBytes_length_(local_168,local_238,&local_94,0x26);

            local_170 = local_170 + 1;

            for (local_1dc = 0; local_1dc < (uint)local_1b8[6]; local_1dc = local_1dc + 1) {

              local_1e8 = (uint *)(*(long *)(local_1b8 + 4) + (long)(int)local_1dc * 0x10);

              if (local_1e8[1] == 0x54414449) {

                local_1ec = _wcm_yy_swap_endian_uint32(local_1e8[2] + 4);

                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_1ec);

                local_1f0 = 0x54416466;

                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_1f0,4);

                local_1f4 = _wcm_yy_swap_endian_uint32(local_170);

                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_1f4,4);

                uVar2 = local_168;

                uVar3 = local_1b0;

                _objc_retainAutorelease();

                lVar4 = _objc_msgSend_bytes(uVar3,local_238);

                _objc_msgSend_appendBytes_length_

                          (uVar2,local_238,lVar4 + (ulong)*local_1e8 + 8,local_1e8[2]);

                uVar3 = local_168;

                _objc_retainAutorelease();

                lVar4 = _objc_msgSend_bytes(uVar3,local_238);

                lVar5 = _objc_msgSend_length(local_168,local_238);

                local_200 = (Bytef *)(((lVar4 + lVar5) - (ulong)local_1e8[2]) + -8);

                _crc32(0,local_200,local_1e8[2] + 8);

                local_204 = _wcm_yy_swap_endian_uint32();

                _objc_msgSend_appendBytes_length_(local_168,local_238,&local_204,4);

                local_170 = local_170 + 1;

              }

            }

            _wcm_yy_png_info_release(local_1dc - local_1b8[6],local_1b8);

            local_e4 = 0;

          }

          _objc_storeStrong(&local_1b0,0);

          if (local_e4 != 0) goto LAB_000997f8;

        }

      }

      uVar2 = local_158;

      uVar3 = local_168;

      _objc_retainAutorelease();

      lVar4 = _objc_msgSend_bytes(uVar2,local_238);

      _objc_msgSend_appendBytes_length_

                (uVar3,local_238,lVar4 + (ulong)*local_180,local_180[2] + 0xc);

    }

    _wcm_yy_png_info_release(local_160);

    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_168);

    local_e4 = 1;

LAB_000997f8:

    _objc_storeStrong(&local_168,0);

  }

  _objc_storeStrong(&local_158,0);

LAB_00099818:

  _objc_storeStrong(&local_c0);

  _objc_storeStrong(&local_b8,0);

  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar6 = _objc_autoreleaseReturnValue(0,local_a0);

  return IVar6;

}






// ---- [d2] _encodeWebP @0x99d04 ----
// CALLERS: encode, _objc_msgSend$_encodeWebP
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageEncoder::_encodeWebP(ID param_1,SEL param_2)



{

  return 0;

}






// ---- [d3] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d3] _CGSizeMake @0x7b08 ----
// CALLERS: layoutIndicatorContent, tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, layoutSubviews, viewDidLoad, webView:didFinishNavigation:, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, ___39-[WCMFeedController_galleryPlaceholder]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGSizeMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d3] bytes @0x2ef14 ----
// CALLERS: tableView:cellForRowAtIndexPath:, ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke, _Digest, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _encodeAPNG, _objc_msgSend$bytes
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMCacheController::bytes(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytes);

}






// ---- [d3] _WCMYYCGColorSpaceGetDeviceRGB @0x90ec0 ----
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






// ---- [d3] _WCMYYCGImageCreateEncodedData @0x92da4 ----
// CALLERS: _encodeAPNG
// CALLEES: _WCMYYImageTypeToUTType


long _WCMYYCGImageCreateEncodedData(double param_1,long param_2,long param_3)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 local_98;

  double local_80;

  double local_78;

  undefined8 local_68;

  long local_60;

  long local_58;

  long local_50;

  double local_48;

  long local_40;

  long local_38;

  long local_30;

  undefined8 local_28;

  undefined8 local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_40 = param_3;

  local_38 = param_2;

  if (param_2 == 0) {

    local_30 = 0;

    local_48 = param_1;

  }

  else {

    if (0.0 <= param_1) {

      local_80 = param_1;

      if (1.0 < param_1) {

        local_80 = 1.0;

      }

      local_78 = local_80;

    }

    else {

      local_78 = 0.0;

    }

    local_48 = local_78;

    if (param_3 + -9 == 0) {

      local_30 = 0;

    }

    else {

      local_50 = _WCMYYImageTypeToUTType(param_3 + -9,param_3);

      if (local_50 == 0) {

        local_30 = 0;

      }

      else {

        uVar1 = _CFAllocatorGetDefault();

        local_58 = _CFDataCreateMutable(uVar1,0);

        if (local_58 == 0) {

          local_30 = 0;

        }

        else {

          local_60 = _CGImageDestinationCreateWithData(local_58,local_50,1,0);

          if (local_60 == 0) {

            _CFRelease(local_58);

            local_30 = 0;

          }

          else {

            local_28 = *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_00110288;

            _objc_msgSend_numberWithDouble_(local_48,&_OBJC_CLASS___NSNumber,local_98);

            uVar1 = _objc_retainAutoreleasedReturnValue();

            local_20 = uVar1;

            _objc_msgSend_dictionaryWithObjects_forKeys_count_

                      (&_OBJC_CLASS___NSDictionary,local_98,&local_20,&local_28,1);

            local_68 = _objc_retainAutoreleasedReturnValue();

            (*(code *)PTR__objc_release_00110458)(uVar1);

            _CGImageDestinationAddImage(local_60,local_38,local_68);

            uVar2 = _CGImageDestinationFinalize(local_60);

            if ((uVar2 & 1) == 0) {

              _CFRelease(local_58);

              _CFRelease(local_60);

              local_30 = 0;

            }

            else {

              _CFRelease(local_60);

              lVar3 = _CFDataGetLength(local_58);

              if (lVar3 == 0) {

                _CFRelease(local_58);

                local_30 = 0;

              }

              else {

                local_30 = local_58;

              }

            }

            _objc_storeStrong(&local_68,0);

          }

        }

      }

    }

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return local_30;

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






// ---- [d3] _wcm_yy_swap_endian_uint32 @0x998a0 ----
// CALLERS: _wcm_yy_png_info_create, _wcm_yy_png_copy_frame_data_at_index, _encodeAPNG, _wcm_yy_png_chunk_fcTL_write, _wcm_yy_png_chunk_IHDR_read, _wcm_yy_png_chunk_fcTL_read, _wcm_yy_png_chunk_IHDR_write
// CALLEES: (叶)


uint _wcm_yy_swap_endian_uint32(uint param_1)



{

  return (param_1 & 0xff00) << 8 | param_1 << 0x18 | (param_1 & 0xff0000) >> 8 | param_1 >> 0x18;

}






// ---- [d3] _wcm_yy_png_delay_wcm_to_fraction @0x998dc ----
// CALLERS: _encodeAPNG
// CALLEES: (叶)


void _wcm_yy_png_delay_wcm_to_fraction(double param_1,undefined2 *param_2,undefined2 *param_3)



{

  long *plVar1;

  undefined8 *puVar2;

  undefined8 *puVar3;

  undefined8 *puVar4;

  long alStack_c0 [2];

  undefined8 *local_b0;

  long local_a8;

  undefined8 *local_a0;

  long local_98;

  undefined8 *local_90;

  undefined8 *local_88;

  long local_80;

  long local_78;

  long local_70;

  long local_68;

  undefined1 *local_48;

  double local_40;

  long local_38;

  undefined2 *local_30;

  undefined2 *local_28;

  double local_20;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_30 = param_3;

  local_28 = param_2;

  local_20 = param_1;

  if (param_1 < 255.0) {

    if (0.00392156862745098 < param_1) {

      local_38 = 10;

      local_40 = 0.00196078431372549;

      alStack_c0[1] = 0x50;

      local_48 = (undefined1 *)alStack_c0;

      (*(code *)PTR____chkstk_darwin_00110500)();

      puVar2 = (undefined8 *)((long)alStack_c0 - (alStack_c0[1] + 0xfU & 0xfffffffffffffff0));

      local_a8 = local_38 << 3;

      local_b0 = puVar2;

      local_90 = puVar2;

      (*(code *)PTR____chkstk_darwin_00110500)();

      puVar2 = (undefined8 *)((long)puVar2 - (local_a8 + 0xfU & 0xfffffffffffffff0));

      local_98 = local_38 << 3;

      local_a0 = puVar2;

      local_88 = puVar2;

      (*(code *)PTR____chkstk_darwin_00110500)();

      puVar4 = local_88;

      puVar3 = local_90;

      local_80 = (long)puVar2 - (local_98 + 0xfU & 0xfffffffffffffff0);

      local_70 = 0;

      local_78 = 0;

      *local_90 = 0;

      *puVar4 = 1;

      puVar3[1] = 1;

      puVar4[1] = 0;

      for (local_68 = 2; local_68 < local_38; local_68 = local_68 + 1) {

        *(long *)(local_80 + local_68 * 8) = (long)(double)(long)(double)(long)local_20;

        plVar1 = local_b0 + local_68;

        *plVar1 = *(long *)(local_80 + local_68 * 8) * plVar1[-1] + plVar1[-2];

        plVar1 = local_a0 + local_68;

        *plVar1 = *(long *)(local_80 + local_68 * 8) * plVar1[-1] + plVar1[-2];

        if ((0xff < (long)local_b0[local_68]) || (0xff < (long)local_a0[local_68])) break;

        local_70 = local_b0[local_68];

        local_78 = local_a0[local_68];

        if (ABS(local_20 - (double)*(long *)(local_80 + local_68 * 8)) < local_40) break;

        local_20 = 1.0 / (local_20 - (double)*(long *)(local_80 + local_68 * 8));

      }

      if ((local_70 == 0) || (local_78 == 0)) {

        *local_28 = 1;

        *local_30 = 100;

      }

      else {

        *local_28 = (short)local_70;

        *local_30 = (short)local_78;

      }

    }

    else {

      *param_2 = 1;

      *param_3 = 0xff;

    }

  }

  else {

    *param_2 = 0xff;

    *param_3 = 1;

  }

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 == 0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

}






// ---- [d3] _wcm_yy_png_chunk_fcTL_write @0x99c38 ----
// CALLERS: _encodeAPNG
// CALLEES: _wcm_yy_swap_endian_uint32, _wcm_yy_swap_endian_uint16


void _wcm_yy_png_chunk_fcTL_write(undefined4 *param_1,undefined4 *param_2)



{

  undefined2 uVar1;

  undefined4 uVar2;

  

  uVar2 = _wcm_yy_swap_endian_uint32(*param_1);

  *param_2 = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_1[1]);

  param_2[1] = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_1[2]);

  param_2[2] = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_1[3]);

  param_2[3] = uVar2;

  uVar2 = _wcm_yy_swap_endian_uint32(param_1[4]);

  param_2[4] = uVar2;

  uVar1 = _wcm_yy_swap_endian_uint16(*(undefined2 *)(param_1 + 5));

  *(undefined2 *)(param_2 + 5) = uVar1;

  uVar1 = _wcm_yy_swap_endian_uint16(*(undefined2 *)((long)param_1 + 0x16));

  *(undefined2 *)((long)param_2 + 0x16) = uVar1;

  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 6);

  *(undefined1 *)((long)param_2 + 0x19) = *(undefined1 *)((long)param_1 + 0x19);

  return;

}






// ---- [d4] _WCMYYImageTypeToUTType @0x92868 ----
// CALLERS: _WCMYYCGImageCreateEncodedData, _newImageDestination:imageCount:
// CALLEES: (叶)


undefined8 _WCMYYImageTypeToUTType(long param_1)



{

  undefined8 local_8;

  

  if (param_1 == 1) {

    local_8 = *(undefined8 *)PTR__kUTTypeJPEG_00110920;

  }

  else if (param_1 == 2) {

    local_8 = *(undefined8 *)PTR__kUTTypeJPEG2000_00110928;

  }

  else if (param_1 == 3) {

    local_8 = *(undefined8 *)PTR__kUTTypeTIFF_00110938;

  }

  else if (param_1 == 4) {

    local_8 = *(undefined8 *)PTR__kUTTypeBMP_00110908;

  }

  else if (param_1 == 5) {

    local_8 = *(undefined8 *)PTR__kUTTypeICO_00110918;

  }

  else if (param_1 == 6) {

    local_8 = *(undefined8 *)PTR__kUTTypeAppleICNS_00110900;

  }

  else if (param_1 == 7) {

    local_8 = *(undefined8 *)PTR__kUTTypeGIF_00110910;

  }

  else if (param_1 == 8) {

    local_8 = *(undefined8 *)PTR__kUTTypePNG_00110930;

  }

  else {

    local_8 = 0;

  }

  return local_8;

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






// ---- [d4] _wcm_yy_swap_endian_uint16 @0x9b760 ----
// CALLERS: _wcm_yy_png_chunk_fcTL_write, _wcm_yy_png_chunk_fcTL_read
// CALLEES: (叶)


uint _wcm_yy_swap_endian_uint16(ushort param_1)



{

  undefined1 local_2;

  

  local_2 = (byte)param_1;

  return (int)(param_1 & 0xff00) >> 8 | (uint)local_2 << 8;

}





